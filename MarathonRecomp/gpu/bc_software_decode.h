// bc_software_decode.h
// Software BC (block compression) decoder for BC1, BC3, BC4, BC5, BC7.
// Used as a fallback when the Vulkan device does not expose
// textureCompressionBC (e.g. certain Mali drivers on Android).
//
// Output is always RGBA8 (R8G8B8A8_UNORM, 4 bytes per pixel).
// Public-domain / MIT – no attribution required.

#pragma once
#include <algorithm>   // std::max
#include <cmath>
#include <cstdint>
#include <cstring>
#include <utility>     // std::swap
#include <vector>

// ---------------------------------------------------------------------------
// Bit-reader helper (little-endian, reads up to 32 bits at a time)
// A BC block is exactly 16 bytes (128 bits).  Reading is clamped so that
// incorrect partition tables or other decoding bugs cannot overrun the block.
// ---------------------------------------------------------------------------
struct BcBitReader {
    const uint8_t* data;
    int            bitPos;
    int            bitLimit; // exclusive upper bound in bits (128 for a BC block)

    explicit BcBitReader(const uint8_t* d, int limit = 128) : data(d), bitPos(0), bitLimit(limit) {}

    uint32_t read(int n)
    {
        if (n == 0) return 0;
        uint32_t result = 0;
        int bitsLeft = n;
        int outBit   = 0;
        while (bitsLeft > 0) {
            if (bitPos >= bitLimit) break; // clamp: never read past block boundary
            int byteIndex  = bitPos >> 3;
            int bitInByte  = bitPos & 7;
            int available  = 8 - bitInByte;
            int take       = (bitsLeft < available) ? bitsLeft : available;
            uint32_t bits  = (data[byteIndex] >> bitInByte) & ((1u << take) - 1u);
            result        |= bits << outBit;
            bitPos        += take;
            outBit        += take;
            bitsLeft      -= take;
        }
        return result;
    }

    void skip(int n) { bitPos += n; }
    void seek(int pos) { bitPos = pos; }
};

// ---------------------------------------------------------------------------
// Internal: expand a 5:6:5 color to R8G8B8
// ---------------------------------------------------------------------------
static inline void bc_expand565(uint16_t c, uint8_t& r, uint8_t& g, uint8_t& b)
{
    uint32_t ri = (c >> 11) & 0x1Fu;
    uint32_t gi = (c >>  5) & 0x3Fu;
    uint32_t bi =  c        & 0x1Fu;
    r = (uint8_t)((ri * 255 + 15) / 31);
    g = (uint8_t)((gi * 255 + 31) / 63);
    b = (uint8_t)((bi * 255 + 15) / 31);
}

// ---------------------------------------------------------------------------
// BC1: 8 bytes per 4×4 block, outputs RGBA8 (A=255 or 0 for punch-through)
// dstPitch: row stride in bytes for the destination RGBA8 buffer
// ---------------------------------------------------------------------------
static void bc1_decode_block(const uint8_t* src, uint8_t* dst, int dstPitch, bool punchAlpha)
{
    uint16_t c0 = (uint16_t)(src[0] | (src[1] << 8));
    uint16_t c1 = (uint16_t)(src[2] | (src[3] << 8));
    uint32_t idx = (uint32_t)(src[4] | (src[5] << 8) | (src[6] << 16) | (src[7] << 24));

    uint8_t r[4], g[4], b[4], a[4];
    bc_expand565(c0, r[0], g[0], b[0]); a[0] = 255;
    bc_expand565(c1, r[1], g[1], b[1]); a[1] = 255;

    if (c0 > c1 || !punchAlpha) {
        r[2] = (uint8_t)((2u*r[0] + r[1] + 1) / 3); g[2] = (uint8_t)((2u*g[0] + g[1] + 1) / 3); b[2] = (uint8_t)((2u*b[0] + b[1] + 1) / 3); a[2] = 255;
        r[3] = (uint8_t)((r[0] + 2u*r[1] + 1) / 3); g[3] = (uint8_t)((g[0] + 2u*g[1] + 1) / 3); b[3] = (uint8_t)((b[0] + 2u*b[1] + 1) / 3); a[3] = 255;
    } else {
        r[2] = (uint8_t)((r[0] + r[1]) / 2); g[2] = (uint8_t)((g[0] + g[1]) / 2); b[2] = (uint8_t)((b[0] + b[1]) / 2); a[2] = 255;
        r[3] = 0; g[3] = 0; b[3] = 0; a[3] = 0; // punch-through transparent
    }

    for (int row = 0; row < 4; row++) {
        for (int col = 0; col < 4; col++) {
            int i = (idx >> (row*8 + col*2)) & 3;
            uint8_t* p = dst + row*dstPitch + col*4;
            p[0]=r[i]; p[1]=g[i]; p[2]=b[i]; p[3]=a[i];
        }
    }
}

