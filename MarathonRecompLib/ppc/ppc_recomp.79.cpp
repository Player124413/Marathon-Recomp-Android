#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_825E3A88"))) PPC_WEAK_FUNC(sub_825E3A88);
PPC_FUNC_IMPL(__imp__sub_825E3A88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-25888
	ctx.r30.s64 = ctx.r11.s64 + -25888;
loc_825E3AA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e3480
	ctx.lr = 0x825E3AB0;
	sub_825E3480(ctx, base);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x825e3ad0
	if (!ctx.cr6.eq) goto loc_825E3AD0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825e3aa8
	if (!ctx.cr6.eq) goto loc_825E3AA8;
loc_825E3AD0:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825e3af0
	if (ctx.cr6.eq) goto loc_825E3AF0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-24864
	ctx.r4.s64 = ctx.r11.s64 + -24864;
	// bl 0x825e04f8
	ctx.lr = 0x825E3AF0;
	sub_825E04F8(ctx, base);
loc_825E3AF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e3480
	ctx.lr = 0x825E3AF8;
	sub_825E3480(ctx, base);
	// clrlwi r30,r3,24
	ctx.r30.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r30,80
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 80, ctx.xer);
	// ble cr6,0x825e3b3c
	if (!ctx.cr6.gt) goto loc_825E3B3C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// srawi r10,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-24660
	ctx.r4.s64 = ctx.r11.s64 + -24660;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 4;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,5
	ctx.r8.s64 = 5;
	// subf r7,r11,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addze r6,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r6.s64 = temp.s64;
	// bl 0x825e04f8
	ctx.lr = 0x825E3B38;
	sub_825E04F8(ctx, base);
	// cmpwi cr6,r30,80
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 80, ctx.xer);
loc_825E3B3C:
	// bge cr6,0x825e3b74
	if (!ctx.cr6.lt) goto loc_825E3B74;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// srawi r10,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-24716
	ctx.r4.s64 = ctx.r11.s64 + -24716;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 4;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,5
	ctx.r8.s64 = 5;
	// subf r7,r11,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addze r6,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r6.s64 = temp.s64;
	// bl 0x825e04f8
	ctx.lr = 0x825E3B74;
	sub_825E04F8(ctx, base);