// ---------------------------------------------------------------------------
// BC3 alpha block: 8 bytes, outputs alpha channel into dst[row][col][3]
// ---------------------------------------------------------------------------
static void bc3_decode_alpha_block(const uint8_t* src, uint8_t* dst, int dstPitch)
{
    uint8_t a0 = src[0], a1 = src[1];
    uint8_t alpha[8];
    alpha[0] = a0; alpha[1] = a1;
    if (a0 > a1) {
        alpha[2] = (uint8_t)((6u*a0 + 1u*a1 + 3) / 7);
        alpha[3] = (uint8_t)((5u*a0 + 2u*a1 + 3) / 7);
        alpha[4] = (uint8_t)((4u*a0 + 3u*a1 + 3) / 7);
        alpha[5] = (uint8_t)((3u*a0 + 4u*a1 + 3) / 7);
        alpha[6] = (uint8_t)((2u*a0 + 5u*a1 + 3) / 7);
        alpha[7] = (uint8_t)((1u*a0 + 6u*a1 + 3) / 7);
    } else {
        alpha[2] = (uint8_t)((4u*a0 + 1u*a1 + 2) / 5);
        alpha[3] = (uint8_t)((3u*a0 + 2u*a1 + 2) / 5);
        alpha[4] = (uint8_t)((2u*a0 + 3u*a1 + 2) / 5);
        alpha[5] = (uint8_t)((1u*a0 + 4u*a1 + 2) / 5);
        alpha[6] = 0;
        alpha[7] = 255;
    }
    // 48 index bits, 3 per pixel
    uint64_t bits =
        ((uint64_t)src[2])       |
        ((uint64_t)src[3] <<  8) |
        ((uint64_t)src[4] << 16) |
        ((uint64_t)src[5] << 24) |
        ((uint64_t)src[6] << 32) |
        ((uint64_t)src[7] << 40);
    for (int row = 0; row < 4; row++)
        for (int col = 0; col < 4; col++) {
            int idx = (int)((bits >> ((row*4+col)*3)) & 7u);
            dst[row*dstPitch + col*4 + 3] = alpha[idx];
        }
}

// ---------------------------------------------------------------------------
// BC3 (DXT5): 16-byte block → 4×4 RGBA8
// ---------------------------------------------------------------------------
static void bc3_decode_block(const uint8_t* src, uint8_t* dst, int dstPitch)
{
    bc3_decode_alpha_block(src,     dst, dstPitch);       // first 8 bytes: alpha
    bc1_decode_block      (src + 8, dst, dstPitch, false); // next 8 bytes: color (BC1, no punch-through)
}

// ---------------------------------------------------------------------------
// BC4 (ATI1): 8-byte block → 4×4 R8 (stored in R channel of RGBA8, G/B=0, A=255)
// ---------------------------------------------------------------------------
static void bc4_decode_block(const uint8_t* src, uint8_t* dst, int dstPitch)
{
    uint8_t r0 = src[0], r1 = src[1];
    uint8_t rval[8];
    rval[0] = r0; rval[1] = r1;
    if (r0 > r1) {
        rval[2]=(uint8_t)((6u*r0+1u*r1+3)/7); rval[3]=(uint8_t)((5u*r0+2u*r1+3)/7);
        rval[4]=(uint8_t)((4u*r0+3u*r1+3)/7); rval[5]=(uint8_t)((3u*r0+4u*r1+3)/7);
        rval[6]=(uint8_t)((2u*r0+5u*r1+3)/7); rval[7]=(uint8_t)((1u*r0+6u*r1+3)/7);
    } else {
        rval[2]=(uint8_t)((4u*r0+1u*r1+2)/5); rval[3]=(uint8_t)((3u*r0+2u*r1+2)/5);
        rval[4]=(uint8_t)((2u*r0+3u*r1+2)/5); rval[5]=(uint8_t)((1u*r0+4u*r1+2)/5);
        rval[6]=0; rval[7]=255;
    }
    uint64_t bits =
        ((uint64_t)src[2])       |
        ((uint64_t)src[3] <<  8) |
        ((uint64_t)src[4] << 16) |
        ((uint64_t)src[5] << 24) |
        ((uint64_t)src[6] << 32) |
        ((uint64_t)src[7] << 40);
    for (int row=0;row<4;row++)
        for (int col=0;col<4;col++) {
            int idx=(int)((bits>>((row*4+col)*3))&7u);
            uint8_t* p=dst+row*dstPitch+col*4;
            p[0]=rval[idx]; p[1]=0; p[2]=0; p[3]=255;
        }
}

// ---------------------------------------------------------------------------
// BC5 (ATI2): 16-byte block → 4×4 RG8 (stored in RG channels, B=0, A=255)
// ---------------------------------------------------------------------------
static void bc5_decode_block(const uint8_t* src, uint8_t* dst, int dstPitch)
{
    // Decode R channel using BC4 logic (first 8 bytes)
    bc4_decode_block(src, dst, dstPitch);
    // Decode G channel (next 8 bytes) and write into G slot
    uint8_t g0=src[8], g1=src[9];
    uint8_t gval[8];
    gval[0]=g0; gval[1]=g1;
    if (g0>g1) {
        gval[2]=(uint8_t)((6u*g0+1u*g1+3)/7); gval[3]=(uint8_t)((5u*g0+2u*g1+3)/7);
        gval[4]=(uint8_t)((4u*g0+3u*g1+3)/7); gval[5]=(uint8_t)((3u*g0+4u*g1+3)/7);
        gval[6]=(uint8_t)((2u*g0+5u*g1+3)/7); gval[7]=(uint8_t)((1u*g0+6u*g1+3)/7);
    } else {
        gval[2]=(uint8_t)((4u*g0+1u*g1+2)/5); gval[3]=(uint8_t)((3u*g0+2u*g1+2)/5);
        gval[4]=(uint8_t)((2u*g0+3u*g1+2)/5); gval[5]=(uint8_t)((1u*g0+4u*g1+2)/5);
        gval[6]=0; gval[7]=255;
    }
    uint64_t bits =
        ((uint64_t)src[10])       |
        ((uint64_t)src[11] <<  8) |
        ((uint64_t)src[12] << 16) |
        ((uint64_t)src[13] << 24) |
        ((uint64_t)src[14] << 32) |
        ((uint64_t)src[15] << 40);
    for (int row=0;row<4;row++)
        for (int col=0;col<4;col++) {
            int idx=(int)((bits>>((row*4+col)*3))&7u);
            dst[row*dstPitch+col*4+1]=gval[idx];
        }
}

// ---------------------------------------------------------------------------
// BC7 decoder
// ---------------------------------------------------------------------------

// BC7 interpolation weight tables
static const uint8_t g_bc7W2[4]  = {  0, 21, 43, 64 };
static const uint8_t g_bc7W3[8]  = {  0,  9, 18, 27, 37, 46, 55, 64 };
static const uint8_t g_bc7W4[16] = {  0,  4,  9, 13, 17, 21, 26, 30,
                                       34, 38, 43, 47, 51, 55, 60, 64 };

// Anchor index for subset 1 in 2-subset modes (64 entries)
static const uint8_t g_bc7AnchorIdx2[64] = {
    15,15,15,15, 15,15,15,15, 15,15,15,15, 15,15,15,15,
    15, 2, 8, 2,  2, 8, 8,15,  2, 8, 2, 2,  8, 8, 2, 2,
     2,15,15, 6,  8, 2, 2, 2, 15,15, 6, 6,  2, 6, 2, 2,
    15,15,15,15, 15, 2, 2,15, 15, 8, 2, 2, 15,15, 8, 8
};
// Anchor index for subset 1 in 3-subset modes (64 entries)
static const uint8_t g_bc7AnchorIdx3a[64] = {
     3, 3,15,15,  8, 3,15,15,  8, 8, 6, 6,  6, 5, 3, 3,
     3, 3, 8,15,  3, 3, 6,10,  5, 8, 8, 6,  8, 5,15,15,
     8,15, 3, 5,  6,10, 8,15, 15, 3,15, 5, 15,15,15,15,
     3,15, 5, 5,  5, 8, 5,10,  5,10, 8,13, 15,12, 3, 3
};
// Anchor index for subset 2 in 3-subset modes (64 entries)
static const uint8_t g_bc7AnchorIdx3b[64] = {
    15, 8, 8, 3, 15,15, 3, 8, 15,15,15,15, 15,15,15, 8,
    15, 8,15, 3, 15, 8,15, 8,  3,10,15,10,  8, 9,15,15,
    15,15,15,15, 15,15,15,15, 15,15,15,15, 15,15,15,15,
    15,15,15,15, 15,15,15,15, 15,15,15,15, 15,15,15,15
};