loc_825E3B74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e3480
	ctx.lr = 0x825E3B7C;
	sub_825E3480(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x825e3480
	ctx.lr = 0x825E3BA0;
	sub_825E3480(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// addi r30,r11,-24844
	ctx.r30.s64 = ctx.r11.s64 + -24844;
	// beq cr6,0x825e3bd0
	if (ctx.cr6.eq) goto loc_825E3BD0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,4
	ctx.r7.s64 = 4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r11,-24720
	ctx.r6.s64 = ctx.r11.s64 + -24720;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825e04f8
	ctx.lr = 0x825E3BD0;
	sub_825E04F8(ctx, base);
loc_825E3BD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e3480
	ctx.lr = 0x825E3BD8;
	sub_825E3480(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// beq cr6,0x825e3c00
	if (ctx.cr6.eq) goto loc_825E3C00;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,4
	ctx.r7.s64 = 4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r11,-24728
	ctx.r6.s64 = ctx.r11.s64 + -24728;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825e04f8
	ctx.lr = 0x825E3C00;
	sub_825E04F8(ctx, base);
loc_825E3C00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e3480
	ctx.lr = 0x825E3C08;
	sub_825E3480(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// beq cr6,0x825e3c30
	if (ctx.cr6.eq) goto loc_825E3C30;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,4
	ctx.r7.s64 = 4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r11,-24740
	ctx.r6.s64 = ctx.r11.s64 + -24740;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825e04f8
	ctx.lr = 0x825E3C30;
	sub_825E04F8(ctx, base);
loc_825E3C30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e3480
	ctx.lr = 0x825E3C38;
	sub_825E3480(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r8,6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 6, ctx.xer);
	// beq cr6,0x825e3c60
	if (ctx.cr6.eq) goto loc_825E3C60;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,6
	ctx.r7.s64 = 6;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r11,-24744
	ctx.r6.s64 = ctx.r11.s64 + -24744;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825e04f8
	ctx.lr = 0x825E3C60;
	sub_825E04F8(ctx, base);
loc_825E3C60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e3480
	ctx.lr = 0x825E3C68;
	sub_825E3480(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// beq cr6,0x825e3c90
	if (ctx.cr6.eq) goto loc_825E3C90;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r11,-24748
	ctx.r6.s64 = ctx.r11.s64 + -24748;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825e04f8
	ctx.lr = 0x825E3C90;
	sub_825E04F8(ctx, base);
loc_825E3C90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e3480
	ctx.lr = 0x825E3C98;
	sub_825E3480(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r8,9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 9, ctx.xer);
	// beq cr6,0x825e3cc0
	if (ctx.cr6.eq) goto loc_825E3CC0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,9
	ctx.r7.s64 = 9;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r11,-24752
	ctx.r6.s64 = ctx.r11.s64 + -24752;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825e04f8
	ctx.lr = 0x825E3CC0;
	sub_825E04F8(ctx, base);
loc_825E3CC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e3480
	ctx.lr = 0x825E3CC8;
	sub_825E3480(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r8,9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 9, ctx.xer);
	// beq cr6,0x825e3cf0
	if (ctx.cr6.eq) goto loc_825E3CF0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,9
	ctx.r7.s64 = 9;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r11,-16180
	ctx.r6.s64 = ctx.r11.s64 + -16180;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825e04f8
	ctx.lr = 0x825E3CF0;
	sub_825E04F8(ctx, base);
loc_825E3CF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e3480
	ctx.lr = 0x825E3CF8;
	sub_825E3480(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// beq cr6,0x825e3d20
	if (ctx.cr6.eq) goto loc_825E3D20;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r11,29772
	ctx.r6.s64 = ctx.r11.s64 + 29772;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825e04f8
	ctx.lr = 0x825E3D20;
	sub_825E04F8(ctx, base);
loc_825E3D20:
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e3510
	ctx.lr = 0x825E3D30;
	sub_825E3510(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r10,479
	ctx.r10.s64 = 31391744;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// ori r10,r10,24182
	ctx.r10.u64 = ctx.r10.u64 | 24182;
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x825e3d68
	if (ctx.cr6.eq) goto loc_825E3D68;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-24780
	ctx.r4.s64 = ctx.r11.s64 + -24780;
	// bl 0x825e04f8
	ctx.lr = 0x825E3D68;
	sub_825E04F8(ctx, base);
loc_825E3D68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E3D80"))) PPC_WEAK_FUNC(sub_825E3D80);
PPC_FUNC_IMPL(__imp__sub_825E3D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// beq cr6,0x825e3dc8
	if (ctx.cr6.eq) goto loc_825E3DC8;
	// cmpwi cr6,r11,61
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 61, ctx.xer);
	// beq cr6,0x825e3dc8
	if (ctx.cr6.eq) goto loc_825E3DC8;
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// bne cr6,0x825e3dc0
	if (!ctx.cr6.eq) goto loc_825E3DC0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,-24604
	ctx.r11.s64 = ctx.r11.s64 + -24604;
	// b 0x825e3dcc
	goto loc_825E3DCC;
loc_825E3DC0:
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// b 0x825e3dd0
	goto loc_825E3DD0;
loc_825E3DC8:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
loc_825E3DCC:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_825E3DD0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// bl 0x825e3a88
	ctx.lr = 0x825E3DE4;
	sub_825E3A88(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825e3850
	ctx.lr = 0x825E3DF0;
	sub_825E3850(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E3E00"))) PPC_WEAK_FUNC(sub_825E3E00);
PPC_FUNC_IMPL(__imp__sub_825E3E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825E3E08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,-24464
	ctx.r29.s64 = ctx.r11.s64 + -24464;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_825E3E20:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_825E3E2C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x825e3e2c
	if (!ctx.cr6.eq) goto loc_825E3E2C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825de870
	ctx.lr = 0x825E3E50;
	sub_825DE870(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// addi r10,r29,84
	ctx.r10.s64 = ctx.r29.s64 + 84;
	// stb r11,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r11.u8);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// blt cr6,0x825e3e20
	if (ctx.cr6.lt) goto loc_825E3E20;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E3E80"))) PPC_WEAK_FUNC(sub_825E3E80);
PPC_FUNC_IMPL(__imp__sub_825E3E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825E3E88;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r31,52(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
	// bl 0x825de580
	ctx.lr = 0x825E3EB4;
	sub_825DE580(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// addi r4,r11,-24340
	ctx.r4.s64 = ctx.r11.s64 + -24340;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825de538
	ctx.lr = 0x825E3ED4;
	sub_825DE538(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d9788
	ctx.lr = 0x825E3EE0;
	sub_825D9788(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E3EE8"))) PPC_WEAK_FUNC(sub_825E3EE8);
PPC_FUNC_IMPL(__imp__sub_825E3EE8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,257
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 257, ctx.xer);
	// bge cr6,0x825e3f04
	if (!ctx.cr6.lt) goto loc_825E3F04;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r4,r11,-24320
	ctx.r4.s64 = ctx.r11.s64 + -24320;
	// b 0x825de538
	sub_825DE538(ctx, base);
	return;
loc_825E3F04:
	// addi r10,r5,-257
	ctx.r10.s64 = ctx.r5.s64 + -257;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-24464
	ctx.r11.s64 = ctx.r11.s64 + -24464;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E3F20"))) PPC_WEAK_FUNC(sub_825E3F20);
PPC_FUNC_IMPL(__imp__sub_825E3F20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,287
	ctx.r10.s64 = 287;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r6,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r6.u32);
	// stw r5,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r5.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// beq 0x825e3f88
	if (ctx.cr0.eq) goto loc_825E3F88;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x825e3f90
	goto loc_825E3F90;
loc_825E3F88:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x825dfb60
	ctx.lr = 0x825E3F90;
	sub_825DFB60(ctx, base);
loc_825E3F90:
	// cmpwi cr6,r3,35
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 35, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bne cr6,0x825e3fe8
	if (!ctx.cr6.eq) goto loc_825E3FE8;
loc_825E3F9C:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// beq 0x825e3fcc
	if (ctx.cr0.eq) goto loc_825E3FCC;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x825e3fd4
	goto loc_825E3FD4;
loc_825E3FCC:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x825dfb60
	ctx.lr = 0x825E3FD4;
	sub_825DFB60(ctx, base);
loc_825E3FD4:
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x825e3fe8
	if (ctx.cr6.eq) goto loc_825E3FE8;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x825e3f9c
	if (!ctx.cr6.eq) goto loc_825E3F9C;
loc_825E3FE8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E4000"))) PPC_WEAK_FUNC(sub_825E4000);
PPC_FUNC_IMPL(__imp__sub_825E4000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x825E4008;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x825e403c
	if (!ctx.cr6.lt) goto loc_825E403C;
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x825dfd08
	ctx.lr = 0x825E403C;
	sub_825DFD08(ctx, base);
loc_825E403C:
	// li r28,46
	ctx.r28.s64 = 46;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x825e40cc
	if (ctx.cr6.eq) goto loc_825E40CC;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r28,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// b 0x825e40cc
	goto loc_825E40CC;
loc_825E405C:
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r11,r30,5
	ctx.r11.s64 = ctx.r30.s64 + 5;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825e407c
	if (!ctx.cr6.gt) goto loc_825E407C;
	// addi r5,r30,32
	ctx.r5.s64 = ctx.r30.s64 + 32;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x825dfd08
	ctx.lr = 0x825E407C;
	sub_825DFD08(ctx, base);
loc_825E407C:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stbx r10,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// beq 0x825e40c0
	if (ctx.cr0.eq) goto loc_825E40C0;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x825e40c8
	goto loc_825E40C8;
loc_825E40C0:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x825dfb60
	ctx.lr = 0x825E40C8;
	sub_825DFB60(ctx, base);
loc_825E40C8:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_825E40CC:
	// bl 0x826e42f8
	ctx.lr = 0x825E40D0;
	sub_826E42F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825e405c
	if (!ctx.cr0.eq) goto loc_825E405C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// bne cr6,0x825e4234
	if (!ctx.cr6.eq) goto loc_825E4234;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stbx r28,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r28.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// beq 0x825e4130
	if (ctx.cr0.eq) goto loc_825E4130;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x825e4138
	goto loc_825E4138;
loc_825E4130:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x825dfb60
	ctx.lr = 0x825E4138;
	sub_825DFB60(ctx, base);
loc_825E4138:
	// cmpwi cr6,r3,46
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 46, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bne cr6,0x825e4234
	if (!ctx.cr6.eq) goto loc_825E4234;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stbx r28,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r28.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// beq 0x825e4184
	if (ctx.cr0.eq) goto loc_825E4184;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x825e4190
	goto loc_825E4190;
loc_825E4184:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x825dfb60
	ctx.lr = 0x825E418C;
	sub_825DFB60(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_825E4190:
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-24296
	ctx.r4.s64 = ctx.r11.s64 + -24296;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stbx r27,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r27.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x825e3e80
	ctx.lr = 0x825E41C0;
	sub_825E3E80(ctx, base);
	// b 0x825e4234
	goto loc_825E4234;
loc_825E41C4:
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r11,r30,5
	ctx.r11.s64 = ctx.r30.s64 + 5;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825e41e4
	if (!ctx.cr6.gt) goto loc_825E41E4;
	// addi r5,r30,32
	ctx.r5.s64 = ctx.r30.s64 + 32;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x825dfd08
	ctx.lr = 0x825E41E4;
	sub_825DFD08(ctx, base);
loc_825E41E4:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stbx r10,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// beq 0x825e4228
	if (ctx.cr0.eq) goto loc_825E4228;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x825e4230
	goto loc_825E4230;
loc_825E4228:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x825dfb60
	ctx.lr = 0x825E4230;
	sub_825DFB60(ctx, base);
loc_825E4230:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_825E4234:
	// bl 0x826e42f8
	ctx.lr = 0x825E4238;
	sub_826E42F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825e41c4
	if (!ctx.cr0.eq) goto loc_825E41C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,101
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 101, ctx.xer);
	// beq cr6,0x825e4260
	if (ctx.cr6.eq) goto loc_825E4260;
	// cmpwi cr6,r11,69
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 69, ctx.xer);
	// bne cr6,0x825e4354
	if (!ctx.cr6.eq) goto loc_825E4354;
loc_825E4260:
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stbx r11,r10,r30
	PPC_STORE_U8(ctx.r10.u32 + ctx.r30.u32, ctx.r11.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// beq 0x825e42a0
	if (ctx.cr0.eq) goto loc_825E42A0;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x825e42a8
	goto loc_825E42A8;
loc_825E42A0:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x825dfb60
	ctx.lr = 0x825E42A8;
	sub_825DFB60(ctx, base);
loc_825E42A8:
	// cmpwi cr6,r3,43
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 43, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x825e42bc
	if (ctx.cr6.eq) goto loc_825E42BC;
	// cmpwi cr6,r3,45
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 45, ctx.xer);
	// bne cr6,0x825e433c
	if (!ctx.cr6.eq) goto loc_825E433C;
loc_825E42BC:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stbx r3,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u8);
	// b 0x825e42fc
	goto loc_825E42FC;
loc_825E42CC:
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r11,r30,5
	ctx.r11.s64 = ctx.r30.s64 + 5;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825e42ec
	if (!ctx.cr6.gt) goto loc_825E42EC;
	// addi r5,r30,32
	ctx.r5.s64 = ctx.r30.s64 + 32;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x825dfd08
	ctx.lr = 0x825E42EC;
	sub_825DFD08(ctx, base);
loc_825E42EC:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stbx r10,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u8);
loc_825E42FC:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// beq 0x825e4330
	if (ctx.cr0.eq) goto loc_825E4330;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x825e4338
	goto loc_825E4338;
loc_825E4330:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x825dfb60
	ctx.lr = 0x825E4338;
	sub_825DFB60(ctx, base);
loc_825E4338:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_825E433C:
	// bl 0x826e42f8
	ctx.lr = 0x825E4340;
	sub_826E42F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825e42cc
	if (!ctx.cr0.eq) goto loc_825E42CC;
loc_825E4354:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stbx r27,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r27.u8);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x825de228
	ctx.lr = 0x825E4370;
	sub_825DE228(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825e4394
	if (!ctx.cr0.eq) goto loc_825E4394;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,-24316
	ctx.r4.s64 = ctx.r11.s64 + -24316;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x825e3e80
	ctx.lr = 0x825E4394;
	sub_825E3E80(ctx, base);
loc_825E4394:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E43A0"))) PPC_WEAK_FUNC(sub_825E43A0);
PPC_FUNC_IMPL(__imp__sub_825E43A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r5,278
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 278, ctx.xer);
	// beq cr6,0x825e4418
	if (ctx.cr6.eq) goto loc_825E4418;
	// addi r11,r5,-285
	ctx.r11.s64 = ctx.r5.s64 + -285;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x825e43e0
	if (ctx.cr6.gt) goto loc_825E43E0;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x825e4420
	goto loc_825E4420;
loc_825E43E0:
	// cmpwi cr6,r5,257
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 257, ctx.xer);
	// bge cr6,0x825e43fc
	if (!ctx.cr6.lt) goto loc_825E43FC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r4,r11,-24320
	ctx.r4.s64 = ctx.r11.s64 + -24320;
	// bl 0x825de538
	ctx.lr = 0x825E43F8;
	sub_825DE538(ctx, base);
	// b 0x825e4410
	goto loc_825E4410;
loc_825E43FC:
	// addi r10,r5,-257
	ctx.r10.s64 = ctx.r5.s64 + -257;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-24464
	ctx.r11.s64 = ctx.r11.s64 + -24464;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_825E4410:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x825e4420
	goto loc_825E4420;
loc_825E4418:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
loc_825E4420:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e3e80
	ctx.lr = 0x825E4430;
	sub_825E3E80(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E4448"))) PPC_WEAK_FUNC(sub_825E4448);
PPC_FUNC_IMPL(__imp__sub_825E4448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x825e448c
	if (!ctx.cr6.gt) goto loc_825E448C;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// addi r4,r10,-24240
	ctx.r4.s64 = ctx.r10.s64 + -24240;
	// bl 0x825de538
	ctx.lr = 0x825E4480;
	sub_825DE538(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e43a0
	ctx.lr = 0x825E448C;
	sub_825E43A0(ctx, base);
loc_825E448C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E44A0"))) PPC_WEAK_FUNC(sub_825E44A0);
PPC_FUNC_IMPL(__imp__sub_825E44A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// beq 0x825e44e4
	if (ctx.cr0.eq) goto loc_825E44E4;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// b 0x825e44f0
	goto loc_825E44F0;
loc_825E44E4:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x825dfb60
	ctx.lr = 0x825E44EC;
	sub_825DFB60(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_825E44F0:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// addi r6,r10,-24216
	ctx.r6.s64 = ctx.r10.s64 + -24216;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// ori r5,r5,65533
	ctx.r5.u64 = ctx.r5.u64 | 65533;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// bl 0x825e4448
	ctx.lr = 0x825E4518;
	sub_825E4448(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E4530"))) PPC_WEAK_FUNC(sub_825E4530);
PPC_FUNC_IMPL(__imp__sub_825E4530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b0
	ctx.lr = 0x825E4538;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x825e4568
	if (!ctx.cr6.lt) goto loc_825E4568;
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x825dfd08
	ctx.lr = 0x825E4568;
	sub_825DFD08(ctx, base);
loc_825E4568:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r24,91
	ctx.r24.s64 = 91;
	// li r30,2
	ctx.r30.s64 = 2;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r24,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r24.u8);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// beq 0x825e45bc
	if (ctx.cr0.eq) goto loc_825E45BC;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x825e45c4
	goto loc_825E45C4;
loc_825E45BC:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x825dfb60
	ctx.lr = 0x825E45C4;
	sub_825DFB60(ctx, base);
loc_825E45C4:
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bne cr6,0x825e45d8
	if (!ctx.cr6.eq) goto loc_825E45D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e44a0
	ctx.lr = 0x825E45D8;
	sub_825E44A0(ctx, base);
loc_825E45D8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r28,93
	ctx.r28.s64 = 93;
	// addi r27,r11,-24464
	ctx.r27.s64 = ctx.r11.s64 + -24464;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r26,r11,-24172
	ctx.r26.s64 = ctx.r11.s64 + -24172;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r25,r11,-24196
	ctx.r25.s64 = ctx.r11.s64 + -24196;
loc_825E45F4:
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r11,r30,5
	ctx.r11.s64 = ctx.r30.s64 + 5;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825e4614
	if (!ctx.cr6.gt) goto loc_825E4614;
	// addi r5,r30,32
	ctx.r5.s64 = ctx.r30.s64 + 32;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x825dfd08
	ctx.lr = 0x825E4614;
	sub_825DFD08(ctx, base);
loc_825E4614:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x825e4784
	if (ctx.cr6.eq) goto loc_825E4784;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x825e4758
	if (ctx.cr6.eq) goto loc_825E4758;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stbx r11,r10,r30
	PPC_STORE_U8(ctx.r10.u32 + ctx.r30.u32, ctx.r11.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// beq cr6,0x825e46c0
	if (ctx.cr6.eq) goto loc_825E46C0;
	// cmpwi cr6,r11,93
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 93, ctx.xer);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bne cr6,0x825e472c
	if (!ctx.cr6.eq) goto loc_825E472C;
	// beq 0x825e4678
	if (ctx.cr0.eq) goto loc_825E4678;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x825e4680
	goto loc_825E4680;
loc_825E4678:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x825dfb60
	ctx.lr = 0x825E4680;
	sub_825DFB60(ctx, base);
loc_825E4680:
	// cmpwi cr6,r3,93
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 93, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bne cr6,0x825e45f4
	if (!ctx.cr6.eq) goto loc_825E45F4;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stbx r28,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r28.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// beq cr6,0x825e47b8
	if (ctx.cr6.eq) goto loc_825E47B8;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// b 0x825e472c
	goto loc_825E472C;
loc_825E46C0:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// beq 0x825e46f0
	if (ctx.cr0.eq) goto loc_825E46F0;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x825e46f8
	goto loc_825E46F8;
loc_825E46F0:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x825dfb60
	ctx.lr = 0x825E46F8;
	sub_825DFB60(ctx, base);
loc_825E46F8:
	// cmpwi cr6,r3,91
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 91, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bne cr6,0x825e45f4
	if (!ctx.cr6.eq) goto loc_825E45F4;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stbx r24,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r24.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_825E472C:
	// beq 0x825e4748
	if (ctx.cr0.eq) goto loc_825E4748;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x825e4750
	goto loc_825E4750;
loc_825E4748:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x825dfb60
	ctx.lr = 0x825E4750;
	sub_825DFB60(ctx, base);
loc_825E4750:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x825e45f4
	goto loc_825E45F4;
loc_825E4758:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r10,10
	ctx.r10.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stbx r10,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x825e44a0
	ctx.lr = 0x825E4774;
	sub_825E44A0(ctx, base);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x825e45f4
	if (!ctx.cr6.eq) goto loc_825E45F4;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// b 0x825e45f4
	goto loc_825E45F4;
loc_825E4784:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stbx r22,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r22.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bne cr6,0x825e47a4
	if (!ctx.cr6.eq) goto loc_825E47A4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_825E47A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,120(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 120);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x825e3e80
	ctx.lr = 0x825E47B4;
	sub_825E3E80(ctx, base);
	// b 0x825e45f4
	goto loc_825E45F4;
loc_825E47B8:
	// beq 0x825e47d4
	if (ctx.cr0.eq) goto loc_825E47D4;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x825e47dc
	goto loc_825E47DC;
loc_825E47D4:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x825dfb60
	ctx.lr = 0x825E47DC;
	sub_825DFB60(ctx, base);
loc_825E47DC:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stbx r22,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r22.u8);
	// beq cr6,0x825e4810
	if (ctx.cr6.eq) goto loc_825E4810;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r5,r30,-4
	ctx.r5.s64 = ctx.r30.s64 + -4;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// bl 0x825de870
	ctx.lr = 0x825E480C;
	sub_825DE870(ctx, base);
	// stw r3,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r3.u32);
loc_825E4810:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de900
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E4818"))) PPC_WEAK_FUNC(sub_825E4818);
PPC_FUNC_IMPL(__imp__sub_825E4818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8a8
	ctx.lr = 0x825E4820;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x825e484c
	if (!ctx.cr6.lt) goto loc_825E484C;
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x825dfd08
	ctx.lr = 0x825E484C;
	sub_825DFD08(ctx, base);
loc_825E484C:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// beq 0x825e4890
	if (ctx.cr0.eq) goto loc_825E4890;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x825e4898
	goto loc_825E4898;
loc_825E4890:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x825dfb60
	ctx.lr = 0x825E4898;
	sub_825DFB60(ctx, base);
loc_825E4898:
	// cmpw cr6,r3,r21
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r21.s32, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r25,0
	ctx.r25.s64 = 0;
	// beq cr6,0x825e4b6c
	if (ctx.cr6.eq) goto loc_825E4B6C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r29,6
	ctx.r29.s64 = 6;
	// addi r24,r11,-24464
	ctx.r24.s64 = ctx.r11.s64 + -24464;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r23,10
	ctx.r23.s64 = 10;
	// addi r22,r11,-24128
	ctx.r22.s64 = ctx.r11.s64 + -24128;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r26,r11,-24148
	ctx.r26.s64 = ctx.r11.s64 + -24148;
loc_825E48C8:
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x825e48e4
	if (!ctx.cr6.gt) goto loc_825E48E4;
	// addi r5,r30,32
	ctx.r5.s64 = ctx.r30.s64 + 32;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x825dfd08
	ctx.lr = 0x825E48E4;
	sub_825DFD08(ctx, base);
loc_825E48E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x825e4b38
	if (ctx.cr6.eq) goto loc_825E4B38;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x825e4b20
	if (ctx.cr6.eq) goto loc_825E4B20;
	// cmpwi cr6,r11,92
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 92, ctx.xer);
	// beq cr6,0x825e4954
	if (ctx.cr6.eq) goto loc_825E4954;
loc_825E4900:
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stbx r11,r10,r30
	PPC_STORE_U8(ctx.r10.u32 + ctx.r30.u32, ctx.r11.u8);
loc_825E490C:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// beq 0x825e4944
	if (ctx.cr0.eq) goto loc_825E4944;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x825e494c
	goto loc_825E494C;
loc_825E4944:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x825dfb60
	ctx.lr = 0x825E494C;
	sub_825DFB60(ctx, base);
loc_825E494C:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x825e4b60
	goto loc_825E4B60;
loc_825E4954:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// beq 0x825e4984
	if (ctx.cr0.eq) goto loc_825E4984;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x825e498c
	goto loc_825E498C;
loc_825E4984:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x825dfb60
	ctx.lr = 0x825E498C;
	sub_825DFB60(ctx, base);
loc_825E498C:
	// cmpwi cr6,r3,102
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 102, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bgt cr6,0x825e4a00
	if (ctx.cr6.gt) goto loc_825E4A00;
	// beq cr6,0x825e49f8
	if (ctx.cr6.eq) goto loc_825E49F8;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x825e4b60
	if (ctx.cr6.eq) goto loc_825E4B60;
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// beq cr6,0x825e49d8
	if (ctx.cr6.eq) goto loc_825E49D8;
	// cmpwi cr6,r3,97
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 97, ctx.xer);
	// beq cr6,0x825e49d0
	if (ctx.cr6.eq) goto loc_825E49D0;
	// cmpwi cr6,r3,98
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 98, ctx.xer);
	// bne cr6,0x825e4a20
	if (!ctx.cr6.eq) goto loc_825E4A20;
	// li r10,8
	ctx.r10.s64 = 8;
loc_825E49C0:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stbx r10,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u8);
	// b 0x825e490c
	goto loc_825E490C;
loc_825E49D0:
	// li r10,7
	ctx.r10.s64 = 7;
	// b 0x825e49c0
	goto loc_825E49C0;
loc_825E49D8:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stbx r23,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r23.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x825e44a0
	ctx.lr = 0x825E49F4;
	sub_825E44A0(ctx, base);
	// b 0x825e4b60
	goto loc_825E4B60;
loc_825E49F8:
	// li r10,12
	ctx.r10.s64 = 12;
	// b 0x825e49c0
	goto loc_825E49C0;
loc_825E4A00:
	// cmpwi cr6,r3,110
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 110, ctx.xer);
	// beq cr6,0x825e4b10
	if (ctx.cr6.eq) goto loc_825E4B10;
	// cmpwi cr6,r3,114
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 114, ctx.xer);
	// beq cr6,0x825e4b08
	if (ctx.cr6.eq) goto loc_825E4B08;
	// cmpwi cr6,r3,116
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 116, ctx.xer);
	// beq cr6,0x825e4b00
	if (ctx.cr6.eq) goto loc_825E4B00;
	// cmpwi cr6,r3,118
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 118, ctx.xer);
	// beq cr6,0x825e4af8
	if (ctx.cr6.eq) goto loc_825E4AF8;
loc_825E4A20:
	// bl 0x826e42f8
	ctx.lr = 0x825E4A24;
	sub_826E42F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// rlwinm. r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825e4900
	if (ctx.cr0.eq) goto loc_825E4900;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_825E4A40:
	// mulli r9,r28,10
	ctx.r9.s64 = ctx.r28.s64 * 10;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r28,r11,-48
	ctx.r28.s64 = ctx.r11.s64 + -48;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq 0x825e4a7c
	if (ctx.cr0.eq) goto loc_825E4A7C;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x825e4a84
	goto loc_825E4A84;
loc_825E4A7C:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x825dfb60
	ctx.lr = 0x825E4A84;
	sub_825DFB60(ctx, base);
loc_825E4A84:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// bge cr6,0x825e4aac
	if (!ctx.cr6.lt) goto loc_825E4AAC;
	// bl 0x826e42f8
	ctx.lr = 0x825E4A98;
	sub_826E42F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// rlwinm. r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825e4a40
	if (!ctx.cr0.eq) goto loc_825E4A40;
loc_825E4AAC:
	// cmpwi cr6,r28,255
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 255, ctx.xer);
	// ble cr6,0x825e4ae0
	if (!ctx.cr6.gt) goto loc_825E4AE0;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stbx r25,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r25.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x825e3e80
	ctx.lr = 0x825E4AE0;
	sub_825E3E80(ctx, base);
loc_825E4AE0:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stbx r28,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r28.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x825e4b60
	goto loc_825E4B60;
loc_825E4AF8:
	// li r10,11
	ctx.r10.s64 = 11;
	// b 0x825e49c0
	goto loc_825E49C0;
loc_825E4B00:
	// li r10,9
	ctx.r10.s64 = 9;
	// b 0x825e49c0
	goto loc_825E49C0;
loc_825E4B08:
	// li r10,13
	ctx.r10.s64 = 13;
	// b 0x825e49c0
	goto loc_825E49C0;
loc_825E4B10:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stbx r23,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r23.u8);
	// b 0x825e490c
	goto loc_825E490C;
loc_825E4B20:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stbx r25,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r25.u8);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x825e4b48
	goto loc_825E4B48;
loc_825E4B38:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stbx r25,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r25.u8);
	// lwz r5,120(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 120);
loc_825E4B48:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bl 0x825e3e80
	ctx.lr = 0x825E4B60;
	sub_825E3E80(ctx, base);
loc_825E4B60:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// bne cr6,0x825e48c8
	if (!ctx.cr6.eq) goto loc_825E48C8;
loc_825E4B6C:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stbx r10,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// beq 0x825e4bb0
	if (ctx.cr0.eq) goto loc_825E4BB0;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x825e4bb8
	goto loc_825E4BB8;
loc_825E4BB0:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x825dfb60
	ctx.lr = 0x825E4BB8;
	sub_825DFB60(ctx, base);
loc_825E4BB8:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r5,r30,-2
	ctx.r5.s64 = ctx.r30.s64 + -2;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stbx r25,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r25.u8);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x825de870
	ctx.lr = 0x825E4BE0;
	sub_825DE870(ctx, base);
	// stw r3,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r3.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de8f8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E4BF0"))) PPC_WEAK_FUNC(sub_825E4BF0);
PPC_FUNC_IMPL(__imp__sub_825E4BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x825E4BF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
loc_825E4C04:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// bgt cr6,0x825e4d7c
	if (ctx.cr6.gt) goto loc_825E4D7C;
	// beq cr6,0x825e4e20
	if (ctx.cr6.eq) goto loc_825E4E20;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x825e4e18
	if (ctx.cr6.eq) goto loc_825E4E18;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x825e4d70
	if (ctx.cr6.eq) goto loc_825E4D70;
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// beq cr6,0x825e4e04
	if (ctx.cr6.eq) goto loc_825E4E04;
	// cmpwi cr6,r11,39
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 39, ctx.xer);
	// beq cr6,0x825e4e04
	if (ctx.cr6.eq) goto loc_825E4E04;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bne cr6,0x825e4da4
	if (!ctx.cr6.eq) goto loc_825E4DA4;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// beq 0x825e4c6c
	if (ctx.cr0.eq) goto loc_825E4C6C;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x825e4c74
	goto loc_825E4C74;
loc_825E4C6C:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x825dfb60
	ctx.lr = 0x825E4C74;
	sub_825DFB60(ctx, base);
loc_825E4C74:
	// cmpwi cr6,r3,45
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 45, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bne cr6,0x825e4dfc
	if (!ctx.cr6.eq) goto loc_825E4DFC;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// beq 0x825e4cb0
	if (ctx.cr0.eq) goto loc_825E4CB0;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x825e4cb8
	goto loc_825E4CB8;
loc_825E4CB0:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x825dfb60
	ctx.lr = 0x825E4CB8;
	sub_825DFB60(ctx, base);
loc_825E4CB8:
	// cmpwi cr6,r3,91
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 91, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bne cr6,0x825e4d60
	if (!ctx.cr6.eq) goto loc_825E4D60;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// beq 0x825e4cf4
	if (ctx.cr0.eq) goto loc_825E4CF4;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x825e4cfc
	goto loc_825E4CFC;
loc_825E4CF4:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x825dfb60
	ctx.lr = 0x825E4CFC;
	sub_825DFB60(ctx, base);
loc_825E4CFC:
	// cmpwi cr6,r3,91
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 91, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bne cr6,0x825e4d60
	if (!ctx.cr6.eq) goto loc_825E4D60;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e4530
	ctx.lr = 0x825E4D14;
	sub_825E4530(ctx, base);
	// b 0x825e4c04
	goto loc_825E4C04;
loc_825E4D18:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x825e4c04
	if (ctx.cr6.eq) goto loc_825E4C04;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// beq 0x825e4d54
	if (ctx.cr0.eq) goto loc_825E4D54;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x825e4d5c
	goto loc_825E4D5C;
loc_825E4D54:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x825dfb60
	ctx.lr = 0x825E4D5C;
	sub_825DFB60(ctx, base);
loc_825E4D5C:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_825E4D60:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x825e4d18
	if (!ctx.cr6.eq) goto loc_825E4D18;
	// b 0x825e4c04
	goto loc_825E4C04;
loc_825E4D70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e44a0
	ctx.lr = 0x825E4D78;
	sub_825E44A0(ctx, base);
	// b 0x825e4c04
	goto loc_825E4C04;
loc_825E4D7C:
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// beq cr6,0x825e52fc
	if (ctx.cr6.eq) goto loc_825E52FC;
	// cmpwi cr6,r11,61
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 61, ctx.xer);
	// beq cr6,0x825e526c
	if (ctx.cr6.eq) goto loc_825E526C;
	// cmpwi cr6,r11,62
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 62, ctx.xer);
	// beq cr6,0x825e51dc
	if (ctx.cr6.eq) goto loc_825E51DC;
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// beq cr6,0x825e517c
	if (ctx.cr6.eq) goto loc_825E517C;
	// cmpwi cr6,r11,126
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 126, ctx.xer);
	// beq cr6,0x825e50ec
	if (ctx.cr6.eq) goto loc_825E50EC;
loc_825E4DA4:
	// bl 0x826e42f8
	ctx.lr = 0x825E4DA8;
	sub_826E42F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e4f2c
	if (ctx.cr0.eq) goto loc_825E4F2C;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// beq 0x825e4dec
	if (ctx.cr0.eq) goto loc_825E4DEC;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x825e4df4
	goto loc_825E4DF4;
loc_825E4DEC:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x825dfb60
	ctx.lr = 0x825E4DF4;
	sub_825DFB60(ctx, base);
loc_825E4DF4:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x825e4c04
	goto loc_825E4C04;
loc_825E4DFC:
	// li r3,45
	ctx.r3.s64 = 45;
	// b 0x825e538c
	goto loc_825E538C;
loc_825E4E04:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e4818
	ctx.lr = 0x825E4E14;
	sub_825E4818(ctx, base);
	// b 0x825e51d4
	goto loc_825E51D4;
loc_825E4E18:
	// li r3,287
	ctx.r3.s64 = 287;
	// b 0x825e538c
	goto loc_825E538C;
loc_825E4E20:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// beq 0x825e4e50
	if (ctx.cr0.eq) goto loc_825E4E50;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x825e4e58
	goto loc_825E4E58;
loc_825E4E50:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x825dfb60
	ctx.lr = 0x825E4E58;
	sub_825DFB60(ctx, base);
loc_825E4E58:
	// cmpwi cr6,r3,46
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 46, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bne cr6,0x825e4ef4
	if (!ctx.cr6.eq) goto loc_825E4EF4;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// beq 0x825e4e94
	if (ctx.cr0.eq) goto loc_825E4E94;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x825e4e9c
	goto loc_825E4E9C;
loc_825E4E94:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x825dfb60
	ctx.lr = 0x825E4E9C;
	sub_825DFB60(ctx, base);
loc_825E4E9C:
	// cmpwi cr6,r3,46
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 46, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bne cr6,0x825e4eec
	if (!ctx.cr6.eq) goto loc_825E4EEC;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// beq 0x825e4ed8
	if (ctx.cr0.eq) goto loc_825E4ED8;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x825e4ee4
	goto loc_825E4EE4;
loc_825E4ED8:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x825dfb60
	ctx.lr = 0x825E4EE0;
	sub_825DFB60(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_825E4EE4:
	// li r3,280
	ctx.r3.s64 = 280;
	// b 0x825e5388
	goto loc_825E5388;
loc_825E4EEC:
	// li r3,279
	ctx.r3.s64 = 279;
	// b 0x825e538c
	goto loc_825E538C;
loc_825E4EF4:
	// bl 0x826e42f8
	ctx.lr = 0x825E4EF8;
	sub_826E42F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825e4f14
	if (!ctx.cr0.eq) goto loc_825E4F14;
	// li r3,46
	ctx.r3.s64 = 46;
	// b 0x825e538c
	goto loc_825E538C;
loc_825E4F14:
	// li r4,1
	ctx.r4.s64 = 1;
loc_825E4F18:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e4000
	ctx.lr = 0x825E4F24;
	sub_825E4000(ctx, base);
	// li r3,285
	ctx.r3.s64 = 285;
	// b 0x825e538c
	goto loc_825E538C;
loc_825E4F2C:
	// bl 0x826e42f8
	ctx.lr = 0x825E4F30;
	sub_826E42F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e4f4c
	if (ctx.cr0.eq) goto loc_825E4F4C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x825e4f18
	goto loc_825E4F18;
loc_825E4F4C:
	// bl 0x826e42f8
	ctx.lr = 0x825E4F50;
	sub_826E42F8(ctx, base);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// andi. r11,r11,259
	ctx.r11.u64 = ctx.r11.u64 & 259;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825e4ff4
	if (!ctx.cr0.eq) goto loc_825E4FF4;
	// cmpwi cr6,r30,95
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 95, ctx.xer);
	// beq cr6,0x825e4ff4
	if (ctx.cr6.eq) goto loc_825E4FF4;
	// bl 0x826e42f8
	ctx.lr = 0x825E4F74;
	sub_826E42F8(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e4fb0
	if (ctx.cr0.eq) goto loc_825E4FB0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-24076
	ctx.r4.s64 = ctx.r11.s64 + -24076;
	// bl 0x825de538
	ctx.lr = 0x825E4F98;
	sub_825DE538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,-24100
	ctx.r4.s64 = ctx.r11.s64 + -24100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e3e80
	ctx.lr = 0x825E4FB0;
	sub_825E3E80(ctx, base);
loc_825E4FB0:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// beq 0x825e4fe0
	if (ctx.cr0.eq) goto loc_825E4FE0;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x825e4fec
	goto loc_825E4FEC;
loc_825E4FE0:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x825dfb60
	ctx.lr = 0x825E4FE8;
	sub_825DFB60(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_825E4FEC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x825e5388
	goto loc_825E5388;
loc_825E4FF4:
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x825e5014
	if (!ctx.cr6.lt) goto loc_825E5014;
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x825dfd08
	ctx.lr = 0x825E5014;
	sub_825DFD08(ctx, base);
loc_825E5014:
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r11,r30,5
	ctx.r11.s64 = ctx.r30.s64 + 5;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825e5034
	if (!ctx.cr6.gt) goto loc_825E5034;
	// addi r5,r30,32
	ctx.r5.s64 = ctx.r30.s64 + 32;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x825dfd08
	ctx.lr = 0x825E5034;
	sub_825DFD08(ctx, base);
loc_825E5034:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stbx r10,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// beq 0x825e5078
	if (ctx.cr0.eq) goto loc_825E5078;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x825e5080
	goto loc_825E5080;
loc_825E5078:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x825dfb60
	ctx.lr = 0x825E5080;
	sub_825DFB60(ctx, base);
loc_825E5080:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bl 0x826e42f8
	ctx.lr = 0x825E5088;
	sub_826E42F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// andi. r10,r10,263
	ctx.r10.u64 = ctx.r10.u64 & 263;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825e5014
	if (!ctx.cr0.eq) goto loc_825E5014;
	// cmpwi cr6,r11,95
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 95, ctx.xer);
	// beq cr6,0x825e5014
	if (ctx.cr6.eq) goto loc_825E5014;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stbx r10,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u8);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x825de870
	ctx.lr = 0x825E50C8;
	sub_825DE870(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x825e50e0
	if (ctx.cr0.eq) goto loc_825E50E0;
	// addi r3,r10,256
	ctx.r3.s64 = ctx.r10.s64 + 256;
	// b 0x825e538c
	goto loc_825E538C;
loc_825E50E0:
	// li r3,278
	ctx.r3.s64 = 278;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x825e538c
	goto loc_825E538C;
loc_825E50EC:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// beq 0x825e511c
	if (ctx.cr0.eq) goto loc_825E511C;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x825e5124
	goto loc_825E5124;
loc_825E511C:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x825dfb60
	ctx.lr = 0x825E5124;
	sub_825DFB60(ctx, base);
loc_825E5124:
	// cmpwi cr6,r3,61
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 61, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x825e5138
	if (ctx.cr6.eq) goto loc_825E5138;
	// li r3,126
	ctx.r3.s64 = 126;
	// b 0x825e538c
	goto loc_825E538C;
loc_825E5138:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// beq 0x825e5168
	if (ctx.cr0.eq) goto loc_825E5168;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x825e5174
	goto loc_825E5174;
loc_825E5168:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x825dfb60
	ctx.lr = 0x825E5170;
	sub_825DFB60(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_825E5174:
	// li r3,284
	ctx.r3.s64 = 284;
	// b 0x825e5388
	goto loc_825E5388;
loc_825E517C:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// beq 0x825e51ac
	if (ctx.cr0.eq) goto loc_825E51AC;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x825e51b4
	goto loc_825E51B4;
loc_825E51AC:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x825dfb60
	ctx.lr = 0x825E51B4;
	sub_825DFB60(ctx, base);
loc_825E51B4:
	// cmpwi cr6,r3,91
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 91, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x825e51c8
	if (ctx.cr6.eq) goto loc_825E51C8;
	// li r3,91
	ctx.r3.s64 = 91;
	// b 0x825e538c
	goto loc_825E538C;
loc_825E51C8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e4530
	ctx.lr = 0x825E51D4;
	sub_825E4530(ctx, base);
loc_825E51D4:
	// li r3,286
	ctx.r3.s64 = 286;
	// b 0x825e538c
	goto loc_825E538C;
loc_825E51DC:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// beq 0x825e520c
	if (ctx.cr0.eq) goto loc_825E520C;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x825e5214
	goto loc_825E5214;
loc_825E520C:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x825dfb60
	ctx.lr = 0x825E5214;
	sub_825DFB60(ctx, base);
loc_825E5214:
	// cmpwi cr6,r3,61
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 61, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x825e5228
	if (ctx.cr6.eq) goto loc_825E5228;
	// li r3,62
	ctx.r3.s64 = 62;
	// b 0x825e538c
	goto loc_825E538C;
loc_825E5228:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// beq 0x825e5258
	if (ctx.cr0.eq) goto loc_825E5258;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x825e5264
	goto loc_825E5264;
loc_825E5258:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x825dfb60
	ctx.lr = 0x825E5260;
	sub_825DFB60(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_825E5264:
	// li r3,282
	ctx.r3.s64 = 282;
	// b 0x825e5388
	goto loc_825E5388;
loc_825E526C:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// beq 0x825e529c
	if (ctx.cr0.eq) goto loc_825E529C;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x825e52a4
	goto loc_825E52A4;
loc_825E529C:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x825dfb60
	ctx.lr = 0x825E52A4;
	sub_825DFB60(ctx, base);
loc_825E52A4:
	// cmpwi cr6,r3,61
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 61, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x825e52b8
	if (ctx.cr6.eq) goto loc_825E52B8;
	// li r3,61
	ctx.r3.s64 = 61;
	// b 0x825e538c
	goto loc_825E538C;
loc_825E52B8:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// beq 0x825e52e8
	if (ctx.cr0.eq) goto loc_825E52E8;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x825e52f4
	goto loc_825E52F4;
loc_825E52E8:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x825dfb60
	ctx.lr = 0x825E52F0;
	sub_825DFB60(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_825E52F4:
	// li r3,281
	ctx.r3.s64 = 281;
	// b 0x825e5388
	goto loc_825E5388;
loc_825E52FC:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// beq 0x825e532c
	if (ctx.cr0.eq) goto loc_825E532C;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x825e5334
	goto loc_825E5334;
loc_825E532C:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x825dfb60
	ctx.lr = 0x825E5334;
	sub_825DFB60(ctx, base);
loc_825E5334:
	// cmpwi cr6,r3,61
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 61, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x825e5348
	if (ctx.cr6.eq) goto loc_825E5348;
	// li r3,60
	ctx.r3.s64 = 60;
	// b 0x825e538c
	goto loc_825E538C;
loc_825E5348:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// beq 0x825e5378
	if (ctx.cr0.eq) goto loc_825E5378;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x825e5384
	goto loc_825E5384;
loc_825E5378:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x825dfb60
	ctx.lr = 0x825E5380;
	sub_825DFB60(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_825E5384:
	// li r3,283
	ctx.r3.s64 = 283;
loc_825E5388:
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_825E538C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E5398"))) PPC_WEAK_FUNC(sub_825E5398);
PPC_FUNC_IMPL(__imp__sub_825E5398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825E53A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r28,r4,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r31,r11,65535
	ctx.r31.u64 = ctx.r11.u64 | 65535;
	// lwz r29,12(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// ble cr6,0x825e53e8
	if (!ctx.cr6.gt) goto loc_825E53E8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r11,-24004
	ctx.r4.s64 = ctx.r11.s64 + -24004;
	// bl 0x825e43a0
	ctx.lr = 0x825E53E8;
	sub_825E43A0(ctx, base);
loc_825E53E8:
	// lwzx r11,r29,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// rlwimi r11,r10,6,8,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0xFFFFC0) | (ctx.r11.u64 & 0xFFFFFFFFFF00003F);
	// stwx r11,r29,r28
	PPC_STORE_U32(ctx.r29.u32 + ctx.r28.u32, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E5400"))) PPC_WEAK_FUNC(sub_825E5400);
PPC_FUNC_IMPL(__imp__sub_825E5400) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r3,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E5410"))) PPC_WEAK_FUNC(sub_825E5410);
PPC_FUNC_IMPL(__imp__sub_825E5410) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x825e549c
	if (ctx.cr6.eq) goto loc_825E549C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r9,r11,-24064
	ctx.r9.s64 = ctx.r11.s64 + -24064;
loc_825E5428:
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// blt cr6,0x825e5450
	if (ctx.cr6.lt) goto loc_825E5450;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r7,r7,26
	ctx.r7.u64 = ctx.r7.u32 & 0x3F;
	// lbzx r7,r7,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// rlwinm. r7,r7,0,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x825e5454
	if (!ctx.cr0.eq) goto loc_825E5454;
loc_825E5450:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_825E5454:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r7,r11,26
	ctx.r7.u64 = ctx.r11.u32 & 0x3F;
	// cmpwi cr6,r7,24
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 24, ctx.xer);
	// bne cr6,0x825e54a4
	if (!ctx.cr6.eq) goto loc_825E54A4;
	// rlwinm r11,r11,26,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1FF;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x825e54a4
	if (!ctx.cr6.eq) goto loc_825E54A4;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,26,14,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFF;
	// addis r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -131072;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x825e5490
	if (ctx.cr6.eq) goto loc_825E5490;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_825E5490:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x825e5428
	if (!ctx.cr6.eq) goto loc_825E5428;
loc_825E549C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_825E54A4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E54B0"))) PPC_WEAK_FUNC(sub_825E54B0);
PPC_FUNC_IMPL(__imp__sub_825E54B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b8
	ctx.lr = 0x825E54B8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x825e55a8
	if (ctx.cr6.eq) goto loc_825E55A8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r24,r11,-24064
	ctx.r24.s64 = ctx.r11.s64 + -24064;
loc_825E54E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,26,14,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFF;
	// addis r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -131072;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x825e5514
	if (!ctx.cr6.eq) goto loc_825E5514;
	// li r30,-1
	ctx.r30.s64 = -1;
	// b 0x825e551c
	goto loc_825E551C;
loc_825E5514:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
loc_825E551C:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// blt cr6,0x825e5540
	if (ctx.cr6.lt) goto loc_825E5540;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r9,r9,26
	ctx.r9.u64 = ctx.r9.u32 & 0x3F;
	// lbzx r9,r9,r24
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r24.u32);
	// rlwinm. r9,r9,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825e5540
	if (ctx.cr0.eq) goto loc_825E5540;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_825E5540:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r9,r11,26
	ctx.r9.u64 = ctx.r11.u32 & 0x3F;
	// cmpwi cr6,r9,24
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 24, ctx.xer);
	// beq cr6,0x825e5558
	if (ctx.cr6.eq) goto loc_825E5558;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// b 0x825e5594
	goto loc_825E5594;
loc_825E5558:
	// rlwinm. r9,r11,0,17,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FC0;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825e5578
	if (ctx.cr0.eq) goto loc_825E5578;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,255
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 255, ctx.xer);
	// bne cr6,0x825e5570
	if (!ctx.cr6.eq) goto loc_825E5570;
	// rlwinm r9,r11,17,23,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1FF;
loc_825E5570:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// b 0x825e558c
	goto loc_825E558C;
loc_825E5578:
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// cmpwi cr6,r26,255
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 255, ctx.xer);
	// bne cr6,0x825e5588
	if (!ctx.cr6.eq) goto loc_825E5588;
	// rlwinm r9,r11,17,23,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1FF;
loc_825E5588:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_825E558C:
	// rlwimi r11,r9,24,0,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 24) & 0xFF000000) | (ctx.r11.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_825E5594:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e5398
	ctx.lr = 0x825E559C;
	sub_825E5398(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x825e54e4
	if (!ctx.cr6.eq) goto loc_825E54E4;
loc_825E55A8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E55B0"))) PPC_WEAK_FUNC(sub_825E55B0);
PPC_FUNC_IMPL(__imp__sub_825E55B0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x825e55cc
	if (!ctx.cr6.eq) goto loc_825E55CC;
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// blr 
	return;
loc_825E55CC:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
loc_825E55D4:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r11,26,14,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFF;
	// addis r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -131072;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x825e5604
	if (ctx.cr6.eq) goto loc_825E5604;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x825e55d4
	if (!ctx.cr6.eq) goto loc_825E55D4;
loc_825E5604:
	// b 0x825e5398
	sub_825E5398(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E5608"))) PPC_WEAK_FUNC(sub_825E5608);
PPC_FUNC_IMPL(__imp__sub_825E5608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r30,r11,r4
	ctx.r30.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lbz r11,71(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 71);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x825e5658
	if (!ctx.cr6.gt) goto loc_825E5658;
	// cmpwi cr6,r30,250
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 250, ctx.xer);
	// blt cr6,0x825e5650
	if (ctx.cr6.lt) goto loc_825E5650;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r11,-23976
	ctx.r4.s64 = ctx.r11.s64 + -23976;
	// bl 0x825e43a0
	ctx.lr = 0x825E5650;
	sub_825E43A0(ctx, base);
loc_825E5650:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stb r30,71(r11)
	PPC_STORE_U8(ctx.r11.u32 + 71, ctx.r30.u8);
loc_825E5658:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E5670"))) PPC_WEAK_FUNC(sub_825E5670);
PPC_FUNC_IMPL(__imp__sub_825E5670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825e5608
	ctx.lr = 0x825E5690;
	sub_825E5608(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E56B8"))) PPC_WEAK_FUNC(sub_825E56B8);
PPC_FUNC_IMPL(__imp__sub_825E56B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825E56C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x825df4b0
	ctx.lr = 0x825E56D8;
	sub_825DF4B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x825e56fc
	if (!ctx.cr6.eq) goto loc_825E56FC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfd f0,8(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x825e5794
	goto loc_825E5794;
loc_825E56FC:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r5,r30,40
	ctx.r5.s64 = ctx.r30.s64 + 40;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x825e573c
	if (!ctx.cr6.gt) goto loc_825E573C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r7,3
	ctx.r7.s64 = 196608;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r8,r11,-25376
	ctx.r8.s64 = ctx.r11.s64 + -25376;
	// ori r7,r7,65535
	ctx.r7.u64 = ctx.r7.u64 | 65535;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x825e0c88
	ctx.lr = 0x825E5738;
	sub_825E0C88(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
loc_825E573C:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// ld r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x825df578
	ctx.lr = 0x825E576C;
	sub_825DF578(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwa r11,40(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 40));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.f0.u64);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_825E5794:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E57A0"))) PPC_WEAK_FUNC(sub_825E57A0);
PPC_FUNC_IMPL(__imp__sub_825E57A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x825e56b8
	ctx.lr = 0x825E57C8;
	sub_825E56B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E57D8"))) PPC_WEAK_FUNC(sub_825E57D8);
PPC_FUNC_IMPL(__imp__sub_825E57D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,3
	ctx.r11.s64 = 3;
	// stfd f1,88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f1.u64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825e56b8
	ctx.lr = 0x825E57FC;
	sub_825E56B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E5810"))) PPC_WEAK_FUNC(sub_825E5810);
PPC_FUNC_IMPL(__imp__sub_825E5810) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r5,1
	ctx.r9.s64 = ctx.r5.s64 + 1;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwimi r8,r9,6,17,25
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 6) & 0x7FC0) | (ctx.r8.u64 & 0xFFFFFFFFFFFF803F);
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,11
	ctx.r11.s64 = 11;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E5868"))) PPC_WEAK_FUNC(sub_825E5868);
PPC_FUNC_IMPL(__imp__sub_825E5868) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E5888"))) PPC_WEAK_FUNC(sub_825E5888);
PPC_FUNC_IMPL(__imp__sub_825E5888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x825E5890;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r8,255
	ctx.r8.s64 = 255;
	// li r6,255
	ctx.r6.s64 = 255;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// bl 0x825e54b0
	ctx.lr = 0x825E58C0;
	sub_825E54B0(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r5,r30,44
	ctx.r5.s64 = ctx.r30.s64 + 44;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r29,r11,-23940
	ctx.r29.s64 = ctx.r11.s64 + -23940;
	// ble cr6,0x825e5908
	if (!ctx.cr6.gt) goto loc_825E5908;
	// lis r7,32767
	ctx.r7.s64 = 2147418112;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// ori r7,r7,65533
	ctx.r7.u64 = ctx.r7.u64 | 65533;
	// li r6,4
	ctx.r6.s64 = 4;
	// bl 0x825e0c88
	ctx.lr = 0x825E5904;
	sub_825E0C88(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
loc_825E5908:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r5,r30,48
	ctx.r5.s64 = ctx.r30.s64 + 48;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r28.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x825e5950
	if (!ctx.cr6.gt) goto loc_825E5950;
	// lis r7,32767
	ctx.r7.s64 = 2147418112;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// ori r7,r7,65533
	ctx.r7.u64 = ctx.r7.u64 | 65533;
	// li r6,4
	ctx.r6.s64 = 4;
	// bl 0x825e0c88
	ctx.lr = 0x825E594C;
	sub_825E0C88(ctx, base);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
loc_825E5950:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r27.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E5978"))) PPC_WEAK_FUNC(sub_825E5978);
PPC_FUNC_IMPL(__imp__sub_825E5978) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r5,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 9) & 0xFFFFFE00;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// rlwinm r11,r11,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// or r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 | ctx.r4.u64;
	// b 0x825e5888
	sub_825E5888(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E59A0"))) PPC_WEAK_FUNC(sub_825E59A0);
PPC_FUNC_IMPL(__imp__sub_825E59A0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r5,18,0,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 18) & 0xFFFC0000;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// or r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 | ctx.r4.u64;
	// b 0x825e5888
	sub_825E5888(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E59C0"))) PPC_WEAK_FUNC(sub_825E59C0);
PPC_FUNC_IMPL(__imp__sub_825E59C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x825e5a2c
	if (!ctx.cr6.gt) goto loc_825E5A2C;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x825e5a2c
	if (!ctx.cr6.eq) goto loc_825E5A2C;
	// rlwinm r10,r11,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// rlwinm r9,r11,17,23,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1FF;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bgt cr6,0x825e5a2c
	if (ctx.cr6.gt) goto loc_825E5A2C;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x825e5a2c
	if (ctx.cr6.gt) goto loc_825E5A2C;
	// add r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwimi r11,r10,15,8,16
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 15) & 0xFF8000) | (ctx.r11.u64 & 0xFFFFFFFFFF007FFF);
	// stw r11,-4(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4, ctx.r11.u32);
	// blr 
	return;
loc_825E5A2C:
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r9,r4,9,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 9) & 0xFFFFFE00;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,3
	ctx.r4.s64 = 3;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwimi r4,r11,15,0,16
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 15) & 0xFFFF8000) | (ctx.r4.u64 & 0xFFFFFFFF00007FFF);
	// b 0x825e5888
	sub_825E5888(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E5A50"))) PPC_WEAK_FUNC(sub_825E5A50);
PPC_FUNC_IMPL(__imp__sub_825E5A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lis r4,127
	ctx.r4.s64 = 8323072;
	// ori r4,r4,65428
	ctx.r4.u64 = ctx.r4.u64 | 65428;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x825e5888
	ctx.lr = 0x825E5A88;
	sub_825E5888(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e55b0
	ctx.lr = 0x825E5A9C;
	sub_825E55B0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E5AB8"))) PPC_WEAK_FUNC(sub_825E5AB8);
PPC_FUNC_IMPL(__imp__sub_825E5AB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// b 0x825e55b0
	sub_825E55B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E5AD0"))) PPC_WEAK_FUNC(sub_825E5AD0);
PPC_FUNC_IMPL(__imp__sub_825E5AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x825e5bbc
	if (ctx.cr6.eq) goto loc_825E5BBC;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x825e5ba4
	if (ctx.cr6.eq) goto loc_825E5BA4;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x825e5b90
	if (ctx.cr6.eq) goto loc_825E5B90;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x825e5b1c
	if (ctx.cr6.eq) goto loc_825E5B1C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x825e5bc4
	if (!ctx.cr6.eq) goto loc_825E5BC4;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x825e5810
	ctx.lr = 0x825E5B18;
	sub_825E5810(ctx, base);
	// b 0x825e5bc4
	goto loc_825E5BC4;
loc_825E5B1C:
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x825e5b40
	if (ctx.cr6.lt) goto loc_825E5B40;
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// bge cr6,0x825e5b40
	if (!ctx.cr6.lt) goto loc_825E5B40;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
loc_825E5B40:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x825e5b60
	if (ctx.cr6.lt) goto loc_825E5B60;
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// bge cr6,0x825e5b60
	if (!ctx.cr6.lt) goto loc_825E5B60;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
loc_825E5B60:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
loc_825E5B7C:
	// rlwimi r4,r11,6,0,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 6) & 0xFFFFFFC0) | (ctx.r4.u64 & 0xFFFFFFFF0000003F);
loc_825E5B80:
	// bl 0x825e5888
	ctx.lr = 0x825E5B84;
	sub_825E5888(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// b 0x825e5bc0
	goto loc_825E5BC0;
loc_825E5B90:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x825e5b7c
	goto loc_825E5B7C;
loc_825E5BA4:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r4,r11,15,0,16
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 15) & 0xFFFF8000) | (ctx.r4.u64 & 0xFFFFFFFF00007FFF);
	// b 0x825e5b80
	goto loc_825E5B80;
loc_825E5BBC:
	// li r11,11
	ctx.r11.s64 = 11;
loc_825E5BC0:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_825E5BC4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E5BD8"))) PPC_WEAK_FUNC(sub_825E5BD8);
PPC_FUNC_IMPL(__imp__sub_825E5BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x825E5BE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x825e5ad0
	ctx.lr = 0x825E5BF4;
	sub_825E5AD0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x825e5cb0
	if (ctx.cr6.eq) goto loc_825E5CB0;
	// ble cr6,0x825e5ccc
	if (!ctx.cr6.gt) goto loc_825E5CCC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x825e5c80
	if (!ctx.cr6.gt) goto loc_825E5C80;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x825e5c68
	if (ctx.cr6.eq) goto loc_825E5C68;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x825e5c48
	if (ctx.cr6.eq) goto loc_825E5C48;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x825e5ccc
	if (!ctx.cr6.eq) goto loc_825E5CCC;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x825e5cc0
	if (ctx.cr6.eq) goto loc_825E5CC0;
	// rlwinm r10,r30,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 9) & 0xFFFFFE00;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r4,r11,15,0,16
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFFFF8000;
loc_825E5C3C:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x825e5ca4
	goto loc_825E5CA4;
loc_825E5C48:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwimi r9,r30,24,0,7
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r30.u32, 24) & 0xFF000000) | (ctx.r9.u64 & 0xFFFFFFFF00FFFFFF);
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// b 0x825e5cc0
	goto loc_825E5CC0;
loc_825E5C68:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r10,r30,18,0,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 18) & 0xFFFC0000;
	// li r4,1
	ctx.r4.s64 = 1;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwimi r4,r11,6,0,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 6) & 0xFFFFFFC0) | (ctx.r4.u64 & 0xFFFFFFFF0000003F);
	// b 0x825e5c3c
	goto loc_825E5C3C;
loc_825E5C80:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r9,r30,9,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 9) & 0xFFFFFE00;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwimi r4,r11,15,0,16
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 15) & 0xFFFF8000) | (ctx.r4.u64 & 0xFFFFFFFF00007FFF);
loc_825E5CA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e5888
	ctx.lr = 0x825E5CAC;
	sub_825E5888(ctx, base);
	// b 0x825e5cc0
	goto loc_825E5CC0;
loc_825E5CB0:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e59c0
	ctx.lr = 0x825E5CC0;
	sub_825E59C0(ctx, base);
loc_825E5CC0:
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_825E5CCC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E5CD8"))) PPC_WEAK_FUNC(sub_825E5CD8);
PPC_FUNC_IMPL(__imp__sub_825E5CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b8
	ctx.lr = 0x825E5CE0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x825e5bd8
	ctx.lr = 0x825E5CF4;
	sub_825E5BD8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x825e5d10
	if (!ctx.cr6.eq) goto loc_825E5D10;
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e55b0
	ctx.lr = 0x825E5D10;
	sub_825E55B0(ctx, base);
loc_825E5D10:
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r24,-1
	ctx.r24.s64 = -1;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpw cr6,r4,r6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x825e5e18
	if (ctx.cr6.eq) goto loc_825E5E18;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// bl 0x825e5410
	ctx.lr = 0x825E5D38;
	sub_825E5410(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825e5d58
	if (!ctx.cr0.eq) goto loc_825E5D58;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e5410
	ctx.lr = 0x825E5D50;
	sub_825E5410(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825e5dd0
	if (ctx.cr0.eq) goto loc_825E5DD0;
loc_825E5D58:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x825e5d74
	if (ctx.cr6.eq) goto loc_825E5D74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e5a50
	ctx.lr = 0x825E5D70;
	sub_825E5A50(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_825E5D74:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r29,r25,24,0,7
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 24) & 0xFF000000;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r29,66
	ctx.r4.u64 = ctx.r29.u64 | 66;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x825e5888
	ctx.lr = 0x825E5D94;
	sub_825E5888(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// ori r4,r29,32770
	ctx.r4.u64 = ctx.r29.u64 | 32770;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x825e5888
	ctx.lr = 0x825E5DB4;
	sub_825E5888(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x825e55b0
	ctx.lr = 0x825E5DD0;
	sub_825E55B0(ctx, base);
loc_825E5DD0:
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x825e54b0
	ctx.lr = 0x825E5DF8;
	sub_825E54B0(ctx, base);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// li r8,255
	ctx.r8.s64 = 255;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e54b0
	ctx.lr = 0x825E5E18;
	sub_825E54B0(ctx, base);
loc_825E5E18:
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r24,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r24.u32);
	// stw r24,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r24.u32);
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E5E38"))) PPC_WEAK_FUNC(sub_825E5E38);
PPC_FUNC_IMPL(__imp__sub_825E5E38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825e5ad0
	ctx.lr = 0x825E5E58;
	sub_825E5AD0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x825e5e88
	if (!ctx.cr6.eq) goto loc_825E5E88;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x825e5e88
	if (ctx.cr6.lt) goto loc_825E5E88;
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// bge cr6,0x825e5e88
	if (!ctx.cr6.lt) goto loc_825E5E88;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_825E5E88:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e5608
	ctx.lr = 0x825E5E94;
	sub_825E5608(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x825e5cd8
	ctx.lr = 0x825E5EB0;
	sub_825E5CD8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E5EC8"))) PPC_WEAK_FUNC(sub_825E5EC8);
PPC_FUNC_IMPL(__imp__sub_825E5EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x825e5ad0
	ctx.lr = 0x825E5EE8;
	sub_825E5AD0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x825e5f24
	if (!ctx.cr6.eq) goto loc_825E5F24;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x825e5f30
	if (ctx.cr6.eq) goto loc_825E5F30;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825e5f24
	if (ctx.cr6.lt) goto loc_825E5F24;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e5cd8
	ctx.lr = 0x825E5F20;
	sub_825E5CD8(ctx, base);
	// b 0x825e5f30
	goto loc_825E5F30;
loc_825E5F24:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e5e38
	ctx.lr = 0x825E5F30;
	sub_825E5E38(ctx, base);
loc_825E5F30:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E5F50"))) PPC_WEAK_FUNC(sub_825E5F50);
PPC_FUNC_IMPL(__imp__sub_825E5F50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x825e5f64
	if (ctx.cr6.eq) goto loc_825E5F64;
	// b 0x825e5ec8
	sub_825E5EC8(ctx, base);
	return;
loc_825E5F64:
	// b 0x825e5ad0
	sub_825E5AD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E5F68"))) PPC_WEAK_FUNC(sub_825E5F68);
PPC_FUNC_IMPL(__imp__sub_825E5F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x825e5f9c
	if (ctx.cr6.eq) goto loc_825E5F9C;
	// bl 0x825e5ec8
	ctx.lr = 0x825E5F98;
	sub_825E5EC8(ctx, base);
	// b 0x825e5fa0
	goto loc_825E5FA0;
loc_825E5F9C:
	// bl 0x825e5ad0
	ctx.lr = 0x825E5FA0;
	sub_825E5AD0(ctx, base);
loc_825E5FA0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x825e5fe8
	if (ctx.cr6.eq) goto loc_825E5FE8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x825e5fc4
	if (!ctx.cr6.eq) goto loc_825E5FC4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r11,250
	ctx.r3.s64 = ctx.r11.s64 + 250;
	// cmpwi cr6,r3,511
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 511, ctx.xer);
	// ble cr6,0x825e5fd0
	if (!ctx.cr6.gt) goto loc_825E5FD0;
loc_825E5FC4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e5ec8
	ctx.lr = 0x825E5FD0;
	sub_825E5EC8(ctx, base);
loc_825E5FD0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_825E5FE8:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// addi r11,r11,250
	ctx.r11.s64 = ctx.r11.s64 + 250;
	// cmpwi cr6,r11,511
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 511, ctx.xer);
	// bgt cr6,0x825e5fc4
	if (ctx.cr6.gt) goto loc_825E5FC4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825e56b8
	ctx.lr = 0x825E6020;
	sub_825E56B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r3,r11,250
	ctx.r3.s64 = ctx.r11.s64 + 250;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x825e5fd0
	goto loc_825E5FD0;
}

__attribute__((alias("__imp__sub_825E6038"))) PPC_WEAK_FUNC(sub_825E6038);
PPC_FUNC_IMPL(__imp__sub_825E6038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x825E6040;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x825e613c
	if (ctx.cr6.eq) goto loc_825E613C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x825e60d4
	if (ctx.cr6.eq) goto loc_825E60D4;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x825e60ac
	if (ctx.cr6.eq) goto loc_825E60AC;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x825e6108
	if (!ctx.cr6.eq) goto loc_825E6108;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825e5f68
	ctx.lr = 0x825E607C;
	sub_825E5F68(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r10,r10,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFFFFFE00;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,9
	ctx.r4.s64 = 9;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFFFFFE00;
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwimi r4,r11,6,0,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 6) & 0xFFFFFFC0) | (ctx.r4.u64 & 0xFFFFFFFF0000003F);
	// b 0x825e6100
	goto loc_825E6100;
loc_825E60AC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e5ec8
	ctx.lr = 0x825E60B8;
	sub_825E5EC8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r4,7
	ctx.r4.s64 = 7;
	// rlwinm r11,r11,18,0,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xFFFC0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwimi r4,r11,6,0,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 6) & 0xFFFFFFC0) | (ctx.r4.u64 & 0xFFFFFFFF0000003F);
	// b 0x825e60f8
	goto loc_825E60F8;
loc_825E60D4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e5ec8
	ctx.lr = 0x825E60E0;
	sub_825E5EC8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r4,8
	ctx.r4.s64 = 8;
	// rlwinm r11,r11,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwimi r4,r11,15,0,16
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 15) & 0xFFFF8000) | (ctx.r4.u64 & 0xFFFFFFFF00007FFF);
loc_825E60F8:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
loc_825E6100:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e5888
	ctx.lr = 0x825E6108;
	sub_825E5888(ctx, base);
loc_825E6108:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x825e617c
	if (!ctx.cr6.eq) goto loc_825E617C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x825e617c
	if (ctx.cr6.lt) goto loc_825E617C;
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// bge cr6,0x825e617c
	if (!ctx.cr6.lt) goto loc_825E617C;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// b 0x825e617c
	goto loc_825E617C;
loc_825E613C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x825e616c
	if (!ctx.cr6.eq) goto loc_825E616C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x825e616c
	if (ctx.cr6.lt) goto loc_825E616C;
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// bge cr6,0x825e616c
	if (!ctx.cr6.lt) goto loc_825E616C;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_825E616C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e5cd8
	ctx.lr = 0x825E617C;
	sub_825E5CD8(ctx, base);
loc_825E617C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E6188"))) PPC_WEAK_FUNC(sub_825E6188);
PPC_FUNC_IMPL(__imp__sub_825E6188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825E6190;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x825e5ec8
	ctx.lr = 0x825E61A4;
	sub_825E5EC8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x825e61d4
	if (!ctx.cr6.eq) goto loc_825E61D4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x825e61d4
	if (ctx.cr6.lt) goto loc_825E61D4;
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// bge cr6,0x825e61d4
	if (!ctx.cr6.lt) goto loc_825E61D4;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_825E61D4:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r28,36(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e5608
	ctx.lr = 0x825E61E4;
	sub_825E5608(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x825e5f68
	ctx.lr = 0x825E61FC;
	sub_825E5F68(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r9,r28,9,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 9) & 0xFFFFFE00;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r10,r10,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFFFFFE00;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwimi r4,r11,6,0,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 6) & 0xFFFFFFC0) | (ctx.r4.u64 & 0xFFFFFFFF0000003F);
	// bl 0x825e5888
	ctx.lr = 0x825E622C;
	sub_825E5888(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x825e625c
	if (!ctx.cr6.eq) goto loc_825E625C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x825e625c
	if (ctx.cr6.lt) goto loc_825E625C;
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// bge cr6,0x825e625c
	if (!ctx.cr6.lt) goto loc_825E625C;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_825E625C:
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E6270"))) PPC_WEAK_FUNC(sub_825E6270);
PPC_FUNC_IMPL(__imp__sub_825E6270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x825E6278;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x825e62d8
	if (!ctx.cr6.eq) goto loc_825E62D8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// clrlwi r10,r4,26
	ctx.r10.u64 = ctx.r4.u32 & 0x3F;
	// cmpwi cr6,r10,18
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 18, ctx.xer);
	// bne cr6,0x825e62d8
	if (!ctx.cr6.eq) goto loc_825E62D8;
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// li r9,6399
	ctx.r9.s64 = 6399;
	// rlwimi r4,r11,1,25,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0x40) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFBF);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwimi r4,r9,24,26,7
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r9.u32, 24) & 0xFFFFFFFFFF00003F) | (ctx.r4.u64 & 0xFFFFC0);
	// rlwimi r4,r9,24,17,24
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r9.u32, 24) & 0x7F80) | (ctx.r4.u64 & 0xFFFFFFFFFFFF807F);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x825e6350
	goto loc_825E6350;
loc_825E62D8:
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x825e6314
	if (ctx.cr6.eq) goto loc_825E6314;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e5608
	ctx.lr = 0x825E62EC;
	sub_825E5608(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x825e5bd8
	ctx.lr = 0x825E6308;
	sub_825E5BD8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x825e6338
	if (!ctx.cr6.eq) goto loc_825E6338;
loc_825E6314:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x825e6338
	if (ctx.cr6.lt) goto loc_825E6338;
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// bge cr6,0x825e6338
	if (!ctx.cr6.lt) goto loc_825E6338;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_825E6338:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// rlwinm r11,r11,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
	// ori r4,r4,24
	ctx.r4.u64 = ctx.r4.u64 | 24;
	// or r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 | ctx.r29.u64;
	// rlwimi r4,r11,6,8,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 6) & 0xFFFFC0) | (ctx.r4.u64 & 0xFFFFFFFFFF00003F);
loc_825E6350:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x825e5888
	ctx.lr = 0x825E6360;
	sub_825E5888(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e5a50
	ctx.lr = 0x825E6368;
	sub_825E5A50(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E6370"))) PPC_WEAK_FUNC(sub_825E6370);
PPC_FUNC_IMPL(__imp__sub_825E6370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x825e5ad0
	ctx.lr = 0x825E6390;
	sub_825E5AD0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x825e6434
	if (ctx.cr6.eq) goto loc_825E6434;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x825e6428
	if (ctx.cr6.eq) goto loc_825E6428;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x825e6434
	if (ctx.cr6.eq) goto loc_825E6434;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x825e63c8
	if (ctx.cr6.eq) goto loc_825E63C8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e6270
	ctx.lr = 0x825E63C4;
	sub_825E6270(ctx, base);
	// b 0x825e6438
	goto loc_825E6438;
loc_825E63C8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// blt cr6,0x825e6404
	if (ctx.cr6.lt) goto loc_825E6404;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r9,r9,-24064
	ctx.r9.s64 = ctx.r9.s64 + -24064;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r8,r8,26
	ctx.r8.u64 = ctx.r8.u32 & 0x3F;
	// lbzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm. r9,r9,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825e6408
	if (!ctx.cr0.eq) goto loc_825E6408;
loc_825E6404:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_825E6408:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r11,0,0,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwimi r11,r9,19,7,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 19) & 0x1000000) | (ctx.r11.u64 & 0xFFFFFFFFFEFFFFFF);
	// clrlwi r11,r11,7
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFF;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x825e6438
	goto loc_825E6438;
loc_825E6428:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e5a50
	ctx.lr = 0x825E6430;
	sub_825E5A50(ctx, base);
	// b 0x825e6438
	goto loc_825E6438;
loc_825E6434:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_825E6438:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e55b0
	ctx.lr = 0x825E6448;
	sub_825E55B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E6460"))) PPC_WEAK_FUNC(sub_825E6460);
PPC_FUNC_IMPL(__imp__sub_825E6460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x825e5ad0
	ctx.lr = 0x825E6480;
	sub_825E5AD0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x825e64cc
	if (ctx.cr6.eq) goto loc_825E64CC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x825e64c0
	if (ctx.cr6.eq) goto loc_825E64C0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x825e64cc
	if (ctx.cr6.eq) goto loc_825E64CC;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x825e64b8
	if (ctx.cr6.eq) goto loc_825E64B8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e6270
	ctx.lr = 0x825E64B4;
	sub_825E6270(ctx, base);
	// b 0x825e64d0
	goto loc_825E64D0;
loc_825E64B8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x825e64d0
	goto loc_825E64D0;
loc_825E64C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e5a50
	ctx.lr = 0x825E64C8;
	sub_825E5A50(ctx, base);
	// b 0x825e64d0
	goto loc_825E64D0;
loc_825E64CC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_825E64D0:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e55b0
	ctx.lr = 0x825E64E0;
	sub_825E55B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E64F8"))) PPC_WEAK_FUNC(sub_825E64F8);
PPC_FUNC_IMPL(__imp__sub_825E64F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825e5ad0
	ctx.lr = 0x825E6518;
	sub_825E5AD0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x825e663c
	if (ctx.cr6.eq) goto loc_825E663C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x825e6634
	if (ctx.cr6.eq) goto loc_825E6634;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x825e663c
	if (ctx.cr6.eq) goto loc_825E663C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x825e6634
	if (ctx.cr6.eq) goto loc_825E6634;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x825e65d8
	if (ctx.cr6.eq) goto loc_825E65D8;
	// addi r10,r11,-10
	ctx.r10.s64 = ctx.r11.s64 + -10;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x825e6644
	if (ctx.cr6.gt) goto loc_825E6644;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x825e658c
	if (ctx.cr6.eq) goto loc_825E658C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e5608
	ctx.lr = 0x825E6564;
	sub_825E5608(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x825e5bd8
	ctx.lr = 0x825E6580;
	sub_825E5BD8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x825e65b0
	if (!ctx.cr6.eq) goto loc_825E65B0;
loc_825E658C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x825e65b0
	if (ctx.cr6.lt) goto loc_825E65B0;
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// bge cr6,0x825e65b0
	if (!ctx.cr6.lt) goto loc_825E65B0;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_825E65B0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r4,r11,15,0,16
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 15) & 0xFFFF8000) | (ctx.r4.u64 & 0xFFFFFFFF00007FFF);
	// bl 0x825e5888
	ctx.lr = 0x825E65CC;
	sub_825E5888(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// b 0x825e6640
	goto loc_825E6640;
loc_825E65D8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// blt cr6,0x825e6618
	if (ctx.cr6.lt) goto loc_825E6618;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r9,r9,-24064
	ctx.r9.s64 = ctx.r9.s64 + -24064;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r8,r8,26
	ctx.r8.u64 = ctx.r8.u32 & 0x3F;
	// lbzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm. r9,r9,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825e6618
	if (ctx.cr0.eq) goto loc_825E6618;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_825E6618:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,0,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF000000;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwimi r10,r9,19,7,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 19) & 0x1000000) | (ctx.r10.u64 & 0xFFFFFFFFFEFFFFFF);
	// clrlwi r10,r10,7
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFF;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x825e6644
	goto loc_825E6644;
loc_825E6634:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x825e6640
	goto loc_825E6640;
loc_825E663C:
	// li r11,2
	ctx.r11.s64 = 2;
loc_825E6640:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_825E6644:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E6670"))) PPC_WEAK_FUNC(sub_825E6670);
PPC_FUNC_IMPL(__imp__sub_825E6670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x825e5f68
	ctx.lr = 0x825E668C;
	sub_825E5F68(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E66B0"))) PPC_WEAK_FUNC(sub_825E66B0);
PPC_FUNC_IMPL(__imp__sub_825E66B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bne cr6,0x825e67b4
	if (!ctx.cr6.eq) goto loc_825E67B4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x825e66f0
	if (ctx.cr6.eq) goto loc_825E66F0;
	// bl 0x825e5ec8
	ctx.lr = 0x825E66EC;
	sub_825E5EC8(ctx, base);
	// b 0x825e66f4
	goto loc_825E66F4;
loc_825E66F0:
	// bl 0x825e5ad0
	ctx.lr = 0x825E66F4;
	sub_825E5AD0(ctx, base);
loc_825E66F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x825e674c
	if (!ctx.cr6.eq) goto loc_825E674C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x825e674c
	if (!ctx.cr6.eq) goto loc_825E674C;
	// lfd f0,8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825e56b8
	ctx.lr = 0x825E6744;
	sub_825E56B8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// b 0x825e67b8
	goto loc_825E67B8;
loc_825E674C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e5ec8
	ctx.lr = 0x825E6758;
	sub_825E5EC8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x825e6788
	if (!ctx.cr6.eq) goto loc_825E6788;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x825e6788
	if (ctx.cr6.lt) goto loc_825E6788;
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// bge cr6,0x825e6788
	if (!ctx.cr6.lt) goto loc_825E6788;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
loc_825E6788:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r4,r11,15,0,16
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 15) & 0xFFFF8000) | (ctx.r4.u64 & 0xFFFFFFFF00007FFF);
	// bl 0x825e5888
	ctx.lr = 0x825E67A4;
	sub_825E5888(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x825e67b8
	goto loc_825E67B8;
loc_825E67B4:
	// bl 0x825e64f8
	ctx.lr = 0x825E67B8;
	sub_825E64F8(ctx, base);
loc_825E67B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E67D0"))) PPC_WEAK_FUNC(sub_825E67D0);
PPC_FUNC_IMPL(__imp__sub_825E67D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// beq cr6,0x825e6864
	if (ctx.cr6.eq) goto loc_825E6864;
	// cmpwi cr6,r4,12
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 12, ctx.xer);
	// beq cr6,0x825e6838
	if (ctx.cr6.eq) goto loc_825E6838;
	// cmpwi cr6,r4,13
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 13, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq cr6,0x825e6810
	if (ctx.cr6.eq) goto loc_825E6810;
	// bl 0x825e5f68
	ctx.lr = 0x825E680C;
	sub_825E5F68(ctx, base);
	// b 0x825e686c
	goto loc_825E686C;
loc_825E6810:
	// bl 0x825e6460
	ctx.lr = 0x825E6814;
	sub_825E6460(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x825e55b0
	ctx.lr = 0x825E682C;
	sub_825E55B0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// b 0x825e686c
	goto loc_825E686C;
loc_825E6838:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825e6370
	ctx.lr = 0x825E6840;
	sub_825E6370(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x825e55b0
	ctx.lr = 0x825E6858;
	sub_825E55B0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// b 0x825e686c
	goto loc_825E686C;
loc_825E6864:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825e5e38
	ctx.lr = 0x825E686C;
	sub_825E5E38(ctx, base);
loc_825E686C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E6888"))) PPC_WEAK_FUNC(sub_825E6888);
PPC_FUNC_IMPL(__imp__sub_825E6888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// bgt cr6,0x825e68d4
	if (ctx.cr6.gt) goto loc_825E68D4;
	// rlwinm r11,r6,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 9) & 0xFFFFFE00;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r5,12
	ctx.r9.s64 = ctx.r5.s64 + 12;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// or r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 | ctx.r9.u64;
	// bl 0x825e5888
	ctx.lr = 0x825E68CC;
	sub_825E5888(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x825e6944
	goto loc_825E6944;
loc_825E68D4:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r5,10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 10, ctx.xer);
	// blt cr6,0x825e68f0
	if (ctx.cr6.lt) goto loc_825E68F0;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// b 0x825e68fc
	goto loc_825E68FC;
loc_825E68F0:
	// cmpwi cr6,r5,6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 6, ctx.xer);
	// bne cr6,0x825e68fc
	if (!ctx.cr6.eq) goto loc_825E68FC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825E68FC:
	// rlwinm r11,r11,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r5,-6
	ctx.r9.s64 = ctx.r5.s64 + -6;
	// or r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 | ctx.r6.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r8,r8,9,0,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 9) & 0xFFFFFE00;
	// addi r11,r11,-24028
	ctx.r11.s64 = ctx.r11.s64 + -24028;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// or r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 | ctx.r7.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// or r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 | ctx.r11.u64;
	// bl 0x825e5888
	ctx.lr = 0x825E6938;
	sub_825E5888(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e5a50
	ctx.lr = 0x825E6940;
	sub_825E5A50(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
loc_825E6944:
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E6968"))) PPC_WEAK_FUNC(sub_825E6968);
PPC_FUNC_IMPL(__imp__sub_825E6968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x825E6970;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r27,5
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 5, ctx.xer);
	// beq cr6,0x825e6aa8
	if (ctx.cr6.eq) goto loc_825E6AA8;
	// cmpwi cr6,r27,12
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 12, ctx.xer);
	// beq cr6,0x825e6a6c
	if (ctx.cr6.eq) goto loc_825E6A6C;
	// cmpwi cr6,r27,13
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 13, ctx.xer);
	// beq cr6,0x825e6a30
	if (ctx.cr6.eq) goto loc_825E6A30;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x825e5f68
	ctx.lr = 0x825E69A4;
	sub_825E5F68(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e5f68
	ctx.lr = 0x825E69B4;
	sub_825E5F68(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x825e69e8
	if (!ctx.cr6.eq) goto loc_825E69E8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x825e69e8
	if (ctx.cr6.lt) goto loc_825E69E8;
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// bge cr6,0x825e69e8
	if (!ctx.cr6.lt) goto loc_825E69E8;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_825E69E8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x825e6a18
	if (!ctx.cr6.eq) goto loc_825E6A18;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x825e6a18
	if (ctx.cr6.lt) goto loc_825E6A18;
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// bge cr6,0x825e6a18
	if (!ctx.cr6.lt) goto loc_825E6A18;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_825E6A18:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e6888
	ctx.lr = 0x825E6A2C;
	sub_825E6888(ctx, base);
	// b 0x825e6bf4
	goto loc_825E6BF4;
loc_825E6A30:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825e5ad0
	ctx.lr = 0x825E6A38;
	sub_825E5AD0(ctx, base);
	// addi r4,r29,12
	ctx.r4.s64 = ctx.r29.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x825e55b0
	ctx.lr = 0x825E6A48;
	sub_825E55B0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// b 0x825e6bf4
	goto loc_825E6BF4;
loc_825E6A6C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825e5ad0
	ctx.lr = 0x825E6A74;
	sub_825E5AD0(ctx, base);
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x825e55b0
	ctx.lr = 0x825E6A84;
	sub_825E55B0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// b 0x825e6bf4
	goto loc_825E6BF4;
loc_825E6AA8:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x825e6ac4
	if (ctx.cr6.eq) goto loc_825E6AC4;
	// bl 0x825e5ec8
	ctx.lr = 0x825E6AC0;
	sub_825E5EC8(ctx, base);
	// b 0x825e6ac8
	goto loc_825E6AC8;
loc_825E6AC4:
	// bl 0x825e5ad0
	ctx.lr = 0x825E6AC8;
	sub_825E5AD0(ctx, base);
loc_825E6AC8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x825e6b54
	if (!ctx.cr6.eq) goto loc_825E6B54;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// bne cr6,0x825e6b54
	if (!ctx.cr6.eq) goto loc_825E6B54;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x825e6b24
	if (!ctx.cr6.eq) goto loc_825E6B24;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x825e6b24
	if (ctx.cr6.lt) goto loc_825E6B24;
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// bge cr6,0x825e6b24
	if (!ctx.cr6.lt) goto loc_825E6B24;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_825E6B24:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwimi r8,r9,15,8,16
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 15) & 0xFF8000) | (ctx.r8.u64 & 0xFFFFFFFFFF007FFF);
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// b 0x825e6bf4
	goto loc_825E6BF4;
loc_825E6B54:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e5e38
	ctx.lr = 0x825E6B60;
	sub_825E5E38(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x825e6b90
	if (!ctx.cr6.eq) goto loc_825E6B90;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x825e6b90
	if (ctx.cr6.lt) goto loc_825E6B90;
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// bge cr6,0x825e6b90
	if (!ctx.cr6.lt) goto loc_825E6B90;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_825E6B90:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x825e6bc0
	if (!ctx.cr6.eq) goto loc_825E6BC0;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x825e6bc0
	if (ctx.cr6.lt) goto loc_825E6BC0;
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// bge cr6,0x825e6bc0
	if (!ctx.cr6.lt) goto loc_825E6BC0;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_825E6BC0:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,19
	ctx.r4.s64 = 19;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r10,r10,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFFFFFE00;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwimi r4,r11,6,0,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 6) & 0xFFFFFFC0) | (ctx.r4.u64 & 0xFFFFFFFF0000003F);
	// bl 0x825e5888
	ctx.lr = 0x825E6BE8;
	sub_825E5888(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_825E6BF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E6C00"))) PPC_WEAK_FUNC(sub_825E6C00);
PPC_FUNC_IMPL(__imp__sub_825E6C00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x825e6c1c
	if (!ctx.cr6.eq) goto loc_825E6C1C;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// b 0x825e55b0
	sub_825E55B0(ctx, base);
	return;
loc_825E6C1C:
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// li r8,255
	ctx.r8.s64 = 255;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// b 0x825e54b0
	sub_825E54B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E6C30"))) PPC_WEAK_FUNC(sub_825E6C30);
PPC_FUNC_IMPL(__imp__sub_825E6C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-23920
	ctx.r11.s64 = ctx.r11.s64 + -23920;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x825e6c7c
	if (ctx.cr0.eq) goto loc_825E6C7C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E6C78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
loc_825E6C7C:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825e6ca0
	if (ctx.cr0.eq) goto loc_825E6CA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E6C9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
loc_825E6CA0:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825e6cb4
	if (ctx.cr0.eq) goto loc_825E6CB4;
	// bl 0x82186190
	ctx.lr = 0x825E6CB0;
	sub_82186190(ctx, base);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
loc_825E6CB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e6f60
	ctx.lr = 0x825E6CBC;
	sub_825E6F60(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E6CD8"))) PPC_WEAK_FUNC(sub_825E6CD8);
PPC_FUNC_IMPL(__imp__sub_825E6CD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825e6cec
	if (ctx.cr0.eq) goto loc_825E6CEC;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// blr 
	return;
loc_825E6CEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E6CF8"))) PPC_WEAK_FUNC(sub_825E6CF8);
PPC_FUNC_IMPL(__imp__sub_825E6CF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825E6D00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x825e6f28
	ctx.lr = 0x825E6D14;
	sub_825E6F28(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,21328
	ctx.r10.s64 = 1397751808;
	// addi r11,r11,-23920
	ctx.r11.s64 = ctx.r11.s64 + -23920;
	// ori r10,r10,21314
	ctx.r10.u64 = ctx.r10.u64 | 21314;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// sth r29,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r29.u16);
	// bge cr6,0x825e6d40
	if (!ctx.cr6.lt) goto loc_825E6D40;
	// li r30,64
	ctx.r30.s64 = 64;
loc_825E6D40:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x825e6f70
	ctx.lr = 0x825E6D48;
	sub_825E6F70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825e6d60
	if (ctx.cr0.eq) goto loc_825E6D60;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825e7060
	ctx.lr = 0x825E6D58;
	sub_825E7060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x825e6d64
	goto loc_825E6D64;
loc_825E6D60:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_825E6D64:
	// li r3,160
	ctx.r3.s64 = 160;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x825e6f70
	ctx.lr = 0x825E6D70;
	sub_825E6F70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825e6d80
	if (ctx.cr0.eq) goto loc_825E6D80;
	// bl 0x825e71c0
	ctx.lr = 0x825E6D7C;
	sub_825E71C0(ctx, base);
	// b 0x825e6d84
	goto loc_825E6D84;
loc_825E6D80:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_825E6D84:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// li r10,1024
	ctx.r10.s64 = 1024;
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// lis r9,819
	ctx.r9.s64 = 53673984;
	// stw r29,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r29.u32);
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// mulli r3,r28,80
	ctx.r3.s64 = ctx.r28.s64 * 80;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// ori r9,r9,13107
	ctx.r9.u64 = ctx.r9.u64 | 13107;
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, ctx.xer);
	// lfs f13,-9808(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9808);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f13,68(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f12,5808(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5808);
	ctx.f12.f64 = double(temp.f32);
	// li r11,768
	ctx.r11.s64 = 768;
	// stfs f12,72(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// ble cr6,0x825e6dec
	if (!ctx.cr6.gt) goto loc_825E6DEC;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_825E6DEC:
	// bl 0x82186158
	ctx.lr = 0x825E6DF0;
	sub_82186158(ctx, base);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x825e6e24
	if (!ctx.cr6.gt) goto loc_825E6E24;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_825E6E08:
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r29,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r29.u32);
	// addi r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 + 80;
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x825e6e08
	if (ctx.cr6.lt) goto loc_825E6E08;
loc_825E6E24:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8262fd50
	ctx.lr = 0x825E6E2C;
	sub_8262FD50(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825e6e44
	if (ctx.cr6.eq) goto loc_825E6E44;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825e6e50
	if (!ctx.cr6.eq) goto loc_825E6E50;
loc_825E6E44:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
loc_825E6E50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E6E60"))) PPC_WEAK_FUNC(sub_825E6E60);
PPC_FUNC_IMPL(__imp__sub_825E6E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825e6c30
	ctx.lr = 0x825E6E80;
	sub_825E6C30(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e6e90
	if (ctx.cr0.eq) goto loc_825E6E90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e6f78
	ctx.lr = 0x825E6E90;
	sub_825E6F78(ctx, base);
loc_825E6E90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E6EB0"))) PPC_WEAK_FUNC(sub_825E6EB0);
PPC_FUNC_IMPL(__imp__sub_825E6EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r31,r11,-17752
	ctx.r31.s64 = ctx.r11.s64 + -17752;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825e6f14
	if (ctx.cr6.eq) goto loc_825E6F14;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825e6efc
	if (ctx.cr6.eq) goto loc_825E6EFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E6EF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_825E6EFC:
	// bl 0x825e7f98
	ctx.lr = 0x825E6F00;
	sub_825E7F98(ctx, base);
	// bl 0x825e7d78
	ctx.lr = 0x825E6F04;
	sub_825E7D78(ctx, base);
	// bl 0x825e78e0
	ctx.lr = 0x825E6F08;
	sub_825E78E0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_825E6F14:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E6F28"))) PPC_WEAK_FUNC(sub_825E6F28);
PPC_FUNC_IMPL(__imp__sub_825E6F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,16961
	ctx.r10.s64 = 1111556096;
	// addi r11,r11,-23916
	ctx.r11.s64 = ctx.r11.s64 + -23916;
	// ori r9,r10,21317
	ctx.r9.u64 = ctx.r10.u64 | 21317;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// sth r10,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r10.u16);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lwz r11,-17748(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17748);
	// stw r11,-17740(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17740, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E6F60"))) PPC_WEAK_FUNC(sub_825E6F60);
PPC_FUNC_IMPL(__imp__sub_825E6F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,-23916
	ctx.r11.s64 = ctx.r11.s64 + -23916;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E6F70"))) PPC_WEAK_FUNC(sub_825E6F70);
PPC_FUNC_IMPL(__imp__sub_825E6F70) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x825e7918
	sub_825E7918(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E6F78"))) PPC_WEAK_FUNC(sub_825E6F78);
PPC_FUNC_IMPL(__imp__sub_825E6F78) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x825e7958
	sub_825E7958(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E6F80"))) PPC_WEAK_FUNC(sub_825E6F80);
PPC_FUNC_IMPL(__imp__sub_825E6F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r31,r11,-17752
	ctx.r31.s64 = ctx.r11.s64 + -17752;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825e7004
	if (!ctx.cr6.eq) goto loc_825E7004;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// bl 0x825e78e0
	ctx.lr = 0x825E6FAC;
	sub_825E78E0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x825e7908
	ctx.lr = 0x825E6FB4;
	sub_825E7908(ctx, base);
	// bl 0x825e7f40
	ctx.lr = 0x825E6FB8;
	sub_825E7F40(ctx, base);
	// bl 0x825e7d20
	ctx.lr = 0x825E6FBC;
	sub_825E7D20(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825e6ffc
	if (!ctx.cr6.eq) goto loc_825E6FFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x825e7918
	ctx.lr = 0x825E6FD4;
	sub_825E7918(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825e6fec
	if (ctx.cr0.eq) goto loc_825E6FEC;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x825e6cf8
	ctx.lr = 0x825E6FE8;
	sub_825E6CF8(ctx, base);
	// b 0x825e6ff0
	goto loc_825E6FF0;
loc_825E6FEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825E6FF0:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// stw r3,-17756(r11)
	PPC_STORE_U32(ctx.r11.u32 + -17756, ctx.r3.u32);
loc_825E6FFC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_825E7004:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E7018"))) PPC_WEAK_FUNC(sub_825E7018);
PPC_FUNC_IMPL(__imp__sub_825E7018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-23916
	ctx.r11.s64 = ctx.r11.s64 + -23916;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x825e7048
	if (ctx.cr0.eq) goto loc_825E7048;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825e7958
	ctx.lr = 0x825E7048;
	sub_825E7958(ctx, base);
loc_825E7048:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E7060"))) PPC_WEAK_FUNC(sub_825E7060);
PPC_FUNC_IMPL(__imp__sub_825E7060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x825E7068;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x825e6f28
	ctx.lr = 0x825E7078;
	sub_825E6F28(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,21328
	ctx.r10.s64 = 1397751808;
	// addi r11,r11,-23912
	ctx.r11.s64 = ctx.r11.s64 + -23912;
	// ori r10,r10,19795
	ctx.r10.u64 = ctx.r10.u64 | 19795;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r29,6,0,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0xFFFFFFC0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// sth r30,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r30.u16);
	// lwz r3,-17740(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17740);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E70B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// bne 0x825e70e0
	if (!ctx.cr0.eq) goto loc_825E70E0;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// b 0x825e70f0
	goto loc_825E70F0;
loc_825E70E0:
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// bl 0x8262fd50
	ctx.lr = 0x825E70F0;
	sub_8262FD50(ctx, base);
loc_825E70F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E7100"))) PPC_WEAK_FUNC(sub_825E7100);
PPC_FUNC_IMPL(__imp__sub_825E7100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,-23912
	ctx.r11.s64 = ctx.r11.s64 + -23912;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x825e7150
	if (ctx.cr0.eq) goto loc_825E7150;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,-17740(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17740);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E7148;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_825E7150:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e6f60
	ctx.lr = 0x825E7158;
	sub_825E6F60(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E7170"))) PPC_WEAK_FUNC(sub_825E7170);
PPC_FUNC_IMPL(__imp__sub_825E7170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825e7100
	ctx.lr = 0x825E7190;
	sub_825E7100(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e71a0
	if (ctx.cr0.eq) goto loc_825E71A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e6f78
	ctx.lr = 0x825E71A0;
	sub_825E6F78(ctx, base);
loc_825E71A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E71C0"))) PPC_WEAK_FUNC(sub_825E71C0);
PPC_FUNC_IMPL(__imp__sub_825E71C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825e6f28
	ctx.lr = 0x825E71E4;
	sub_825E6F28(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,21328
	ctx.r10.s64 = 1397751808;
	// addi r11,r11,-23908
	ctx.r11.s64 = ctx.r11.s64 + -23908;
	// ori r10,r10,17229
	ctx.r10.u64 = ctx.r10.u64 | 17229;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// sth r30,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r30.u16);
	// bl 0x8262fd50
	ctx.lr = 0x825E720C;
	sub_8262FD50(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lfs f30,14088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f30.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f30,92(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f30,108(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// lfs f3,8248(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8248);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825e80a8
	ctx.lr = 0x825E723C;
	sub_825E80A8(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825e80a8
	ctx.lr = 0x825E7250;
	sub_825E80A8(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825e80a8
	ctx.lr = 0x825E7264;
	sub_825E80A8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f30,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// li r10,8190
	ctx.r10.s64 = 8190;
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// lfs f0,2372(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2372);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f0,140(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E72B0"))) PPC_WEAK_FUNC(sub_825E72B0);
PPC_FUNC_IMPL(__imp__sub_825E72B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x825E72B8;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f0,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f13,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x825e80a0
	ctx.lr = 0x825E7304;
	sub_825E80A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f31,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x825e80a0
	ctx.lr = 0x825E732C;
	sub_825E80A0(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82630f40
	ctx.lr = 0x825E733C;
	sub_82630F40(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8262fd50
	ctx.lr = 0x825E7344;
	sub_8262FD50(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwa r11,128(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 128));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-23900(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23900);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82630260
	ctx.lr = 0x825E7380;
	sub_82630260(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f31,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// addi r29,r31,112
	ctx.r29.s64 = ctx.r31.s64 + 112;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f30,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f30.f64 = double(temp.f32);
	// stfs f30,116(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f31,0(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// bl 0x82630660
	ctx.lr = 0x825E73A8;
	sub_82630660(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825e80a0
	ctx.lr = 0x825E73B0;
	sub_825E80A0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f1,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8262f9e8
	ctx.lr = 0x825E73C4;
	sub_8262F9E8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f1,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8262f9e8
	ctx.lr = 0x825E73D8;
	sub_8262F9E8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f1,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8262f9e8
	ctx.lr = 0x825E73EC;
	sub_8262F9E8(ctx, base);
	// lfs f11,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fnmadds f1,f10,f11,f0
	ctx.f1.f64 = double(float(-(ctx.f10.f64 * ctx.f11.f64 + ctx.f0.f64)));
	// bl 0x8262f9e8
	ctx.lr = 0x825E7420;
	sub_8262F9E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f1.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8262f9e8
	ctx.lr = 0x825E7434;
	sub_8262F9E8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f1,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8262f9e8
	ctx.lr = 0x825E7448;
	sub_8262F9E8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f1,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8262f9e8
	ctx.lr = 0x825E745C;
	sub_8262F9E8(ctx, base);
	// lfs f11,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// li r5,3
	ctx.r5.s64 = 3;
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f11,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f10,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fnmadds f1,f10,f11,f0
	ctx.f1.f64 = double(float(-(ctx.f10.f64 * ctx.f11.f64 + ctx.f0.f64)));
	// bl 0x8262f9e8
	ctx.lr = 0x825E7490;
	sub_8262F9E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8262f9e8
	ctx.lr = 0x825E74A4;
	sub_8262F9E8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// lfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8262f9e8
	ctx.lr = 0x825E74B8;
	sub_8262F9E8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// lfs f1,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8262f9e8
	ctx.lr = 0x825E74CC;
	sub_8262F9E8(ctx, base);
	// lfs f11,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// li r5,3
	ctx.r5.s64 = 3;
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// li r4,2
	ctx.r4.s64 = 2;
	// lfs f11,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fnmadds f1,f10,f11,f0
	ctx.f1.f64 = double(float(-(ctx.f10.f64 * ctx.f11.f64 + ctx.f0.f64)));
	// bl 0x8262f9e8
	ctx.lr = 0x825E7500;
	sub_8262F9E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8262f9e8
	ctx.lr = 0x825E7514;
	sub_8262F9E8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8262f9e8
	ctx.lr = 0x825E7528;
	sub_8262F9E8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8262f9e8
	ctx.lr = 0x825E753C;
	sub_8262F9E8(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,3
	ctx.r4.s64 = 3;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8262f9e8
	ctx.lr = 0x825E7550;
	sub_8262F9E8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwa r11,128(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 128));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-23904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23904);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f3,f13,f0
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x825e80a8
	ctx.lr = 0x825E7580;
	sub_825E80A8(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8262fd50
	ctx.lr = 0x825E7588;
	sub_8262FD50(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lfs f3,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826302e8
	ctx.lr = 0x825E75A0;
	sub_826302E8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82630470
	ctx.lr = 0x825E75B0;
	sub_82630470(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E75C0"))) PPC_WEAK_FUNC(sub_825E75C0);
PPC_FUNC_IMPL(__imp__sub_825E75C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825e75f0
	if (ctx.cr6.eq) goto loc_825E75F0;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// bl 0x825e72b0
	ctx.lr = 0x825E75E8;
	sub_825E72B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
loc_825E75F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E7608"))) PPC_WEAK_FUNC(sub_825E7608);
PPC_FUNC_IMPL(__imp__sub_825E7608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825e75c0
	ctx.lr = 0x825E7628;
	sub_825E75C0(ctx, base);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8262fd98
	ctx.lr = 0x825E7634;
	sub_8262FD98(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E7650"))) PPC_WEAK_FUNC(sub_825E7650);
PPC_FUNC_IMPL(__imp__sub_825E7650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825e75c0
	ctx.lr = 0x825E7668;
	sub_825E75C0(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E7680"))) PPC_WEAK_FUNC(sub_825E7680);
PPC_FUNC_IMPL(__imp__sub_825E7680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x825e80a8
	ctx.lr = 0x825E769C;
	sub_825E80A8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E76C0"))) PPC_WEAK_FUNC(sub_825E76C0);
PPC_FUNC_IMPL(__imp__sub_825E76C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f3,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lfs f1,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825e80a8
	ctx.lr = 0x825E76E8;
	sub_825E80A8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E7708"))) PPC_WEAK_FUNC(sub_825E7708);
PPC_FUNC_IMPL(__imp__sub_825E7708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,80(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f0,92(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E7730"))) PPC_WEAK_FUNC(sub_825E7730);
PPC_FUNC_IMPL(__imp__sub_825E7730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x825e80a8
	ctx.lr = 0x825E774C;
	sub_825E80A8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E7770"))) PPC_WEAK_FUNC(sub_825E7770);
PPC_FUNC_IMPL(__imp__sub_825E7770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f3,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// lfs f1,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825e80a8
	ctx.lr = 0x825E7798;
	sub_825E80A8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E77B8"))) PPC_WEAK_FUNC(sub_825E77B8);
PPC_FUNC_IMPL(__imp__sub_825E77B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,96(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,104(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f0,108(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E77E0"))) PPC_WEAK_FUNC(sub_825E77E0);
PPC_FUNC_IMPL(__imp__sub_825E77E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x825e80a8
	ctx.lr = 0x825E77FC;
	sub_825E80A8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E7820"))) PPC_WEAK_FUNC(sub_825E7820);
PPC_FUNC_IMPL(__imp__sub_825E7820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f3,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// lfs f1,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825e80a8
	ctx.lr = 0x825E7848;
	sub_825E80A8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E7868"))) PPC_WEAK_FUNC(sub_825E7868);
PPC_FUNC_IMPL(__imp__sub_825E7868) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r4.u32);
	// stw r11,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
	// stw r11,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E7880"))) PPC_WEAK_FUNC(sub_825E7880);
PPC_FUNC_IMPL(__imp__sub_825E7880) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E7888"))) PPC_WEAK_FUNC(sub_825E7888);
PPC_FUNC_IMPL(__imp__sub_825E7888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-23908
	ctx.r11.s64 = ctx.r11.s64 + -23908;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x825e6f60
	ctx.lr = 0x825E78B4;
	sub_825E6F60(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e78c4
	if (ctx.cr0.eq) goto loc_825E78C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e6f78
	ctx.lr = 0x825E78C4;
	sub_825E6F78(ctx, base);
loc_825E78C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E78E0"))) PPC_WEAK_FUNC(sub_825E78E0);
PPC_FUNC_IMPL(__imp__sub_825E78E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-17736
	ctx.r11.s64 = ctx.r11.s64 + -17736;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// stb r10,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r10.u8);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E7908"))) PPC_WEAK_FUNC(sub_825E7908);
PPC_FUNC_IMPL(__imp__sub_825E7908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stw r3,-17724(r11)
	PPC_STORE_U32(ctx.r11.u32 + -17724, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E7918"))) PPC_WEAK_FUNC(sub_825E7918);
PPC_FUNC_IMPL(__imp__sub_825E7918) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x825e792c
	if (!ctx.cr6.eq) {
		sub_825E792C(ctx, base);
		return;
	}
}

__attribute__((alias("__imp__sub_825E792C"))) PPC_WEAK_FUNC(sub_825E792C);
PPC_FUNC_IMPL(__imp__sub_825E792C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r11,-17724(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17724);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825E7954"))) PPC_WEAK_FUNC(sub_825E7954);
PPC_FUNC_IMPL(__imp__sub_825E7954) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E7958"))) PPC_WEAK_FUNC(sub_825E7958);
PPC_FUNC_IMPL(__imp__sub_825E7958) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x825e7964
	if (!ctx.cr6.eq) {
		sub_825E7964(ctx, base);
		return;
	}
}

__attribute__((alias("__imp__sub_825E7964"))) PPC_WEAK_FUNC(sub_825E7964);
PPC_FUNC_IMPL(__imp__sub_825E7964) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r11,-17724(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17724);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825E798C"))) PPC_WEAK_FUNC(sub_825E798C);
PPC_FUNC_IMPL(__imp__sub_825E798C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E7990"))) PPC_WEAK_FUNC(sub_825E7990);
PPC_FUNC_IMPL(__imp__sub_825E7990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-23896
	ctx.r11.s64 = ctx.r11.s64 + -23896;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r3,255
	ctx.r3.s64 = 255;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x82630a78
	ctx.lr = 0x825E79C8;
	sub_82630A78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r30,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E79F8"))) PPC_WEAK_FUNC(sub_825E79F8);
PPC_FUNC_IMPL(__imp__sub_825E79F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,-23896
	ctx.r11.s64 = ctx.r11.s64 + -23896;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E7A08"))) PPC_WEAK_FUNC(sub_825E7A08);
PPC_FUNC_IMPL(__imp__sub_825E7A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x825e7a24
	if (!ctx.cr6.eq) goto loc_825E7A24;
loc_825E7A24:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825e8718
	ctx.lr = 0x825E7A30;
	sub_825E8718(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E7A88"))) PPC_WEAK_FUNC(sub_825E7A88);
PPC_FUNC_IMPL(__imp__sub_825E7A88) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x825e7a90
	if (!ctx.cr6.eq) {
		sub_825E7A90(ctx, base);
		return;
	}
}

__attribute__((alias("__imp__sub_825E7A90"))) PPC_WEAK_FUNC(sub_825E7A90);
PPC_FUNC_IMPL(__imp__sub_825E7A90) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x825e8800
	sub_825E8800(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E7A98"))) PPC_WEAK_FUNC(sub_825E7A98);
PPC_FUNC_IMPL(__imp__sub_825E7A98) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x825e7aa0
	if (!ctx.cr6.eq) {
		sub_825E7AA0(ctx, base);
		return;
	}
}

__attribute__((alias("__imp__sub_825E7AA0"))) PPC_WEAK_FUNC(sub_825E7AA0);
PPC_FUNC_IMPL(__imp__sub_825E7AA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x825e8850
	sub_825E8850(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E7AA8"))) PPC_WEAK_FUNC(sub_825E7AA8);
PPC_FUNC_IMPL(__imp__sub_825E7AA8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x825e7ab0
	if (!ctx.cr6.eq) {
		sub_825E7AB0(ctx, base);
		return;
	}
}

__attribute__((alias("__imp__sub_825E7AB0"))) PPC_WEAK_FUNC(sub_825E7AB0);
PPC_FUNC_IMPL(__imp__sub_825E7AB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x825e88a0
	sub_825E88A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E7AB8"))) PPC_WEAK_FUNC(sub_825E7AB8);
PPC_FUNC_IMPL(__imp__sub_825E7AB8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x825e7ac0
	if (!ctx.cr6.eq) {
		sub_825E7AC0(ctx, base);
		return;
	}
}

__attribute__((alias("__imp__sub_825E7AC0"))) PPC_WEAK_FUNC(sub_825E7AC0);
PPC_FUNC_IMPL(__imp__sub_825E7AC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x825e89e8
	sub_825E89E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E7AC8"))) PPC_WEAK_FUNC(sub_825E7AC8);
PPC_FUNC_IMPL(__imp__sub_825E7AC8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x825e7ad0
	if (!ctx.cr6.eq) {
		sub_825E7AD0(ctx, base);
		return;
	}
}

__attribute__((alias("__imp__sub_825E7AD0"))) PPC_WEAK_FUNC(sub_825E7AD0);
PPC_FUNC_IMPL(__imp__sub_825E7AD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x825e8a48
	sub_825E8A48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E7AD8"))) PPC_WEAK_FUNC(sub_825E7AD8);
PPC_FUNC_IMPL(__imp__sub_825E7AD8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x825e7ae0
	if (!ctx.cr6.eq) {
		sub_825E7AE0(ctx, base);
		return;
	}
}

__attribute__((alias("__imp__sub_825E7AE0"))) PPC_WEAK_FUNC(sub_825E7AE0);
PPC_FUNC_IMPL(__imp__sub_825E7AE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x825e8c18
	sub_825E8C18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E7AE8"))) PPC_WEAK_FUNC(sub_825E7AE8);
PPC_FUNC_IMPL(__imp__sub_825E7AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-23896
	ctx.r11.s64 = ctx.r11.s64 + -23896;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x825e7b14
	if (ctx.cr0.eq) goto loc_825E7B14;
	// bl 0x82186190
	ctx.lr = 0x825E7B14;
	sub_82186190(ctx, base);
loc_825E7B14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E7B30"))) PPC_WEAK_FUNC(sub_825E7B30);
PPC_FUNC_IMPL(__imp__sub_825E7B30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x825E7B38;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825e7b4c
	if (!ctx.cr6.eq) goto loc_825E7B4C;
loc_825E7B4C:
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825e7c04
	if (ctx.cr0.eq) goto loc_825E7C04;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x825e8220
	ctx.lr = 0x825E7B60;
	sub_825E8220(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne 0x825e7b7c
	if (!ctx.cr0.eq) goto loc_825E7B7C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-23852
	ctx.r3.s64 = ctx.r11.s64 + -23852;
	// bl 0x821e0968
	ctx.lr = 0x825E7B78;
	sub_821E0968(ctx, base);
	// b 0x825e7c00
	goto loc_825E7C00;
loc_825E7B7C:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e7c00
	if (ctx.cr0.eq) goto loc_825E7C00;
	// li r4,0
	ctx.r4.s64 = 0;
	// lbz r30,17(r26)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r26.u32 + 17);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lbz r27,16(r26)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r26.u32 + 16);
	// lwz r28,12(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// bl 0x825e8690
	ctx.lr = 0x825E7BA4;
	sub_825E8690(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne 0x825e7bc4
	if (!ctx.cr0.eq) goto loc_825E7BC4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x826312e8
	ctx.lr = 0x825E7BC0;
	sub_826312E8(ctx, base);
	// b 0x825e7bfc
	goto loc_825E7BFC;
loc_825E7BC4:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// andc r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r30.u64;
	// beq cr6,0x825e7bfc
	if (ctx.cr6.eq) goto loc_825E7BFC;
	// clrlwi r27,r11,24
	ctx.r27.u64 = ctx.r11.u32 & 0xFF;
loc_825E7BD8:
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82630a78
	ctx.lr = 0x825E7BE0;
	sub_82630A78(ctx, base);
	// xor r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 ^ ctx.r28.u64;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// and r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 & ctx.r28.u64;
	// or r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 | ctx.r27.u64;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x825e7bd8
	if (!ctx.cr0.eq) goto loc_825E7BD8;
loc_825E7BFC:
	// stw r28,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r28.u32);
loc_825E7C00:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_825E7C04:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E7C10"))) PPC_WEAK_FUNC(sub_825E7C10);
PPC_FUNC_IMPL(__imp__sub_825E7C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b8
	ctx.lr = 0x825E7C18;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x825e7c30
	if (!ctx.cr6.eq) goto loc_825E7C30;
loc_825E7C30:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e7cb4
	if (ctx.cr0.eq) goto loc_825E7CB4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lbz r30,17(r26)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r26.u32 + 17);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lbz r27,16(r26)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r26.u32 + 16);
	// lwz r28,12(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// bl 0x825e8690
	ctx.lr = 0x825E7C58;
	sub_825E8690(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne 0x825e7c78
	if (!ctx.cr0.eq) goto loc_825E7C78;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x826312e8
	ctx.lr = 0x825E7C74;
	sub_826312E8(ctx, base);
	// b 0x825e7cb0
	goto loc_825E7CB0;
loc_825E7C78:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// andc r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r30.u64;
	// beq cr6,0x825e7cb0
	if (ctx.cr6.eq) goto loc_825E7CB0;
	// clrlwi r27,r11,24
	ctx.r27.u64 = ctx.r11.u32 & 0xFF;
loc_825E7C8C:
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82630a78
	ctx.lr = 0x825E7C94;
	sub_82630A78(ctx, base);
	// xor r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 ^ ctx.r28.u64;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// and r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 & ctx.r28.u64;
	// or r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 | ctx.r27.u64;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x825e7c8c
	if (!ctx.cr0.eq) goto loc_825E7C8C;
loc_825E7CB0:
	// stw r28,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r28.u32);
loc_825E7CB4:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x825e8468
	ctx.lr = 0x825E7CC0;
	sub_825E8468(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E7CC8"))) PPC_WEAK_FUNC(sub_825E7CC8);
PPC_FUNC_IMPL(__imp__sub_825E7CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825e6f28
	ctx.lr = 0x825E7CE0;
	sub_825E6F28(ctx, base);
	// lis r10,21314
	ctx.r10.s64 = 1396834304;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// ori r9,r10,19778
	ctx.r9.u64 = ctx.r10.u64 | 19778;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-23828
	ctx.r11.s64 = ctx.r11.s64 + -23828;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// sth r10,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r10.u16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E7D20"))) PPC_WEAK_FUNC(sub_825E7D20);
PPC_FUNC_IMPL(__imp__sub_825E7D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r11,-17720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17720);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825e7d64
	if (!ctx.cr6.eq) goto loc_825E7D64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x825e6f70
	ctx.lr = 0x825E7D48;
	sub_825E6F70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825e7d5c
	if (ctx.cr0.eq) goto loc_825E7D5C;
	// bl 0x825e7cc8
	ctx.lr = 0x825E7D54;
	sub_825E7CC8(ctx, base);
	// stw r3,-17720(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17720, ctx.r3.u32);
	// b 0x825e7d64
	goto loc_825E7D64;
loc_825E7D5C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-17720(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17720, ctx.r11.u32);
loc_825E7D64:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E7D78"))) PPC_WEAK_FUNC(sub_825E7D78);
PPC_FUNC_IMPL(__imp__sub_825E7D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r3,-17720(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17720);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825e7db4
	if (ctx.cr6.eq) goto loc_825E7DB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E7DAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-17720(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17720, ctx.r11.u32);
loc_825E7DB4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E7DC8"))) PPC_WEAK_FUNC(sub_825E7DC8);
PPC_FUNC_IMPL(__imp__sub_825E7DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-23828
	ctx.r11.s64 = ctx.r11.s64 + -23828;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x825e7ee0
	ctx.lr = 0x825E7DF0;
	sub_825E7EE0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x825e6f60
	ctx.lr = 0x825E7E00;
	sub_825E6F60(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E7E18"))) PPC_WEAK_FUNC(sub_825E7E18);
PPC_FUNC_IMPL(__imp__sub_825E7E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825e7dc8
	ctx.lr = 0x825E7E38;
	sub_825E7DC8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e7e48
	if (ctx.cr0.eq) goto loc_825E7E48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e6f78
	ctx.lr = 0x825E7E48;
	sub_825E6F78(ctx, base);
loc_825E7E48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E7E68"))) PPC_WEAK_FUNC(sub_825E7E68);
PPC_FUNC_IMPL(__imp__sub_825E7E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825e6f28
	ctx.lr = 0x825E7E80;
	sub_825E6F28(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r11,-23824
	ctx.r9.s64 = ctx.r11.s64 + -23824;
	// lis r11,21316
	ctx.r11.s64 = 1396965376;
	// li r10,20
	ctx.r10.s64 = 20;
	// ori r7,r11,21570
	ctx.r7.u64 = ctx.r11.u64 | 21570;
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// sth r8,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r8.u16);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
loc_825E7EA8:
	// stw r8,-80(r11)
	PPC_STORE_U32(ctx.r11.u32 + -80, ctx.r8.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x825e7ea8
	if (!ctx.cr0.eq) goto loc_825E7EA8;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E7EE0"))) PPC_WEAK_FUNC(sub_825E7EE0);
PPC_FUNC_IMPL(__imp__sub_825E7EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825e7f28
	if (ctx.cr6.eq) goto loc_825E7F28;
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
loc_825E7F00:
	// lwz r3,-17740(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17740);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E7F1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825e7f00
	if (!ctx.cr6.eq) goto loc_825E7F00;
loc_825E7F28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E7F40"))) PPC_WEAK_FUNC(sub_825E7F40);
PPC_FUNC_IMPL(__imp__sub_825E7F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r11,-17716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17716);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825e7f84
	if (!ctx.cr6.eq) goto loc_825E7F84;
	// li r3,180
	ctx.r3.s64 = 180;
	// bl 0x825e6f70
	ctx.lr = 0x825E7F68;
	sub_825E6F70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825e7f7c
	if (ctx.cr0.eq) goto loc_825E7F7C;
	// bl 0x825e7e68
	ctx.lr = 0x825E7F74;
	sub_825E7E68(ctx, base);
	// stw r3,-17716(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17716, ctx.r3.u32);
	// b 0x825e7f84
	goto loc_825E7F84;
loc_825E7F7C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-17716(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17716, ctx.r11.u32);
loc_825E7F84:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E7F98"))) PPC_WEAK_FUNC(sub_825E7F98);
PPC_FUNC_IMPL(__imp__sub_825E7F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r3,-17716(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17716);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825e7fd4
	if (ctx.cr6.eq) goto loc_825E7FD4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E7FCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-17716(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17716, ctx.r11.u32);
loc_825E7FD4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E7FE8"))) PPC_WEAK_FUNC(sub_825E7FE8);
PPC_FUNC_IMPL(__imp__sub_825E7FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825E7FF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-23824
	ctx.r11.s64 = ctx.r11.s64 + -23824;
	// addi r31,r30,96
	ctx.r31.s64 = ctx.r30.s64 + 96;
	// li r29,20
	ctx.r29.s64 = 20;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_825E8010:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,-80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -80);
	// bl 0x825e7ee0
	ctx.lr = 0x825E801C;
	sub_825E7EE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r28,-80(r31)
	PPC_STORE_U32(ctx.r31.u32 + -80, ctx.r28.u32);
	// bl 0x825e7ee0
	ctx.lr = 0x825E802C;
	sub_825E7EE0(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x825e8010
	if (!ctx.cr0.eq) goto loc_825E8010;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e6f60
	ctx.lr = 0x825E8044;
	sub_825E6F60(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E8050"))) PPC_WEAK_FUNC(sub_825E8050);
PPC_FUNC_IMPL(__imp__sub_825E8050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825e7fe8
	ctx.lr = 0x825E8070;
	sub_825E7FE8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e8080
	if (ctx.cr0.eq) goto loc_825E8080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e6f78
	ctx.lr = 0x825E8080;
	sub_825E6F78(ctx, base);
loc_825E8080:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E80A0"))) PPC_WEAK_FUNC(sub_825E80A0);
PPC_FUNC_IMPL(__imp__sub_825E80A0) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x826311a8
	sub_826311A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E80A8"))) PPC_WEAK_FUNC(sub_825E80A8);
PPC_FUNC_IMPL(__imp__sub_825E80A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f2,4(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f3,8(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E80B8"))) PPC_WEAK_FUNC(sub_825E80B8);
PPC_FUNC_IMPL(__imp__sub_825E80B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E80D8"))) PPC_WEAK_FUNC(sub_825E80D8);
PPC_FUNC_IMPL(__imp__sub_825E80D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E8110"))) PPC_WEAK_FUNC(sub_825E8110);
PPC_FUNC_IMPL(__imp__sub_825E8110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// fadds f13,f13,f3
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f3.f64));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E8138"))) PPC_WEAK_FUNC(sub_825E8138);
PPC_FUNC_IMPL(__imp__sub_825E8138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E8170"))) PPC_WEAK_FUNC(sub_825E8170);
PPC_FUNC_IMPL(__imp__sub_825E8170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E8198"))) PPC_WEAK_FUNC(sub_825E8198);
PPC_FUNC_IMPL(__imp__sub_825E8198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82631020
	ctx.lr = 0x825E81B0;
	sub_82631020(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E81C8"))) PPC_WEAK_FUNC(sub_825E81C8);
PPC_FUNC_IMPL(__imp__sub_825E81C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82631090
	ctx.lr = 0x825E81E0;
	sub_82631090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E81F8"))) PPC_WEAK_FUNC(sub_825E81F8);
PPC_FUNC_IMPL(__imp__sub_825E81F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E8220"))) PPC_WEAK_FUNC(sub_825E8220);
PPC_FUNC_IMPL(__imp__sub_825E8220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825e824c
	if (ctx.cr6.eq) goto loc_825E824C;
	// lis r10,19528
	ctx.r10.s64 = 1279787008;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r10,r10,23113
	ctx.r10.u64 = ctx.r10.u64 | 23113;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825e8260
	if (ctx.cr6.eq) goto loc_825E8260;
loc_825E824C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r11,-23820
	ctx.r3.s64 = ctx.r11.s64 + -23820;
	// bl 0x821e0968
	ctx.lr = 0x825E825C;
	sub_821E0968(ctx, base);
	// b 0x825e8294
	goto loc_825E8294;
loc_825E8260:
	// addi r8,r3,24
	ctx.r8.s64 = ctx.r3.s64 + 24;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x825e827c
	goto loc_825E827C;
loc_825E826C:
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x825e8288
	if (!ctx.cr6.lt) goto loc_825E8288;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
loc_825E827C:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825e826c
	if (!ctx.cr0.eq) goto loc_825E826C;
loc_825E8288:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825e829c
	if (!ctx.cr0.eq) goto loc_825E829C;
loc_825E8294:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825e8458
	goto loc_825E8458;
loc_825E829C:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x825e82b0
	if (ctx.cr0.eq) goto loc_825E82B0;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
loc_825E82B0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	// twllei r9,0
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// divwu r7,r10,r9
	ctx.r7.u32 = ctx.r10.u32 / ctx.r9.u32;
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// subf. r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825e82e8
	if (ctx.cr0.eq) goto loc_825E82E8;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
loc_825E82E8:
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
	// addi r9,r11,96
	ctx.r9.s64 = ctx.r11.s64 + 96;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x825e8364
	if (ctx.cr6.lt) goto loc_825E8364;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// oris r8,r10,32768
	ctx.r8.u64 = ctx.r10.u64 | 2147483648;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// ld r8,48(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 48);
	// std r8,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r8.u64);
	// ld r8,48(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 48);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// std r8,48(r3)
	PPC_STORE_U64(ctx.r3.u32 + 48, ctx.r8.u64);
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// beq 0x825e8340
	if (ctx.cr0.eq) goto loc_825E8340;
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
loc_825E8340:
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r9,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// b 0x825e8454
	goto loc_825E8454;
loc_825E8364:
	// lis r9,-32696
	ctx.r9.s64 = -2142765056;
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// stw r3,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r3.u32);
	// ori r7,r9,23113
	ctx.r7.u64 = ctx.r9.u64 | 23113;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// ld r7,48(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 48);
	// std r7,32(r10)
	PPC_STORE_U64(ctx.r10.u32 + 32, ctx.r7.u64);
	// ld r7,48(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 48);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// std r7,48(r3)
	PPC_STORE_U64(ctx.r3.u32 + 48, ctx.r7.u64);
	// stw r9,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r9.u32);
	// stw r9,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r9.u32);
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// subf r7,r10,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r10.s64;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r7,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r7.u32);
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi r7,0
	ctx.cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r7,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r7.u32);
	// beq 0x825e83bc
	if (ctx.cr0.eq) goto loc_825E83BC;
	// stw r10,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r10.u32);
loc_825E83BC:
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// addi r7,r7,-48
	ctx.r7.s64 = ctx.r7.s64 + -48;
	// stw r7,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r7.u32);
	// lwz r7,28(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi r7,0
	ctx.cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// beq 0x825e83e4
	if (ctx.cr0.eq) goto loc_825E83E4;
	// stw r10,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r10.u32);
loc_825E83E4:
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x825e8424
	if (ctx.cr0.eq) goto loc_825E8424;
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
loc_825E8400:
	// lwz r6,28(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x825e8424
	if (!ctx.cr6.lt) goto loc_825E8424;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x825e8400
	if (!ctx.cr0.eq) goto loc_825E8400;
loc_825E8424:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// beq 0x825e8438
	if (ctx.cr0.eq) goto loc_825E8438;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
loc_825E8438:
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
loc_825E8454:
	// addi r3,r10,48
	ctx.r3.s64 = ctx.r10.s64 + 48;
loc_825E8458:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E8468"))) PPC_WEAK_FUNC(sub_825E8468);
PPC_FUNC_IMPL(__imp__sub_825E8468) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825e847c
	if (!ctx.cr6.eq) goto loc_825E847C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-23772
	ctx.r3.s64 = ctx.r11.s64 + -23772;
	// b 0x821e0968
	sub_821E0968(ctx, base);
	return;
loc_825E847C:
	// addi r11,r3,-48
	ctx.r11.s64 = ctx.r3.s64 + -48;
	// lis r10,-32696
	ctx.r10.s64 = -2142765056;
	// ori r9,r10,23113
	ctx.r9.u64 = ctx.r10.u64 | 23113;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x825e84a4
	if (ctx.cr6.eq) goto loc_825E84A4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-23796
	ctx.r3.s64 = ctx.r11.s64 + -23796;
	// b 0x821e0968
	sub_821E0968(ctx, base);
	return;
loc_825E84A4:
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x825e84bc
	if (ctx.cr0.eq) goto loc_825E84BC;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// blr 
	return;
loc_825E84BC:
	// lis r9,72
	ctx.r9.s64 = 4718592;
	// ori r9,r9,23113
	ctx.r9.u64 = ctx.r9.u64 | 23113;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x825e84dc
	if (ctx.cr0.eq) goto loc_825E84DC;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
loc_825E84DC:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x825e84f4
	if (ctx.cr0.eq) goto loc_825E84F4;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r8,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r8.u32);
	// b 0x825e84fc
	goto loc_825E84FC;
loc_825E84F4:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
loc_825E84FC:
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x825e858c
	if (ctx.cr0.eq) goto loc_825E858C;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r8,r8,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x825e858c
	if (!ctx.cr0.eq) goto loc_825E858C;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x825e852c
	if (ctx.cr0.eq) goto loc_825E852C;
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r7,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r7.u32);
loc_825E852C:
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x825e8544
	if (ctx.cr0.eq) goto loc_825E8544;
	// lwz r7,12(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r7,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r7.u32);
	// b 0x825e854c
	goto loc_825E854C;
loc_825E8544:
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r8,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r8.u32);
loc_825E854C:
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// beq 0x825e8560
	if (ctx.cr0.eq) goto loc_825E8560;
	// stw r11,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r11.u32);
loc_825E8560:
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r8,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// lwz r8,40(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r8,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r8.u32);
	// stw r9,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r9.u32);
loc_825E858C:
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x825e861c
	if (ctx.cr0.eq) goto loc_825E861C;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r8,r8,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x825e861c
	if (!ctx.cr0.eq) goto loc_825E861C;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x825e85b8
	if (ctx.cr0.eq) goto loc_825E85B8;
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r7,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r7.u32);
loc_825E85B8:
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x825e85d0
	if (ctx.cr0.eq) goto loc_825E85D0;
	// lwz r7,12(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r7,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r7.u32);
	// b 0x825e85d8
	goto loc_825E85D8;
loc_825E85D0:
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r8,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r8.u32);
loc_825E85D8:
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r8,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r8.u32);
	// beq 0x825e85ec
	if (ctx.cr0.eq) goto loc_825E85EC;
	// stw r9,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r9.u32);
loc_825E85EC:
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r8,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r8.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwz r8,40(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r8,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r8.u32);
	// stw r9,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r9.u32);
loc_825E861C:
	// lwz r7,36(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// addi r9,r10,24
	ctx.r9.s64 = ctx.r10.s64 + 24;
	// lwz r8,40(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r7,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r7.u32);
	// stw r8,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r8.u32);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x825e8670
	if (ctx.cr0.eq) goto loc_825E8670;
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
loc_825E864C:
	// lwz r7,28(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x825e8670
	if (!ctx.cr6.lt) goto loc_825E8670;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r10,12
	ctx.r9.s64 = ctx.r10.s64 + 12;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825e864c
	if (!ctx.cr0.eq) goto loc_825E864C;
loc_825E8670:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// beq 0x825e8684
	if (ctx.cr0.eq) goto loc_825E8684;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_825E8684:
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E8690"))) PPC_WEAK_FUNC(sub_825E8690);
PPC_FUNC_IMPL(__imp__sub_825E8690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825e86e4
	if (ctx.cr6.eq) goto loc_825E86E4;
	// lwz r10,-48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// lis r11,72
	ctx.r11.s64 = 4718592;
	// ori r11,r11,23113
	ctx.r11.u64 = ctx.r11.u64 | 23113;
	// clrlwi r10,r10,8
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825e86fc
	if (ctx.cr6.eq) goto loc_825E86FC;
	// lis r3,8533
	ctx.r3.s64 = 559218688;
	// ori r3,r3,21317
	ctx.r3.u64 = ctx.r3.u64 | 21317;
	// bl 0x82631308
	ctx.lr = 0x825E86D8;
	sub_82631308(ctx, base);
	// lwz r11,-48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x825e86fc
	if (ctx.cr6.eq) goto loc_825E86FC;
loc_825E86E4:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,-23740
	ctx.r3.s64 = ctx.r11.s64 + -23740;
	// bl 0x821e0968
	ctx.lr = 0x825E86F4;
	sub_821E0968(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825e8700
	goto loc_825E8700;
loc_825E86FC:
	// lwz r3,-20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
loc_825E8700:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E8718"))) PPC_WEAK_FUNC(sub_825E8718);
PPC_FUNC_IMPL(__imp__sub_825E8718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825e8748
	if (ctx.cr6.eq) goto loc_825E8748;
	// lis r9,19528
	ctx.r9.s64 = 1279787008;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r9,r9,23113
	ctx.r9.u64 = ctx.r9.u64 | 23113;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x825e875c
	if (ctx.cr6.eq) goto loc_825E875C;
loc_825E8748:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r11,-23820
	ctx.r3.s64 = ctx.r11.s64 + -23820;
	// bl 0x821e0968
	ctx.lr = 0x825E8758;
	sub_821E0968(ctx, base);
	// b 0x825e87ec
	goto loc_825E87EC;
loc_825E875C:
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x825e87bc
	goto loc_825E87BC;
loc_825E877C:
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r4,r4,0,0,0
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r4,28(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// beq 0x825e87a4
	if (ctx.cr0.eq) goto loc_825E87A4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 + ctx.r6.u64;
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x825e87b8
	if (!ctx.cr6.gt) goto loc_825E87B8;
	// rotlwi r31,r4,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// b 0x825e87b8
	goto loc_825E87B8;
loc_825E87A4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x825e87b8
	if (!ctx.cr6.gt) goto loc_825E87B8;
	// lwz r5,28(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
loc_825E87B8:
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
loc_825E87BC:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825e877c
	if (!ctx.cr0.eq) goto loc_825E877C;
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// stw r7,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// stw r5,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r5.u32);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_825E87EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E8800"))) PPC_WEAK_FUNC(sub_825E8800);
PPC_FUNC_IMPL(__imp__sub_825E8800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825e8828
	if (ctx.cr6.eq) goto loc_825E8828;
	// lis r10,19528
	ctx.r10.s64 = 1279787008;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r10,r10,23113
	ctx.r10.u64 = ctx.r10.u64 | 23113;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825e883c
	if (ctx.cr6.eq) goto loc_825E883C;
loc_825E8828:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-23820
	ctx.r3.s64 = ctx.r11.s64 + -23820;
	// bl 0x821e0968
	ctx.lr = 0x825E8834;
	sub_821E0968(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825e8840
	goto loc_825E8840;
loc_825E883C:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_825E8840:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E8850"))) PPC_WEAK_FUNC(sub_825E8850);
PPC_FUNC_IMPL(__imp__sub_825E8850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825e8878
	if (ctx.cr6.eq) goto loc_825E8878;
	// lis r10,19528
	ctx.r10.s64 = 1279787008;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r10,r10,23113
	ctx.r10.u64 = ctx.r10.u64 | 23113;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825e888c
	if (ctx.cr6.eq) goto loc_825E888C;
loc_825E8878:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-23820
	ctx.r3.s64 = ctx.r11.s64 + -23820;
	// bl 0x821e0968
	ctx.lr = 0x825E8884;
	sub_821E0968(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825e8890
	goto loc_825E8890;
loc_825E888C:
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_825E8890:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E88A0"))) PPC_WEAK_FUNC(sub_825E88A0);
PPC_FUNC_IMPL(__imp__sub_825E88A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825e88c8
	if (ctx.cr6.eq) goto loc_825E88C8;
	// lis r10,19528
	ctx.r10.s64 = 1279787008;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r10,r10,23113
	ctx.r10.u64 = ctx.r10.u64 | 23113;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825e88dc
	if (ctx.cr6.eq) goto loc_825E88DC;
loc_825E88C8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-23596
	ctx.r3.s64 = ctx.r11.s64 + -23596;
loc_825E88D0:
	// bl 0x821e0968
	ctx.lr = 0x825E88D4;
	sub_821E0968(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825e89b4
	goto loc_825E89B4;
loc_825E88DC:
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825e8900
	if (ctx.cr6.eq) goto loc_825E8900;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-23624
	ctx.r3.s64 = ctx.r11.s64 + -23624;
	// b 0x825e88d0
	goto loc_825E88D0;
loc_825E8900:
	// lis r7,72
	ctx.r7.s64 = 4718592;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ori r7,r7,23113
	ctx.r7.u64 = ctx.r7.u64 | 23113;
	// beq 0x825e8940
	if (ctx.cr0.eq) goto loc_825E8940;
loc_825E8914:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825e8940
	if (ctx.cr6.eq) goto loc_825E8940;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825e89c4
	if (ctx.cr6.eq) goto loc_825E89C4;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r6,r6,8
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFFFF;
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x825e89c4
	if (!ctx.cr6.eq) goto loc_825E89C4;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825e8914
	if (!ctx.cr0.eq) goto loc_825E8914;
loc_825E8940:
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr. r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e897c
	if (ctx.cr0.eq) goto loc_825E897C;
loc_825E894C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825e897c
	if (ctx.cr6.eq) goto loc_825E897C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825e89d0
	if (ctx.cr6.eq) goto loc_825E89D0;
	// lis r6,-32696
	ctx.r6.s64 = -2142765056;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// ori r6,r6,23113
	ctx.r6.u64 = ctx.r6.u64 | 23113;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x825e89d0
	if (!ctx.cr6.eq) goto loc_825E89D0;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825e894c
	if (!ctx.cr0.eq) goto loc_825E894C;
loc_825E897C:
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr. r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e89b0
	if (ctx.cr0.eq) goto loc_825E89B0;
loc_825E8988:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825e89b0
	if (ctx.cr6.eq) goto loc_825E89B0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825e89dc
	if (ctx.cr6.eq) goto loc_825E89DC;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x825e89dc
	if (!ctx.cr6.eq) goto loc_825E89DC;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825e8988
	if (!ctx.cr0.eq) goto loc_825E8988;
loc_825E89B0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_825E89B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_825E89C4:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-23652
	ctx.r3.s64 = ctx.r11.s64 + -23652;
	// b 0x825e88d0
	goto loc_825E88D0;
loc_825E89D0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-23684
	ctx.r3.s64 = ctx.r11.s64 + -23684;
	// b 0x825e88d0
	goto loc_825E88D0;
loc_825E89DC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-23716
	ctx.r3.s64 = ctx.r11.s64 + -23716;
	// b 0x825e88d0
	goto loc_825E88D0;
}

__attribute__((alias("__imp__sub_825E89E8"))) PPC_WEAK_FUNC(sub_825E89E8);
PPC_FUNC_IMPL(__imp__sub_825E89E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825e8a10
	if (ctx.cr6.eq) goto loc_825E8A10;
	// lis r10,19528
	ctx.r10.s64 = 1279787008;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r10,r10,23113
	ctx.r10.u64 = ctx.r10.u64 | 23113;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825e8a20
	if (ctx.cr6.eq) goto loc_825E8A20;
loc_825E8A10:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-23820
	ctx.r3.s64 = ctx.r11.s64 + -23820;
	// bl 0x821e0968
	ctx.lr = 0x825E8A1C;
	sub_821E0968(ctx, base);
	// b 0x825e8a30
	goto loc_825E8A30;
loc_825E8A20:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bne 0x825e8a34
	if (!ctx.cr0.eq) goto loc_825E8A34;
loc_825E8A30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825E8A34:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E8A48"))) PPC_WEAK_FUNC(sub_825E8A48);
PPC_FUNC_IMPL(__imp__sub_825E8A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825e8a70
	if (ctx.cr6.eq) goto loc_825E8A70;
	// lis r10,19528
	ctx.r10.s64 = 1279787008;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r10,r10,23113
	ctx.r10.u64 = ctx.r10.u64 | 23113;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825e8a80
	if (ctx.cr6.eq) goto loc_825E8A80;
loc_825E8A70:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-23820
	ctx.r3.s64 = ctx.r11.s64 + -23820;
	// bl 0x821e0968
	ctx.lr = 0x825E8A7C;
	sub_821E0968(ctx, base);
	// b 0x825e8a90
	goto loc_825E8A90;
loc_825E8A80:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bne 0x825e8a94
	if (!ctx.cr0.eq) goto loc_825E8A94;
loc_825E8A90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825E8A94:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E8AA8"))) PPC_WEAK_FUNC(sub_825E8AA8);
PPC_FUNC_IMPL(__imp__sub_825E8AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x825E8AB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82631280
	ctx.lr = 0x825E8AD4;
	sub_82631280(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,48
	ctx.r5.s64 = ctx.r11.s64 + 48;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r28,r10,48
	ctx.r28.s64 = ctx.r10.s64 + 48;
	// bl 0x82631280
	ctx.lr = 0x825E8AF4;
	sub_82631280(ctx, base);
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82631280
	ctx.lr = 0x825E8B04;
	sub_82631280(ctx, base);
	// subf r10,r30,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r30.s64;
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// stw r10,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825e8b48
	if (ctx.cr0.eq) goto loc_825E8B48;
	// stw r31,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
	// b 0x825e8b4c
	goto loc_825E8B4C;
loc_825E8B48:
	// stw r31,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r31.u32);
loc_825E8B4C:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825e8b5c
	if (ctx.cr0.eq) goto loc_825E8B5C;
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
loc_825E8B5C:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825e8b6c
	if (ctx.cr0.eq) goto loc_825E8B6C;
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
loc_825E8B6C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825e8b80
	if (ctx.cr0.eq) goto loc_825E8B80;
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// b 0x825e8b84
	goto loc_825E8B84;
loc_825E8B80:
	// stw r30,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r30.u32);
loc_825E8B84:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825e8b98
	if (ctx.cr0.eq) goto loc_825E8B98;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_825E8B98:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825e8bb0
	if (ctx.cr0.eq) goto loc_825E8BB0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x825e8bb8
	goto loc_825E8BB8;
loc_825E8BB0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
loc_825E8BB8:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq 0x825e8bcc
	if (ctx.cr0.eq) goto loc_825E8BCC;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_825E8BCC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r31.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// oris r11,r10,32768
	ctx.r11.u64 = ctx.r10.u64 | 2147483648;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r10.u32);
	// stw r11,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r11.u32);
	// bl 0x825e8468
	ctx.lr = 0x825E8C0C;
	sub_825E8468(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E8C18"))) PPC_WEAK_FUNC(sub_825E8C18);
PPC_FUNC_IMPL(__imp__sub_825E8C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b4
	ctx.lr = 0x825E8C20;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825e8c54
	if (ctx.cr6.eq) goto loc_825E8C54;
	// lis r10,19528
	ctx.r10.s64 = 1279787008;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r10,r10,23113
	ctx.r10.u64 = ctx.r10.u64 | 23113;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825e8c68
	if (ctx.cr6.eq) goto loc_825E8C68;
loc_825E8C54:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r11,-23820
	ctx.r3.s64 = ctx.r11.s64 + -23820;
	// bl 0x821e0968
	ctx.lr = 0x825E8C64;
	sub_821E0968(ctx, base);
	// b 0x825e8d68
	goto loc_825E8D68;
loc_825E8C68:
	// lwz r31,20(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x825e8d68
	if (ctx.cr0.eq) goto loc_825E8D68;
	// b 0x825e8c7c
	goto loc_825E8C7C;
loc_825E8C78:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_825E8C7C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825e8c78
	if (!ctx.cr0.eq) goto loc_825E8C78;
loc_825E8C88:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e8d5c
	if (ctx.cr0.eq) goto loc_825E8D5C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825e8d5c
	if (ctx.cr0.eq) goto loc_825E8D5C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825e8d5c
	if (!ctx.cr0.eq) goto loc_825E8D5C;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// divwu r9,r11,r10
	ctx.r9.u32 = ctx.r11.u32 / ctx.r10.u32;
	// twllei r10,0
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf. r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825e8cd8
	if (ctx.cr0.eq) goto loc_825E8CD8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_825E8CD8:
	// addi r30,r11,-48
	ctx.r30.s64 = ctx.r11.s64 + -48;
	// addi r29,r31,48
	ctx.r29.s64 = ctx.r31.s64 + 48;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x825e8d5c
	if (ctx.cr6.lt) goto loc_825E8D5C;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x825e8d5c
	if (ctx.cr6.eq) goto loc_825E8D5C;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x825e8d14
	if (ctx.cr6.eq) goto loc_825E8D14;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
	// bctrl 
	ctx.lr = 0x825E8D0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x825e8d18
	goto loc_825E8D18;
loc_825E8D14:
	// li r28,5
	ctx.r28.s64 = 5;
loc_825E8D18:
	// rlwinm. r11,r28,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e8d54
	if (ctx.cr0.eq) goto loc_825E8D54;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e8aa8
	ctx.lr = 0x825E8D30;
	sub_825E8AA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x825e8d54
	if (ctx.cr6.eq) goto loc_825E8D54;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x825E8D54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825E8D54:
	// rlwinm. r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825e8d68
	if (!ctx.cr0.eq) goto loc_825E8D68;
loc_825E8D5C:
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x825e8c88
	if (!ctx.cr0.eq) goto loc_825E8C88;
loc_825E8D68:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de904
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E8D78"))) PPC_WEAK_FUNC(sub_825E8D78);
PPC_FUNC_IMPL(__imp__sub_825E8D78) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825E8DA0"))) PPC_WEAK_FUNC(sub_825E8DA0);
PPC_FUNC_IMPL(__imp__sub_825E8DA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E8DA8"))) PPC_WEAK_FUNC(sub_825E8DA8);
PPC_FUNC_IMPL(__imp__sub_825E8DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825e8dbc
	if (ctx.cr6.eq) goto loc_825E8DBC;
	// stfs f1,232(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 232, temp.u32);
	// blr 
	return;
loc_825E8DBC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,232(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 232, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E8DD0"))) PPC_WEAK_FUNC(sub_825E8DD0);
PPC_FUNC_IMPL(__imp__sub_825E8DD0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E8DD8"))) PPC_WEAK_FUNC(sub_825E8DD8);
PPC_FUNC_IMPL(__imp__sub_825E8DD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,892(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 892);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E8DE0"))) PPC_WEAK_FUNC(sub_825E8DE0);
PPC_FUNC_IMPL(__imp__sub_825E8DE0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,184
	ctx.r3.s64 = ctx.r3.s64 + 184;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E8DE8"))) PPC_WEAK_FUNC(sub_825E8DE8);
PPC_FUNC_IMPL(__imp__sub_825E8DE8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// b 0x82594240
	sub_82594240(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E8DF0"))) PPC_WEAK_FUNC(sub_825E8DF0);
PPC_FUNC_IMPL(__imp__sub_825E8DF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,244(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E8DF8"))) PPC_WEAK_FUNC(sub_825E8DF8);
PPC_FUNC_IMPL(__imp__sub_825E8DF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,264(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E8E00"))) PPC_WEAK_FUNC(sub_825E8E00);
PPC_FUNC_IMPL(__imp__sub_825E8E00) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,208(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 208);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E8E08"))) PPC_WEAK_FUNC(sub_825E8E08);
PPC_FUNC_IMPL(__imp__sub_825E8E08) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,276
	ctx.r3.s64 = ctx.r3.s64 + 276;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E8E10"))) PPC_WEAK_FUNC(sub_825E8E10);
PPC_FUNC_IMPL(__imp__sub_825E8E10) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,564
	ctx.r3.s64 = ctx.r3.s64 + 564;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E8E18"))) PPC_WEAK_FUNC(sub_825E8E18);
PPC_FUNC_IMPL(__imp__sub_825E8E18) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,896(r3)
	PPC_STORE_U8(ctx.r3.u32 + 896, ctx.r11.u8);
	// stb r10,897(r3)
	PPC_STORE_U8(ctx.r3.u32 + 897, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E8E30"))) PPC_WEAK_FUNC(sub_825E8E30);
PPC_FUNC_IMPL(__imp__sub_825E8E30) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,896(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 896);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E8E38"))) PPC_WEAK_FUNC(sub_825E8E38);
PPC_FUNC_IMPL(__imp__sub_825E8E38) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,896(r3)
	PPC_STORE_U8(ctx.r3.u32 + 896, ctx.r11.u8);
	// stb r10,897(r3)
	PPC_STORE_U8(ctx.r3.u32 + 897, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E8E50"))) PPC_WEAK_FUNC(sub_825E8E50);
PPC_FUNC_IMPL(__imp__sub_825E8E50) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,897(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 897);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E8E58"))) PPC_WEAK_FUNC(sub_825E8E58);
PPC_FUNC_IMPL(__imp__sub_825E8E58) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,230
	ctx.r11.s64 = ctx.r4.s64 + 230;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E8E68"))) PPC_WEAK_FUNC(sub_825E8E68);
PPC_FUNC_IMPL(__imp__sub_825E8E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E8EA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E8EBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82581120
	ctx.lr = 0x825E8EC4;
	sub_82581120(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E8ED8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825e8f24
	if (ctx.cr6.eq) goto loc_825E8F24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82581850
	ctx.lr = 0x825E8EF0;
	sub_82581850(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E8F04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E8F24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825E8F24:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E8F44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E8F60"))) PPC_WEAK_FUNC(sub_825E8F60);
PPC_FUNC_IMPL(__imp__sub_825E8F60) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,952(r3)
	PPC_STORE_U8(ctx.r3.u32 + 952, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E8F70"))) PPC_WEAK_FUNC(sub_825E8F70);
PPC_FUNC_IMPL(__imp__sub_825E8F70) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,952(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 952);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E8F78"))) PPC_WEAK_FUNC(sub_825E8F78);
PPC_FUNC_IMPL(__imp__sub_825E8F78) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,952(r3)
	PPC_STORE_U8(ctx.r3.u32 + 952, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E8F88"))) PPC_WEAK_FUNC(sub_825E8F88);
PPC_FUNC_IMPL(__imp__sub_825E8F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825e8ff4
	if (ctx.cr6.eq) goto loc_825E8FF4;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r10,r10,-25208
	ctx.r10.s64 = ctx.r10.s64 + -25208;
loc_825E8FB0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x825e8fd4
	if (ctx.cr6.eq) goto loc_825E8FD4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x825e8fb0
	if (ctx.cr6.eq) goto loc_825E8FB0;
loc_825E8FD4:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x825e8ff4
	if (!ctx.cr6.eq) goto loc_825E8FF4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E8FEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82188440
	ctx.lr = 0x825E8FF4;
	sub_82188440(ctx, base);
loc_825E8FF4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E9008"))) PPC_WEAK_FUNC(sub_825E9008);
PPC_FUNC_IMPL(__imp__sub_825E9008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825e9078
	if (ctx.cr6.eq) goto loc_825E9078;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r10,r10,-25208
	ctx.r10.s64 = ctx.r10.s64 + -25208;
loc_825E9028:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x825e904c
	if (ctx.cr6.eq) goto loc_825E904C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x825e9028
	if (ctx.cr6.eq) goto loc_825E9028;
loc_825E904C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x825e9078
	if (!ctx.cr6.eq) goto loc_825E9078;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E9064;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82188460
	ctx.lr = 0x825E9068;
	sub_82188460(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_825E9078:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E9090"))) PPC_WEAK_FUNC(sub_825E9090);
PPC_FUNC_IMPL(__imp__sub_825E9090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E90B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-4020
	ctx.r11.s64 = ctx.r11.s64 + -4020;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E90D0"))) PPC_WEAK_FUNC(sub_825E90D0);
PPC_FUNC_IMPL(__imp__sub_825E90D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,956
	ctx.r3.s64 = ctx.r3.s64 + 956;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E90D8"))) PPC_WEAK_FUNC(sub_825E90D8);
PPC_FUNC_IMPL(__imp__sub_825E90D8) {
	PPC_FUNC_PROLOGUE();
	// addis r3,r3,3
	ctx.r3.s64 = ctx.r3.s64 + 196608;
	// addi r3,r3,-20532
	ctx.r3.s64 = ctx.r3.s64 + -20532;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E90E8"))) PPC_WEAK_FUNC(sub_825E90E8);
PPC_FUNC_IMPL(__imp__sub_825E90E8) {
	PPC_FUNC_PROLOGUE();
	// addis r3,r3,5
	ctx.r3.s64 = ctx.r3.s64 + 327680;
	// addi r3,r3,23516
	ctx.r3.s64 = ctx.r3.s64 + 23516;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E90F8"))) PPC_WEAK_FUNC(sub_825E90F8);
PPC_FUNC_IMPL(__imp__sub_825E90F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,5
	ctx.r11.s64 = 327680;
	// ori r11,r11,23588
	ctx.r11.u64 = ctx.r11.u64 | 23588;
	// stwx r4,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E9108"))) PPC_WEAK_FUNC(sub_825E9108);
PPC_FUNC_IMPL(__imp__sub_825E9108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,5
	ctx.r11.s64 = 327680;
	// ori r11,r11,23588
	ctx.r11.u64 = ctx.r11.u64 | 23588;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E9118"))) PPC_WEAK_FUNC(sub_825E9118);
PPC_FUNC_IMPL(__imp__sub_825E9118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,5
	ctx.r11.s64 = 327680;
	// ori r11,r11,23592
	ctx.r11.u64 = ctx.r11.u64 | 23592;
	// stwx r4,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E9128"))) PPC_WEAK_FUNC(sub_825E9128);
PPC_FUNC_IMPL(__imp__sub_825E9128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,5
	ctx.r11.s64 = 327680;
	// ori r11,r11,23592
	ctx.r11.u64 = ctx.r11.u64 | 23592;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E9138"))) PPC_WEAK_FUNC(sub_825E9138);
PPC_FUNC_IMPL(__imp__sub_825E9138) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addis r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 65536;
	// addi r11,r11,22283
	ctx.r11.s64 = ctx.r11.s64 + 22283;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E9158"))) PPC_WEAK_FUNC(sub_825E9158);
PPC_FUNC_IMPL(__imp__sub_825E9158) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// bge cr6,0x825e9174
	if (!ctx.cr6.lt) goto loc_825E9174;
	// addis r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 65536;
	// addi r11,r11,22283
	ctx.r11.s64 = ctx.r11.s64 + 22283;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
loc_825E9174:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E9180"))) PPC_WEAK_FUNC(sub_825E9180);
PPC_FUNC_IMPL(__imp__sub_825E9180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,5
	ctx.r11.s64 = 327680;
	// ori r11,r11,23636
	ctx.r11.u64 = ctx.r11.u64 | 23636;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E9190"))) PPC_WEAK_FUNC(sub_825E9190);
PPC_FUNC_IMPL(__imp__sub_825E9190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,5
	ctx.r11.s64 = 327680;
	// ori r11,r11,23640
	ctx.r11.u64 = ctx.r11.u64 | 23640;
	// lbzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,5
	ctx.r11.s64 = 327680;
	// ori r11,r11,23636
	ctx.r11.u64 = ctx.r11.u64 | 23636;
	// stwx r4,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E91B8"))) PPC_WEAK_FUNC(sub_825E91B8);
PPC_FUNC_IMPL(__imp__sub_825E91B8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,5
	ctx.r10.s64 = 327680;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r10,r10,23640
	ctx.r10.u64 = ctx.r10.u64 | 23640;
	// clrlwi r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r4,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u8);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r10,5
	ctx.r10.s64 = 327680;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// li r9,33
	ctx.r9.s64 = 33;
	// ori r10,r10,23636
	ctx.r10.u64 = ctx.r10.u64 | 23636;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,15
	ctx.r4.s64 = 15;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825E9204"))) PPC_WEAK_FUNC(sub_825E9204);
PPC_FUNC_IMPL(__imp__sub_825E9204) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E9208"))) PPC_WEAK_FUNC(sub_825E9208);
PPC_FUNC_IMPL(__imp__sub_825E9208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,5
	ctx.r11.s64 = 327680;
	// ori r11,r11,23644
	ctx.r11.u64 = ctx.r11.u64 | 23644;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E9218"))) PPC_WEAK_FUNC(sub_825E9218);
PPC_FUNC_IMPL(__imp__sub_825E9218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,5
	ctx.r11.s64 = 327680;
	// ori r11,r11,23644
	ctx.r11.u64 = ctx.r11.u64 | 23644;
	// stwx r4,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E9228"))) PPC_WEAK_FUNC(sub_825E9228);
PPC_FUNC_IMPL(__imp__sub_825E9228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// bgt cr6,0x825e92b8
	if (ctx.cr6.gt) goto loc_825E92B8;
	// lis r12,-32161
	ctx.r12.s64 = -2107703296;
	// addi r12,r12,-28076
	ctx.r12.s64 = ctx.r12.s64 + -28076;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_825E9270;
	case 1:
		goto loc_825E9284;
	case 2:
		goto loc_825E9270;
	case 3:
		goto loc_825E9284;
	case 4:
		goto loc_825E9284;
	case 5:
		goto loc_825E9284;
	case 6:
		goto loc_825E9284;
	default:
		__builtin_unreachable();
	}
	// lwz r18,-28048(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28048);
	// lwz r18,-28028(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28028);
	// lwz r18,-28048(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28048);
	// lwz r18,-28028(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28028);
	// lwz r18,-28028(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28028);
	// lwz r18,-28028(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28028);
	// lwz r18,-28028(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28028);
loc_825E9270:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_825E9284:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E9294;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82185ee8
	ctx.lr = 0x825E9298;
	sub_82185EE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_825E92B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E92D0"))) PPC_WEAK_FUNC(sub_825E92D0);
PPC_FUNC_IMPL(__imp__sub_825E92D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82581390
	ctx.lr = 0x825E92F0;
	sub_82581390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581080
	ctx.lr = 0x825E92F8;
	sub_82581080(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825e9324
	if (ctx.cr6.eq) goto loc_825E9324;
loc_825E9304:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e92d0
	ctx.lr = 0x825E9310;
	sub_825E92D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581088
	ctx.lr = 0x825E9318;
	sub_82581088(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825e9304
	if (!ctx.cr6.eq) goto loc_825E9304;
loc_825E9324:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E9340"))) PPC_WEAK_FUNC(sub_825E9340);
PPC_FUNC_IMPL(__imp__sub_825E9340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-22044
	ctx.r11.s64 = ctx.r11.s64 + -22044;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82581ac0
	ctx.lr = 0x825E936C;
	sub_82581AC0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825e9384
	if (ctx.cr6.eq) goto loc_825E9384;
	// bl 0x82186190
	ctx.lr = 0x825E9380;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_825E9384:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E93A0"))) PPC_WEAK_FUNC(sub_825E93A0);
PPC_FUNC_IMPL(__imp__sub_825E93A0) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// beq cr6,0x825e93c8
	if (ctx.cr6.eq) goto loc_825E93C8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r11.u32);
	// blr 
	return;
loc_825E93C8:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E93E0"))) PPC_WEAK_FUNC(sub_825E93E0);
PPC_FUNC_IMPL(__imp__sub_825E93E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E93E8"))) PPC_WEAK_FUNC(sub_825E93E8);
PPC_FUNC_IMPL(__imp__sub_825E93E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825e9408
	if (ctx.cr6.eq) goto loc_825E9408;
	// lwz r10,120(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x825e940c
	if (ctx.cr6.lt) goto loc_825E940C;
loc_825E9408:
	// twi 31,r0,22
loc_825E940C:
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E9418"))) PPC_WEAK_FUNC(sub_825E9418);
PPC_FUNC_IMPL(__imp__sub_825E9418) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825e9468
	if (ctx.cr6.eq) goto loc_825E9468;
	// lwz r10,164(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825e9468
	if (!ctx.cr6.lt) goto loc_825E9468;
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825e9458
	if (ctx.cr6.eq) goto loc_825E9458;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x825e945c
	if (ctx.cr6.lt) goto loc_825E945C;
loc_825E9458:
	// twi 31,r0,22
loc_825E945C:
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
loc_825E9468:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E9470"))) PPC_WEAK_FUNC(sub_825E9470);
PPC_FUNC_IMPL(__imp__sub_825E9470) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,252(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E9478"))) PPC_WEAK_FUNC(sub_825E9478);
PPC_FUNC_IMPL(__imp__sub_825E9478) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,248(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E9480"))) PPC_WEAK_FUNC(sub_825E9480);
PPC_FUNC_IMPL(__imp__sub_825E9480) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,164(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825e94c0
	if (ctx.cr6.eq) goto loc_825E94C0;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x825e94c4
	if (ctx.cr6.lt) goto loc_825E94C4;
loc_825E94C0:
	// twi 31,r0,22
loc_825E94C4:
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x825863b0
	sub_825863B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E94D0"))) PPC_WEAK_FUNC(sub_825E94D0);
PPC_FUNC_IMPL(__imp__sub_825E94D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E94D8"))) PPC_WEAK_FUNC(sub_825E94D8);
PPC_FUNC_IMPL(__imp__sub_825E94D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,212(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E94E0"))) PPC_WEAK_FUNC(sub_825E94E0);
PPC_FUNC_IMPL(__imp__sub_825E94E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,216(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E94E8"))) PPC_WEAK_FUNC(sub_825E94E8);
PPC_FUNC_IMPL(__imp__sub_825E94E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,220(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E94F0"))) PPC_WEAK_FUNC(sub_825E94F0);
PPC_FUNC_IMPL(__imp__sub_825E94F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,224(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E94F8"))) PPC_WEAK_FUNC(sub_825E94F8);
PPC_FUNC_IMPL(__imp__sub_825E94F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,228(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E9500"))) PPC_WEAK_FUNC(sub_825E9500);
PPC_FUNC_IMPL(__imp__sub_825E9500) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,904(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 904);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E9508"))) PPC_WEAK_FUNC(sub_825E9508);
PPC_FUNC_IMPL(__imp__sub_825E9508) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,908(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 908);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E9510"))) PPC_WEAK_FUNC(sub_825E9510);
PPC_FUNC_IMPL(__imp__sub_825E9510) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E9518"))) PPC_WEAK_FUNC(sub_825E9518);
PPC_FUNC_IMPL(__imp__sub_825E9518) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,852(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 852);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E9520"))) PPC_WEAK_FUNC(sub_825E9520);
PPC_FUNC_IMPL(__imp__sub_825E9520) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E9530"))) PPC_WEAK_FUNC(sub_825E9530);
PPC_FUNC_IMPL(__imp__sub_825E9530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// lwz r10,-17324(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17324);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// bne cr6,0x825e9590
	if (!ctx.cr6.eq) goto loc_825E9590;
	// addi r31,r11,-17680
	ctx.r31.s64 = ctx.r11.s64 + -17680;
	// ori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-17324(r9)
	PPC_STORE_U32(ctx.r9.u32 + -17324, ctx.r11.u32);
	// bl 0x82632618
	ctx.lr = 0x825E956C;
	sub_82632618(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-30296
	ctx.r3.s64 = ctx.r11.s64 + -30296;
	// bl 0x826ded00
	ctx.lr = 0x825E9578;
	sub_826DED00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_825E9590:
	// addi r3,r11,-17680
	ctx.r3.s64 = ctx.r11.s64 + -17680;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E95A8"))) PPC_WEAK_FUNC(sub_825E95A8);
PPC_FUNC_IMPL(__imp__sub_825E95A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-3496
	ctx.r4.s64 = ctx.r11.s64 + -3496;
	// bl 0x826de850
	ctx.lr = 0x825E95CC;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825e95e0
	if (!ctx.cr6.eq) goto loc_825E95E0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_825E95E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E95F8"))) PPC_WEAK_FUNC(sub_825E95F8);
PPC_FUNC_IMPL(__imp__sub_825E95F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-3248
	ctx.r4.s64 = ctx.r11.s64 + -3248;
	// bl 0x826de850
	ctx.lr = 0x825E961C;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825e9630
	if (!ctx.cr6.eq) goto loc_825E9630;
	// li r3,0
	ctx.r3.s64 = 0;
loc_825E9630:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E9648"))) PPC_WEAK_FUNC(sub_825E9648);
PPC_FUNC_IMPL(__imp__sub_825E9648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-2968
	ctx.r4.s64 = ctx.r11.s64 + -2968;
	// bl 0x826de850
	ctx.lr = 0x825E966C;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825e9680
	if (!ctx.cr6.eq) goto loc_825E9680;
	// li r3,0
	ctx.r3.s64 = 0;
loc_825E9680:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E9698"))) PPC_WEAK_FUNC(sub_825E9698);
PPC_FUNC_IMPL(__imp__sub_825E9698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-2712
	ctx.r4.s64 = ctx.r11.s64 + -2712;
	// bl 0x826de850
	ctx.lr = 0x825E96BC;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825e96d0
	if (!ctx.cr6.eq) goto loc_825E96D0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_825E96D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E96E8"))) PPC_WEAK_FUNC(sub_825E96E8);
PPC_FUNC_IMPL(__imp__sub_825E96E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-2488
	ctx.r4.s64 = ctx.r11.s64 + -2488;
	// bl 0x826de850
	ctx.lr = 0x825E970C;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825e9720
	if (!ctx.cr6.eq) goto loc_825E9720;
	// li r3,0
	ctx.r3.s64 = 0;
loc_825E9720:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E9738"))) PPC_WEAK_FUNC(sub_825E9738);
PPC_FUNC_IMPL(__imp__sub_825E9738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82186158
	ctx.lr = 0x825E9754;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825e9764
	if (ctx.cr6.eq) goto loc_825E9764;
	// bl 0x8262df18
	ctx.lr = 0x825E9760;
	sub_8262DF18(ctx, base);
	// b 0x825e9768
	goto loc_825E9768;
loc_825E9764:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825E9768:
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// stw r3,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825e9790
	if (ctx.cr6.eq) goto loc_825E9790;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E9790;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825E9790:
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82186158
	ctx.lr = 0x825E9798;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825e97ac
	if (ctx.cr6.eq) goto loc_825E97AC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8261a5b0
	ctx.lr = 0x825E97A8;
	sub_8261A5B0(ctx, base);
	// b 0x825e97b0
	goto loc_825E97B0;
loc_825E97AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825E97B0:
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// stw r3,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825e97d8
	if (ctx.cr6.eq) goto loc_825E97D8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E97D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825E97D8:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82186158
	ctx.lr = 0x825E97E0;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825e97f4
	if (ctx.cr6.eq) goto loc_825E97F4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82633088
	ctx.lr = 0x825E97F0;
	sub_82633088(ctx, base);
	// b 0x825e97f8
	goto loc_825E97F8;
loc_825E97F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825E97F8:
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// stw r3,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825e9820
	if (ctx.cr6.eq) goto loc_825E9820;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E9820;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825E9820:
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// bl 0x82632dc8
	ctx.lr = 0x825E9828;
	sub_82632DC8(ctx, base);
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82186158
	ctx.lr = 0x825E9830;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825e9844
	if (ctx.cr6.eq) goto loc_825E9844;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8262a140
	ctx.lr = 0x825E9840;
	sub_8262A140(ctx, base);
	// b 0x825e9848
	goto loc_825E9848;
loc_825E9844:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825E9848:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// stw r3,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825e9870
	if (ctx.cr6.eq) goto loc_825E9870;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E9870;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825E9870:
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82186158
	ctx.lr = 0x825E9878;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825e988c
	if (ctx.cr6.eq) goto loc_825E988C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825f9910
	ctx.lr = 0x825E9888;
	sub_825F9910(ctx, base);
	// b 0x825e9890
	goto loc_825E9890;
loc_825E988C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825E9890:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825e98b8
	if (ctx.cr6.eq) goto loc_825E98B8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E98B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825E98B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E98D0"))) PPC_WEAK_FUNC(sub_825E98D0);
PPC_FUNC_IMPL(__imp__sub_825E98D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825e98fc
	if (ctx.cr6.eq) goto loc_825E98FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x825E98FC;
	sub_82659610(ctx, base);
loc_825E98FC:
	// lwz r3,852(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 852);
	// stw r31,852(r30)
	PPC_STORE_U32(ctx.r30.u32 + 852, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825e9910
	if (ctx.cr6.eq) goto loc_825E9910;
	// bl 0x82581e38
	ctx.lr = 0x825E9910;
	sub_82581E38(ctx, base);
loc_825E9910:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E9928"))) PPC_WEAK_FUNC(sub_825E9928);
PPC_FUNC_IMPL(__imp__sub_825E9928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825e9954
	if (ctx.cr6.eq) goto loc_825E9954;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82631ab0
	ctx.lr = 0x825E994C;
	sub_82631AB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82186190
	ctx.lr = 0x825E9954;
	sub_82186190(ctx, base);
loc_825E9954:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E9968"))) PPC_WEAK_FUNC(sub_825E9968);
PPC_FUNC_IMPL(__imp__sub_825E9968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r5,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, ctx.r5.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,20
	ctx.r3.s64 = 20;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x825E9998;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825e99c4
	if (ctx.cr6.eq) goto loc_825E99C4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,-21604
	ctx.r10.s64 = ctx.r11.s64 + -21604;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x825e99c8
	goto loc_825E99C8;
loc_825E99C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825E99C8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x825e9a14
	if (!ctx.cr6.eq) goto loc_825E9A14;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825e99f4
	if (ctx.cr6.eq) goto loc_825E99F4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E99F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825E99F4:
	// lis r10,-32072
	ctx.r10.s64 = -2101870592;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,2788
	ctx.r11.s64 = ctx.r11.s64 + 2788;
	// lwz r10,-4024(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4024);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x821e0968
	ctx.lr = 0x825E9A14;
	sub_821E0968(ctx, base);
loc_825E9A14:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E9A30"))) PPC_WEAK_FUNC(sub_825E9A30);
PPC_FUNC_IMPL(__imp__sub_825E9A30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825e9a5c
	if (ctx.cr6.eq) goto loc_825E9A5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825863a8
	ctx.lr = 0x825E9A54;
	sub_825863A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82186190
	ctx.lr = 0x825E9A5C;
	sub_82186190(ctx, base);
loc_825E9A5C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E9A70"))) PPC_WEAK_FUNC(sub_825E9A70);
PPC_FUNC_IMPL(__imp__sub_825E9A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,200(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 200);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,204(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 204);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq cr6,0x825e9aa0
	if (ctx.cr6.eq) goto loc_825E9AA0;
	// bl 0x82160140
	ctx.lr = 0x825E9AA0;
	sub_82160140(ctx, base);
loc_825E9AA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E9AB8"))) PPC_WEAK_FUNC(sub_825E9AB8);
PPC_FUNC_IMPL(__imp__sub_825E9AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r5,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, ctx.r5.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,20
	ctx.r3.s64 = 20;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x825E9AE8;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825e9b14
	if (ctx.cr6.eq) goto loc_825E9B14;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,-21644
	ctx.r10.s64 = ctx.r11.s64 + -21644;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x825e9b18
	goto loc_825E9B18;
loc_825E9B14:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825E9B18:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x825e9b5c
	if (!ctx.cr6.eq) goto loc_825E9B5C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825e9b3c
	if (ctx.cr6.eq) goto loc_825E9B3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82631ab0
	ctx.lr = 0x825E9B34;
	sub_82631AB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82186190
	ctx.lr = 0x825E9B3C;
	sub_82186190(ctx, base);
loc_825E9B3C:
	// lis r10,-32072
	ctx.r10.s64 = -2101870592;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,2788
	ctx.r11.s64 = ctx.r11.s64 + 2788;
	// lwz r10,-4024(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4024);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x821e0968
	ctx.lr = 0x825E9B5C;
	sub_821E0968(ctx, base);
loc_825E9B5C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E9B78"))) PPC_WEAK_FUNC(sub_825E9B78);
PPC_FUNC_IMPL(__imp__sub_825E9B78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r5,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, ctx.r5.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,20
	ctx.r3.s64 = 20;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x825E9BA8;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825e9bd4
	if (ctx.cr6.eq) goto loc_825E9BD4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,-21584
	ctx.r10.s64 = ctx.r11.s64 + -21584;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x825e9bd8
	goto loc_825E9BD8;
loc_825E9BD4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825E9BD8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x825e9c1c
	if (!ctx.cr6.eq) goto loc_825E9C1C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825e9bfc
	if (ctx.cr6.eq) goto loc_825E9BFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825863a8
	ctx.lr = 0x825E9BF4;
	sub_825863A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82186190
	ctx.lr = 0x825E9BFC;
	sub_82186190(ctx, base);
loc_825E9BFC:
	// lis r10,-32072
	ctx.r10.s64 = -2101870592;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,2788
	ctx.r11.s64 = ctx.r11.s64 + 2788;
	// lwz r10,-4024(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4024);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x821e0968
	ctx.lr = 0x825E9C1C;
	sub_821E0968(ctx, base);
loc_825E9C1C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E9C38"))) PPC_WEAK_FUNC(sub_825E9C38);
PPC_FUNC_IMPL(__imp__sub_825E9C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r3,864
	ctx.r3.s64 = ctx.r3.s64 + 864;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8249f208
	ctx.lr = 0x825E9C54;
	sub_8249F208(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825e9c78
	if (ctx.cr6.eq) goto loc_825E9C78;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E9C74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_825E9C78:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E9C98"))) PPC_WEAK_FUNC(sub_825E9C98);
PPC_FUNC_IMPL(__imp__sub_825E9C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82186158
	ctx.lr = 0x825E9CB8;
	sub_82186158(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825e9cc8
	if (ctx.cr6.eq) goto loc_825E9CC8;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
loc_825E9CC8:
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825e9cd8
	if (ctx.cr6.eq) goto loc_825E9CD8;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_825E9CD8:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x82186158
	ctx.lr = 0x825E9CEC;
	sub_82186158(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825e9cfc
	if (ctx.cr6.eq) goto loc_825E9CFC;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
loc_825E9CFC:
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825e9d0c
	if (ctx.cr6.eq) goto loc_825E9D0C;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_825E9D0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E9D30"))) PPC_WEAK_FUNC(sub_825E9D30);
PPC_FUNC_IMPL(__imp__sub_825E9D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,116(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825e9d64
	if (ctx.cr6.eq) goto loc_825E9D64;
	// lwz r10,120(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x825e9d68
	if (ctx.cr6.lt) goto loc_825E9D68;
loc_825E9D64:
	// twi 31,r0,22
loc_825E9D68:
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825e9d90
	if (ctx.cr6.eq) goto loc_825E9D90;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x825e9d94
	if (ctx.cr6.lt) goto loc_825E9D94;
loc_825E9D90:
	// twi 31,r0,22
loc_825E9D94:
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8262b468
	ctx.lr = 0x825E9DA4;
	sub_8262B468(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E9DC0"))) PPC_WEAK_FUNC(sub_825E9DC0);
PPC_FUNC_IMPL(__imp__sub_825E9DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,104(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825e9df8
	if (ctx.cr6.eq) goto loc_825E9DF8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x825e9dfc
	if (ctx.cr6.lt) goto loc_825E9DFC;
loc_825E9DF8:
	// twi 31,r0,22
loc_825E9DFC:
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8262b468
	ctx.lr = 0x825E9E0C;
	sub_8262B468(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E9E28"))) PPC_WEAK_FUNC(sub_825E9E28);
PPC_FUNC_IMPL(__imp__sub_825E9E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x825E9E30;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x82186158
	ctx.lr = 0x825E9E40;
	sub_82186158(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825e9e64
	if (ctx.cr6.eq) goto loc_825E9E64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r4,944(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 944);
	// bl 0x824fadb8
	ctx.lr = 0x825E9E58;
	sub_824FADB8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r26,r3,8
	ctx.r26.s64 = ctx.r3.s64 + 8;
	// bne cr6,0x825e9e68
	if (!ctx.cr6.eq) goto loc_825E9E68;
loc_825E9E64:
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
loc_825E9E68:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E9E80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stb r27,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r27.u8);
	// addi r4,r11,-21500
	ctx.r4.s64 = ctx.r11.s64 + -21500;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// bl 0x82161e08
	ctx.lr = 0x825E9EA4;
	sub_82161E08(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82618280
	ctx.lr = 0x825E9EB0;
	sub_82618280(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addis r29,r31,5
	ctx.r29.s64 = ctx.r31.s64 + 327680;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r29,r29,23632
	ctx.r29.s64 = ctx.r29.s64 + 23632;
	// beq cr6,0x825e9ecc
	if (ctx.cr6.eq) goto loc_825E9ECC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x825E9ECC;
	sub_82659610(ctx, base);
loc_825E9ECC:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825e9ee0
	if (ctx.cr6.eq) goto loc_825E9EE0;
	// bl 0x82581e38
	ctx.lr = 0x825E9EE0;
	sub_82581E38(ctx, base);
loc_825E9EE0:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825e9ef0
	if (ctx.cr6.eq) goto loc_825E9EF0;
	// bl 0x82581e38
	ctx.lr = 0x825E9EF0;
	sub_82581E38(ctx, base);
loc_825E9EF0:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x825e9f04
	if (ctx.cr6.lt) goto loc_825E9F04;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82186190
	ctx.lr = 0x825E9F04;
	sub_82186190(ctx, base);
loc_825E9F04:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stb r27,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r27.u8);
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E9F28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x825e9f48
	if (ctx.cr6.eq) goto loc_825E9F48;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E9F48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825E9F48:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82186158
	ctx.lr = 0x825E9F50;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825e9f60
	if (ctx.cr6.eq) goto loc_825E9F60;
	// bl 0x825e9c98
	ctx.lr = 0x825E9F5C;
	sub_825E9C98(ctx, base);
	// b 0x825e9f64
	goto loc_825E9F64;
loc_825E9F60:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_825E9F64:
	// lwz r30,904(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	// stw r3,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r3.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825e9f84
	if (ctx.cr6.eq) goto loc_825E9F84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8260e850
	ctx.lr = 0x825E9F7C;
	sub_8260E850(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82186190
	ctx.lr = 0x825E9F84;
	sub_82186190(ctx, base);
loc_825E9F84:
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x82186158
	ctx.lr = 0x825E9F8C;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825e9f9c
	if (ctx.cr6.eq) goto loc_825E9F9C;
	// bl 0x825efbb0
	ctx.lr = 0x825E9F98;
	sub_825EFBB0(ctx, base);
	// b 0x825e9fa0
	goto loc_825E9FA0;
loc_825E9F9C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_825E9FA0:
	// lwz r30,908(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 908);
	// stw r3,908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 908, ctx.r3.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825e9fc0
	if (ctx.cr6.eq) goto loc_825E9FC0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ef778
	ctx.lr = 0x825E9FB8;
	sub_825EF778(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82186190
	ctx.lr = 0x825E9FC0;
	sub_82186190(ctx, base);
loc_825E9FC0:
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x82186158
	ctx.lr = 0x825E9FC8;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825e9fd8
	if (ctx.cr6.eq) goto loc_825E9FD8;
	// bl 0x821860b8
	ctx.lr = 0x825E9FD4;
	sub_821860B8(ctx, base);
	// b 0x825e9fdc
	goto loc_825E9FDC;
loc_825E9FD8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_825E9FDC:
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825e9fec
	if (ctx.cr6.eq) goto loc_825E9FEC;
	// bl 0x82659610
	ctx.lr = 0x825E9FEC;
	sub_82659610(ctx, base);
loc_825E9FEC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EA004;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ea014
	if (ctx.cr6.eq) goto loc_825EA014;
	// bl 0x82581e38
	ctx.lr = 0x825EA014;
	sub_82581E38(ctx, base);
loc_825EA014:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EA02C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EA044;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825fc280
	ctx.lr = 0x825EA054;
	sub_825FC280(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EA06C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EA084;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x825fc280
	ctx.lr = 0x825EA094;
	sub_825FC280(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825EA0A0"))) PPC_WEAK_FUNC(sub_825EA0A0);
PPC_FUNC_IMPL(__imp__sub_825EA0A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// lbz r10,208(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 208);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825ea150
	if (ctx.cr6.eq) goto loc_825EA150;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// stb r4,208(r30)
	PPC_STORE_U8(ctx.r30.u32 + 208, ctx.r4.u8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x825ea150
	if (!ctx.cr6.eq) goto loc_825EA150;
	// lis r31,-32045
	ctx.r31.s64 = -2100101120;
	// lwz r4,24232(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24232);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x825ea0f4
	if (!ctx.cr6.eq) goto loc_825EA0F4;
	// bl 0x82162070
	ctx.lr = 0x825EA0EC;
	sub_82162070(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,24232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24232, ctx.r4.u32);
loc_825EA0F4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,6236
	ctx.r5.s64 = ctx.r11.s64 + 6236;
	// bl 0x825ec7d8
	ctx.lr = 0x825EA104;
	sub_825EC7D8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lbz r5,208(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 208);
	// addi r4,r11,-21492
	ctx.r4.s64 = ctx.r11.s64 + -21492;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EA124;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,24232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24232);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825ea138
	if (!ctx.cr6.eq) goto loc_825EA138;
	// bl 0x82162070
	ctx.lr = 0x825EA134;
	sub_82162070(ctx, base);
	// stw r3,24232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24232, ctx.r3.u32);
loc_825EA138:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825ec9c8
	ctx.lr = 0x825EA140;
	sub_825EC9C8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ea150
	if (ctx.cr6.eq) goto loc_825EA150;
	// bl 0x821601b8
	ctx.lr = 0x825EA150;
	sub_821601B8(ctx, base);
loc_825EA150:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EA168"))) PPC_WEAK_FUNC(sub_825EA168);
PPC_FUNC_IMPL(__imp__sub_825EA168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x825EA170;
	__savegprlr_27(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// stw r28,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r28.u32);
	// stb r30,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r30.u8);
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stb r30,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r30.u8);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
loc_825EA1AC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x825ea1ac
	if (!ctx.cr6.eq) goto loc_825EA1AC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x825EA1D0;
	sub_82161E08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,3100
	ctx.r4.s64 = ctx.r11.s64 + 3100;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82169cd0
	ctx.lr = 0x825EA1E8;
	sub_82169CD0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x825ea2d0
	if (ctx.cr6.eq) goto loc_825EA2D0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r28,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r28.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// stb r30,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r30.u8);
	// bl 0x82161d10
	ctx.lr = 0x825EA214;
	sub_82161D10(ctx, base);
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82161d10
	ctx.lr = 0x825EA22C;
	sub_82161D10(ctx, base);
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x825ea240
	if (ctx.cr6.lt) goto loc_825EA240;
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x82186190
	ctx.lr = 0x825EA240;
	sub_82186190(ctx, base);
loc_825EA240:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r28,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r28.u32);
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r30.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r28,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r28.u32);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stb r30,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r30.u8);
	// bl 0x82161d10
	ctx.lr = 0x825EA26C;
	sub_82161D10(ctx, base);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x825ea280
	if (!ctx.cr6.lt) goto loc_825EA280;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
loc_825EA280:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_825EA288:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x825ea288
	if (!ctx.cr6.eq) goto loc_825EA288;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x825EA2AC;
	sub_82161E08(ctx, base);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x825ea2c0
	if (ctx.cr6.lt) goto loc_825EA2C0;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82186190
	ctx.lr = 0x825EA2C0;
	sub_82186190(ctx, base);
loc_825EA2C0:
	// stw r28,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r28.u32);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stb r30,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r30.u8);
	// b 0x825ea2f0
	goto loc_825EA2F0;
loc_825EA2D0:
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82161d10
	ctx.lr = 0x825EA2DC;
	sub_82161D10(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,5020
	ctx.r4.s64 = ctx.r11.s64 + 5020;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82161e08
	ctx.lr = 0x825EA2F0;
	sub_82161E08(ctx, base);
loc_825EA2F0:
	// lwz r11,232(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x825ea304
	if (!ctx.cr6.lt) goto loc_825EA304;
	// addi r10,r1,212
	ctx.r10.s64 = ctx.r1.s64 + 212;
loc_825EA304:
	// addi r11,r27,276
	ctx.r11.s64 = ctx.r27.s64 + 276;
loc_825EA308:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x825ea308
	if (!ctx.cr6.eq) goto loc_825EA308;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x825ea334
	if (!ctx.cr6.lt) goto loc_825EA334;
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
loc_825EA334:
	// addi r11,r27,564
	ctx.r11.s64 = ctx.r27.s64 + 564;
loc_825EA338:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x825ea338
	if (!ctx.cr6.eq) goto loc_825EA338;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x825ea364
	if (ctx.cr6.lt) goto loc_825EA364;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x825EA364;
	sub_82186190(ctx, base);
loc_825EA364:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// blt cr6,0x825ea384
	if (ctx.cr6.lt) goto loc_825EA384;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82186190
	ctx.lr = 0x825EA384;
	sub_82186190(ctx, base);
loc_825EA384:
	// lwz r11,232(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stb r30,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r30.u8);
	// blt cr6,0x825ea3a4
	if (ctx.cr6.lt) goto loc_825EA3A4;
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// bl 0x82186190
	ctx.lr = 0x825EA3A4;
	sub_82186190(ctx, base);
loc_825EA3A4:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825EA3B0"))) PPC_WEAK_FUNC(sub_825EA3B0);
PPC_FUNC_IMPL(__imp__sub_825EA3B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// lbz r10,-17701(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -17701);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x825ea470
	if (ctx.cr6.eq) goto loc_825EA470;
	// lis r31,-32045
	ctx.r31.s64 = -2100101120;
	// stb r30,-17701(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17701, ctx.r30.u8);
	// lwz r4,24232(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24232);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x825ea3fc
	if (!ctx.cr6.eq) goto loc_825EA3FC;
	// bl 0x82162070
	ctx.lr = 0x825EA3F4;
	sub_82162070(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,24232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24232, ctx.r4.u32);
loc_825EA3FC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,6236
	ctx.r5.s64 = ctx.r11.s64 + 6236;
	// bl 0x825ec7d8
	ctx.lr = 0x825EA40C;
	sub_825EC7D8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ea460
	if (ctx.cr6.eq) goto loc_825EA460;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ea460
	if (ctx.cr6.eq) goto loc_825EA460;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-21408
	ctx.r4.s64 = ctx.r11.s64 + -21408;
	// lwz r11,84(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EA444;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,24232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24232);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825ea458
	if (!ctx.cr6.eq) goto loc_825EA458;
	// bl 0x82162070
	ctx.lr = 0x825EA454;
	sub_82162070(ctx, base);
	// stw r3,24232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24232, ctx.r3.u32);
loc_825EA458:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825ec9c8
	ctx.lr = 0x825EA460;
	sub_825EC9C8(ctx, base);
loc_825EA460:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ea470
	if (ctx.cr6.eq) goto loc_825EA470;
	// bl 0x821601b8
	ctx.lr = 0x825EA470;
	sub_821601B8(ctx, base);
loc_825EA470:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EA488"))) PPC_WEAK_FUNC(sub_825EA488);
PPC_FUNC_IMPL(__imp__sub_825EA488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r11,-7052
	ctx.r4.s64 = ctx.r11.s64 + -7052;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82161e08
	ctx.lr = 0x825EA4B0;
	sub_82161E08(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,-21396
	ctx.r4.s64 = ctx.r11.s64 + -21396;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x82161e08
	ctx.lr = 0x825EA4C4;
	sub_82161E08(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r11,-448
	ctx.r4.s64 = ctx.r11.s64 + -448;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82161e08
	ctx.lr = 0x825EA4D8;
	sub_82161E08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EA4F0"))) PPC_WEAK_FUNC(sub_825EA4F0);
PPC_FUNC_IMPL(__imp__sub_825EA4F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-448
	ctx.r4.s64 = ctx.r11.s64 + -448;
	// li r5,9
	ctx.r5.s64 = 9;
	// b 0x82161e08
	sub_82161E08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825EA508"))) PPC_WEAK_FUNC(sub_825EA508);
PPC_FUNC_IMPL(__imp__sub_825EA508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x825EA510;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,-21364
	ctx.r31.s64 = ctx.r11.s64 + -21364;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x825ea538
	if (!ctx.cr6.eq) goto loc_825EA538;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r27,7
	ctx.r27.s64 = 7;
	// addi r31,r11,-21388
	ctx.r31.s64 = ctx.r11.s64 + -21388;
loc_825EA538:
	// addis r30,r3,5
	ctx.r30.s64 = ctx.r3.s64 + 327680;
	// addi r30,r30,23612
	ctx.r30.s64 = ctx.r30.s64 + 23612;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ea554
	if (ctx.cr6.eq) goto loc_825EA554;
	// bl 0x82581e38
	ctx.lr = 0x825EA554;
	sub_82581E38(ctx, base);
loc_825EA554:
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r29,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r29.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
loc_825EA56C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x825ea56c
	if (!ctx.cr6.eq) goto loc_825EA56C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x825EA594;
	sub_82161E08(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82583528
	ctx.lr = 0x825EA5A8;
	sub_82583528(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825ea5bc
	if (ctx.cr6.eq) goto loc_825EA5BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x825EA5BC;
	sub_82659610(ctx, base);
loc_825EA5BC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ea5d0
	if (ctx.cr6.eq) goto loc_825EA5D0;
	// bl 0x82581e38
	ctx.lr = 0x825EA5D0;
	sub_82581E38(ctx, base);
loc_825EA5D0:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ea5e0
	if (ctx.cr6.eq) goto loc_825EA5E0;
	// bl 0x82581e38
	ctx.lr = 0x825EA5E0;
	sub_82581E38(ctx, base);
loc_825EA5E0:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x825ea5f4
	if (ctx.cr6.lt) goto loc_825EA5F4;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82186190
	ctx.lr = 0x825EA5F4;
	sub_82186190(ctx, base);
loc_825EA5F4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stb r29,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r29.u8);
	// bl 0x826339b0
	ctx.lr = 0x825EA608;
	sub_826339B0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825EA610"))) PPC_WEAK_FUNC(sub_825EA610);
PPC_FUNC_IMPL(__imp__sub_825EA610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825EA618;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825d3f98
	ctx.lr = 0x825EA630;
	sub_825D3F98(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825d3fd0
	ctx.lr = 0x825EA63C;
	sub_825D3FD0(ctx, base);
	// lbz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ea658
	if (ctx.cr6.eq) goto loc_825EA658;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,26540(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26540);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x825ea660
	if (!ctx.cr6.gt) goto loc_825EA660;
loc_825EA658:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,2952(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2952);
	ctx.f31.f64 = double(temp.f32);
loc_825EA660:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x825ea680
	if (!ctx.cr6.gt) goto loc_825EA680;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x825ea680
	if (!ctx.cr6.gt) goto loc_825EA680;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_825EA680:
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825ea6b8
	if (ctx.cr6.eq) goto loc_825EA6B8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825ea6b4
	if (ctx.cr6.eq) goto loc_825EA6B4;
	// stfs f31,240(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// b 0x825ea6b8
	goto loc_825EA6B8;
loc_825EA6B4:
	// lfs f31,240(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f31.f64 = double(temp.f32);
loc_825EA6B8:
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// clrlwi r28,r10,31
	ctx.r28.u64 = ctx.r10.u32 & 0x1;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ea6e0
	if (ctx.cr6.eq) goto loc_825EA6E0;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// b 0x825ea78c
	goto loc_825EA78C;
loc_825EA6E0:
	// lbz r11,209(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 209);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825ea788
	if (!ctx.cr6.eq) goto loc_825EA788;
	// clrlwi r30,r28,24
	ctx.r30.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825ea71c
	if (ctx.cr6.eq) goto loc_825EA71C;
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ea71c
	if (ctx.cr6.eq) goto loc_825EA71C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ea71c
	if (ctx.cr6.eq) goto loc_825EA71C;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82586b60
	ctx.lr = 0x825EA71C;
	sub_82586B60(ctx, base);
loc_825EA71C:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EA730;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ea75c
	if (ctx.cr6.eq) goto loc_825EA75C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82581850
	ctx.lr = 0x825EA748;
	sub_82581850(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EA75C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825EA75C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825ea78c
	if (ctx.cr6.eq) goto loc_825EA78C;
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ea78c
	if (ctx.cr6.eq) goto loc_825EA78C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ea78c
	if (ctx.cr6.eq) goto loc_825EA78C;
	// bl 0x825869c0
	ctx.lr = 0x825EA784;
	sub_825869C0(ctx, base);
	// b 0x825ea78c
	goto loc_825EA78C;
loc_825EA788:
	// stb r29,209(r31)
	PPC_STORE_U8(ctx.r31.u32 + 209, ctx.r29.u8);
loc_825EA78C:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ea7ac
	if (ctx.cr6.eq) goto loc_825EA7AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EA7AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825EA7AC:
	// addi r30,r31,864
	ctx.r30.s64 = ctx.r31.s64 + 864;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825ea7f8
	if (!ctx.cr6.eq) goto loc_825EA7F8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8249f618
	ctx.lr = 0x825EA7CC;
	sub_8249F618(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ea7f0
	if (ctx.cr6.eq) goto loc_825EA7F0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EA7EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
loc_825EA7F0:
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
loc_825EA7F8:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ea814
	if (ctx.cr6.eq) goto loc_825EA814;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82581d50
	ctx.lr = 0x825EA810;
	sub_82581D50(ctx, base);
	// b 0x825ea830
	goto loc_825EA830;
loc_825EA814:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EA828;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82581120
	ctx.lr = 0x825EA830;
	sub_82581120(ctx, base);
loc_825EA830:
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// bl 0x821e0968
	ctx.lr = 0x825EA844;
	sub_821E0968(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825EA850"))) PPC_WEAK_FUNC(sub_825EA850);
PPC_FUNC_IMPL(__imp__sub_825EA850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rldicr r5,r9,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82611e38
	ctx.lr = 0x825EA890;
	sub_82611E38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EA8A8"))) PPC_WEAK_FUNC(sub_825EA8A8);
PPC_FUNC_IMPL(__imp__sub_825EA8A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// lbz r10,912(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 912);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825ea9f4
	if (ctx.cr6.eq) goto loc_825EA9F4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r4,912(r31)
	PPC_STORE_U8(ctx.r31.u32 + 912, ctx.r4.u8);
	// beq cr6,0x825ea9b4
	if (ctx.cr6.eq) goto loc_825EA9B4;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EA8FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82186158
	ctx.lr = 0x825EA904;
	sub_82186158(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825ea960
	if (ctx.cr6.eq) goto loc_825EA960;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,-29080
	ctx.r11.s64 = ctx.r11.s64 + -29080;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicl r9,r11,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x825ea850
	ctx.lr = 0x825EA94C;
	sub_825EA850(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82618d70
	ctx.lr = 0x825EA958;
	sub_82618D70(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x825ea964
	goto loc_825EA964;
loc_825EA960:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825EA964:
	// lwz r3,916(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 916);
	// stw r11,916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 916, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ea988
	if (ctx.cr6.eq) goto loc_825EA988;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EA988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825EA988:
	// lwz r3,916(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 916);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ea9f4
	if (ctx.cr6.eq) goto loc_825EA9F4;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ea9f4
	if (ctx.cr6.eq) goto loc_825EA9F4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2952(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2952);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82618d58
	ctx.lr = 0x825EA9B0;
	sub_82618D58(ctx, base);
	// b 0x825ea9f4
	goto loc_825EA9F4;
loc_825EA9B4:
	// lwz r3,916(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 916);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ea9d4
	if (ctx.cr6.eq) goto loc_825EA9D4;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ea9d4
	if (ctx.cr6.eq) goto loc_825EA9D4;
	// bl 0x82586730
	ctx.lr = 0x825EA9D4;
	sub_82586730(ctx, base);
loc_825EA9D4:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EA9F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825EA9F4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EAA10"))) PPC_WEAK_FUNC(sub_825EAA10);
PPC_FUNC_IMPL(__imp__sub_825EAA10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825EAA18;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-21308
	ctx.r11.s64 = ctx.r11.s64 + -21308;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82581ba8
	ctx.lr = 0x825EAA40;
	sub_82581BA8(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825eaa60
	if (ctx.cr6.eq) goto loc_825EAA60;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EAA60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825EAA60:
	// addis r29,r31,5
	ctx.r29.s64 = ctx.r31.s64 + 327680;
	// addi r29,r29,23652
	ctx.r29.s64 = ctx.r29.s64 + 23652;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825eaa88
	if (ctx.cr6.eq) goto loc_825EAA88;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825eaa88
	if (ctx.cr6.eq) goto loc_825EAA88;
	// bl 0x82582dc0
	ctx.lr = 0x825EAA88;
	sub_82582DC0(ctx, base);
loc_825EAA88:
	// addis r30,r31,5
	ctx.r30.s64 = ctx.r31.s64 + 327680;
	// addi r30,r30,23648
	ctx.r30.s64 = ctx.r30.s64 + 23648;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825eaab0
	if (ctx.cr6.eq) goto loc_825EAAB0;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825eaab0
	if (ctx.cr6.eq) goto loc_825EAAB0;
	// bl 0x82582dc0
	ctx.lr = 0x825EAAB0;
	sub_82582DC0(ctx, base);
loc_825EAAB0:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825eaac0
	if (ctx.cr6.eq) goto loc_825EAAC0;
	// bl 0x82581e38
	ctx.lr = 0x825EAAC0;
	sub_82581E38(ctx, base);
loc_825EAAC0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825eaad0
	if (ctx.cr6.eq) goto loc_825EAAD0;
	// bl 0x82581e38
	ctx.lr = 0x825EAAD0;
	sub_82581E38(ctx, base);
loc_825EAAD0:
	// addis r11,r31,5
	ctx.r11.s64 = ctx.r31.s64 + 327680;
	// addi r11,r11,23632
	ctx.r11.s64 = ctx.r11.s64 + 23632;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825eaae8
	if (ctx.cr6.eq) goto loc_825EAAE8;
	// bl 0x82581e38
	ctx.lr = 0x825EAAE8;
	sub_82581E38(ctx, base);
loc_825EAAE8:
	// addis r30,r31,5
	ctx.r30.s64 = ctx.r31.s64 + 327680;
	// addi r30,r30,23616
	ctx.r30.s64 = ctx.r30.s64 + 23616;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825eab14
	if (ctx.cr6.eq) goto loc_825EAB14;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82279350
	ctx.lr = 0x825EAB0C;
	sub_82279350(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x825EAB14;
	sub_82186190(ctx, base);
loc_825EAB14:
	// addis r11,r31,5
	ctx.r11.s64 = ctx.r31.s64 + 327680;
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// addi r11,r11,23612
	ctx.r11.s64 = ctx.r11.s64 + 23612;
	// stw r28,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r28.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825eab38
	if (ctx.cr6.eq) goto loc_825EAB38;
	// bl 0x82581e38
	ctx.lr = 0x825EAB38;
	sub_82581E38(ctx, base);
loc_825EAB38:
	// addis r3,r31,5
	ctx.r3.s64 = ctx.r31.s64 + 327680;
	// addi r3,r3,23516
	ctx.r3.s64 = ctx.r3.s64 + 23516;
	// bl 0x82164eb0
	ctx.lr = 0x825EAB44;
	sub_82164EB0(ctx, base);
	// addis r3,r31,3
	ctx.r3.s64 = ctx.r31.s64 + 196608;
	// addi r3,r3,-20532
	ctx.r3.s64 = ctx.r3.s64 + -20532;
	// bl 0x821e0968
	ctx.lr = 0x825EAB50;
	sub_821E0968(ctx, base);
	// addi r3,r31,956
	ctx.r3.s64 = ctx.r31.s64 + 956;
	// bl 0x821e0968
	ctx.lr = 0x825EAB58;
	sub_821E0968(ctx, base);
	// lwz r3,916(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 916);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825eab78
	if (ctx.cr6.eq) goto loc_825EAB78;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EAB78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825EAB78:
	// lwz r30,908(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 908);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825eab94
	if (ctx.cr6.eq) goto loc_825EAB94;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ef778
	ctx.lr = 0x825EAB8C;
	sub_825EF778(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82186190
	ctx.lr = 0x825EAB94;
	sub_82186190(ctx, base);
loc_825EAB94:
	// lwz r30,904(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825eabb0
	if (ctx.cr6.eq) goto loc_825EABB0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8260e850
	ctx.lr = 0x825EABA8;
	sub_8260E850(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82186190
	ctx.lr = 0x825EABB0;
	sub_82186190(ctx, base);
loc_825EABB0:
	// lwz r30,900(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825eabcc
	if (ctx.cr6.eq) goto loc_825EABCC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825fe430
	ctx.lr = 0x825EABC4;
	sub_825FE430(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82186190
	ctx.lr = 0x825EABCC;
	sub_82186190(ctx, base);
loc_825EABCC:
	// addi r3,r31,876
	ctx.r3.s64 = ctx.r31.s64 + 876;
	// bl 0x821e0968
	ctx.lr = 0x825EABD4;
	sub_821E0968(ctx, base);
	// addi r30,r31,864
	ctx.r30.s64 = ctx.r31.s64 + 864;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825eabfc
	if (ctx.cr6.eq) goto loc_825EABFC;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EABF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
loc_825EABFC:
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// lwz r30,860(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 860);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825eac20
	if (ctx.cr6.eq) goto loc_825EAC20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824b0db0
	ctx.lr = 0x825EAC18;
	sub_824B0DB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82186190
	ctx.lr = 0x825EAC20;
	sub_82186190(ctx, base);
loc_825EAC20:
	// lwz r3,852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825eac30
	if (ctx.cr6.eq) goto loc_825EAC30;
	// bl 0x82581e38
	ctx.lr = 0x825EAC30;
	sub_82581E38(ctx, base);
loc_825EAC30:
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825eac40
	if (ctx.cr6.eq) goto loc_825EAC40;
	// bl 0x821601b8
	ctx.lr = 0x825EAC40;
	sub_821601B8(ctx, base);
loc_825EAC40:
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825eac50
	if (ctx.cr6.eq) goto loc_825EAC50;
	// bl 0x821601b8
	ctx.lr = 0x825EAC50;
	sub_821601B8(ctx, base);
loc_825EAC50:
	// lwz r30,252(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825eac6c
	if (ctx.cr6.eq) goto loc_825EAC6C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259d1a8
	ctx.lr = 0x825EAC64;
	sub_8259D1A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82186190
	ctx.lr = 0x825EAC6C;
	sub_82186190(ctx, base);
loc_825EAC6C:
	// lwz r30,248(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825eac88
	if (ctx.cr6.eq) goto loc_825EAC88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259d1a8
	ctx.lr = 0x825EAC80;
	sub_8259D1A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82186190
	ctx.lr = 0x825EAC88;
	sub_82186190(ctx, base);
loc_825EAC88:
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825eaca8
	if (ctx.cr6.eq) goto loc_825EACA8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EACA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825EACA8:
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825eacc8
	if (ctx.cr6.eq) goto loc_825EACC8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EACC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825EACC8:
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825eace8
	if (ctx.cr6.eq) goto loc_825EACE8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EACE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825EACE8:
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ead08
	if (ctx.cr6.eq) goto loc_825EAD08;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EAD08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825EAD08:
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ead28
	if (ctx.cr6.eq) goto loc_825EAD28;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EAD28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825EAD28:
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ead38
	if (ctx.cr6.eq) goto loc_825EAD38;
	// bl 0x821601b8
	ctx.lr = 0x825EAD38;
	sub_821601B8(ctx, base);
loc_825EAD38:
	// addi r3,r31,172
	ctx.r3.s64 = ctx.r31.s64 + 172;
	// bl 0x8289c2f8
	ctx.lr = 0x825EAD40;
	sub_8289C2F8(ctx, base);
	// addi r30,r31,156
	ctx.r30.s64 = ctx.r31.s64 + 156;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ead68
	if (ctx.cr6.eq) goto loc_825EAD68;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82402228
	ctx.lr = 0x825EAD60;
	sub_82402228(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x825EAD68;
	sub_82186190(ctx, base);
loc_825EAD68:
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// stw r28,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r28.u32);
	// bl 0x82594838
	ctx.lr = 0x825EAD7C;
	sub_82594838(ctx, base);
	// addi r30,r31,112
	ctx.r30.s64 = ctx.r31.s64 + 112;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825eada4
	if (ctx.cr6.eq) goto loc_825EADA4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82402228
	ctx.lr = 0x825EAD9C;
	sub_82402228(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x825EADA4;
	sub_82186190(ctx, base);
loc_825EADA4:
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// stw r28,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r28.u32);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825eadc0
	if (ctx.cr6.eq) goto loc_825EADC0;
	// bl 0x821601b8
	ctx.lr = 0x825EADC0;
	sub_821601B8(ctx, base);
loc_825EADC0:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825eade0
	if (ctx.cr6.eq) goto loc_825EADE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EADE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825EADE0:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825eae00
	if (ctx.cr6.eq) goto loc_825EAE00;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EAE00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825EAE00:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-22044
	ctx.r11.s64 = ctx.r11.s64 + -22044;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82581ac0
	ctx.lr = 0x825EAE14;
	sub_82581AC0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825EAE20"))) PPC_WEAK_FUNC(sub_825EAE20);
PPC_FUNC_IMPL(__imp__sub_825EAE20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825eae78
	if (ctx.cr6.eq) goto loc_825EAE78;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825eae60
	if (ctx.cr6.eq) goto loc_825EAE60;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x824618d8
	ctx.lr = 0x825EAE58;
	sub_824618D8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x825EAE60;
	sub_82186190(ctx, base);
loc_825EAE60:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82186190
	ctx.lr = 0x825EAE78;
	sub_82186190(ctx, base);
loc_825EAE78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EAE90"))) PPC_WEAK_FUNC(sub_825EAE90);
PPC_FUNC_IMPL(__imp__sub_825EAE90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825eaee8
	if (ctx.cr6.eq) goto loc_825EAEE8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825eaed0
	if (ctx.cr6.eq) goto loc_825EAED0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x824618d8
	ctx.lr = 0x825EAEC8;
	sub_824618D8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x825EAED0;
	sub_82186190(ctx, base);
loc_825EAED0:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82186190
	ctx.lr = 0x825EAEE8;
	sub_82186190(ctx, base);
loc_825EAEE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EAF00"))) PPC_WEAK_FUNC(sub_825EAF00);
PPC_FUNC_IMPL(__imp__sub_825EAF00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r5,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, ctx.r5.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,20
	ctx.r3.s64 = 20;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x825EAF30;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825eaf5c
	if (ctx.cr6.eq) goto loc_825EAF5C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,-21664
	ctx.r10.s64 = ctx.r11.s64 + -21664;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x825eaf60
	goto loc_825EAF60;
loc_825EAF5C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825EAF60:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x825eaf98
	if (!ctx.cr6.eq) goto loc_825EAF98;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,151
	ctx.r3.s64 = ctx.r1.s64 + 151;
	// bl 0x825eae90
	ctx.lr = 0x825EAF78;
	sub_825EAE90(ctx, base);
	// lis r10,-32072
	ctx.r10.s64 = -2101870592;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,2788
	ctx.r11.s64 = ctx.r11.s64 + 2788;
	// lwz r10,-4024(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4024);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x821e0968
	ctx.lr = 0x825EAF98;
	sub_821E0968(ctx, base);
loc_825EAF98:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EAFB8"))) PPC_WEAK_FUNC(sub_825EAFB8);
PPC_FUNC_IMPL(__imp__sub_825EAFB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r5,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, ctx.r5.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,20
	ctx.r3.s64 = 20;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x825EAFE8;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825eb014
	if (ctx.cr6.eq) goto loc_825EB014;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,-21624
	ctx.r10.s64 = ctx.r11.s64 + -21624;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x825eb018
	goto loc_825EB018;
loc_825EB014:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825EB018:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x825eb050
	if (!ctx.cr6.eq) goto loc_825EB050;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,151
	ctx.r3.s64 = ctx.r1.s64 + 151;
	// bl 0x825eae90
	ctx.lr = 0x825EB030;
	sub_825EAE90(ctx, base);
	// lis r10,-32072
	ctx.r10.s64 = -2101870592;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,2788
	ctx.r11.s64 = ctx.r11.s64 + 2788;
	// lwz r10,-4024(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4024);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x821e0968
	ctx.lr = 0x825EB050;
	sub_821E0968(ctx, base);
loc_825EB050:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EB070"))) PPC_WEAK_FUNC(sub_825EB070);
PPC_FUNC_IMPL(__imp__sub_825EB070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de890
	ctx.lr = 0x825EB078;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// bl 0x82581968
	ctx.lr = 0x825EB08C;
	sub_82581968(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-21308
	ctx.r11.s64 = ctx.r11.s64 + -21308;
	// addi r24,r31,104
	ctx.r24.s64 = ctx.r31.s64 + 104;
	// addi r23,r31,112
	ctx.r23.s64 = ctx.r31.s64 + 112;
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r30.u32);
	// stw r30,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r30.u32);
	// stw r30,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r30.u32);
	// stw r30,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r30.u32);
	// stw r30,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r30.u32);
	// bl 0x82594730
	ctx.lr = 0x825EB0D0;
	sub_82594730(ctx, base);
	// addi r15,r31,156
	ctx.r15.s64 = ctx.r31.s64 + 156;
	// addi r20,r31,172
	ctx.r20.s64 = ctx.r31.s64 + 172;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stw r30,4(r15)
	PPC_STORE_U32(ctx.r15.u32 + 4, ctx.r30.u32);
	// stw r30,8(r15)
	PPC_STORE_U32(ctx.r15.u32 + 8, ctx.r30.u32);
	// stw r30,12(r15)
	PPC_STORE_U32(ctx.r15.u32 + 12, ctx.r30.u32);
	// bl 0x8289c2d8
	ctx.lr = 0x825EB0EC;
	sub_8289C2D8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x825d42a8
	ctx.lr = 0x825EB0F8;
	sub_825D42A8(ctx, base);
	// addi r10,r31,200
	ctx.r10.s64 = ctx.r31.s64 + 200;
	// li r28,1
	ctx.r28.s64 = 1;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r21,r31,268
	ctx.r21.s64 = ctx.r31.s64 + 268;
	// addi r3,r31,876
	ctx.r3.s64 = ctx.r31.s64 + 876;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// stb r30,208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 208, ctx.r30.u8);
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// stb r28,209(r31)
	PPC_STORE_U8(ctx.r31.u32 + 209, ctx.r28.u8);
	// stb r30,210(r31)
	PPC_STORE_U8(ctx.r31.u32 + 210, ctx.r30.u8);
	// stb r30,211(r31)
	PPC_STORE_U8(ctx.r31.u32 + 211, ctx.r30.u8);
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// stw r30,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r30.u32);
	// stw r30,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r30.u32);
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// stfs f31,232(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// stw r30,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r30.u32);
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// stw r30,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// stw r30,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r30.u32);
	// stw r30,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r30.u32);
	// stw r30,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r30.u32);
	// stw r30,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r30.u32);
	// stw r30,852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 852, ctx.r30.u32);
	// stb r30,856(r31)
	PPC_STORE_U8(ctx.r31.u32 + 856, ctx.r30.u8);
	// stw r30,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r30.u32);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// stw r30,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r30.u32);
	// stw r30,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r30.u32);
	// stw r30,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r30.u32);
	// bl 0x825d3f98
	ctx.lr = 0x825EB184;
	sub_825D3F98(ctx, base);
	// std r30,880(r31)
	PPC_STORE_U64(ctx.r31.u32 + 880, ctx.r30.u64);
	// stfs f31,892(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 892, temp.u32);
	// stb r30,888(r31)
	PPC_STORE_U8(ctx.r31.u32 + 888, ctx.r30.u8);
	// addi r3,r31,956
	ctx.r3.s64 = ctx.r31.s64 + 956;
	// stb r30,896(r31)
	PPC_STORE_U8(ctx.r31.u32 + 896, ctx.r30.u8);
	// stb r30,897(r31)
	PPC_STORE_U8(ctx.r31.u32 + 897, ctx.r30.u8);
	// stw r30,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r30.u32);
	// stw r30,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r30.u32);
	// stw r30,908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 908, ctx.r30.u32);
	// stb r30,912(r31)
	PPC_STORE_U8(ctx.r31.u32 + 912, ctx.r30.u8);
	// stw r30,916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 916, ctx.r30.u32);
	// stb r30,952(r31)
	PPC_STORE_U8(ctx.r31.u32 + 952, ctx.r30.u8);
	// bl 0x82188510
	ctx.lr = 0x825EB1B8;
	sub_82188510(ctx, base);
	// addis r3,r31,3
	ctx.r3.s64 = ctx.r31.s64 + 196608;
	// addi r3,r3,-20532
	ctx.r3.s64 = ctx.r3.s64 + -20532;
	// bl 0x82188510
	ctx.lr = 0x825EB1C4;
	sub_82188510(ctx, base);
	// addis r3,r31,5
	ctx.r3.s64 = ctx.r31.s64 + 327680;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r3,23516
	ctx.r3.s64 = ctx.r3.s64 + 23516;
	// bl 0x821653f0
	ctx.lr = 0x825EB1D4;
	sub_821653F0(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lis r10,5
	ctx.r10.s64 = 327680;
	// ori r11,r11,23588
	ctx.r11.u64 = ctx.r11.u64 | 23588;
	// ori r10,r10,23592
	ctx.r10.u64 = ctx.r10.u64 | 23592;
	// addis r25,r31,5
	ctx.r25.s64 = ctx.r31.s64 + 327680;
	// addis r29,r31,5
	ctx.r29.s64 = ctx.r31.s64 + 327680;
	// addi r25,r25,23612
	ctx.r25.s64 = ctx.r25.s64 + 23612;
	// stwx r30,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u32);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// stwx r30,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r30.u32);
	// lis r10,5
	ctx.r10.s64 = 327680;
	// addi r29,r29,23616
	ctx.r29.s64 = ctx.r29.s64 + 23616;
	// ori r11,r11,23632
	ctx.r11.u64 = ctx.r11.u64 | 23632;
	// lis r8,5
	ctx.r8.s64 = 327680;
	// stw r30,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r30.u32);
	// lis r7,5
	ctx.r7.s64 = 327680;
	// ori r10,r10,23636
	ctx.r10.u64 = ctx.r10.u64 | 23636;
	// addis r27,r31,5
	ctx.r27.s64 = ctx.r31.s64 + 327680;
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// li r9,33
	ctx.r9.s64 = 33;
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// addis r26,r31,5
	ctx.r26.s64 = ctx.r31.s64 + 327680;
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// ori r8,r8,23640
	ctx.r8.u64 = ctx.r8.u64 | 23640;
	// stwx r30,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u32);
	// ori r7,r7,23644
	ctx.r7.u64 = ctx.r7.u64 | 23644;
	// addi r27,r27,23648
	ctx.r27.s64 = ctx.r27.s64 + 23648;
	// addi r26,r26,23652
	ctx.r26.s64 = ctx.r26.s64 + 23652;
	// stwx r9,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
	// addis r10,r31,5
	ctx.r10.s64 = ctx.r31.s64 + 327680;
	// stbx r28,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r28.u8);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stwx r30,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r30.u32);
	// addi r10,r10,23596
	ctx.r10.s64 = ctx.r10.s64 + 23596;
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
loc_825EB264:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x825eb264
	if (!ctx.cr6.eq) goto loc_825EB264;
	// li r14,15
	ctx.r14.s64 = 15;
	// stw r30,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r30.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stb r30,340(r1)
	PPC_STORE_U8(ctx.r1.u32 + 340, ctx.r30.u8);
	// li r5,19
	ctx.r5.s64 = 19;
	// addi r4,r11,-20736
	ctx.r4.s64 = ctx.r11.s64 + -20736;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// stw r14,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r14.u32);
	// bl 0x82161e08
	ctx.lr = 0x825EB2A0;
	sub_82161E08(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82583528
	ctx.lr = 0x825EB2B4;
	sub_82583528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822d9150
	ctx.lr = 0x825EB2C0;
	sub_822D9150(ctx, base);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825eb2d0
	if (ctx.cr6.eq) goto loc_825EB2D0;
	// bl 0x82581e38
	ctx.lr = 0x825EB2D0;
	sub_82581E38(ctx, base);
loc_825EB2D0:
	// lwz r11,360(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x825eb2e4
	if (ctx.cr6.lt) goto loc_825EB2E4;
	// lwz r3,340(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// bl 0x82186190
	ctx.lr = 0x825EB2E4;
	sub_82186190(ctx, base);
loc_825EB2E4:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r14,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r14.u32);
	// li r5,19
	ctx.r5.s64 = 19;
	// stw r30,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r30.u32);
	// addi r4,r11,-20756
	ctx.r4.s64 = ctx.r11.s64 + -20756;
	// stb r30,340(r1)
	PPC_STORE_U8(ctx.r1.u32 + 340, ctx.r30.u8);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stw r14,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r14.u32);
	// stw r30,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r30.u32);
	// stb r30,276(r1)
	PPC_STORE_U8(ctx.r1.u32 + 276, ctx.r30.u8);
	// bl 0x82161e08
	ctx.lr = 0x825EB310;
	sub_82161E08(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82583528
	ctx.lr = 0x825EB324;
	sub_82583528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822d9150
	ctx.lr = 0x825EB330;
	sub_822D9150(ctx, base);
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825eb340
	if (ctx.cr6.eq) goto loc_825EB340;
	// bl 0x82581e38
	ctx.lr = 0x825EB340;
	sub_82581E38(ctx, base);
loc_825EB340:
	// lwz r11,296(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x825eb354
	if (ctx.cr6.lt) goto loc_825EB354;
	// lwz r3,276(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// bl 0x82186190
	ctx.lr = 0x825EB354;
	sub_82186190(ctx, base);
loc_825EB354:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r14,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r14.u32);
	// li r5,18
	ctx.r5.s64 = 18;
	// stw r30,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r30.u32);
	// addi r4,r11,-20776
	ctx.r4.s64 = ctx.r11.s64 + -20776;
	// stb r30,276(r1)
	PPC_STORE_U8(ctx.r1.u32 + 276, ctx.r30.u8);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stw r14,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r14.u32);
	// stw r30,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r30.u32);
	// stb r30,308(r1)
	PPC_STORE_U8(ctx.r1.u32 + 308, ctx.r30.u8);
	// bl 0x82161e08
	ctx.lr = 0x825EB380;
	sub_82161E08(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82583528
	ctx.lr = 0x825EB394;
	sub_82583528(ctx, base);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825eb3a8
	if (ctx.cr6.eq) goto loc_825EB3A8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82659610
	ctx.lr = 0x825EB3A8;
	sub_82659610(ctx, base);
loc_825EB3A8:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r29,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825eb3bc
	if (ctx.cr6.eq) goto loc_825EB3BC;
	// bl 0x82581e38
	ctx.lr = 0x825EB3BC;
	sub_82581E38(ctx, base);
loc_825EB3BC:
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825eb3cc
	if (ctx.cr6.eq) goto loc_825EB3CC;
	// bl 0x82581e38
	ctx.lr = 0x825EB3CC;
	sub_82581E38(ctx, base);
loc_825EB3CC:
	// lwz r11,328(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x825eb3e0
	if (ctx.cr6.lt) goto loc_825EB3E0;
	// lwz r3,308(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// bl 0x82186190
	ctx.lr = 0x825EB3E0;
	sub_82186190(ctx, base);
loc_825EB3E0:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r14,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r14.u32);
	// stw r30,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r30,308(r1)
	PPC_STORE_U8(ctx.r1.u32 + 308, ctx.r30.u8);
	// beq cr6,0x825eb40c
	if (ctx.cr6.eq) goto loc_825EB40C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825eb40c
	if (ctx.cr6.eq) goto loc_825EB40C;
	// bl 0x82582c10
	ctx.lr = 0x825EB40C;
	sub_82582C10(ctx, base);
loc_825EB40C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r14,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r14.u32);
	// li r5,26
	ctx.r5.s64 = 26;
	// stw r30,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r30.u32);
	// addi r4,r11,-20804
	ctx.r4.s64 = ctx.r11.s64 + -20804;
	// stb r30,372(r1)
	PPC_STORE_U8(ctx.r1.u32 + 372, ctx.r30.u8);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82161e08
	ctx.lr = 0x825EB42C;
	sub_82161E08(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x82583528
	ctx.lr = 0x825EB440;
	sub_82583528(ctx, base);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825eb454
	if (ctx.cr6.eq) goto loc_825EB454;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82659610
	ctx.lr = 0x825EB454;
	sub_82659610(ctx, base);
loc_825EB454:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r29,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825eb468
	if (ctx.cr6.eq) goto loc_825EB468;
	// bl 0x82581e38
	ctx.lr = 0x825EB468;
	sub_82581E38(ctx, base);
loc_825EB468:
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825eb478
	if (ctx.cr6.eq) goto loc_825EB478;
	// bl 0x82581e38
	ctx.lr = 0x825EB478;
	sub_82581E38(ctx, base);
loc_825EB478:
	// lwz r11,392(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x825eb48c
	if (ctx.cr6.lt) goto loc_825EB48C;
	// lwz r3,372(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// bl 0x82186190
	ctx.lr = 0x825EB48C;
	sub_82186190(ctx, base);
loc_825EB48C:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r14,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r14.u32);
	// stw r30,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r30,372(r1)
	PPC_STORE_U8(ctx.r1.u32 + 372, ctx.r30.u8);
	// beq cr6,0x825eb4b8
	if (ctx.cr6.eq) goto loc_825EB4B8;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825eb4b8
	if (ctx.cr6.eq) goto loc_825EB4B8;
	// bl 0x82582c10
	ctx.lr = 0x825EB4B8;
	sub_82582C10(ctx, base);
loc_825EB4B8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r14,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r14.u32);
	// li r5,19
	ctx.r5.s64 = 19;
	// stw r30,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
	// addi r4,r11,-21364
	ctx.r4.s64 = ctx.r11.s64 + -21364;
	// stb r30,244(r1)
	PPC_STORE_U8(ctx.r1.u32 + 244, ctx.r30.u8);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82161e08
	ctx.lr = 0x825EB4D8;
	sub_82161E08(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x82583528
	ctx.lr = 0x825EB4EC;
	sub_82583528(ctx, base);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825eb500
	if (ctx.cr6.eq) goto loc_825EB500;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82659610
	ctx.lr = 0x825EB500;
	sub_82659610(ctx, base);
loc_825EB500:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stw r29,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825eb514
	if (ctx.cr6.eq) goto loc_825EB514;
	// bl 0x82581e38
	ctx.lr = 0x825EB514;
	sub_82581E38(ctx, base);
loc_825EB514:
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825eb524
	if (ctx.cr6.eq) goto loc_825EB524;
	// bl 0x82581e38
	ctx.lr = 0x825EB524;
	sub_82581E38(ctx, base);
loc_825EB524:
	// lwz r11,264(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x825eb538
	if (ctx.cr6.lt) goto loc_825EB538;
	// lwz r3,244(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// bl 0x82186190
	ctx.lr = 0x825EB538;
	sub_82186190(ctx, base);
loc_825EB538:
	// lis r28,-32044
	ctx.r28.s64 = -2100035584;
	// stw r14,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r14.u32);
	// stw r30,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
	// stb r30,244(r1)
	PPC_STORE_U8(ctx.r1.u32 + 244, ctx.r30.u8);
	// lwz r3,-17256(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -17256);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825eb594
	if (!ctx.cr6.eq) goto loc_825EB594;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lwz r11,-17260(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17260);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// addi r29,r9,-17272
	ctx.r29.s64 = ctx.r9.s64 + -17272;
	// bne cr6,0x825eb58c
	if (!ctx.cr6.eq) goto loc_825EB58C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,-17260(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17260, ctx.r11.u32);
	// bl 0x825b2370
	ctx.lr = 0x825EB580;
	sub_825B2370(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-30216
	ctx.r3.s64 = ctx.r11.s64 + -30216;
	// bl 0x826ded00
	ctx.lr = 0x825EB58C;
	sub_826DED00(ctx, base);
loc_825EB58C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r3,-17256(r28)
	PPC_STORE_U32(ctx.r28.u32 + -17256, ctx.r3.u32);
loc_825EB594:
	// bl 0x821e0968
	ctx.lr = 0x825EB598;
	sub_821E0968(ctx, base);
	// lis r28,-32045
	ctx.r28.s64 = -2100101120;
	// lwz r4,24232(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24232);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x825eb5e8
	if (!ctx.cr6.eq) goto loc_825EB5E8;
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// lwz r11,24228(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24228);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lis r9,-32045
	ctx.r9.s64 = -2100101120;
	// addi r29,r9,24188
	ctx.r29.s64 = ctx.r9.s64 + 24188;
	// bne cr6,0x825eb5e0
	if (!ctx.cr6.eq) goto loc_825EB5E0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,24228(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24228, ctx.r11.u32);
	// bl 0x825eca20
	ctx.lr = 0x825EB5D4;
	sub_825ECA20(ctx, base);
	// lis r11,-32082
	ctx.r11.s64 = -2102525952;
	// addi r3,r11,31640
	ctx.r3.s64 = ctx.r11.s64 + 31640;
	// bl 0x826ded00
	ctx.lr = 0x825EB5E0;
	sub_826DED00(ctx, base);
loc_825EB5E0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r4,24232(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24232, ctx.r4.u32);
loc_825EB5E8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r5,r11,6236
	ctx.r5.s64 = ctx.r11.s64 + 6236;
	// bl 0x825ec7d8
	ctx.lr = 0x825EB5F8;
	sub_825EC7D8(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r19,-32044
	ctx.r19.s64 = -2100035584;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825eb84c
	if (ctx.cr6.eq) goto loc_825EB84C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825eb84c
	if (ctx.cr6.eq) goto loc_825EB84C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-21492
	ctx.r4.s64 = ctx.r11.s64 + -21492;
	// lwz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EB630;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r4,r11,-21464
	ctx.r4.s64 = ctx.r11.s64 + -21464;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stb r10,208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 208, ctx.r10.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EB658;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r4,r11,-21448
	ctx.r4.s64 = ctx.r11.s64 + -21448;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stb r10,210(r31)
	PPC_STORE_U8(ctx.r31.u32 + 210, ctx.r10.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EB680;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r4,r11,6128
	ctx.r4.s64 = ctx.r11.s64 + 6128;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stb r10,211(r31)
	PPC_STORE_U8(ctx.r31.u32 + 211, ctx.r10.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EB6A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r3,-17703(r19)
	PPC_STORE_U8(ctx.r19.u32 + -17703, ctx.r3.u8);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-21328
	ctx.r4.s64 = ctx.r11.s64 + -21328;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EB6C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stb r3,-17702(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17702, ctx.r3.u8);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r11,-21344
	ctx.r4.s64 = ctx.r11.s64 + -21344;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EB6EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stb r3,-17700(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17700, ctx.r3.u8);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r11,-21484
	ctx.r4.s64 = ctx.r11.s64 + -21484;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EB710;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stb r3,-17699(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17699, ctx.r3.u8);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r11,-21428
	ctx.r4.s64 = ctx.r11.s64 + -21428;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EB734;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stb r3,-17698(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17698, ctx.r3.u8);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r11,6180
	ctx.r4.s64 = ctx.r11.s64 + 6180;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EB758;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stb r3,-17697(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17697, ctx.r3.u8);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r11,-20952
	ctx.r4.s64 = ctx.r11.s64 + -20952;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EB77C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stb r3,-17696(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17696, ctx.r3.u8);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r11,-20932
	ctx.r4.s64 = ctx.r11.s64 + -20932;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EB7A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stb r3,-17695(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17695, ctx.r3.u8);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r11,-21408
	ctx.r4.s64 = ctx.r11.s64 + -21408;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EB7C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stb r3,-17701(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17701, ctx.r3.u8);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r11,-20808
	ctx.r4.s64 = ctx.r11.s64 + -20808;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EB7E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x825eb84c
	if (!ctx.cr6.gt) goto loc_825EB84C;
	// lis r11,15
	ctx.r11.s64 = 983040;
	// lis r10,-30584
	ctx.r10.s64 = -2004353024;
	// ori r11,r11,16960
	ctx.r11.u64 = ctx.r11.u64 | 16960;
	// ori r10,r10,34953
	ctx.r10.u64 = ctx.r10.u64 | 34953;
	// mullw r11,r3,r11
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// mulhw r10,r11,r10
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32)) >> 32;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-17688(r10)
	PPC_STORE_U64(ctx.r10.u32 + -17688, ctx.r11.u64);
	// bl 0x825ea3b0
	ctx.lr = 0x825EB84C;
	sub_825EA3B0(ctx, base);
loc_825EB84C:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82186158
	ctx.lr = 0x825EB854;
	sub_82186158(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825eb87c
	if (ctx.cr6.eq) goto loc_825EB87C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// bl 0x82461b90
	ctx.lr = 0x825EB874;
	sub_82461B90(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x825eb880
	goto loc_825EB880;
loc_825EB87C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_825EB880:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x825eaf00
	ctx.lr = 0x825EB898;
	sub_825EAF00(ctx, base);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r18,r10,2236
	ctx.r18.s64 = ctx.r10.s64 + 2236;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r17,r10,2248
	ctx.r17.s64 = ctx.r10.s64 + 2248;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r16,r10,2220
	ctx.r16.s64 = ctx.r10.s64 + 2220;
	// beq cr6,0x825eb914
	if (ctx.cr6.eq) goto loc_825EB914;
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x825eb8f8
	if (!ctx.cr6.eq) goto loc_825EB8F8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825eb8f8
	if (ctx.cr6.eq) goto loc_825EB8F8;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// stw r17,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r17.u32);
	// stw r18,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r18.u32);
	// bl 0x821e0968
	ctx.lr = 0x825EB8F4;
	sub_821E0968(ctx, base);
	// stw r16,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r16.u32);
loc_825EB8F8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
loc_825EB914:
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825eb928
	if (ctx.cr6.eq) goto loc_825EB928;
	// bl 0x821601b8
	ctx.lr = 0x825EB924;
	sub_821601B8(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
loc_825EB928:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r29,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r29.u32);
	// beq cr6,0x825eb93c
	if (ctx.cr6.eq) goto loc_825EB93C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821601b8
	ctx.lr = 0x825EB93C;
	sub_821601B8(ctx, base);
loc_825EB93C:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x824327b0
	ctx.lr = 0x825EB954;
	sub_824327B0(ctx, base);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
loc_825EB95C:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ebac4
	if (ctx.cr6.eq) goto loc_825EBAC4;
	// lwz r10,8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825ebac4
	if (!ctx.cr6.lt) goto loc_825EBAC4;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82186158
	ctx.lr = 0x825EB984;
	sub_82186158(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825eb9ec
	if (ctx.cr6.eq) goto loc_825EB9EC;
	// li r3,152
	ctx.r3.s64 = 152;
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// bl 0x82186158
	ctx.lr = 0x825EB9A4;
	sub_82186158(ctx, base);
	// addi r11,r3,152
	ctx.r11.s64 = ctx.r3.s64 + 152;
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// li r10,19
	ctx.r10.s64 = 19;
	// stw r3,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_825EB9BC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825eb9cc
	if (ctx.cr6.eq) goto loc_825EB9CC;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
loc_825EB9CC:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825eb9bc
	if (!ctx.cr6.eq) goto loc_825EB9BC;
	// addi r11,r3,152
	ctx.r11.s64 = ctx.r3.s64 + 152;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// b 0x825eb9f0
	goto loc_825EB9F0;
loc_825EB9EC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_825EB9F0:
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825eba10
	if (ctx.cr6.eq) goto loc_825EBA10;
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825eba14
	if (ctx.cr6.lt) goto loc_825EBA14;
loc_825EBA10:
	// twi 31,r0,22
loc_825EBA14:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r4,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r4.u32);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// add r28,r26,r10
	ctx.r28.u64 = ctx.r26.u64 + ctx.r10.u64;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x825eafb8
	ctx.lr = 0x825EBA30;
	sub_825EAFB8(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r29,4(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// stw r29,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r29.u32);
	// beq cr6,0x825ebab8
	if (ctx.cr6.eq) goto loc_825EBAB8;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// beq 0x825eba80
	if (ctx.cr0.eq) goto loc_825EBA80;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// b 0x825eb95c
	goto loc_825EB95C;
loc_825EBA80:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EBA94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// bne 0x825ebab8
	if (!ctx.cr0.eq) goto loc_825EBAB8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EBAB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825EBAB8:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// b 0x825eb95c
	goto loc_825EB95C;
loc_825EBAC4:
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x8289c350
	ctx.lr = 0x825EBACC;
	sub_8289C350(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82581e60
	ctx.lr = 0x825EBAD4;
	sub_82581E60(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,848
	ctx.r3.s64 = 848;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// addi r6,r11,32
	ctx.r6.s64 = ctx.r11.s64 + 32;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r10.u32);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r10,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r10.u32);
	// stw r9,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r9.u32);
	// stw r8,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r8.u32);
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r8,8(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r10,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r10.u32);
	// stw r9,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r9.u32);
	// stw r8,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r8.u32);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r10,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r10.u32);
	// stw r9,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r9.u32);
	// stw r8,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r8.u32);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r10,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, ctx.r10.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r10,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r10.u32);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r10,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r10.u32);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r10,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r10.u32);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r10,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r10.u32);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// stw r30,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r30.u32);
	// stw r11,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x825EBB70;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ebb80
	if (ctx.cr6.eq) goto loc_825EBB80;
	// bl 0x82638020
	ctx.lr = 0x825EBB7C;
	sub_82638020(ctx, base);
	// b 0x825ebb84
	goto loc_825EBB84;
loc_825EBB80:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_825EBB84:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ebbac
	if (ctx.cr6.eq) goto loc_825EBBAC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EBBAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825EBBAC:
	// lis r25,-32044
	ctx.r25.s64 = -2100035584;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r28,-32044
	ctx.r28.s64 = -2100035584;
	// addi r27,r11,-21564
	ctx.r27.s64 = ctx.r11.s64 + -21564;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,-17276(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -17276);
	// addi r29,r11,-17296
	ctx.r29.s64 = ctx.r11.s64 + -17296;
	// lwz r11,-17280(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -17280);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825ebc10
	if (!ctx.cr6.eq) goto loc_825EBC10;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825ebc08
	if (!ctx.cr6.eq) goto loc_825EBC08;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// lis r10,-32081
	ctx.r10.s64 = -2102460416;
	// addi r3,r10,-30248
	ctx.r3.s64 = ctx.r10.s64 + -30248;
	// stw r11,-17280(r28)
	PPC_STORE_U32(ctx.r28.u32 + -17280, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// bl 0x826ded00
	ctx.lr = 0x825EBC04;
	sub_826DED00(ctx, base);
	// lwz r11,-17280(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -17280);
loc_825EBC08:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r3,-17276(r25)
	PPC_STORE_U32(ctx.r25.u32 + -17276, ctx.r3.u32);
loc_825EBC10:
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,-19828(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19828, ctx.r3.u32);
	// lwz r26,96(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bne cr6,0x825ebc5c
	if (!ctx.cr6.eq) goto loc_825EBC5C;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825ebc54
	if (!ctx.cr6.eq) goto loc_825EBC54;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// lis r10,-32081
	ctx.r10.s64 = -2102460416;
	// addi r3,r10,-30248
	ctx.r3.s64 = ctx.r10.s64 + -30248;
	// stw r11,-17280(r28)
	PPC_STORE_U32(ctx.r28.u32 + -17280, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// bl 0x826ded00
	ctx.lr = 0x825EBC54;
	sub_826DED00(ctx, base);
loc_825EBC54:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r3,-17276(r25)
	PPC_STORE_U32(ctx.r25.u32 + -17276, ctx.r3.u32);
loc_825EBC5C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x826cde40
	ctx.lr = 0x825EBC64;
	sub_826CDE40(ctx, base);
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x8289cf60
	ctx.lr = 0x825EBC70;
	sub_8289CF60(ctx, base);
	// lwz r3,-17276(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -17276);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825ebcb8
	if (!ctx.cr6.eq) goto loc_825EBCB8;
	// lwz r10,-17280(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -17280);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825ebcb0
	if (!ctx.cr6.eq) goto loc_825EBCB0;
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// addi r3,r11,-30248
	ctx.r3.s64 = ctx.r11.s64 + -30248;
	// ori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 | 1;
	// stw r11,-17280(r28)
	PPC_STORE_U32(ctx.r28.u32 + -17280, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// bl 0x826ded00
	ctx.lr = 0x825EBCB0;
	sub_826DED00(ctx, base);
loc_825EBCB0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r3,-17276(r25)
	PPC_STORE_U32(ctx.r25.u32 + -17276, ctx.r3.u32);
loc_825EBCB8:
	// bl 0x82633830
	ctx.lr = 0x825EBCBC;
	sub_82633830(ctx, base);
	// lis r25,-32044
	ctx.r25.s64 = -2100035584;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r28,-32044
	ctx.r28.s64 = -2100035584;
	// addi r27,r11,-21688
	ctx.r27.s64 = ctx.r11.s64 + -21688;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,-17300(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -17300);
	// addi r29,r11,-17316
	ctx.r29.s64 = ctx.r11.s64 + -17316;
	// lwz r11,-17304(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -17304);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825ebd1c
	if (!ctx.cr6.eq) goto loc_825EBD1C;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825ebd14
	if (!ctx.cr6.eq) goto loc_825EBD14;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// lis r10,-32081
	ctx.r10.s64 = -2102460416;
	// addi r3,r10,-30280
	ctx.r3.s64 = ctx.r10.s64 + -30280;
	// stw r11,-17304(r28)
	PPC_STORE_U32(ctx.r28.u32 + -17304, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// bl 0x826ded00
	ctx.lr = 0x825EBD10;
	sub_826DED00(ctx, base);
	// lwz r11,-17304(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -17304);
loc_825EBD14:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r3,-17300(r25)
	PPC_STORE_U32(ctx.r25.u32 + -17300, ctx.r3.u32);
loc_825EBD1C:
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,-19772(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19772, ctx.r3.u32);
	// lwz r26,96(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bne cr6,0x825ebd68
	if (!ctx.cr6.eq) goto loc_825EBD68;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825ebd60
	if (!ctx.cr6.eq) goto loc_825EBD60;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// lis r10,-32081
	ctx.r10.s64 = -2102460416;
	// addi r3,r10,-30280
	ctx.r3.s64 = ctx.r10.s64 + -30280;
	// stw r11,-17304(r28)
	PPC_STORE_U32(ctx.r28.u32 + -17304, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// bl 0x826ded00
	ctx.lr = 0x825EBD60;
	sub_826DED00(ctx, base);
loc_825EBD60:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r3,-17300(r25)
	PPC_STORE_U32(ctx.r25.u32 + -17300, ctx.r3.u32);
loc_825EBD68:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x826329a8
	ctx.lr = 0x825EBD74;
	sub_826329A8(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ebd84
	if (ctx.cr6.eq) goto loc_825EBD84;
	// bl 0x82581e38
	ctx.lr = 0x825EBD84;
	sub_82581E38(ctx, base);
loc_825EBD84:
	// lis r27,-32045
	ctx.r27.s64 = -2100101120;
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// lis r28,-32045
	ctx.r28.s64 = -2100101120;
	// addi r29,r11,31384
	ctx.r29.s64 = ctx.r11.s64 + 31384;
	// lwz r3,31432(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 31432);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825ebdd4
	if (!ctx.cr6.eq) goto loc_825EBDD4;
	// lwz r11,31428(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 31428);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825ebdcc
	if (!ctx.cr6.eq) goto loc_825EBDCC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,31428(r28)
	PPC_STORE_U32(ctx.r28.u32 + 31428, ctx.r11.u32);
	// bl 0x8260fa38
	ctx.lr = 0x825EBDC0;
	sub_8260FA38(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-31848
	ctx.r3.s64 = ctx.r11.s64 + -31848;
	// bl 0x826ded00
	ctx.lr = 0x825EBDCC;
	sub_826DED00(ctx, base);
loc_825EBDCC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r3,31432(r27)
	PPC_STORE_U32(ctx.r27.u32 + 31432, ctx.r3.u32);
loc_825EBDD4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82612b80
	ctx.lr = 0x825EBDE0;
	sub_82612B80(ctx, base);
	// lwz r11,31432(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 31432);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825ebe20
	if (!ctx.cr6.eq) goto loc_825EBE20;
	// lwz r11,31428(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 31428);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825ebe18
	if (!ctx.cr6.eq) goto loc_825EBE18;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,31428(r28)
	PPC_STORE_U32(ctx.r28.u32 + 31428, ctx.r11.u32);
	// bl 0x8260fa38
	ctx.lr = 0x825EBE0C;
	sub_8260FA38(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-31848
	ctx.r3.s64 = ctx.r11.s64 + -31848;
	// bl 0x826ded00
	ctx.lr = 0x825EBE18;
	sub_826DED00(ctx, base);
loc_825EBE18:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r11,31432(r27)
	PPC_STORE_U32(ctx.r27.u32 + 31432, ctx.r11.u32);
loc_825EBE20:
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r3,96
	ctx.r3.s64 = 96;
	// stw r11,-19812(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19812, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x825EBE30;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ebe48
	if (ctx.cr6.eq) goto loc_825EBE48;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x826390d8
	ctx.lr = 0x825EBE40;
	sub_826390D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x825ebe4c
	goto loc_825EBE4C;
loc_825EBE48:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_825EBE4C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r4,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r4.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x825e9968
	ctx.lr = 0x825EBE64;
	sub_825E9968(ctx, base);
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
	// lwz r29,4(r21)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r10,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r10.u32);
	// beq cr6,0x825ebee4
	if (ctx.cr6.eq) goto loc_825EBEE4;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// beq 0x825ebeac
	if (ctx.cr0.eq) goto loc_825EBEAC;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// b 0x825ebee4
	goto loc_825EBEE4;
loc_825EBEAC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EBEC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// bne 0x825ebee4
	if (!ctx.cr0.eq) goto loc_825EBEE4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EBEE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825EBEE4:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// stw r11,28564(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28564, ctx.r11.u32);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82637418
	ctx.lr = 0x825EBEF8;
	sub_82637418(ctx, base);
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82186158
	ctx.lr = 0x825EBF00;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ebf18
	if (ctx.cr6.eq) goto loc_825EBF18;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82631dd0
	ctx.lr = 0x825EBF10;
	sub_82631DD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x825ebf1c
	goto loc_825EBF1C;
loc_825EBF18:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_825EBF1C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r4,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r4.u32);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x825e9ab8
	ctx.lr = 0x825EBF34;
	sub_825E9AB8(ctx, base);
	// lis r28,-32044
	ctx.r28.s64 = -2100035584;
	// lwz r3,-17320(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -17320);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825ebf84
	if (!ctx.cr6.eq) goto loc_825EBF84;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lwz r11,-17324(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17324);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// addi r29,r9,-17680
	ctx.r29.s64 = ctx.r9.s64 + -17680;
	// bne cr6,0x825ebf7c
	if (!ctx.cr6.eq) goto loc_825EBF7C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,-17324(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17324, ctx.r11.u32);
	// bl 0x82632618
	ctx.lr = 0x825EBF70;
	sub_82632618(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-30296
	ctx.r3.s64 = ctx.r11.s64 + -30296;
	// bl 0x826ded00
	ctx.lr = 0x825EBF7C;
	sub_826DED00(ctx, base);
loc_825EBF7C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r3,-17320(r28)
	PPC_STORE_U32(ctx.r28.u32 + -17320, ctx.r3.u32);
loc_825EBF84:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x826326f0
	ctx.lr = 0x825EBF8C;
	sub_826326F0(ctx, base);
	// lwz r29,148(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825ebffc
	if (ctx.cr6.eq) goto loc_825EBFFC;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825ebfc4
	if (ctx.cr6.eq) goto loc_825EBFC4;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// b 0x825ebffc
	goto loc_825EBFFC;
loc_825EBFC4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EBFD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// bne 0x825ebffc
	if (!ctx.cr0.eq) goto loc_825EBFFC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EBFFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825EBFFC:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581800
	ctx.lr = 0x825EC008;
	sub_82581800(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// bl 0x825e9738
	ctx.lr = 0x825EC018;
	sub_825E9738(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82186158
	ctx.lr = 0x825EC020;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ec030
	if (ctx.cr6.eq) goto loc_825EC030;
	// bl 0x82586958
	ctx.lr = 0x825EC02C;
	sub_82586958(ctx, base);
	// b 0x825ec034
	goto loc_825EC034;
loc_825EC030:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_825EC034:
	// lwz r10,252(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// stw r3,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825ec098
	if (ctx.cr6.eq) goto loc_825EC098;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825ec068
	if (ctx.cr6.eq) goto loc_825EC068;
loc_825EC050:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// bne cr6,0x825ec050
	if (!ctx.cr6.eq) goto loc_825EC050;
loc_825EC068:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ec07c
	if (ctx.cr6.eq) goto loc_825EC07C;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_825EC07C:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ec090
	if (ctx.cr6.eq) goto loc_825EC090;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_825EC090:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82186190
	ctx.lr = 0x825EC098;
	sub_82186190(ctx, base);
loc_825EC098:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82186158
	ctx.lr = 0x825EC0A0;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ec0b0
	if (ctx.cr6.eq) goto loc_825EC0B0;
	// bl 0x82586958
	ctx.lr = 0x825EC0AC;
	sub_82586958(ctx, base);
	// b 0x825ec0b4
	goto loc_825EC0B4;
loc_825EC0B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_825EC0B4:
	// lwz r10,248(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// stw r3,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825ec118
	if (ctx.cr6.eq) goto loc_825EC118;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825ec0e8
	if (ctx.cr6.eq) goto loc_825EC0E8;
loc_825EC0D0:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// bne cr6,0x825ec0d0
	if (!ctx.cr6.eq) goto loc_825EC0D0;
loc_825EC0E8:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ec0fc
	if (ctx.cr6.eq) goto loc_825EC0FC;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_825EC0FC:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ec110
	if (ctx.cr6.eq) goto loc_825EC110;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_825EC110:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82186190
	ctx.lr = 0x825EC118;
	sub_82186190(ctx, base);
loc_825EC118:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r3,104
	ctx.r3.s64 = 104;
	// stw r11,920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 920, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x825EC128;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ec148
	if (ctx.cr6.eq) goto loc_825EC148;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r11,-20820
	ctx.r5.s64 = ctx.r11.s64 + -20820;
	// bl 0x825f0f60
	ctx.lr = 0x825EC140;
	sub_825F0F60(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x825ec14c
	goto loc_825EC14C;
loc_825EC148:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_825EC14C:
	// li r3,104
	ctx.r3.s64 = 104;
	// stw r11,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x825EC158;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ec178
	if (ctx.cr6.eq) goto loc_825EC178;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r11,-20836
	ctx.r5.s64 = ctx.r11.s64 + -20836;
	// bl 0x825f0f60
	ctx.lr = 0x825EC170;
	sub_825F0F60(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x825ec17c
	goto loc_825EC17C;
loc_825EC178:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_825EC17C:
	// li r3,104
	ctx.r3.s64 = 104;
	// stw r11,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x825EC188;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ec1a8
	if (ctx.cr6.eq) goto loc_825EC1A8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r11,-20844
	ctx.r5.s64 = ctx.r11.s64 + -20844;
	// bl 0x825f0f60
	ctx.lr = 0x825EC1A0;
	sub_825F0F60(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x825ec1ac
	goto loc_825EC1AC;
loc_825EC1A8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_825EC1AC:
	// li r3,104
	ctx.r3.s64 = 104;
	// stw r11,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x825EC1B8;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ec1d8
	if (ctx.cr6.eq) goto loc_825EC1D8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r11,-20856
	ctx.r5.s64 = ctx.r11.s64 + -20856;
	// bl 0x825f0f60
	ctx.lr = 0x825EC1D0;
	sub_825F0F60(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x825ec1dc
	goto loc_825EC1DC;
loc_825EC1D8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_825EC1DC:
	// li r3,104
	ctx.r3.s64 = 104;
	// stw r11,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x825EC1E8;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ec208
	if (ctx.cr6.eq) goto loc_825EC208;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r11,-20876
	ctx.r5.s64 = ctx.r11.s64 + -20876;
	// bl 0x825f0f60
	ctx.lr = 0x825EC200;
	sub_825F0F60(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x825ec20c
	goto loc_825EC20C;
loc_825EC208:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_825EC20C:
	// li r3,104
	ctx.r3.s64 = 104;
	// stw r11,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x825EC218;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ec238
	if (ctx.cr6.eq) goto loc_825EC238;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r11,-20896
	ctx.r5.s64 = ctx.r11.s64 + -20896;
	// bl 0x825f0f60
	ctx.lr = 0x825EC230;
	sub_825F0F60(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x825ec23c
	goto loc_825EC23C;
loc_825EC238:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_825EC23C:
	// li r3,104
	ctx.r3.s64 = 104;
	// stw r11,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x825EC248;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ec268
	if (ctx.cr6.eq) goto loc_825EC268;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r11,-20912
	ctx.r5.s64 = ctx.r11.s64 + -20912;
	// bl 0x825f0f60
	ctx.lr = 0x825EC260;
	sub_825F0F60(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x825ec26c
	goto loc_825EC26C;
loc_825EC268:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_825EC26C:
	// li r3,64
	ctx.r3.s64 = 64;
	// stw r11,940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 940, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x825EC278;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ec28c
	if (ctx.cr6.eq) goto loc_825EC28C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825fe718
	ctx.lr = 0x825EC288;
	sub_825FE718(ctx, base);
	// b 0x825ec290
	goto loc_825EC290;
loc_825EC28C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_825EC290:
	// lwz r29,900(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// stw r3,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r3.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825ec2b0
	if (ctx.cr6.eq) goto loc_825EC2B0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825fe430
	ctx.lr = 0x825EC2A8;
	sub_825FE430(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82186190
	ctx.lr = 0x825EC2B0;
	sub_82186190(ctx, base);
loc_825EC2B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,932(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 932);
	// bl 0x82581828
	ctx.lr = 0x825EC2BC;
	sub_82581828(ctx, base);
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x82186158
	ctx.lr = 0x825EC2C4;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ec2dc
	if (ctx.cr6.eq) goto loc_825EC2DC;
	// lwz r4,940(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 940);
	// bl 0x825f15c8
	ctx.lr = 0x825EC2D4;
	sub_825F15C8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// b 0x825ec2e0
	goto loc_825EC2E0;
loc_825EC2DC:
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
loc_825EC2E0:
	// lis r28,-32045
	ctx.r28.s64 = -2100101120;
	// lwz r3,26624(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26624);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825ec330
	if (!ctx.cr6.eq) goto loc_825EC330;
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// lwz r11,26584(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26584);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lis r9,-32045
	ctx.r9.s64 = -2100101120;
	// addi r29,r9,26400
	ctx.r29.s64 = ctx.r9.s64 + 26400;
	// bne cr6,0x825ec328
	if (!ctx.cr6.eq) goto loc_825EC328;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,26584(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26584, ctx.r11.u32);
	// bl 0x825d38a8
	ctx.lr = 0x825EC31C;
	sub_825D38A8(ctx, base);
	// lis r11,-32082
	ctx.r11.s64 = -2102525952;
	// addi r3,r11,31840
	ctx.r3.s64 = ctx.r11.s64 + 31840;
	// bl 0x826ded00
	ctx.lr = 0x825EC328;
	sub_826DED00(ctx, base);
loc_825EC328:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r3,26624(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26624, ctx.r3.u32);
loc_825EC330:
	// bl 0x825d3880
	ctx.lr = 0x825EC334;
	sub_825D3880(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x824327b0
	ctx.lr = 0x825EC350;
	sub_824327B0(ctx, base);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x825ec484
	if (ctx.cr6.eq) goto loc_825EC484;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
loc_825EC360:
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82186158
	ctx.lr = 0x825EC368;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ec380
	if (ctx.cr6.eq) goto loc_825EC380;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x825863d8
	ctx.lr = 0x825EC378;
	sub_825863D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x825ec384
	goto loc_825EC384;
loc_825EC380:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_825EC384:
	// lwz r10,4(r15)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825ec3a4
	if (ctx.cr6.eq) goto loc_825EC3A4;
	// lwz r11,8(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825ec3a8
	if (ctx.cr6.lt) goto loc_825EC3A8;
loc_825EC3A4:
	// twi 31,r0,22
loc_825EC3A8:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// add r28,r26,r10
	ctx.r28.u64 = ctx.r26.u64 + ctx.r10.u64;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x825e9b78
	ctx.lr = 0x825EC3C4;
	sub_825E9B78(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r29,4(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// beq cr6,0x825ec444
	if (ctx.cr6.eq) goto loc_825EC444;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// beq 0x825ec40c
	if (ctx.cr0.eq) goto loc_825EC40C;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// b 0x825ec444
	goto loc_825EC444;
loc_825EC40C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EC420;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// bne 0x825ec444
	if (!ctx.cr0.eq) goto loc_825EC444;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EC444;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825EC444:
	// lwz r11,4(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ec464
	if (ctx.cr6.eq) goto loc_825EC464;
	// lwz r10,8(r15)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r15.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x825ec468
	if (ctx.cr6.lt) goto loc_825EC468;
loc_825EC464:
	// twi 31,r0,22
loc_825EC468:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwzx r4,r26,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// bl 0x825f16e8
	ctx.lr = 0x825EC474;
	sub_825F16E8(ctx, base);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x825ec360
	if (!ctx.cr6.eq) goto loc_825EC360;
loc_825EC484:
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82186158
	ctx.lr = 0x825EC48C;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ec49c
	if (ctx.cr6.eq) goto loc_825EC49C;
	// lwz r4,948(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	// bl 0x82636110
	ctx.lr = 0x825EC49C;
	sub_82636110(ctx, base);
loc_825EC49C:
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82186158
	ctx.lr = 0x825EC4A4;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ec4b8
	if (ctx.cr6.eq) goto loc_825EC4B8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,948(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	// bl 0x825f14c8
	ctx.lr = 0x825EC4B8;
	sub_825F14C8(ctx, base);
loc_825EC4B8:
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82186158
	ctx.lr = 0x825EC4C0;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ec4d4
	if (ctx.cr6.eq) goto loc_825EC4D4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,940(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 940);
	// bl 0x825f0208
	ctx.lr = 0x825EC4D4;
	sub_825F0208(ctx, base);
loc_825EC4D4:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r3,920(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 920);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x825e92d0
	ctx.lr = 0x825EC4E8;
	sub_825E92D0(ctx, base);
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82186158
	ctx.lr = 0x825EC4F0;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ec508
	if (ctx.cr6.eq) goto loc_825EC508;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82636040
	ctx.lr = 0x825EC500;
	sub_82636040(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x825ec50c
	goto loc_825EC50C;
loc_825EC508:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_825EC50C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r10,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r10.u32);
	// li r5,33
	ctx.r5.s64 = 33;
	// stw r14,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r14.u32);
	// addi r4,r11,5928
	ctx.r4.s64 = ctx.r11.s64 + 5928;
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stb r30,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r30.u8);
	// bl 0x82161e08
	ctx.lr = 0x825EC530;
	sub_82161E08(ctx, base);
	// lbz r11,-17703(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + -17703);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ec550
	if (ctx.cr6.eq) goto loc_825EC550;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,31
	ctx.r5.s64 = 31;
	// addi r4,r11,6204
	ctx.r4.s64 = ctx.r11.s64 + 6204;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82161e08
	ctx.lr = 0x825EC550;
	sub_82161E08(ctx, base);
loc_825EC550:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8260df88
	ctx.lr = 0x825EC560;
	sub_8260DF88(ctx, base);
	// lwz r11,232(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x825ec574
	if (ctx.cr6.lt) goto loc_825EC574;
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// bl 0x82186190
	ctx.lr = 0x825EC574;
	sub_82186190(ctx, base);
loc_825EC574:
	// li r3,36
	ctx.r3.s64 = 36;
	// stw r14,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r14.u32);
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// stb r30,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r30.u8);
	// bl 0x82186158
	ctx.lr = 0x825EC588;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ec59c
	if (ctx.cr6.eq) goto loc_825EC59C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82635bc8
	ctx.lr = 0x825EC598;
	sub_82635BC8(ctx, base);
	// b 0x825ec5a0
	goto loc_825EC5A0;
loc_825EC59C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_825EC5A0:
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// stw r3,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ec5c8
	if (ctx.cr6.eq) goto loc_825EC5C8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EC5C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825EC5C8:
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82611bf0
	ctx.lr = 0x825EC5D0;
	sub_82611BF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// bl 0x825861a8
	ctx.lr = 0x825EC5DC;
	sub_825861A8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r27,160(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r28,4(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x825ec638
	if (ctx.cr6.eq) goto loc_825EC638;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825ec620
	if (!ctx.cr6.eq) goto loc_825EC620;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825ec620
	if (ctx.cr6.eq) goto loc_825EC620;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r17,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r17.u32);
	// stw r18,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r18.u32);
	// bl 0x821e0968
	ctx.lr = 0x825EC61C;
	sub_821E0968(ctx, base);
	// stw r16,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r16.u32);
loc_825EC620:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
loc_825EC638:
	// lwz r29,4(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825ec69c
	if (ctx.cr6.eq) goto loc_825EC69C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// beq 0x825ec664
	if (ctx.cr0.eq) goto loc_825EC664;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// b 0x825ec69c
	goto loc_825EC69C;
loc_825EC664:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EC678;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// bne 0x825ec69c
	if (!ctx.cr0.eq) goto loc_825EC69C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EC69C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825EC69C:
	// lwz r29,476(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// stw r28,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825ec710
	if (ctx.cr6.eq) goto loc_825EC710;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825ec6d8
	if (ctx.cr6.eq) goto loc_825EC6D8;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// b 0x825ec710
	goto loc_825EC710;
loc_825EC6D8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EC6EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// bne 0x825ec710
	if (!ctx.cr0.eq) goto loc_825EC710;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EC710;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825EC710:
	// lwz r3,484(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ec720
	if (ctx.cr6.eq) goto loc_825EC720;
	// bl 0x821601b8
	ctx.lr = 0x825EC720;
	sub_821601B8(ctx, base);
loc_825EC720:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ec7b8
	if (ctx.cr6.eq) goto loc_825EC7B8;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ec7b8
	if (ctx.cr6.eq) goto loc_825EC7B8;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82589158
	ctx.lr = 0x825EC744;
	sub_82589158(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EC760;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ec770
	if (ctx.cr6.eq) goto loc_825EC770;
	// bl 0x82581e38
	ctx.lr = 0x825EC770;
	sub_82581E38(ctx, base);
loc_825EC770:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// addi r28,r11,-22728
	ctx.r28.s64 = ctx.r11.s64 + -22728;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825ec7b8
	if (ctx.cr6.eq) goto loc_825EC7B8;
loc_825EC788:
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EC7A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// rlwinm r30,r29,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r4,r30,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x825ec788
	if (!ctx.cr6.eq) goto loc_825EC788;
loc_825EC7B8:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ec7c8
	if (ctx.cr6.eq) goto loc_825EC7C8;
	// bl 0x821601b8
	ctx.lr = 0x825EC7C8;
	sub_821601B8(ctx, base);
loc_825EC7C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826de8e0
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825EC7D8"))) PPC_WEAK_FUNC(sub_825EC7D8);
PPC_FUNC_IMPL(__imp__sub_825EC7D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825ec81c
	if (ctx.cr6.eq) goto loc_825EC81C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ec81c
	if (ctx.cr6.eq) goto loc_825EC81C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EC818;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825ec828
	goto loc_825EC828;
loc_825EC81C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_825EC828:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EC840"))) PPC_WEAK_FUNC(sub_825EC840);
PPC_FUNC_IMPL(__imp__sub_825EC840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825ec88c
	if (ctx.cr6.eq) goto loc_825EC88C;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_825EC868:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x825ec868
	if (!ctx.cr6.eq) goto loc_825EC868;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x825EC88C;
	sub_82161E08(ctx, base);
loc_825EC88C:
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82163620
	ctx.lr = 0x825EC898;
	sub_82163620(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825ec8d4
	if (ctx.cr6.eq) goto loc_825EC8D4;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ec8d4
	if (ctx.cr6.eq) goto loc_825EC8D4;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x82659610
	ctx.lr = 0x825EC8BC;
	sub_82659610(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ec8d4
	if (ctx.cr6.eq) goto loc_825EC8D4;
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// bl 0x82581e38
	ctx.lr = 0x825EC8D4;
	sub_82581E38(ctx, base);
loc_825EC8D4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ec8f0
	if (ctx.cr6.eq) goto loc_825EC8F0;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825ec930
	if (!ctx.cr6.eq) goto loc_825EC930;
loc_825EC8F0:
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x82186158
	ctx.lr = 0x825EC8F8;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ec9bc
	if (ctx.cr6.eq) goto loc_825EC9BC;
	// bl 0x825ed208
	ctx.lr = 0x825EC904;
	sub_825ED208(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825ec918
	if (ctx.cr6.eq) goto loc_825EC918;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x82659610
	ctx.lr = 0x825EC918;
	sub_82659610(ctx, base);
loc_825EC918:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ec930
	if (ctx.cr6.eq) goto loc_825EC930;
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// bl 0x82581e38
	ctx.lr = 0x825EC930;
	sub_82581E38(ctx, base);
loc_825EC930:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825ec990
	if (ctx.cr6.eq) goto loc_825EC990;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ec990
	if (ctx.cr6.eq) goto loc_825EC990;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r31,-32072
	ctx.r31.s64 = -2101870592;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,-2208(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2208);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EC968;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ec978
	if (ctx.cr6.eq) goto loc_825EC978;
	// bl 0x821601b8
	ctx.lr = 0x825EC978;
	sub_821601B8(ctx, base);
loc_825EC978:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,-2208(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2208);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EC990;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825EC990:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ec9a4
	if (ctx.cr6.eq) goto loc_825EC9A4;
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// bl 0x82581e38
	ctx.lr = 0x825EC9A4;
	sub_82581E38(ctx, base);
loc_825EC9A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_825EC9BC:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x825ec918
	goto loc_825EC918;
}

__attribute__((alias("__imp__sub_825EC9C8"))) PPC_WEAK_FUNC(sub_825EC9C8);
PPC_FUNC_IMPL(__imp__sub_825EC9C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_825EC9F4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x825ec9f4
	if (!ctx.cr6.eq) goto loc_825EC9F4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82161e08
	sub_82161E08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825ECA18"))) PPC_WEAK_FUNC(sub_825ECA18);
PPC_FUNC_IMPL(__imp__sub_825ECA18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825ECA20"))) PPC_WEAK_FUNC(sub_825ECA20);
PPC_FUNC_IMPL(__imp__sub_825ECA20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lwz r4,-2212(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2212);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_825ECA64:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x825eca64
	if (!ctx.cr6.eq) goto loc_825ECA64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x825ECA84;
	sub_82161E08(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// bl 0x825ec840
	ctx.lr = 0x825ECA98;
	sub_825EC840(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825ECAB8"))) PPC_WEAK_FUNC(sub_825ECAB8);
PPC_FUNC_IMPL(__imp__sub_825ECAB8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,112
	ctx.r11.s64 = ctx.r3.s64 + 112;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x825ecad0
	if (ctx.cr6.lt) goto loc_825ECAD0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
loc_825ECAD0:
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825ECAD8"))) PPC_WEAK_FUNC(sub_825ECAD8);
PPC_FUNC_IMPL(__imp__sub_825ECAD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824a59a0
	ctx.lr = 0x825ECB08;
	sub_824A59A0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// beq cr6,0x825ecb34
	if (ctx.cr6.eq) goto loc_825ECB34;
	// bl 0x821601b8
	ctx.lr = 0x825ECB34;
	sub_821601B8(ctx, base);
loc_825ECB34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825ECB48"))) PPC_WEAK_FUNC(sub_825ECB48);
PPC_FUNC_IMPL(__imp__sub_825ECB48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x825ECB50;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x825ecc2c
	if (ctx.cr6.eq) goto loc_825ECC2C;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821620e8
	ctx.lr = 0x825ECB74;
	sub_821620E8(ctx, base);
	// addi r31,r31,140
	ctx.r31.s64 = ctx.r31.s64 + 140;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823b7870
	ctx.lr = 0x825ECB88;
	sub_823B7870(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x825ecb9c
	if (ctx.cr6.lt) goto loc_825ECB9C;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82186190
	ctx.lr = 0x825ECB9C;
	sub_82186190(ctx, base);
loc_825ECB9C:
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r30,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r30.u8);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// beq cr6,0x825ecbc4
	if (ctx.cr6.eq) goto loc_825ECBC4;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x825ecbc8
	if (ctx.cr6.eq) goto loc_825ECBC8;
loc_825ECBC4:
	// twi 31,r0,22
loc_825ECBC8:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825ecc2c
	if (ctx.cr6.eq) goto loc_825ECC2C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825ecbf4
	if (!ctx.cr6.eq) goto loc_825ECBF4;
	// twi 31,r0,22
loc_825ECBF4:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825ecc04
	if (!ctx.cr6.eq) goto loc_825ECC04;
	// twi 31,r0,22
loc_825ECC04:
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// beq cr6,0x825ecc34
	if (ctx.cr6.eq) goto loc_825ECC34;
	// bl 0x82160140
	ctx.lr = 0x825ECC20;
	sub_82160140(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_825ECC2C:
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
loc_825ECC34:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825ECC40"))) PPC_WEAK_FUNC(sub_825ECC40);
PPC_FUNC_IMPL(__imp__sub_825ECC40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b4
	ctx.lr = 0x825ECC48;
	__savegprlr_23(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d4c48
	ctx.lr = 0x825ECC64;
	sub_825D4C48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ece54
	if (ctx.cr6.eq) goto loc_825ECE54;
	// rotlwi r31,r31,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82186158
	ctx.lr = 0x825ECC7C;
	sub_82186158(ctx, base);
	// addi r24,r29,104
	ctx.r24.s64 = ctx.r29.s64 + 104;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x825ecad8
	ctx.lr = 0x825ECC8C;
	sub_825ECAD8(ctx, base);
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ece54
	if (ctx.cr6.eq) goto loc_825ECE54;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x826df680
	ctx.lr = 0x825ECCA4;
	sub_826DF680(ctx, base);
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82186158
	ctx.lr = 0x825ECCAC;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ece54
	if (ctx.cr6.eq) goto loc_825ECE54;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x825d4cb0
	ctx.lr = 0x825ECCBC;
	sub_825D4CB0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x825ece54
	if (ctx.cr6.eq) goto loc_825ECE54;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ece44
	if (ctx.cr6.eq) goto loc_825ECE44;
	// lwz r31,20(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825ece44
	if (ctx.cr6.eq) goto loc_825ECE44;
	// lis r10,-32072
	ctx.r10.s64 = -2101870592;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lwz r10,-2112(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2112);
loc_825ECCF4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825ecd14
	if (!ctx.cr0.eq) goto loc_825ECD14;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x825eccf4
	if (!ctx.cr6.eq) goto loc_825ECCF4;
loc_825ECD14:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x825ece44
	if (!ctx.cr6.eq) goto loc_825ECE44;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825ece44
	if (!ctx.cr6.gt) goto loc_825ECE44;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_825ECD34:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x825ecd34
	if (!ctx.cr6.eq) goto loc_825ECD34;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r29,112
	ctx.r3.s64 = ctx.r29.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x825ECD58;
	sub_82161E08(ctx, base);
	// lwz r26,8(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x825ece28
	if (!ctx.cr6.gt) goto loc_825ECE28;
	// addi r25,r29,140
	ctx.r25.s64 = ctx.r29.s64 + 140;
	// li r27,0
	ctx.r27.s64 = 0;
loc_825ECD70:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82186158
	ctx.lr = 0x825ECD78;
	sub_82186158(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825ecdb8
	if (ctx.cr6.eq) goto loc_825ECDB8;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r29,8(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r28,4(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq cr6,0x825ecda8
	if (ctx.cr6.eq) goto loc_825ECDA8;
	// bl 0x82160140
	ctx.lr = 0x825ECDA8;
	sub_82160140(ctx, base);
loc_825ECDA8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// b 0x825ecdbc
	goto loc_825ECDBC;
loc_825ECDB8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_825ECDBC:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stb r27,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r27.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824a5a98
	ctx.lr = 0x825ECDD4;
	sub_824A5A98(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82659c90
	ctx.lr = 0x825ECDE4;
	sub_82659C90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825f2008
	ctx.lr = 0x825ECDF0;
	sub_825F2008(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823b7f18
	ctx.lr = 0x825ECE00;
	sub_823B7F18(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8262f640
	ctx.lr = 0x825ECE08;
	sub_8262F640(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ece18
	if (ctx.cr6.eq) goto loc_825ECE18;
	// bl 0x821601b8
	ctx.lr = 0x825ECE18;
	sub_821601B8(ctx, base);
loc_825ECE18:
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bgt cr6,0x825ecd70
	if (ctx.cr6.gt) goto loc_825ECD70;
loc_825ECE28:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x825d4eb8
	ctx.lr = 0x825ECE30;
	sub_825D4EB8(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82186190
	ctx.lr = 0x825ECE38;
	sub_82186190(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826de904
	__restgprlr_23(ctx, base);
	return;
loc_825ECE44:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x825d4eb8
	ctx.lr = 0x825ECE4C;
	sub_825D4EB8(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82186190
	ctx.lr = 0x825ECE54;
	sub_82186190(ctx, base);
loc_825ECE54:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826de904
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825ECE60"))) PPC_WEAK_FUNC(sub_825ECE60);
PPC_FUNC_IMPL(__imp__sub_825ECE60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,-20664
	ctx.r11.s64 = ctx.r11.s64 + -20664;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x825ece98
	if (ctx.cr6.eq) goto loc_825ECE98;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825ef6a8
	ctx.lr = 0x825ECE98;
	sub_825EF6A8(ctx, base);
loc_825ECE98:
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// bl 0x825f2968
	ctx.lr = 0x825ECEA0;
	sub_825F2968(ctx, base);
	// addi r30,r31,112
	ctx.r30.s64 = ctx.r31.s64 + 112;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x825eceb8
	if (ctx.cr6.lt) goto loc_825ECEB8;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x825ECEB8;
	sub_82186190(ctx, base);
loc_825ECEB8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// stb r11,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r11.u8);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ecedc
	if (ctx.cr6.eq) goto loc_825ECEDC;
	// bl 0x821601b8
	ctx.lr = 0x825ECEDC;
	sub_821601B8(ctx, base);
loc_825ECEDC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82582070
	ctx.lr = 0x825ECEE4;
	sub_82582070(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825ECF00"))) PPC_WEAK_FUNC(sub_825ECF00);
PPC_FUNC_IMPL(__imp__sub_825ECF00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82582018
	ctx.lr = 0x825ECF1C;
	sub_82582018(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r9,-20664
	ctx.r9.s64 = ctx.r9.s64 + -20664;
	// addi r11,r31,104
	ctx.r11.s64 = ctx.r31.s64 + 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stb r30,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r30.u8);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// bl 0x824a59a0
	ctx.lr = 0x825ECF50;
	sub_824A59A0(ctx, base);
	// addi r11,r31,112
	ctx.r11.s64 = ctx.r31.s64 + 112;
	// li r10,15
	ctx.r10.s64 = 15;
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// stw r30,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stb r30,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r30.u8);
	// bl 0x824bafe0
	ctx.lr = 0x825ECF6C;
	sub_824BAFE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825ECF88"))) PPC_WEAK_FUNC(sub_825ECF88);
PPC_FUNC_IMPL(__imp__sub_825ECF88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825ece60
	ctx.lr = 0x825ECFA8;
	sub_825ECE60(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ecfc0
	if (ctx.cr6.eq) goto loc_825ECFC0;
	// bl 0x82186190
	ctx.lr = 0x825ECFBC;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_825ECFC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825ECFD8"))) PPC_WEAK_FUNC(sub_825ECFD8);
PPC_FUNC_IMPL(__imp__sub_825ECFD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-20604
	ctx.r11.s64 = ctx.r11.s64 + -20604;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x825ed00c
	if (ctx.cr6.eq) goto loc_825ED00C;
	// bl 0x82186190
	ctx.lr = 0x825ED008;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_825ED00C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825ED020"))) PPC_WEAK_FUNC(sub_825ED020);
PPC_FUNC_IMPL(__imp__sub_825ED020) {
	PPC_FUNC_PROLOGUE();
	// b 0x82639970
	sub_82639970(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825ED028"))) PPC_WEAK_FUNC(sub_825ED028);
PPC_FUNC_IMPL(__imp__sub_825ED028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r4,4
	ctx.r31.s64 = ctx.r4.s64 + 4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ed078
	if (ctx.cr6.eq) goto loc_825ED078;
loc_825ED050:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825ED05C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x825d51c0
	ctx.lr = 0x825ED068;
	sub_825D51C0(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825ed050
	if (!ctx.cr6.eq) goto loc_825ED050;
loc_825ED078:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825ED090"))) PPC_WEAK_FUNC(sub_825ED090);
PPC_FUNC_IMPL(__imp__sub_825ED090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x825d5660
	ctx.lr = 0x825ED0A4;
	sub_825D5660(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825ED0B8"))) PPC_WEAK_FUNC(sub_825ED0B8);
PPC_FUNC_IMPL(__imp__sub_825ED0B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,-32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32);
	// addi r6,r11,5020
	ctx.r6.s64 = ctx.r11.s64 + 5020;
	// b 0x8262a970
	sub_8262A970(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825ED0C8"))) PPC_WEAK_FUNC(sub_825ED0C8);
PPC_FUNC_IMPL(__imp__sub_825ED0C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,-20452
	ctx.r11.s64 = ctx.r11.s64 + -20452;
	// addi r10,r10,-20476
	ctx.r10.s64 = ctx.r10.s64 + -20476;
	// addi r30,r31,36
	ctx.r30.s64 = ctx.r31.s64 + 36;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bl 0x825dab80
	ctx.lr = 0x825ED104;
	sub_825DAB80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82582070
	ctx.lr = 0x825ED10C;
	sub_82582070(ctx, base);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x825ed124
	if (ctx.cr6.lt) goto loc_825ED124;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x825ED124;
	sub_82186190(ctx, base);
loc_825ED124:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// addi r11,r11,-20604
	ctx.r11.s64 = ctx.r11.s64 + -20604;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// stw r9,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r9.u32);
	// stb r10,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r10.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825ED160"))) PPC_WEAK_FUNC(sub_825ED160);
PPC_FUNC_IMPL(__imp__sub_825ED160) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-36
	ctx.r3.s64 = ctx.r3.s64 + -36;
	// b 0x825ed2b8
	sub_825ED2B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825ED168"))) PPC_WEAK_FUNC(sub_825ED168);
PPC_FUNC_IMPL(__imp__sub_825ED168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x825ED170;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32045
	ctx.r29.s64 = -2100101120;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,24284(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24284);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x825ed1a0
	if (!ctx.cr6.eq) goto loc_825ED1A0;
	// bl 0x82162df8
	ctx.lr = 0x825ED198;
	sub_82162DF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,24284(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24284, ctx.r4.u32);
loc_825ED1A0:
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82582648
	ctx.lr = 0x825ED1B8;
	sub_82582648(ctx, base);
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r11,6164
	ctx.r6.s64 = ctx.r11.s64 + 6164;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,6088
	ctx.r5.s64 = ctx.r11.s64 + 6088;
	// bl 0x826df418
	ctx.lr = 0x825ED1D8;
	sub_826DF418(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// beq cr6,0x825ed1ec
	if (ctx.cr6.eq) goto loc_825ED1EC;
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// bl 0x82659610
	ctx.lr = 0x825ED1EC;
	sub_82659610(ctx, base);
loc_825ED1EC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ed1fc
	if (ctx.cr6.eq) goto loc_825ED1FC;
	// bl 0x82581e38
	ctx.lr = 0x825ED1FC;
	sub_82581E38(ctx, base);
loc_825ED1FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825ED208"))) PPC_WEAK_FUNC(sub_825ED208);
PPC_FUNC_IMPL(__imp__sub_825ED208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,5020
	ctx.r5.s64 = ctx.r11.s64 + 5020;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8263a2f0
	ctx.lr = 0x825ED230;
	sub_8263A2F0(ctx, base);
	// addi r30,r31,36
	ctx.r30.s64 = ctx.r31.s64 + 36;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82582018
	ctx.lr = 0x825ED23C;
	sub_82582018(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,-20500
	ctx.r11.s64 = ctx.r11.s64 + -20500;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r10,r10,-20452
	ctx.r10.s64 = ctx.r10.s64 + -20452;
	// addi r9,r9,-20476
	ctx.r9.s64 = ctx.r9.s64 + -20476;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ed270
	if (ctx.cr6.eq) goto loc_825ED270;
	// bl 0x825dab80
	ctx.lr = 0x825ED270;
	sub_825DAB80(ctx, base);
loc_825ED270:
	// bl 0x825daaa0
	ctx.lr = 0x825ED274;
	sub_825DAAA0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq cr6,0x825ed29c
	if (ctx.cr6.eq) goto loc_825ED29C;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r4,r11,-12144
	ctx.r4.s64 = ctx.r11.s64 + -12144;
	// bl 0x825d5130
	ctx.lr = 0x825ED28C;
	sub_825D5130(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-20636
	ctx.r4.s64 = ctx.r11.s64 + -20636;
	// bl 0x825ed028
	ctx.lr = 0x825ED29C;
	sub_825ED028(ctx, base);
loc_825ED29C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825ED2B8"))) PPC_WEAK_FUNC(sub_825ED2B8);
PPC_FUNC_IMPL(__imp__sub_825ED2B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825ed0c8
	ctx.lr = 0x825ED2D8;
	sub_825ED0C8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ed2f0
	if (ctx.cr6.eq) goto loc_825ED2F0;
	// bl 0x82186190
	ctx.lr = 0x825ED2EC;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_825ED2F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825ED308"))) PPC_WEAK_FUNC(sub_825ED308);
PPC_FUNC_IMPL(__imp__sub_825ED308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,136
	ctx.r3.s64 = 136;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82186158
	ctx.lr = 0x825ED328;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ed33c
	if (ctx.cr6.eq) goto loc_825ED33C;
	// bl 0x825ed208
	ctx.lr = 0x825ED334;
	sub_825ED208(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x825ed340
	goto loc_825ED340;
loc_825ED33C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_825ED340:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825ed36c
	if (ctx.cr6.eq) goto loc_825ED36C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825ed378
	if (ctx.cr6.eq) goto loc_825ED378;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825ED36C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825ED36C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bne cr6,0x825ed37c
	if (!ctx.cr6.eq) goto loc_825ED37C;
loc_825ED378:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825ED37C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825ED398"))) PPC_WEAK_FUNC(sub_825ED398);
PPC_FUNC_IMPL(__imp__sub_825ED398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-20352
	ctx.r4.s64 = ctx.r11.s64 + -20352;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x821620e8
	ctx.lr = 0x825ED3C4;
	sub_821620E8(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82583e48
	ctx.lr = 0x825ED3D4;
	sub_82583E48(ctx, base);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,24236(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24236);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825ED3F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x825ed40c
	if (ctx.cr6.lt) goto loc_825ED40C;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x825ED40C;
	sub_82186190(ctx, base);
loc_825ED40C:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x825ed434
	if (ctx.cr6.lt) goto loc_825ED434;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82186190
	ctx.lr = 0x825ED434;
	sub_82186190(ctx, base);
loc_825ED434:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