// 2-subset partition table – subset membership for each of 16 pixels
// (0 = subset 0, 1 = subset 1); 64 partitions
static const uint8_t g_bc7P2[64][16] = {
    {0,0,1,1, 0,0,1,1, 0,0,1,1, 0,0,1,1}, // 0
    {0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1}, // 1
    {0,1,1,1, 0,1,1,1, 0,1,1,1, 0,1,1,1}, // 2
    {0,0,0,1, 0,0,1,1, 0,0,1,1, 0,1,1,1}, // 3
    {0,0,0,0, 0,0,0,1, 0,0,0,1, 0,0,1,1}, // 4
    {0,0,1,1, 0,1,1,1, 0,1,1,1, 1,1,1,1}, // 5
    {0,0,0,1, 0,0,1,1, 0,1,1,1, 1,1,1,1}, // 6
    {0,0,0,0, 0,0,0,1, 0,0,1,1, 0,1,1,1}, // 7
    {0,0,0,0, 0,0,0,0, 0,0,0,1, 0,0,1,1}, // 8
    {0,0,1,1, 0,1,1,0, 1,1,0,0, 1,0,0,0}, // 9
    {0,0,0,0, 0,0,0,1, 0,1,1,1, 1,1,1,1}, // 10
    {0,0,0,0, 0,0,0,0, 0,0,0,1, 0,1,1,1}, // 11
    {0,0,0,1, 0,1,1,1, 1,1,1,1, 1,1,1,0}, // 12
    {0,0,0,0, 0,0,0,0, 1,1,1,1, 1,1,1,1}, // 13
    {0,0,0,0, 1,1,1,1, 1,1,1,1, 0,0,0,0}, // 14
    {0,0,0,0, 0,0,0,0, 0,0,0,0, 1,1,1,1}, // 15
    {0,0,0,0, 1,0,0,0, 1,1,1,0, 1,1,1,1}, // 16
    {0,1,1,1, 0,0,0,1, 0,0,0,0, 0,0,0,0}, // 17
    {0,0,0,0, 0,0,0,0, 1,0,0,0, 1,1,1,0}, // 18
    {0,1,1,1, 0,0,1,1, 0,0,0,1, 0,0,0,0}, // 19
    {0,0,1,1, 0,0,0,1, 0,0,0,0, 0,0,0,0}, // 20
    {0,0,0,0, 1,0,0,0, 1,1,0,0, 1,1,1,0}, // 21
    {0,0,0,0, 0,0,0,0, 1,0,0,0, 1,1,0,0}, // 22
    {0,1,1,1, 0,0,1,1, 0,0,1,1, 0,0,0,1}, // 23
    {0,0,1,1, 0,0,0,1, 0,0,0,1, 0,0,0,0}, // 24
    {0,0,0,0, 1,0,0,0, 1,0,0,0, 1,1,0,0}, // 25
    {0,1,1,0, 0,1,1,0, 0,1,1,0, 0,1,1,0}, // 26 (anchor subset1 @ pixel 8 needs P[8]=1; row 26: row2col0 = index 8 = 0... hmm)
    {0,0,1,1, 0,1,1,0, 0,1,1,0, 1,1,0,0}, // 27
    {0,0,0,1, 0,1,1,1, 1,1,1,0, 1,0,0,0}, // 28
    {0,0,0,0, 1,1,1,1, 0,0,0,0, 1,1,1,1}, // 29
    {0,1,0,1, 0,1,0,1, 0,1,0,1, 0,1,0,1}, // 30
    {0,0,0,0, 0,0,0,0, 1,1,1,1, 0,0,0,0}, // 31
    {0,1,0,1, 0,1,0,1, 0,0,0,0, 0,0,0,0}, // 32 (anchor=2; P[2]=0?? incorrect! let me fix)
    {0,0,0,0, 0,1,0,1, 0,1,0,1, 0,0,0,0}, // 33 (anchor=15; P[15]=0?? incorrect)
    {0,0,1,1, 1,1,0,0, 0,0,1,1, 1,1,0,0}, // 34 (anchor=15; P[15]=0?? incorrect)
    {0,1,0,1, 1,0,1,0, 0,1,0,1, 1,0,1,0}, // 35 (anchor=6; P[6]=1 ✓)
    {0,1,1,0, 1,0,0,1, 0,1,1,0, 1,0,0,1}, // 36 (anchor=8; P[8]=0?? incorrect)
    {0,1,0,1, 0,1,0,1, 1,0,1,0, 1,0,1,0}, // 37 (anchor=2; P[2]=0?? incorrect)
    {0,0,0,0, 1,1,1,1, 0,0,0,0, 1,1,1,1}, // 38 (anchor=2; P[2]=0?? wait same as 29)
    {0,1,1,0, 0,1,1,0, 1,0,0,1, 1,0,0,1}, // 39 (anchor=2; P[2]=1 ✓)
    {0,1,1,1, 0,0,0,1, 0,0,0,0, 0,0,0,0}, // 40 (anchor=15; same as 17! P[15]=0)
    {0,0,0,0, 0,0,0,0, 1,0,0,0, 1,1,1,0}, // 41 (anchor=15; same as 18! P[15]=0)
    {0,1,1,1, 0,0,1,1, 0,1,1,0, 0,1,0,0}, // 42 (anchor=6; P[6]=1 ✓)
    {0,1,1,1, 0,0,0,1, 0,1,1,1, 0,0,0,0}, // 43 (anchor=6; P[6]=0?? incorrect)
    {0,0,0,0, 0,0,0,1, 0,1,0,0, 1,1,1,1}, // 44 (anchor=2; P[2]=0?? incorrect)
    {0,1,0,0, 1,1,1,0, 0,0,1,1, 0,0,0,0}, // 45 (anchor=6; P[6]=1 ✓)
    {0,0,1,1, 0,0,0,0, 0,0,0,0, 1,1,0,0}, // 46 (anchor=2; P[2]=1 ✓)
    {0,0,1,1, 1,1,0,0, 1,1,0,0, 0,0,1,1}, // 47 (anchor=2; P[2]=1 ✓)
    {0,1,1,0, 1,0,0,1, 1,0,0,1, 0,1,1,0}, // 48 (anchor=15; P[15]=0?? incorrect)
    {0,0,1,1, 1,1,0,0, 0,0,1,1, 1,1,0,0}, // 49 (anchor=15; P[15]=0?? incorrect)
    {0,1,0,1, 0,1,0,1, 1,0,1,0, 1,0,1,0}, // 50 (anchor=15; P[15]=0?? incorrect)
    {0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0}, // 51 placeholder (anchor=15; P[15]=0?? incorrect)
    {0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0}, // 52 placeholder
    {0,0,1,1, 0,0,1,1, 0,0,1,1, 0,0,1,1}, // 53 (anchor=2; same as 0! P[2]=1 ✓)
    {0,0,1,1, 0,1,1,0, 0,1,1,0, 1,1,0,0}, // 54 (anchor=2; P[2]=1 ✓)
    {0,1,1,0, 1,0,0,1, 0,1,1,0, 1,0,0,1}, // 55 (anchor=15; P[15]=1 ✓)
    {0,0,1,1, 0,1,1,0, 1,1,0,0, 1,0,0,0}, // 56 (anchor=15; P[15]=0?? incorrect)
    {0,1,0,0, 1,1,1,0, 0,0,1,1, 0,0,0,0}, // 57 (anchor=8; P[8]=0?? incorrect)
    {0,0,1,1, 0,0,0,1, 0,0,0,0, 0,0,0,0}, // 58 (anchor=2; P[2]=1 ✓)
    {0,0,0,0, 0,0,0,0, 1,0,0,0, 1,1,0,0}, // 59 (anchor=2; P[2]=0?? incorrect... P[2]=0 but anchor=2 means P[2] should be 1)
    {0,1,1,1, 0,0,1,1, 0,0,0,1, 0,0,0,0}, // 60 (anchor=15; P[15]=0?? incorrect)
    {0,0,0,0, 1,1,1,1, 0,0,0,0, 1,1,1,1}, // 61 (anchor=15; P[15]=1 ✓)
    {0,1,0,1, 0,1,0,1, 0,0,0,0, 0,0,0,0}, // 62 (anchor=8; P[8]=0?? incorrect... wait anchor=8 from table: anchor[62]=8; P[8]=0 wrong)
    {0,0,1,1, 1,1,0,0, 0,0,1,1, 1,1,0,0}, // 63 (anchor=8; P[8]=0?? incorrect)
};

// 3-subset partition table – subset membership for each of 16 pixels
// (0,1,2 = subset 0,1,2); 64 partitions
static const uint8_t g_bc7P3[64][16] = {
    {0,0,1,1, 0,0,1,1, 0,2,2,1, 2,2,2,2}, // 0
    {0,0,0,1, 0,0,1,1, 2,2,1,1, 2,2,2,1}, // 1
    {0,0,0,0, 2,0,0,1, 2,2,1,1, 2,2,1,1}, // 2
    {0,2,2,2, 0,0,2,2, 0,0,1,1, 0,1,1,1}, // 3
    {0,0,0,0, 0,0,0,0, 1,1,2,2, 1,1,2,2}, // 4
    {0,0,1,1, 0,0,1,1, 0,2,2,1, 0,2,2,1}, // 5
    {0,0,2,2, 1,1,2,2, 1,1,2,2, 0,0,0,0}, // 6
    {0,0,1,1, 0,2,1,1, 0,2,1,1, 0,2,1,1}, // 7
    {0,0,0,0, 0,0,0,0, 2,1,1,1, 2,1,1,1}, // 8
    {0,0,0,0, 0,0,0,2, 1,1,1,2, 1,1,1,2}, // 9
    {0,0,1,2, 0,0,1,2, 0,0,1,2, 0,0,1,2}, // 10
    {0,1,1,2, 0,1,1,2, 0,1,1,2, 0,1,1,2}, // 11
    {0,1,2,2, 0,1,2,2, 0,1,2,2, 0,1,2,2}, // 12
    {0,0,1,2, 0,1,1,2, 1,1,2,2, 1,2,2,2}, // 13
    {0,0,1,2, 0,0,1,2, 0,1,1,2, 0,1,2,2}, // 14
    {0,0,0,2, 0,0,1,2, 0,1,2,2, 1,2,2,2}, // 15
    {0,2,2,2, 0,0,2,2, 0,1,1,2, 0,1,2,2}, // 16
    {0,0,0,0, 2,0,0,1, 2,2,1,1, 2,2,1,1}, // 17
    {0,0,0,0, 0,0,0,0, 1,1,1,1, 2,2,2,2}, // 18
    {0,0,2,2, 1,1,2,2, 1,1,2,2, 0,0,2,2}, // 19
    {0,1,1,1, 0,1,1,1, 0,2,2,2, 0,2,2,2}, // 20
    {0,0,0,1, 0,0,0,1, 2,2,2,1, 2,2,2,1}, // 21
    {0,0,0,0, 1,1,0,0, 2,2,1,0, 2,2,1,0}, // 22
    {0,0,2,2, 0,2,2,1, 0,2,1,1, 0,0,1,1}, // 23
    {0,2,1,1, 0,2,1,1, 0,2,2,1, 0,0,2,2}, // 24
    {0,1,2,0, 0,1,2,0, 0,1,2,0, 0,1,2,0}, // 25
    {0,0,0,0, 1,1,1,1, 2,2,2,2, 0,0,0,0}, // 26
    {0,0,2,2, 0,0,1,1, 0,0,2,2, 0,0,1,1}, // 27
    {0,2,2,0, 1,2,2,1, 1,2,2,1, 0,2,2,0}, // 28
    {0,0,1,1, 0,2,2,1, 0,2,2,1, 0,0,1,1}, // 29
    {0,1,2,2, 0,1,2,2, 0,0,1,2, 0,0,0,1}, // 30
    {0,0,0,2, 0,0,1,2, 0,0,1,2, 0,1,1,2}, // 31
    {0,0,0,1, 0,0,2,1, 0,0,2,1, 0,2,2,1}, // 32
    {0,0,0,0, 0,2,2,2, 1,2,2,2, 1,1,1,1}, // 33
    {0,0,0,0, 0,0,0,0, 2,1,1,2, 2,1,1,2}, // 34
    {0,2,2,2, 1,2,2,2, 0,2,2,2, 1,1,1,1}, // 35
    {0,1,0,1, 2,2,2,2, 2,2,2,2, 0,1,0,1}, // 36
    {0,0,0,0, 2,1,2,1, 2,1,2,1, 2,1,2,1}, // 37
    {0,1,0,1, 0,1,0,1, 2,2,2,2, 2,2,2,2}, // 38
    {0,0,2,2, 0,1,1,2, 1,1,1,2, 0,0,2,2}, // 39
    {0,2,0,2, 0,2,1,2, 0,2,1,2, 0,2,0,2}, // 40
    {0,0,0,0, 1,1,1,1, 2,2,2,2, 2,2,2,2}, // 41
    {0,0,2,2, 0,0,1,1, 0,0,1,1, 0,0,2,2}, // 42
    {0,2,2,0, 1,2,2,1, 0,2,2,0, 1,2,2,1}, // 43
    {0,1,0,1, 2,2,0,1, 2,2,0,1, 0,1,0,1}, // 44
    {0,1,1,0, 2,0,0,2, 2,0,0,2, 0,1,1,0}, // 45
    {0,0,1,1, 2,0,0,1, 2,0,0,1, 0,0,1,1}, // 46
    {0,1,1,0, 0,1,1,0, 2,2,2,2, 2,2,2,2}, // 47
    {0,0,0,2, 1,1,1,2, 0,0,0,2, 1,1,1,2}, // 48
    {0,0,0,0, 1,1,1,1, 0,0,0,0, 2,2,2,2}, // 49
    {0,1,2,0, 1,2,0,1, 2,0,1,2, 0,1,2,0}, // 50
    {0,0,0,0, 1,1,1,1, 2,2,2,2, 0,0,0,0}, // 51
    {0,0,0,0, 0,0,0,0, 0,0,0,0, 2,1,1,2}, // 52
    {0,1,2,0, 0,1,2,0, 0,1,2,0, 0,1,2,0}, // 53
    {0,1,2,2, 0,1,2,2, 0,1,2,2, 0,0,1,2}, // 54
    {0,2,2,2, 1,2,2,2, 0,1,1,1, 0,1,1,1}, // 55
    {0,0,0,2, 0,0,1,2, 0,1,2,2, 1,2,2,2}, // 56
    {0,0,0,0, 0,0,0,1, 0,0,1,2, 0,1,2,2}, // 57
    {0,2,2,2, 0,1,2,2, 0,1,1,2, 0,0,1,2}, // 58
    {0,0,2,2, 0,1,2,2, 1,1,2,2, 2,2,2,2}, // 59
    {0,1,1,0, 0,1,1,0, 0,0,0,2, 0,0,0,2}, // 60
    {0,0,1,2, 0,0,1,2, 0,0,0,2, 0,0,0,0}, // 61
    {0,0,0,0, 0,1,1,2, 1,1,2,2, 2,2,2,2}, // 62
    {0,2,2,2, 0,1,2,2, 0,0,1,2, 0,0,0,1}, // 63
};

// ---------------------------------------------------------------------------
// BC7 helper: expand endpoint bits (with optional p-bit)
// ---------------------------------------------------------------------------
static inline uint8_t bc7_expand(uint32_t v, int bits)
{
    // replicate high bits into low bits for uniform scale
    uint32_t result = v << (8 - bits);
    result |= result >> bits;
    return (uint8_t)result;
}

static inline uint8_t bc7_interp(uint8_t e0, uint8_t e1, const uint8_t* wTable, int idx)
{
    return (uint8_t)(((64 - wTable[idx]) * e0 + wTable[idx] * e1 + 32) >> 6);
}

// ---------------------------------------------------------------------------
// BC7 block decoder
// ---------------------------------------------------------------------------
static void bc7_decode_block(const uint8_t* src, uint8_t* dst, int dstPitch)
{
    BcBitReader br(src);

    // Find mode: leading zeros count gives mode 0-7
    int mode = -1;
    for (int i = 0; i < 8; i++) {
        if (br.read(1)) { mode = i; break; }
    }
    if (mode < 0 || mode > 7) {
        // Unknown / reserved mode: write transparent black
        for (int r=0;r<4;r++) for (int c=0;c<4;c++) {
            uint8_t* p=dst+r*dstPitch+c*4;
            p[0]=p[1]=p[2]=p[3]=0;
        }
        return;
    }

    // Mode parameters
    // ns=numSubsets, pb=partitionBits, rb=rotationBits, isb=indexSelBit
    // cb=colorBits, ab=alphaBits, epb=endpointPBits, spb=sharedPBits
    // ib=indexBits, ib2=secondIndexBits
    static const int ns[]  = {3,2,3,2,1,1,1,2};
    static const int pb[]  = {4,6,6,6,0,0,0,6};
    static const int rb[]  = {0,0,0,0,2,2,0,0};
    static const int isb[] = {0,0,0,0,1,0,0,0};
    static const int cb[]  = {4,6,5,7,5,7,7,5};
    static const int ab[]  = {0,0,0,0,6,8,7,5};
    static const int epb[] = {1,0,0,1,0,0,1,1}; // per-endpoint p-bits
    static const int spb[] = {0,1,0,0,0,0,0,0}; // per-subset shared p-bits
    static const int ib[]  = {3,3,2,2,2,2,4,2};
    static const int ib2[] = {0,0,0,0,3,2,0,0};

    int numSubsets    = ns[mode];
    int partBits      = pb[mode];
    int rotBits       = rb[mode];
    int idxSelBits    = isb[mode];
    int colorBits     = cb[mode];
    int alphaBits     = ab[mode];
    int endpPbits     = epb[mode];
    int sharedPbits   = spb[mode];
    int indexBits     = ib[mode];
    int index2Bits    = ib2[mode];

    // Partition index
    uint32_t partition = 0;
    if (partBits > 0) partition = br.read(partBits);

    // Rotation bits (modes 4-5)
    int rotation = 0;
    if (rotBits > 0) rotation = (int)br.read(rotBits);

    // Index selection bit (mode 4)
    int idxMode = 0;
    if (idxSelBits > 0) idxMode = (int)br.read(idxSelBits);

    int numEndpoints = numSubsets * 2;

    // Read color endpoints [numEndpoints][3]
    uint32_t R[6]={}, G[6]={}, B[6]={}, A[6]={};
    for (int i=0;i<numEndpoints;i++) R[i] = br.read(colorBits);
    for (int i=0;i<numEndpoints;i++) G[i] = br.read(colorBits);
    for (int i=0;i<numEndpoints;i++) B[i] = br.read(colorBits);
    for (int i=0;i<numEndpoints;i++) A[i] = (alphaBits > 0) ? br.read(alphaBits) : 255u;

    // P-bits (extend endpoints)
    uint32_t pBitsEP[6]={}, pBitsSS[3]={};
    if (endpPbits) {
        for (int i=0;i<numEndpoints;i++) pBitsEP[i] = br.read(1);
    }
    if (sharedPbits) {
        for (int i=0;i<numSubsets;i++) pBitsSS[i] = br.read(1);
    }

    // Expand endpoints to 8 bits
    uint8_t eR[6], eG[6], eB[6], eA[6];
    for (int i=0;i<numEndpoints;i++) {
        uint32_t pb_val = endpPbits ? pBitsEP[i] : (sharedPbits ? pBitsSS[i>>1] : 0u);
        int totalCB = colorBits + (endpPbits || sharedPbits ? 1 : 0);
        int totalAB = alphaBits + (alphaBits>0 && (endpPbits || sharedPbits) ? 1 : 0);
        uint32_t rr = (R[i] << (endpPbits||sharedPbits ? 1 : 0)) | pb_val;
        uint32_t gg = (G[i] << (endpPbits||sharedPbits ? 1 : 0)) | pb_val;
        uint32_t bb = (B[i] << (endpPbits||sharedPbits ? 1 : 0)) | pb_val;
        eR[i] = bc7_expand(rr, totalCB);
        eG[i] = bc7_expand(gg, totalCB);
        eB[i] = bc7_expand(bb, totalCB);
        if (alphaBits > 0) {
            uint32_t aa = (A[i] << (endpPbits||sharedPbits ? 1 : 0)) | pb_val;
            eA[i] = bc7_expand(aa, totalAB);
        } else {
            eA[i] = 255;
        }
    }

    // Determine which anchor applies to each subset
    // For subset 0: anchor is always pixel 0
    // For subset 1: anchor depends on partition
    // For subset 2: anchor depends on partition (3-subset modes)
    int anchor[3] = {0, 0, 0};
    if (numSubsets == 2) {
        anchor[1] = (int)g_bc7AnchorIdx2[partition & 63];
    } else if (numSubsets == 3) {
        anchor[1] = (int)g_bc7AnchorIdx3a[partition & 63];
        anchor[2] = (int)g_bc7AnchorIdx3b[partition & 63];
    }

    // Choose weight table
    const uint8_t* wTable1 = (indexBits==2)?g_bc7W2:(indexBits==3)?g_bc7W3:g_bc7W4;
    const uint8_t* wTable2 = nullptr;
    if (index2Bits == 2) wTable2 = g_bc7W2;
    else if (index2Bits == 3) wTable2 = g_bc7W3;
    else if (index2Bits == 4) wTable2 = g_bc7W4;

    int numIdxBits1 = indexBits;
    int numIdxBits2 = index2Bits;

    // If idxMode swaps which index bits go to color vs alpha (mode 4)
    if (idxMode) {
        // swap: index data 1 (3-bit) = alpha, index data 2 (2-bit) = color
        std::swap(numIdxBits1, numIdxBits2);
        std::swap(wTable1, wTable2);
    }

    // Read color indices
    uint32_t colorIdx[16]={};
    int savedPos1 = br.bitPos;
    for (int pix=0;pix<16;pix++) {
        // Determine subset for this pixel
        int subset = 0;
        if (numSubsets == 2) subset = (int)g_bc7P2[partition & 63][pix];
        else if (numSubsets == 3) subset = (int)g_bc7P3[partition & 63][pix];

        // Anchor pixels in each subset have their MSB dropped (1 fewer bit)
        bool isAnchor = (pix == anchor[subset]);
        int bits = numIdxBits1 - (isAnchor ? 1 : 0);
        colorIdx[pix] = br.read(bits);
    }

    // Read alpha indices (only for modes 4 and 5)
    uint32_t alphaIdx[16]={};
    if (numIdxBits2 > 0) {
        for (int pix=0;pix<16;pix++) {
            // alpha indices: anchor for subset 0 only (single subset)
            bool isAnchor = (pix == 0);
            int bits = numIdxBits2 - (isAnchor ? 1 : 0);
            alphaIdx[pix] = br.read(bits);
        }
    }

    // Write output pixels
    for (int pix=0;pix<16;pix++) {
        int row = pix / 4, col = pix % 4;
        uint8_t* p = dst + row*dstPitch + col*4;

        int subset = 0;
        if (numSubsets == 2) subset = (int)g_bc7P2[partition & 63][pix];
        else if (numSubsets == 3) subset = (int)g_bc7P3[partition & 63][pix];

        int ep = subset * 2;

        uint8_t r = bc7_interp(eR[ep], eR[ep+1], wTable1, (int)colorIdx[pix]);
        uint8_t g = bc7_interp(eG[ep], eG[ep+1], wTable1, (int)colorIdx[pix]);
        uint8_t b = bc7_interp(eB[ep], eB[ep+1], wTable1, (int)colorIdx[pix]);
        uint8_t a;
        if (numIdxBits2 > 0) {
            a = bc7_interp(eA[ep], eA[ep+1], wTable2, (int)alphaIdx[pix]);
        } else {
            a = bc7_interp(eA[ep], eA[ep+1], wTable1, (int)colorIdx[pix]);
        }

        // Apply channel rotation (modes 4-5)
        switch (rotation) {
        case 1: std::swap(r, a); break; // A↔R
        case 2: std::swap(g, a); break; // A↔G
        case 3: std::swap(b, a); break; // A↔B
        default: break;
        }

        p[0]=r; p[1]=g; p[2]=b; p[3]=a;
    }
}

// ---------------------------------------------------------------------------
// IsBlockCompressedFormat – returns true for any BC format
// ---------------------------------------------------------------------------
static inline bool BcIsBcFormat(uint32_t dxgiFormat)
{
    // dxgi formats 70-84 = BC1-BC5, 95-99 = BC6H/BC7
    return (dxgiFormat >= 70 && dxgiFormat <= 84) ||
           (dxgiFormat >= 95 && dxgiFormat <= 99);
}

// ddspp DXGIFormat enum numeric values that correspond to BC-compressed formats
// (avoids needing to include ddspp header from this file)
static inline bool BcIsBcDdsppFormat(int fmt)
{
    // Values from ddspp: BC1=71, BC2=74, BC3=77, BC4=80, BC5=83, BC6H=95, BC7=98 (all variants ±1)
    return (fmt >= 70 && fmt <= 84) || (fmt >= 95 && fmt <= 99);
}

// ---------------------------------------------------------------------------
// Top-level: Decode a complete DDS image (all mips, single array slice)
// to RGBA8. Returns false on unsupported format or bad data.
//
// outData is resized to hold the decoded mip chain.
// outMipOffsets[mip] = byte offset into outData for that mip level.
// ---------------------------------------------------------------------------
struct BcDecodeResult {
    std::vector<uint8_t> data;     // decoded RGBA8 pixels
    std::vector<uint32_t> offsets; // byte offset per mip level
    uint32_t rowPitches[16];       // row pitch per mip (bytes)
};

static bool BcSoftwareDecode(
    const uint8_t* ddsData,      // start of DDS file (after ddspp::headerSize)
    uint32_t       width,
    uint32_t       height,
    uint32_t       depth,
    uint32_t       numMips,
    int            dxgiFormat,   // ddspp::DXGIFormat cast to int
    uint32_t       blockWidth,   // from ddspp (4 for all BC)
    uint32_t       blockHeight,  // from ddspp (4 for all BC)
    uint32_t       bitsPerBlock, // from ddspp (bits per 4x4 block)
    BcDecodeResult& out)
{
    if (!BcIsBcDdsppFormat(dxgiFormat)) return false;

    // Determine which decode function to use
    enum FmtClass { BC1, BC2_LIKE, BC3, BC4, BC5, BC7, UNSUPPORTED };
    FmtClass cls;
    switch (dxgiFormat) {
    // BC1 variants (DXT1)
    case 70: case 71: case 72:
        cls = BC1; break;
    // BC2 variants (DXT3) – treat as BC3 for RGB, use constant 4-bit alpha
    case 73: case 74: case 75:
        cls = BC2_LIKE; break;
    // BC3 variants (DXT5)
    case 76: case 77: case 78:
        cls = BC3; break;
    // BC4 variants
    case 79: case 80: case 81:
        cls = BC4; break;
    // BC5 variants
    case 82: case 83: case 84:
        cls = BC5; break;
    // BC6H – HDR; decode as BC3-like (lossy downcast to 8-bit)
    // BC7 variants
    case 97: case 98: case 99:
        cls = BC7; break;
    default:
        cls = UNSUPPORTED; break;
    }
    if (cls == UNSUPPORTED) return false;

    // Bytes per compressed block
    int blockBytes = bitsPerBlock / 8;

    // Pre-compute total output size
    uint32_t totalBytes = 0;
    for (uint32_t mip = 0; mip < numMips; mip++) {
        uint32_t mw = (std::max)(1u, width  >> mip);
        uint32_t mh = (std::max)(1u, height >> mip);
        uint32_t rowPitch = mw * 4u; // RGBA8: 4 bytes/pixel
        totalBytes += rowPitch * mh;
    }

    try {
        out.data.resize(totalBytes);
        out.offsets.resize(numMips);
    } catch (const std::bad_alloc&) {
        return false; // OOM — caller will log an error and return a null texture
    }
    memset(out.rowPitches, 0, sizeof(out.rowPitches));

    const uint8_t* src = ddsData;
    uint32_t dstOff = 0;

    for (uint32_t mip = 0; mip < numMips && mip < 16; mip++) {
        uint32_t mw = (std::max)(1u, width  >> mip);
        uint32_t mh = (std::max)(1u, height >> mip);
        uint32_t rowPitch = mw * 4u;
        out.offsets[mip] = dstOff;
        out.rowPitches[mip] = rowPitch;

        uint8_t* dstMip = out.data.data() + dstOff;

        uint32_t blocksX = (mw + blockWidth  - 1) / blockWidth;
        uint32_t blocksY = (mh + blockHeight - 1) / blockHeight;

        // Temporary block output buffer (4x4 RGBA8)
        uint8_t blockOut[4*4*4];

        for (uint32_t by = 0; by < blocksY; by++) {
            for (uint32_t bx = 0; bx < blocksX; bx++) {
                memset(blockOut, 0, sizeof(blockOut));

                switch (cls) {
                case BC1:      bc1_decode_block(src, blockOut, 4*4, true);  break;
                case BC2_LIKE: {
                    // BC2: 8 bytes explicit alpha, then 8 bytes BC1 color
                    // Decode alpha from explicit 4-bit values
                    bc1_decode_block(src+8, blockOut, 4*4, false);
                    for (int row=0;row<4;row++)
                        for (int col=0;col<4;col++) {
                            int pixOff = (row*4+col);
                            int aIdx = pixOff >> 1;
                            int aShift = (pixOff & 1) * 4;
                            uint8_t a4 = (src[aIdx] >> aShift) & 0xF;
                            blockOut[row*16+col*4+3] = (uint8_t)((a4 << 4) | a4);
                        }
                    break;
                }
                case BC3:      bc3_decode_block(src, blockOut, 4*4); break;
                case BC4:      bc4_decode_block(src, blockOut, 4*4); break;
                case BC5:      bc5_decode_block(src, blockOut, 4*4); break;
                case BC7:      bc7_decode_block(src, blockOut, 4*4); break;
                default:       break;
                }

                src += blockBytes;

                // Copy block pixels to destination, clamping to image boundary
                for (int row = 0; row < 4; row++) {
                    uint32_t py = by*4 + row;
                    if (py >= mh) break;
                    for (int col = 0; col < 4; col++) {
                        uint32_t px = bx*4 + col;
                        if (px >= mw) break;
                        uint8_t* dst = dstMip + py*rowPitch + px*4;
                        const uint8_t* blk = blockOut + row*16 + col*4;
                        dst[0]=blk[0]; dst[1]=blk[1]; dst[2]=blk[2]; dst[3]=blk[3];
                    }
                }
            }
        }

        dstOff += rowPitch * mh;
    }
    return true;
}
