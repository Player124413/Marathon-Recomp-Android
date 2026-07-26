#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82541430"))) PPC_WEAK_FUNC(sub_82541430);
PPC_FUNC_IMPL(__imp__sub_82541430) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10440(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10440);
	// rlwimi r11,r4,3,21,28
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 3) & 0x7F8) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF807);
	// stw r11,10440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10440, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541450"))) PPC_WEAK_FUNC(sub_82541450);
PPC_FUNC_IMPL(__imp__sub_82541450) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10440(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10440);
	// rlwinm r3,r11,29,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541460"))) PPC_WEAK_FUNC(sub_82541460);
PPC_FUNC_IMPL(__imp__sub_82541460) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10428(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10428);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r11,r4,3,28,28
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 3) & 0x8) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF7);
	// rldicr r12,r12,50,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 50) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10428, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541490"))) PPC_WEAK_FUNC(sub_82541490);
PPC_FUNC_IMPL(__imp__sub_82541490) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10428(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10428);
	// rlwinm r3,r11,29,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825414A0"))) PPC_WEAK_FUNC(sub_825414A0);
PPC_FUNC_IMPL(__imp__sub_825414A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11580(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11580);
	// rlwimi r11,r4,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,11580(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11580, ctx.r11.u32);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,11576(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11576);
	// bne 0x825414d8
	if (!ctx.cr0.eq) goto loc_825414D8;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// andi. r10,r11,4112
	ctx.r10.u64 = ctx.r11.u64 & 4112;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,12,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r10,r10,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r10,r10,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_825414D8:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x825414e8
	if (!ctx.cr6.eq) goto loc_825414E8;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
loc_825414E8:
	// stw r11,10424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10424, ctx.r11.u32);
	// stw r11,10456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10456, ctx.r11.u32);
	// stw r11,10460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10460, ctx.r11.u32);
	// stw r11,10464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10464, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541520"))) PPC_WEAK_FUNC(sub_82541520);
PPC_FUNC_IMPL(__imp__sub_82541520) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11580(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11580);
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541530"))) PPC_WEAK_FUNC(sub_82541530);
PPC_FUNC_IMPL(__imp__sub_82541530) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11580(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11580);
	// lwz r10,11576(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11576);
	// rlwimi r10,r4,5,24,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 5) & 0xE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF1F);
	// stw r10,11576(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11576, ctx.r10.u32);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,11576(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11576);
	// bne 0x82541574
	if (!ctx.cr0.eq) goto loc_82541574;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// andi. r10,r11,4112
	ctx.r10.u64 = ctx.r11.u64 & 4112;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,12,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r10,r10,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r10,r10,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_82541574:
	// stw r11,10424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10424, ctx.r11.u32);
	// stw r11,10456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10456, ctx.r11.u32);
	// stw r11,10460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10460, ctx.r11.u32);
	// stw r11,10464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10464, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825415B0"))) PPC_WEAK_FUNC(sub_825415B0);
PPC_FUNC_IMPL(__imp__sub_825415B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11576(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11576);
	// rlwinm r3,r11,27,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825415C0"))) PPC_WEAK_FUNC(sub_825415C0);
PPC_FUNC_IMPL(__imp__sub_825415C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11580(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11580);
	// lwz r10,11576(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11576);
	// rlwimi r10,r4,0,27,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x1F) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r10,11576(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11576, ctx.r10.u32);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,11576(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11576);
	// bne 0x82541604
	if (!ctx.cr0.eq) goto loc_82541604;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// andi. r10,r11,4112
	ctx.r10.u64 = ctx.r11.u64 & 4112;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,12,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r10,r10,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r10,r10,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_82541604:
	// stw r11,10424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10424, ctx.r11.u32);
	// stw r11,10456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10456, ctx.r11.u32);
	// stw r11,10460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10460, ctx.r11.u32);
	// stw r11,10464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10464, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541640"))) PPC_WEAK_FUNC(sub_82541640);
PPC_FUNC_IMPL(__imp__sub_82541640) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11576(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11576);
	// clrlwi r3,r11,27
	ctx.r3.u64 = ctx.r11.u32 & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541650"))) PPC_WEAK_FUNC(sub_82541650);
PPC_FUNC_IMPL(__imp__sub_82541650) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11580(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11580);
	// lwz r10,11576(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11576);
	// rlwimi r10,r4,8,19,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0x1F00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE0FF);
	// stw r10,11576(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11576, ctx.r10.u32);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,11576(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11576);
	// bne 0x82541694
	if (!ctx.cr0.eq) goto loc_82541694;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// andi. r10,r11,4112
	ctx.r10.u64 = ctx.r11.u64 & 4112;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,12,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r10,r10,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r10,r10,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_82541694:
	// stw r11,10424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10424, ctx.r11.u32);
	// stw r11,10456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10456, ctx.r11.u32);
	// stw r11,10460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10460, ctx.r11.u32);
	// stw r11,10464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10464, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825416D0"))) PPC_WEAK_FUNC(sub_825416D0);
PPC_FUNC_IMPL(__imp__sub_825416D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11576(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11576);
	// rlwinm r3,r11,24,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825416E0"))) PPC_WEAK_FUNC(sub_825416E0);
PPC_FUNC_IMPL(__imp__sub_825416E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11580(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11580);
	// lwz r10,11576(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11576);
	// rlwimi r10,r4,21,8,10
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 21) & 0xE00000) | (ctx.r10.u64 & 0xFFFFFFFFFF1FFFFF);
	// stw r10,11576(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11576, ctx.r10.u32);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,10424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10424, ctx.r11.u32);
	// stw r11,10456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10456, ctx.r11.u32);
	// stw r11,10460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10460, ctx.r11.u32);
	// stw r11,10464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10464, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541740"))) PPC_WEAK_FUNC(sub_82541740);
PPC_FUNC_IMPL(__imp__sub_82541740) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11576(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11576);
	// rlwinm r3,r11,11,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541750"))) PPC_WEAK_FUNC(sub_82541750);
PPC_FUNC_IMPL(__imp__sub_82541750) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11580(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11580);
	// lwz r10,11576(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11576);
	// rlwimi r10,r4,16,11,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 16) & 0x1F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFE0FFFF);
	// stw r10,11576(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11576, ctx.r10.u32);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,10424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10424, ctx.r11.u32);
	// stw r11,10456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10456, ctx.r11.u32);
	// stw r11,10460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10460, ctx.r11.u32);
	// stw r11,10464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10464, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825417B0"))) PPC_WEAK_FUNC(sub_825417B0);
PPC_FUNC_IMPL(__imp__sub_825417B0) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,11576(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 11576);
	// clrlwi r3,r11,27
	ctx.r3.u64 = ctx.r11.u32 & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825417C0"))) PPC_WEAK_FUNC(sub_825417C0);
PPC_FUNC_IMPL(__imp__sub_825417C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11580(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11580);
	// lwz r10,11576(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11576);
	// rlwimi r10,r4,24,3,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 24) & 0x1F000000) | (ctx.r10.u64 & 0xFFFFFFFFE0FFFFFF);
	// stw r10,11576(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11576, ctx.r10.u32);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,10424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10424, ctx.r11.u32);
	// stw r11,10456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10456, ctx.r11.u32);
	// stw r11,10460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10460, ctx.r11.u32);
	// stw r11,10464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10464, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541820"))) PPC_WEAK_FUNC(sub_82541820);
PPC_FUNC_IMPL(__imp__sub_82541820) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,11576(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11576);
	// clrlwi r3,r11,27
	ctx.r3.u64 = ctx.r11.u32 & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541830"))) PPC_WEAK_FUNC(sub_82541830);
PPC_FUNC_IMPL(__imp__sub_82541830) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11580(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11580);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// rlwimi r11,r4,30,1,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 30) & 0x40000000) | (ctx.r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stw r11,11580(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11580, ctx.r11.u32);
	// lwz r11,11576(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11576);
	// bne cr6,0x8254186c
	if (!ctx.cr6.eq) goto loc_8254186C;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// andi. r9,r11,4112
	ctx.r9.u64 = ctx.r11.u64 & 4112;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,12,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r9,r9,0,12,10
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r9,r9,0,4,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
loc_8254186C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8254187c
	if (!ctx.cr6.eq) goto loc_8254187C;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
loc_8254187C:
	// stw r11,10424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10424, ctx.r11.u32);
	// stw r11,10456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10456, ctx.r11.u32);
	// stw r11,10460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10460, ctx.r11.u32);
	// stw r11,10464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10464, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825418B8"))) PPC_WEAK_FUNC(sub_825418B8);
PPC_FUNC_IMPL(__imp__sub_825418B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11580(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11580);
	// rlwinm r3,r11,2,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825418C8"))) PPC_WEAK_FUNC(sub_825418C8);
PPC_FUNC_IMPL(__imp__sub_825418C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-30056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30056);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,10372(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10372, temp.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541900"))) PPC_WEAK_FUNC(sub_82541900);
PPC_FUNC_IMPL(__imp__sub_82541900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,10372(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10372);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lfs f0,2184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2184);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541930"))) PPC_WEAK_FUNC(sub_82541930);
PPC_FUNC_IMPL(__imp__sub_82541930) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10428(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10428);
	// rlwimi r4,r11,0,0,28
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFF8) | (ctx.r4.u64 & 0xFFFFFFFF00000007);
	// stw r4,10428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10428, ctx.r4.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541950"))) PPC_WEAK_FUNC(sub_82541950);
PPC_FUNC_IMPL(__imp__sub_82541950) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10428(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10428);
	// clrlwi r3,r11,29
	ctx.r3.u64 = ctx.r11.u32 & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541960"))) PPC_WEAK_FUNC(sub_82541960);
PPC_FUNC_IMPL(__imp__sub_82541960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r10,r4,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF;
	// rlwinm r11,r4,16,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFF;
	// rlwinm r8,r4,8,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFF;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r9,r4,56
	ctx.r9.u64 = ctx.r4.u64 & 0xFF;
	// clrldi r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// std r10,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r10.u64);
	// std r11,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r11.u64);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// std r8,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r8.u64);
	// lfd f13,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f0,-32(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f11,-8(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f10,f0
	ctx.f10.f64 = double(float(ctx.f0.f64));
	// lfs f0,-30056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30056);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,10340(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10340, temp.u32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f10,10336(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10336, temp.u32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f13,10344(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10344, temp.u32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,10348(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10348, temp.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// oris r11,r11,3
	ctx.r11.u64 = ctx.r11.u64 | 196608;
	// ori r11,r11,49152
	ctx.r11.u64 = ctx.r11.u64 | 49152;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825419F8"))) PPC_WEAK_FUNC(sub_825419F8);
PPC_FUNC_IMPL(__imp__sub_825419F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,10336(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10336);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lfs f11,10348(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10348);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,10340(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10340);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,10344(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10344);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,2184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2184);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f10,f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f11,f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f0,f9,f0,f13
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctidz f13,f12
	ctx.f13.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f13,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f13.u32);
	// fctidz f12,f10
	ctx.f12.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// fctidz f13,f11
	ctx.f13.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// stfiwx f13,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f13.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// rlwimi r11,r10,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
	// stfiwx f12,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f12.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// rlwimi r10,r11,8,0,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFFFFFF00) | (ctx.r10.u64 & 0xFFFFFFFF000000FF);
	// stfiwx f0,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f0.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwimi r3,r10,8,0,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (ctx.r3.u64 & 0xFFFFFFFF000000FF);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541A78"))) PPC_WEAK_FUNC(sub_82541A78);
PPC_FUNC_IMPL(__imp__sub_82541A78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12184);
	// stw r4,11604(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11604, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82541a8c
	if (!ctx.cr6.eq) goto loc_82541A8C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82541A8C:
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r11,r4,1,30,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 1) & 0x2) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// rldicr r12,r12,49,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10420, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541AB8"))) PPC_WEAK_FUNC(sub_82541AB8);
PPC_FUNC_IMPL(__imp__sub_82541AB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11604(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11604);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541AC0"))) PPC_WEAK_FUNC(sub_82541AC0);
PPC_FUNC_IMPL(__imp__sub_82541AC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwimi r11,r4,2,29,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 2) & 0x4) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r11,10420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10420, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541AE0"))) PPC_WEAK_FUNC(sub_82541AE0);
PPC_FUNC_IMPL(__imp__sub_82541AE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541AF0"))) PPC_WEAK_FUNC(sub_82541AF0);
PPC_FUNC_IMPL(__imp__sub_82541AF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r11,r4,4,25,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 4) & 0x70) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF8F);
	// rldicr r12,r12,49,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10420, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541B20"))) PPC_WEAK_FUNC(sub_82541B20);
PPC_FUNC_IMPL(__imp__sub_82541B20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwinm r3,r11,28,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541B30"))) PPC_WEAK_FUNC(sub_82541B30);
PPC_FUNC_IMPL(__imp__sub_82541B30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12184);
	// stw r4,11608(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11608, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82541b44
	if (!ctx.cr6.eq) goto loc_82541B44;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82541B44:
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r11,r4,0,31,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x1) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFE);
	// rldicr r12,r12,49,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10420, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541B70"))) PPC_WEAK_FUNC(sub_82541B70);
PPC_FUNC_IMPL(__imp__sub_82541B70) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11608(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11608);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541B78"))) PPC_WEAK_FUNC(sub_82541B78);
PPC_FUNC_IMPL(__imp__sub_82541B78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r11,r4,7,24,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 7) & 0x80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF7F);
	// rldicr r12,r12,49,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10420, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541BA8"))) PPC_WEAK_FUNC(sub_82541BA8);
PPC_FUNC_IMPL(__imp__sub_82541BA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwinm r3,r11,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541BB8"))) PPC_WEAK_FUNC(sub_82541BB8);
PPC_FUNC_IMPL(__imp__sub_82541BB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwimi r11,r4,8,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// stw r11,10420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10420, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541BD8"))) PPC_WEAK_FUNC(sub_82541BD8);
PPC_FUNC_IMPL(__imp__sub_82541BD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwinm r3,r11,24,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541BE8"))) PPC_WEAK_FUNC(sub_82541BE8);
PPC_FUNC_IMPL(__imp__sub_82541BE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r11,r4,11,18,20
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 11) & 0x3800) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC7FF);
	// rldicr r12,r12,49,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10420, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541C18"))) PPC_WEAK_FUNC(sub_82541C18);
PPC_FUNC_IMPL(__imp__sub_82541C18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwinm r3,r11,21,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541C28"))) PPC_WEAK_FUNC(sub_82541C28);
PPC_FUNC_IMPL(__imp__sub_82541C28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r11,r4,17,12,14
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 17) & 0xE0000) | (ctx.r11.u64 & 0xFFFFFFFFFFF1FFFF);
	// rldicr r12,r12,49,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10420, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541C58"))) PPC_WEAK_FUNC(sub_82541C58);
PPC_FUNC_IMPL(__imp__sub_82541C58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwinm r3,r11,15,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541C68"))) PPC_WEAK_FUNC(sub_82541C68);
PPC_FUNC_IMPL(__imp__sub_82541C68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwimi r11,r4,14,15,17
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 14) & 0x1C000) | (ctx.r11.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r11,10420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10420, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541C88"))) PPC_WEAK_FUNC(sub_82541C88);
PPC_FUNC_IMPL(__imp__sub_82541C88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwinm r3,r11,18,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541C98"))) PPC_WEAK_FUNC(sub_82541C98);
PPC_FUNC_IMPL(__imp__sub_82541C98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwimi r11,r4,20,9,11
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 20) & 0x700000) | (ctx.r11.u64 & 0xFFFFFFFFFF8FFFFF);
	// stw r11,10420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10420, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541CB8"))) PPC_WEAK_FUNC(sub_82541CB8);
PPC_FUNC_IMPL(__imp__sub_82541CB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwinm r3,r11,12,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541CC8"))) PPC_WEAK_FUNC(sub_82541CC8);
PPC_FUNC_IMPL(__imp__sub_82541CC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r11,r4,23,6,8
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 23) & 0x3800000) | (ctx.r11.u64 & 0xFFFFFFFFFC7FFFFF);
	// rldicr r12,r12,49,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10420, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541CF8"))) PPC_WEAK_FUNC(sub_82541CF8);
PPC_FUNC_IMPL(__imp__sub_82541CF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwinm r3,r11,9,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541D08"))) PPC_WEAK_FUNC(sub_82541D08);
PPC_FUNC_IMPL(__imp__sub_82541D08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r11,r4,29,0,2
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 29) & 0xE0000000) | (ctx.r11.u64 & 0xFFFFFFFF1FFFFFFF);
	// rldicr r12,r12,49,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10420, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541D38"))) PPC_WEAK_FUNC(sub_82541D38);
PPC_FUNC_IMPL(__imp__sub_82541D38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwinm r3,r11,3,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541D48"))) PPC_WEAK_FUNC(sub_82541D48);
PPC_FUNC_IMPL(__imp__sub_82541D48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwimi r11,r4,26,3,5
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 26) & 0x1C000000) | (ctx.r11.u64 & 0xFFFFFFFFE3FFFFFF);
	// stw r11,10420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10420, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541D68"))) PPC_WEAK_FUNC(sub_82541D68);
PPC_FUNC_IMPL(__imp__sub_82541D68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwinm r3,r11,6,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541D78"))) PPC_WEAK_FUNC(sub_82541D78);
PPC_FUNC_IMPL(__imp__sub_82541D78) {
	PPC_FUNC_PROLOGUE();
	// stb r4,10371(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10371, ctx.r4.u8);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541D90"))) PPC_WEAK_FUNC(sub_82541D90);
PPC_FUNC_IMPL(__imp__sub_82541D90) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10371(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10371);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541D98"))) PPC_WEAK_FUNC(sub_82541D98);
PPC_FUNC_IMPL(__imp__sub_82541D98) {
	PPC_FUNC_PROLOGUE();
	// stb r4,10370(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10370, ctx.r4.u8);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541DB0"))) PPC_WEAK_FUNC(sub_82541DB0);
PPC_FUNC_IMPL(__imp__sub_82541DB0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10370(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10370);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541DB8"))) PPC_WEAK_FUNC(sub_82541DB8);
PPC_FUNC_IMPL(__imp__sub_82541DB8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,10369(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10369, ctx.r4.u8);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541DD0"))) PPC_WEAK_FUNC(sub_82541DD0);
PPC_FUNC_IMPL(__imp__sub_82541DD0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10369(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10369);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541DD8"))) PPC_WEAK_FUNC(sub_82541DD8);
PPC_FUNC_IMPL(__imp__sub_82541DD8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,10367(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10367, ctx.r4.u8);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541DF0"))) PPC_WEAK_FUNC(sub_82541DF0);
PPC_FUNC_IMPL(__imp__sub_82541DF0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10367(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10367);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541DF8"))) PPC_WEAK_FUNC(sub_82541DF8);
PPC_FUNC_IMPL(__imp__sub_82541DF8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,10366(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10366, ctx.r4.u8);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541E10"))) PPC_WEAK_FUNC(sub_82541E10);
PPC_FUNC_IMPL(__imp__sub_82541E10) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10366(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10366);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541E18"))) PPC_WEAK_FUNC(sub_82541E18);
PPC_FUNC_IMPL(__imp__sub_82541E18) {
	PPC_FUNC_PROLOGUE();
	// stb r4,10365(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10365, ctx.r4.u8);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541E30"))) PPC_WEAK_FUNC(sub_82541E30);
PPC_FUNC_IMPL(__imp__sub_82541E30) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10365(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10365);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541E38"))) PPC_WEAK_FUNC(sub_82541E38);
PPC_FUNC_IMPL(__imp__sub_82541E38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// subfic r11,r4,0
	ctx.xer.ca = ctx.r4.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r4.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// stw r11,10292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10292, ctx.r11.u32);
	// lwz r11,10436(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10436);
	// rlwinm r11,r11,0,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// or r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 | ctx.r4.u64;
	// stw r11,10436(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10436, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541E78"))) PPC_WEAK_FUNC(sub_82541E78);
PPC_FUNC_IMPL(__imp__sub_82541E78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10436(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10436);
	// clrlwi r3,r11,26
	ctx.r3.u64 = ctx.r11.u32 & 0x3F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541E88"))) PPC_WEAK_FUNC(sub_82541E88);
PPC_FUNC_IMPL(__imp__sub_82541E88) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11584(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11584);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541E90"))) PPC_WEAK_FUNC(sub_82541E90);
PPC_FUNC_IMPL(__imp__sub_82541E90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,-26304(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26304);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,10704(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10704, temp.u32);
	// stfs f0,10712(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10712, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82541ecc
	if (!ctx.cr6.eq) goto loc_82541ECC;
	// lfs f12,10708(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10708);
	ctx.f12.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// beq cr6,0x82541ed0
	if (ctx.cr6.eq) goto loc_82541ED0;
loc_82541ECC:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82541ED0:
	// lwz r11,10440(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10440);
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// rlwimi r11,r10,11,20,20
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 11) & 0x800) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r11,10440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10440, ctx.r11.u32);
	// bne cr6,0x82541ef4
	if (!ctx.cr6.eq) goto loc_82541EF4;
	// lfs f0,10716(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10716);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82541ef8
	if (ctx.cr6.eq) goto loc_82541EF8;
loc_82541EF4:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82541EF8:
	// rlwimi r11,r10,12,19,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x1000) | (ctx.r11.u64 & 0xFFFFFFFFFFFFEFFF);
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,45,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10440, ctx.r11.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,43,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 43) & 0xFFFFFFFFFFFFFFFF;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541F38"))) PPC_WEAK_FUNC(sub_82541F38);
PPC_FUNC_IMPL(__imp__sub_82541F38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,10704(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10704);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-6788(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6788);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541F58"))) PPC_WEAK_FUNC(sub_82541F58);
PPC_FUNC_IMPL(__imp__sub_82541F58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,10704(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10704);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// lfs f13,28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,10708(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10708, temp.u32);
	// stfs f13,10716(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10716, temp.u32);
	// bne cr6,0x82541f88
	if (!ctx.cr6.eq) goto loc_82541F88;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x82541f8c
	if (ctx.cr6.eq) goto loc_82541F8C;
loc_82541F88:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82541F8C:
	// lwz r11,10440(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10440);
	// lfs f12,10712(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10712);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// rlwimi r11,r10,11,20,20
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 11) & 0x800) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r11,10440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10440, ctx.r11.u32);
	// bne cr6,0x82541fb0
	if (!ctx.cr6.eq) goto loc_82541FB0;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x82541fb4
	if (ctx.cr6.eq) goto loc_82541FB4;
loc_82541FB0:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82541FB4:
	// rlwimi r11,r10,12,19,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x1000) | (ctx.r11.u64 & 0xFFFFFFFFFFFFEFFF);
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,44,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10440, ctx.r11.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,42,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 42) & 0xFFFFFFFFFFFFFFFF;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541FF0"))) PPC_WEAK_FUNC(sub_82541FF0);
PPC_FUNC_IMPL(__imp__sub_82541FF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,10708(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10708);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542000"))) PPC_WEAK_FUNC(sub_82542000);
PPC_FUNC_IMPL(__imp__sub_82542000) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10440(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10440);
	// rlwimi r11,r4,15,16,16
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 15) & 0x8000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF7FFF);
	// stw r11,10440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10440, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542020"))) PPC_WEAK_FUNC(sub_82542020);
PPC_FUNC_IMPL(__imp__sub_82542020) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10440(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10440);
	// rlwinm r3,r11,17,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542030"))) PPC_WEAK_FUNC(sub_82542030);
PPC_FUNC_IMPL(__imp__sub_82542030) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// stw r11,10624(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10624, ctx.r11.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542048"))) PPC_WEAK_FUNC(sub_82542048);
PPC_FUNC_IMPL(__imp__sub_82542048) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10624(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10624);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542050"))) PPC_WEAK_FUNC(sub_82542050);
PPC_FUNC_IMPL(__imp__sub_82542050) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12168);
	// stw r4,11588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11588, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82542064
	if (!ctx.cr6.eq) goto loc_82542064;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82542064:
	// lwz r11,10332(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10332);
	// rlwimi r4,r11,0,0,27
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFF0) | (ctx.r4.u64 & 0xFFFFFFFF0000000F);
	// stw r4,10332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10332, ctx.r4.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542080"))) PPC_WEAK_FUNC(sub_82542080);
PPC_FUNC_IMPL(__imp__sub_82542080) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11588(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11588);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542088"))) PPC_WEAK_FUNC(sub_82542088);
PPC_FUNC_IMPL(__imp__sub_82542088) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12172(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12172);
	// stw r4,11592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11592, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8254209c
	if (!ctx.cr6.eq) goto loc_8254209C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8254209C:
	// lwz r11,10332(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10332);
	// rlwimi r11,r4,4,24,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 4) & 0xF0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF0F);
	// stw r11,10332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10332, ctx.r11.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825420B8"))) PPC_WEAK_FUNC(sub_825420B8);
PPC_FUNC_IMPL(__imp__sub_825420B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11592(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11592);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825420C0"))) PPC_WEAK_FUNC(sub_825420C0);
PPC_FUNC_IMPL(__imp__sub_825420C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12176);
	// stw r4,11596(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11596, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825420d4
	if (!ctx.cr6.eq) goto loc_825420D4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_825420D4:
	// lwz r11,10332(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10332);
	// rlwimi r11,r4,8,20,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0xF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF0FF);
	// stw r11,10332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10332, ctx.r11.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825420F0"))) PPC_WEAK_FUNC(sub_825420F0);
PPC_FUNC_IMPL(__imp__sub_825420F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11596(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11596);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825420F8"))) PPC_WEAK_FUNC(sub_825420F8);
PPC_FUNC_IMPL(__imp__sub_825420F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12180);
	// stw r4,11600(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11600, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8254210c
	if (!ctx.cr6.eq) goto loc_8254210C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8254210C:
	// lwz r11,10332(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10332);
	// rlwimi r11,r4,12,16,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 12) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,10332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10332, ctx.r11.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542128"))) PPC_WEAK_FUNC(sub_82542128);
PPC_FUNC_IMPL(__imp__sub_82542128) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11600(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11600);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542130"))) PPC_WEAK_FUNC(sub_82542130);
PPC_FUNC_IMPL(__imp__sub_82542130) {
	PPC_FUNC_PROLOGUE();
	// stw r4,11612(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11612, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542138"))) PPC_WEAK_FUNC(sub_82542138);
PPC_FUNC_IMPL(__imp__sub_82542138) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11612(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11612);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542140"))) PPC_WEAK_FUNC(sub_82542140);
PPC_FUNC_IMPL(__imp__sub_82542140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,59,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 59) & 0xFFFFFFFFFFFFFFFF;
	// lfs f13,27980(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27980);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lfs f0,28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,11620(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 11620, temp.u32);
	// fctiwz f0,f13
	ctx.f0.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,10470(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10470, ctx.r11.u16);
	// sth r11,10468(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10468, ctx.r11.u16);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542190"))) PPC_WEAK_FUNC(sub_82542190);
PPC_FUNC_IMPL(__imp__sub_82542190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,11620(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11620);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825421A0"))) PPC_WEAK_FUNC(sub_825421A0);
PPC_FUNC_IMPL(__imp__sub_825421A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,58,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 58) & 0xFFFFFFFFFFFFFFFF;
	// lfs f13,-26304(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26304);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lfs f0,28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,11624(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 11624, temp.u32);
	// fctiwz f0,f13
	ctx.f0.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// sth r11,10474(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10474, ctx.r11.u16);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825421E8"))) PPC_WEAK_FUNC(sub_825421E8);
PPC_FUNC_IMPL(__imp__sub_825421E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,11624(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11624);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825421F8"))) PPC_WEAK_FUNC(sub_825421F8);
PPC_FUNC_IMPL(__imp__sub_825421F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,58,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 58) & 0xFFFFFFFFFFFFFFFF;
	// lfs f13,-26304(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26304);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lfs f0,28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,11628(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 11628, temp.u32);
	// fctiwz f0,f13
	ctx.f0.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// sth r11,10472(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10472, ctx.r11.u16);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542240"))) PPC_WEAK_FUNC(sub_82542240);
PPC_FUNC_IMPL(__imp__sub_82542240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,11628(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11628);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542250"))) PPC_WEAK_FUNC(sub_82542250);
PPC_FUNC_IMPL(__imp__sub_82542250) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// rldicr r12,r12,45,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 | ctx.r4.u64;
	// stw r11,10412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10412, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542278"))) PPC_WEAK_FUNC(sub_82542278);
PPC_FUNC_IMPL(__imp__sub_82542278) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,10412(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r10,r10,0,28,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// rldicr r12,r12,45,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10412, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825422A8"))) PPC_WEAK_FUNC(sub_825422A8);
PPC_FUNC_IMPL(__imp__sub_825422A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,10412(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r10,r10,0,24,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF0FF;
	// rldicr r12,r12,45,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10412, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825422D8"))) PPC_WEAK_FUNC(sub_825422D8);
PPC_FUNC_IMPL(__imp__sub_825422D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,10412(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwinm r11,r4,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFFFF000;
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r10,r10,0,20,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF0FFF;
	// rldicr r12,r12,45,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10412, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542308"))) PPC_WEAK_FUNC(sub_82542308);
PPC_FUNC_IMPL(__imp__sub_82542308) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,10412(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwinm r11,r4,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r10,r10,0,16,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// rldicr r12,r12,45,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10412, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542338"))) PPC_WEAK_FUNC(sub_82542338);
PPC_FUNC_IMPL(__imp__sub_82542338) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,10412(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwinm r11,r4,20,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 20) & 0xFFF00000;
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r10,r10,0,12,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// rldicr r12,r12,45,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10412, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542368"))) PPC_WEAK_FUNC(sub_82542368);
PPC_FUNC_IMPL(__imp__sub_82542368) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,10412(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwinm r11,r4,24,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF000000;
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r10,r10,0,8,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF0FFFFFF;
	// rldicr r12,r12,45,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10412, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542398"))) PPC_WEAK_FUNC(sub_82542398);
PPC_FUNC_IMPL(__imp__sub_82542398) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r11,r4,28,0,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 28) & 0xF0000000) | (ctx.r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// rldicr r12,r12,45,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10412, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825423C0"))) PPC_WEAK_FUNC(sub_825423C0);
PPC_FUNC_IMPL(__imp__sub_825423C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10416);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// rldicr r12,r12,45,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 | ctx.r4.u64;
	// stw r11,10416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10416, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825423E8"))) PPC_WEAK_FUNC(sub_825423E8);
PPC_FUNC_IMPL(__imp__sub_825423E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,10416(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10416);
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r10,r10,0,28,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// rldicr r12,r12,45,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10416, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542418"))) PPC_WEAK_FUNC(sub_82542418);
PPC_FUNC_IMPL(__imp__sub_82542418) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,10416(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10416);
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r10,r10,0,24,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF0FF;
	// rldicr r12,r12,45,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10416, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542448"))) PPC_WEAK_FUNC(sub_82542448);
PPC_FUNC_IMPL(__imp__sub_82542448) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,10416(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10416);
	// rlwinm r11,r4,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFFFF000;
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r10,r10,0,20,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF0FFF;
	// rldicr r12,r12,45,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10416, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542478"))) PPC_WEAK_FUNC(sub_82542478);
PPC_FUNC_IMPL(__imp__sub_82542478) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,10416(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10416);
	// rlwinm r11,r4,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r10,r10,0,16,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// rldicr r12,r12,45,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10416, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825424A8"))) PPC_WEAK_FUNC(sub_825424A8);
PPC_FUNC_IMPL(__imp__sub_825424A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,10416(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10416);
	// rlwinm r11,r4,20,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 20) & 0xFFF00000;
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r10,r10,0,12,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// rldicr r12,r12,45,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10416, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825424D8"))) PPC_WEAK_FUNC(sub_825424D8);
PPC_FUNC_IMPL(__imp__sub_825424D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,10416(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10416);
	// rlwinm r11,r4,24,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF000000;
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r10,r10,0,8,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF0FFFFFF;
	// rldicr r12,r12,45,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10416, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542508"))) PPC_WEAK_FUNC(sub_82542508);
PPC_FUNC_IMPL(__imp__sub_82542508) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10416);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r11,r4,28,0,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 28) & 0xF0000000) | (ctx.r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// rldicr r12,r12,45,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10416, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542530"))) PPC_WEAK_FUNC(sub_82542530);
PPC_FUNC_IMPL(__imp__sub_82542530) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542540"))) PPC_WEAK_FUNC(sub_82542540);
PPC_FUNC_IMPL(__imp__sub_82542540) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwinm r3,r11,28,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542550"))) PPC_WEAK_FUNC(sub_82542550);
PPC_FUNC_IMPL(__imp__sub_82542550) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwinm r3,r11,24,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542560"))) PPC_WEAK_FUNC(sub_82542560);
PPC_FUNC_IMPL(__imp__sub_82542560) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwinm r3,r11,20,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542570"))) PPC_WEAK_FUNC(sub_82542570);
PPC_FUNC_IMPL(__imp__sub_82542570) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,10412(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10412);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542580"))) PPC_WEAK_FUNC(sub_82542580);
PPC_FUNC_IMPL(__imp__sub_82542580) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwinm r3,r11,12,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542590"))) PPC_WEAK_FUNC(sub_82542590);
PPC_FUNC_IMPL(__imp__sub_82542590) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,10412(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10412);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825425A0"))) PPC_WEAK_FUNC(sub_825425A0);
PPC_FUNC_IMPL(__imp__sub_825425A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwinm r3,r11,4,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825425B0"))) PPC_WEAK_FUNC(sub_825425B0);
PPC_FUNC_IMPL(__imp__sub_825425B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10416);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825425C0"))) PPC_WEAK_FUNC(sub_825425C0);
PPC_FUNC_IMPL(__imp__sub_825425C0) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,10416(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10416);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825425D0"))) PPC_WEAK_FUNC(sub_825425D0);
PPC_FUNC_IMPL(__imp__sub_825425D0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// li r11,1087
	ctx.r11.s64 = 1087;
	// bne cr6,0x825425e0
	if (!ctx.cr6.eq) goto loc_825425E0;
	// li r11,1024
	ctx.r11.s64 = 1024;
loc_825425E0:
	// stw r11,10444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10444, ctx.r11.u32);
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// lwz r10,10436(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10436);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwimi r10,r11,16,15,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x10000) | (ctx.r10.u64 & 0xFFFFFFFFFFFEFFFF);
	// stw r10,10436(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10436, ctx.r10.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542610"))) PPC_WEAK_FUNC(sub_82542610);
PPC_FUNC_IMPL(__imp__sub_82542610) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10444(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10444);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542620"))) PPC_WEAK_FUNC(sub_82542620);
PPC_FUNC_IMPL(__imp__sub_82542620) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,12168(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12168);
	// stw r4,11756(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11756, ctx.r4.u32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r10,28(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// rlwinm r11,r10,16,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82542658
	if (ctx.cr6.eq) goto loc_82542658;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82542658
	if (ctx.cr6.eq) goto loc_82542658;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82542658
	if (ctx.cr6.eq) goto loc_82542658;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82542658:
	// rlwinm r11,r10,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x1;
	// xor. r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,28(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r9,r11,16,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// rlwinm r7,r11,0,16,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r6,r9,3
	ctx.r6.s64 = ctx.r9.s64 + 3;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// andc r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r11,r11,16,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF0000;
	// or r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 | ctx.r11.u64;
	// stw r10,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r10.u32);
	// lwz r10,10244(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10244);
	// rlwinm r10,r10,0,16,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10244, ctx.r11.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825426C8"))) PPC_WEAK_FUNC(sub_825426C8);
PPC_FUNC_IMPL(__imp__sub_825426C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11756(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11756);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825426D0"))) PPC_WEAK_FUNC(sub_825426D0);
PPC_FUNC_IMPL(__imp__sub_825426D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,12172(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12172);
	// stw r4,11760(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11760, ctx.r4.u32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r10,28(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// rlwinm r11,r10,16,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82542708
	if (ctx.cr6.eq) goto loc_82542708;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82542708
	if (ctx.cr6.eq) goto loc_82542708;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82542708
	if (ctx.cr6.eq) goto loc_82542708;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82542708:
	// rlwinm r11,r10,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x1;
	// xor. r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,28(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r9,r11,16,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// rlwinm r7,r11,0,16,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r6,r9,3
	ctx.r6.s64 = ctx.r9.s64 + 3;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// andc r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// rldicr r12,r12,35,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r11,r11,16,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF0000;
	// or r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 | ctx.r11.u64;
	// stw r10,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r10.u32);
	// lwz r10,10252(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10252);
	// rlwinm r10,r10,0,16,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10252, ctx.r11.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542778"))) PPC_WEAK_FUNC(sub_82542778);
PPC_FUNC_IMPL(__imp__sub_82542778) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11760(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11760);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542780"))) PPC_WEAK_FUNC(sub_82542780);
PPC_FUNC_IMPL(__imp__sub_82542780) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,12176(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12176);
	// stw r4,11764(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11764, ctx.r4.u32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r10,28(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// rlwinm r11,r10,16,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x825427b8
	if (ctx.cr6.eq) goto loc_825427B8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x825427b8
	if (ctx.cr6.eq) goto loc_825427B8;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x825427b8
	if (ctx.cr6.eq) goto loc_825427B8;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_825427B8:
	// rlwinm r11,r10,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x1;
	// xor. r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,28(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r9,r11,16,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// rlwinm r7,r11,0,16,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r6,r9,3
	ctx.r6.s64 = ctx.r9.s64 + 3;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// andc r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// rldicr r12,r12,34,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r11,r11,16,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF0000;
	// or r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 | ctx.r11.u64;
	// stw r10,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r10.u32);
	// lwz r10,10256(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10256);
	// rlwinm r10,r10,0,16,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10256, ctx.r11.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542828"))) PPC_WEAK_FUNC(sub_82542828);
PPC_FUNC_IMPL(__imp__sub_82542828) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11764(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11764);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542830"))) PPC_WEAK_FUNC(sub_82542830);
PPC_FUNC_IMPL(__imp__sub_82542830) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,12180(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12180);
	// stw r4,11768(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11768, ctx.r4.u32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r10,28(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// rlwinm r11,r10,16,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82542868
	if (ctx.cr6.eq) goto loc_82542868;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82542868
	if (ctx.cr6.eq) goto loc_82542868;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82542868
	if (ctx.cr6.eq) goto loc_82542868;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82542868:
	// rlwinm r11,r10,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x1;
	// xor. r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,28(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r9,r11,16,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// rlwinm r7,r11,0,16,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r6,r9,3
	ctx.r6.s64 = ctx.r9.s64 + 3;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// andc r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// rldicr r12,r12,33,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 33) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r11,r11,16,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF0000;
	// or r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 | ctx.r11.u64;
	// stw r10,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r10.u32);
	// lwz r10,10260(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10260);
	// rlwinm r10,r10,0,16,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10260, ctx.r11.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825428D8"))) PPC_WEAK_FUNC(sub_825428D8);
PPC_FUNC_IMPL(__imp__sub_825428D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11768(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11768);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825428E0"))) PPC_WEAK_FUNC(sub_825428E0);
PPC_FUNC_IMPL(__imp__sub_825428E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,52,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 52) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10496(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10496, temp.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542908"))) PPC_WEAK_FUNC(sub_82542908);
PPC_FUNC_IMPL(__imp__sub_82542908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,10496(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10496);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542918"))) PPC_WEAK_FUNC(sub_82542918);
PPC_FUNC_IMPL(__imp__sub_82542918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,53,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 53) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10492(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10492, temp.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542940"))) PPC_WEAK_FUNC(sub_82542940);
PPC_FUNC_IMPL(__imp__sub_82542940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,10492(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10492);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542950"))) PPC_WEAK_FUNC(sub_82542950);
PPC_FUNC_IMPL(__imp__sub_82542950) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10488(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10488);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r4,r11,0,0,29
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFFC) | (ctx.r4.u64 & 0xFFFFFFFF00000003);
	// rldicr r12,r12,54,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 54) & 0xFFFFFFFFFFFFFFFF;
	// stw r4,10488(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10488, ctx.r4.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542978"))) PPC_WEAK_FUNC(sub_82542978);
PPC_FUNC_IMPL(__imp__sub_82542978) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10488(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10488);
	// clrlwi r3,r11,30
	ctx.r3.u64 = ctx.r11.u32 & 0x3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542988"))) PPC_WEAK_FUNC(sub_82542988);
PPC_FUNC_IMPL(__imp__sub_82542988) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10560(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10560);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r4,r11,0,0,30
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFFE) | (ctx.r4.u64 & 0xFFFFFFFF00000001);
	// rldicr r12,r12,35,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// stw r4,10560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10560, ctx.r4.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825429B0"))) PPC_WEAK_FUNC(sub_825429B0);
PPC_FUNC_IMPL(__imp__sub_825429B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10560(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10560);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825429C0"))) PPC_WEAK_FUNC(sub_825429C0);
PPC_FUNC_IMPL(__imp__sub_825429C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10440(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10440);
	// rlwimi r11,r4,21,10,10
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 21) & 0x200000) | (ctx.r11.u64 & 0xFFFFFFFFFFDFFFFF);
	// stw r11,10440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10440, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825429E0"))) PPC_WEAK_FUNC(sub_825429E0);
PPC_FUNC_IMPL(__imp__sub_825429E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10440(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10440);
	// rlwinm r3,r11,11,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825429F0"))) PPC_WEAK_FUNC(sub_825429F0);
PPC_FUNC_IMPL(__imp__sub_825429F0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,10328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10328, ctx.r4.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542A08"))) PPC_WEAK_FUNC(sub_82542A08);
PPC_FUNC_IMPL(__imp__sub_82542A08) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10328(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10328);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542A10"))) PPC_WEAK_FUNC(sub_82542A10);
PPC_FUNC_IMPL(__imp__sub_82542A10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10428(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10428);
	// rlwimi r11,r4,4,27,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 4) & 0x10) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFEF);
	// stw r11,10428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10428, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542A30"))) PPC_WEAK_FUNC(sub_82542A30);
PPC_FUNC_IMPL(__imp__sub_82542A30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10428(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10428);
	// rlwinm r3,r11,28,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542A40"))) PPC_WEAK_FUNC(sub_82542A40);
PPC_FUNC_IMPL(__imp__sub_82542A40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10428(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10428);
	// rlwimi r11,r4,24,0,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 24) & 0xFF000000) | (ctx.r11.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r11,10428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10428, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542A60"))) PPC_WEAK_FUNC(sub_82542A60);
PPC_FUNC_IMPL(__imp__sub_82542A60) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,10428(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,0,24,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFC) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF03);
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542A78"))) PPC_WEAK_FUNC(sub_82542A78);
PPC_FUNC_IMPL(__imp__sub_82542A78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,32,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10572(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10572, temp.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542AA0"))) PPC_WEAK_FUNC(sub_82542AA0);
PPC_FUNC_IMPL(__imp__sub_82542AA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10572(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10572);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542AA8"))) PPC_WEAK_FUNC(sub_82542AA8);
PPC_FUNC_IMPL(__imp__sub_82542AA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,34,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10564(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10564, temp.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542AD0"))) PPC_WEAK_FUNC(sub_82542AD0);
PPC_FUNC_IMPL(__imp__sub_82542AD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10564(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10564);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542AD8"))) PPC_WEAK_FUNC(sub_82542AD8);
PPC_FUNC_IMPL(__imp__sub_82542AD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10576(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10576, temp.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542AF8"))) PPC_WEAK_FUNC(sub_82542AF8);
PPC_FUNC_IMPL(__imp__sub_82542AF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10576(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10576);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542B00"))) PPC_WEAK_FUNC(sub_82542B00);
PPC_FUNC_IMPL(__imp__sub_82542B00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,33,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 33) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10568(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10568, temp.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542B28"))) PPC_WEAK_FUNC(sub_82542B28);
PPC_FUNC_IMPL(__imp__sub_82542B28) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10568(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542B30"))) PPC_WEAK_FUNC(sub_82542B30);
PPC_FUNC_IMPL(__imp__sub_82542B30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11580(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11580);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r11,r4,20,9,11
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 20) & 0x700000) | (ctx.r11.u64 & 0xFFFFFFFFFF8FFFFF);
	// rldicr r12,r12,49,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,11580(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11580, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542B58"))) PPC_WEAK_FUNC(sub_82542B58);
PPC_FUNC_IMPL(__imp__sub_82542B58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11580(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11580);
	// rlwinm r3,r11,12,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542B68"))) PPC_WEAK_FUNC(sub_82542B68);
PPC_FUNC_IMPL(__imp__sub_82542B68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10432);
	// rlwimi r11,r4,3,28,28
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 3) & 0x8) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF7);
	// stw r11,10432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10432, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542B88"))) PPC_WEAK_FUNC(sub_82542B88);
PPC_FUNC_IMPL(__imp__sub_82542B88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10432);
	// rlwinm r3,r11,29,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542B98"))) PPC_WEAK_FUNC(sub_82542B98);
PPC_FUNC_IMPL(__imp__sub_82542B98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10432);
	// rlwimi r11,r4,2,29,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 2) & 0x4) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r11,10432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10432, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542BB8"))) PPC_WEAK_FUNC(sub_82542BB8);
PPC_FUNC_IMPL(__imp__sub_82542BB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10432);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542BC8"))) PPC_WEAK_FUNC(sub_82542BC8);
PPC_FUNC_IMPL(__imp__sub_82542BC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10432);
	// rlwimi r11,r4,5,26,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 5) & 0x20) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFDF);
	// stw r11,10432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10432, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542BE8"))) PPC_WEAK_FUNC(sub_82542BE8);
PPC_FUNC_IMPL(__imp__sub_82542BE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10432);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542BF8"))) PPC_WEAK_FUNC(sub_82542BF8);
PPC_FUNC_IMPL(__imp__sub_82542BF8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,10434(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10434, ctx.r4.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542C10"))) PPC_WEAK_FUNC(sub_82542C10);
PPC_FUNC_IMPL(__imp__sub_82542C10) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10434(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10434);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542C18"))) PPC_WEAK_FUNC(sub_82542C18);
PPC_FUNC_IMPL(__imp__sub_82542C18) {
	PPC_FUNC_PROLOGUE();
	// stw r4,13220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13220, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542C20"))) PPC_WEAK_FUNC(sub_82542C20);
PPC_FUNC_IMPL(__imp__sub_82542C20) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,13220(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13220);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542C28"))) PPC_WEAK_FUNC(sub_82542C28);
PPC_FUNC_IMPL(__imp__sub_82542C28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11580(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11580);
	// rlwimi r11,r4,23,2,8
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 23) & 0x3F800000) | (ctx.r11.u64 & 0xFFFFFFFFC07FFFFF);
	// stw r11,11580(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11580, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542C38"))) PPC_WEAK_FUNC(sub_82542C38);
PPC_FUNC_IMPL(__imp__sub_82542C38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11580(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11580);
	// rlwinm r3,r11,9,25,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x7F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542C48"))) PPC_WEAK_FUNC(sub_82542C48);
PPC_FUNC_IMPL(__imp__sub_82542C48) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r7,r4,20
	ctx.r7.s64 = ctx.r4.s64 + 20;
	// li r6,1
	ctx.r6.s64 = 1;
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rldicr r6,r6,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// add r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r10,r5,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,-6856
	ctx.r9.s64 = ctx.r9.s64 + -6856;
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// srd r4,r6,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r7.u8 & 0x7F));
	// lbz r7,11652(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 11652);
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rotlwi r7,r7,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lwzx r7,r7,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r6,r9,22,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 22) & 0x1;
	// rlwimi r9,r10,11,20,20
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 11) & 0x800) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF7FF);
	// or r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 | ctx.r10.u64;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// andc r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r6.u64;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// rlwinm r7,r7,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// rlwimi r31,r10,21,9,10
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 21) & 0x600000) | (ctx.r31.u64 & 0xFFFFFFFFFF9FFFFF);
	// rlwimi r31,r10,21,4,6
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 21) & 0xE000000) | (ctx.r31.u64 & 0xFFFFFFFFF1FFFFFF);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// rlwimi r10,r7,31,13,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 31) & 0x7FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFF80000);
	// lbz r8,11730(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 11730);
	// rlwimi r10,r7,31,1,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 31) & 0x7FF00000) | (ctx.r10.u64 & 0xFFFFFFFF800FFFFF);
	// rlwinm r7,r10,13,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xFFF;
	// rlwinm r10,r8,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 & ctx.r10.u64;
	// andc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwimi r10,r9,0,0,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 | ctx.r11.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542D08"))) PPC_WEAK_FUNC(sub_82542D08);
PPC_FUNC_IMPL(__imp__sub_82542D08) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,1040(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1040);
	// lwz r9,1036(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// rlwinm r11,r10,21,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1;
	// rlwinm r10,r9,11,21,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0x7FF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwimi r10,r11,0,29,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x4) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFB);
	// clrlwi r3,r10,29
	ctx.r3.u64 = ctx.r10.u32 & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542D38"))) PPC_WEAK_FUNC(sub_82542D38);
PPC_FUNC_IMPL(__imp__sub_82542D38) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// add r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r10,r11,1024
	ctx.r10.s64 = ctx.r11.s64 + 1024;
	// addi r11,r4,20
	ctx.r11.s64 = ctx.r4.s64 + 20;
	// rldicr r7,r7,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// srd r6,r7,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r11.u8 & 0x7F));
	// lbz r11,11730(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 11730);
	// rlwinm r7,r11,0,31,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// rlwimi r11,r5,31,13,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 31) & 0x7FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFF80000);
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwimi r11,r5,31,1,11
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 31) & 0x7FF00000) | (ctx.r11.u64 & 0xFFFFFFFF800FFFFF);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// rlwinm r11,r11,13,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0xFFF;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	// andc r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r7.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwimi r11,r4,0,0,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFFFFFC) | (ctx.r11.u64 & 0xFFFFFFFF00000003);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// stb r31,11730(r8)
	PPC_STORE_U8(ctx.r8.u32 + 11730, ctx.r31.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 | ctx.r11.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542DC0"))) PPC_WEAK_FUNC(sub_82542DC0);
PPC_FUNC_IMPL(__imp__sub_82542DC0) {
	PPC_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r11,11730(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11730);
	// rlwinm r3,r11,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542DD0"))) PPC_WEAK_FUNC(sub_82542DD0);
PPC_FUNC_IMPL(__imp__sub_82542DD0) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r7,r4,20
	ctx.r7.s64 = ctx.r4.s64 + 20;
	// li r6,1
	ctx.r6.s64 = 1;
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rldicr r6,r6,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// add r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r10,r5,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,-6856
	ctx.r9.s64 = ctx.r9.s64 + -6856;
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// srd r4,r6,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r7.u8 & 0x7F));
	// lbz r7,11652(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 11652);
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rotlwi r7,r7,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lwzx r7,r7,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r6,r9,21,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 21) & 0x1;
	// rlwimi r9,r10,10,21,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 10) & 0x400) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFBFF);
	// or r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 | ctx.r10.u64;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// andc r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r6.u64;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// rlwinm r7,r7,6,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// rlwimi r31,r10,19,11,12
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 19) & 0x180000) | (ctx.r31.u64 & 0xFFFFFFFFFFE7FFFF);
	// rlwimi r31,r10,19,4,6
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 19) & 0xE000000) | (ctx.r31.u64 & 0xFFFFFFFFF1FFFFFF);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// rlwimi r10,r7,31,13,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 31) & 0x7FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFF80000);
	// lbz r8,11730(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 11730);
	// rlwimi r10,r7,31,1,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 31) & 0x7FF00000) | (ctx.r10.u64 & 0xFFFFFFFF800FFFFF);
	// rlwinm r7,r10,13,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xFFF;
	// rlwinm r10,r8,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 & ctx.r10.u64;
	// andc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwimi r10,r9,0,0,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 | ctx.r11.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542E90"))) PPC_WEAK_FUNC(sub_82542E90);
PPC_FUNC_IMPL(__imp__sub_82542E90) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,1040(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1040);
	// lwz r9,1036(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// rlwinm r11,r10,22,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x1;
	// rlwinm r10,r9,13,19,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x1FFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwimi r10,r11,0,29,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x4) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFB);
	// clrlwi r3,r10,29
	ctx.r3.u64 = ctx.r10.u32 & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542EC0"))) PPC_WEAK_FUNC(sub_82542EC0);
PPC_FUNC_IMPL(__imp__sub_82542EC0) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r10,r11,1024
	ctx.r10.s64 = ctx.r11.s64 + 1024;
	// addi r11,r4,20
	ctx.r11.s64 = ctx.r4.s64 + 20;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// srd r6,r9,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r11.u8 & 0x7F));
	// lbz r11,11730(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 11730);
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwimi r11,r5,31,13,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 31) & 0x7FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFF80000);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// rlwimi r11,r5,31,1,11
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 31) & 0x7FF00000) | (ctx.r11.u64 & 0xFFFFFFFF800FFFFF);
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// rlwinm r11,r11,13,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0xFFF;
	// andc r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r7.u64;
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwimi r11,r4,0,0,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFFFFFC) | (ctx.r11.u64 & 0xFFFFFFFF00000003);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// stb r31,11730(r8)
	PPC_STORE_U8(ctx.r8.u32 + 11730, ctx.r31.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 | ctx.r11.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542F48"))) PPC_WEAK_FUNC(sub_82542F48);
PPC_FUNC_IMPL(__imp__sub_82542F48) {
	PPC_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r11,11730(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11730);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542F58"))) PPC_WEAK_FUNC(sub_82542F58);
PPC_FUNC_IMPL(__imp__sub_82542F58) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 + 20;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwimi r9,r5,23,7,8
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 23) & 0x1800000) | (ctx.r9.u64 & 0xFFFFFFFFFE7FFFFF);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542F98"))) PPC_WEAK_FUNC(sub_82542F98);
PPC_FUNC_IMPL(__imp__sub_82542F98) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// rlwinm r3,r11,9,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542FB0"))) PPC_WEAK_FUNC(sub_82542FB0);
PPC_FUNC_IMPL(__imp__sub_82542FB0) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// add r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r10,r11,1024
	ctx.r10.s64 = ctx.r11.s64 + 1024;
	// addi r11,r4,20
	ctx.r11.s64 = ctx.r4.s64 + 20;
	// rldicr r7,r7,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// srd r6,r7,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r11.u8 & 0x7F));
	// lbz r11,11730(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 11730);
	// rlwinm r7,r11,0,30,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// rlwimi r11,r5,31,13,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 31) & 0x7FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFF80000);
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwimi r11,r5,31,1,11
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 31) & 0x7FF00000) | (ctx.r11.u64 & 0xFFFFFFFF800FFFFF);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// rlwinm r11,r11,13,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0xFFF;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	// andc r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r7.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwimi r11,r4,0,0,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFFFFFC) | (ctx.r11.u64 & 0xFFFFFFFF00000003);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// stb r31,11730(r8)
	PPC_STORE_U8(ctx.r8.u32 + 11730, ctx.r31.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 | ctx.r11.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543038"))) PPC_WEAK_FUNC(sub_82543038);
PPC_FUNC_IMPL(__imp__sub_82543038) {
	PPC_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r11,11730(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11730);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543048"))) PPC_WEAK_FUNC(sub_82543048);
PPC_FUNC_IMPL(__imp__sub_82543048) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm. r9,r10,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82543068
	if (!ctx.cr0.eq) goto loc_82543068;
	// rlwinm. r10,r10,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825430a4
	if (ctx.cr0.eq) goto loc_825430A4;
loc_82543068:
	// addi r9,r4,20
	ctx.r9.s64 = ctx.r4.s64 + 20;
	// li r7,1
	ctx.r7.s64 = 1;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldicr r7,r7,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-6856
	ctx.r10.s64 = ctx.r10.s64 + -6856;
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwimi r8,r10,25,4,6
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 25) & 0xE000000) | (ctx.r8.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// srd r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r9.u8 & 0x7F));
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
loc_825430A4:
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stb r5,11652(r10)
	PPC_STORE_U8(ctx.r10.u32 + 11652, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825430B0"))) PPC_WEAK_FUNC(sub_825430B0);
PPC_FUNC_IMPL(__imp__sub_825430B0) {
	PPC_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r3,11652(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11652);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825430C0"))) PPC_WEAK_FUNC(sub_825430C0);
PPC_FUNC_IMPL(__imp__sub_825430C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r9,r4,20
	ctx.r9.s64 = ctx.r4.s64 + 20;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldicr r8,r8,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,-6784(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -6784);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// lfs f13,36(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// srd r10,r8,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwimi r8,r9,5,23,26
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 5) & 0x1E0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFE1F);
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543120"))) PPC_WEAK_FUNC(sub_82543120);
PPC_FUNC_IMPL(__imp__sub_82543120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// rlwinm r11,r11,23,0,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0xFF800000;
	// srawi r11,r11,28
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 28;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,27916(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27916);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543168"))) PPC_WEAK_FUNC(sub_82543168);
PPC_FUNC_IMPL(__imp__sub_82543168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r4,20
	ctx.r9.s64 = ctx.r4.s64 + 20;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldicr r8,r8,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,23924(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23924);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// lfs f13,36(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// srd r10,r8,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwimi r8,r9,12,10,19
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 12) & 0x3FF000) | (ctx.r8.u64 & 0xFFFFFFFFFFC00FFF);
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825431C8"))) PPC_WEAK_FUNC(sub_825431C8);
PPC_FUNC_IMPL(__imp__sub_825431C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1040);
	// rlwinm r11,r11,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// srawi r11,r11,22
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 22;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-6780(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6780);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543208"))) PPC_WEAK_FUNC(sub_82543208);
PPC_FUNC_IMPL(__imp__sub_82543208) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,3068
	ctx.r11.s64 = ctx.r4.s64 + 3068;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82543268
	if (ctx.cr0.eq) goto loc_82543268;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mulli r10,r4,24
	ctx.r10.s64 = ctx.r4.s64 * 24;
	// rlwinm r11,r11,30,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xF;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// addi r10,r10,1024
	ctx.r10.s64 = ctx.r10.s64 + 1024;
	// bgt cr6,0x8254323c
	if (ctx.cr6.gt) goto loc_8254323C;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8254323C:
	// addi r9,r4,20
	ctx.r9.s64 = ctx.r4.s64 + 20;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldicr r8,r8,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwimi r8,r11,2,26,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 2) & 0x3C) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFC3);
	// stw r8,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r8.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
loc_82543268:
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stb r5,11678(r10)
	PPC_STORE_U8(ctx.r10.u32 + 11678, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543278"))) PPC_WEAK_FUNC(sub_82543278);
PPC_FUNC_IMPL(__imp__sub_82543278) {
	PPC_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r3,11678(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11678);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543288"))) PPC_WEAK_FUNC(sub_82543288);
PPC_FUNC_IMPL(__imp__sub_82543288) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,3068
	ctx.r11.s64 = ctx.r4.s64 + 3068;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825432e8
	if (ctx.cr0.eq) goto loc_825432E8;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mulli r10,r4,24
	ctx.r10.s64 = ctx.r4.s64 * 24;
	// rlwinm r11,r11,26,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xF;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// addi r10,r10,1024
	ctx.r10.s64 = ctx.r10.s64 + 1024;
	// blt cr6,0x825432bc
	if (ctx.cr6.lt) goto loc_825432BC;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_825432BC:
	// addi r9,r4,20
	ctx.r9.s64 = ctx.r4.s64 + 20;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldicr r8,r8,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwimi r8,r11,6,22,25
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 6) & 0x3C0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFC3F);
	// stw r8,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r8.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
loc_825432E8:
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stb r5,11704(r10)
	PPC_STORE_U8(ctx.r10.u32 + 11704, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825432F8"))) PPC_WEAK_FUNC(sub_825432F8);
PPC_FUNC_IMPL(__imp__sub_825432F8) {
	PPC_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r3,11704(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11704);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543308"))) PPC_WEAK_FUNC(sub_82543308);
PPC_FUNC_IMPL(__imp__sub_82543308) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 + 20;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cntlzw r8,r5
	ctx.r8.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r9,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543358"))) PPC_WEAK_FUNC(sub_82543358);
PPC_FUNC_IMPL(__imp__sub_82543358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r3,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543378"))) PPC_WEAK_FUNC(sub_82543378);
PPC_FUNC_IMPL(__imp__sub_82543378) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 + 20;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lwz r9,1024(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// rlwimi r9,r5,10,19,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 10) & 0x1C00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE3FF);
	// stw r9,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r9.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825433B0"))) PPC_WEAK_FUNC(sub_825433B0);
PPC_FUNC_IMPL(__imp__sub_825433B0) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// rlwinm r3,r11,22,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825433C8"))) PPC_WEAK_FUNC(sub_825433C8);
PPC_FUNC_IMPL(__imp__sub_825433C8) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 + 20;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lwz r9,1024(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// rlwimi r9,r5,13,16,18
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 13) & 0xE000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r9,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r9.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543400"))) PPC_WEAK_FUNC(sub_82543400);
PPC_FUNC_IMPL(__imp__sub_82543400) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// rlwinm r3,r11,19,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543418"))) PPC_WEAK_FUNC(sub_82543418);
PPC_FUNC_IMPL(__imp__sub_82543418) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 + 20;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lwz r9,1024(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// rlwimi r9,r5,16,13,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 16) & 0x70000) | (ctx.r9.u64 & 0xFFFFFFFFFFF8FFFF);
	// stw r9,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r9.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543450"))) PPC_WEAK_FUNC(sub_82543450);
PPC_FUNC_IMPL(__imp__sub_82543450) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lhz r11,1024(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 1024);
	// clrlwi r3,r11,29
	ctx.r3.u64 = ctx.r11.u32 & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543468"))) PPC_WEAK_FUNC(sub_82543468);
PPC_FUNC_IMPL(__imp__sub_82543468) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 + 20;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwimi r9,r5,3,27,28
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 3) & 0x18) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825434A8"))) PPC_WEAK_FUNC(sub_825434A8);
PPC_FUNC_IMPL(__imp__sub_825434A8) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// rlwinm r3,r11,29,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825434C0"))) PPC_WEAK_FUNC(sub_825434C0);
PPC_FUNC_IMPL(__imp__sub_825434C0) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 + 20;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwimi r9,r5,22,5,9
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 22) & 0x7C00000) | (ctx.r9.u64 & 0xFFFFFFFFF83FFFFF);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543500"))) PPC_WEAK_FUNC(sub_82543500);
PPC_FUNC_IMPL(__imp__sub_82543500) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1040);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r3,r11,27
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 27;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543518"))) PPC_WEAK_FUNC(sub_82543518);
PPC_FUNC_IMPL(__imp__sub_82543518) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 + 20;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwimi r9,r5,27,0,4
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 27) & 0xF8000000) | (ctx.r9.u64 & 0xFFFFFFFF07FFFFFF);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543558"))) PPC_WEAK_FUNC(sub_82543558);
PPC_FUNC_IMPL(__imp__sub_82543558) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1040);
	// srawi r3,r11,27
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 27;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543570"))) PPC_WEAK_FUNC(sub_82543570);
PPC_FUNC_IMPL(__imp__sub_82543570) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 + 20;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwimi r9,r5,2,29,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 2) & 0x4) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825435B0"))) PPC_WEAK_FUNC(sub_825435B0);
PPC_FUNC_IMPL(__imp__sub_825435B0) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825435C8"))) PPC_WEAK_FUNC(sub_825435C8);
PPC_FUNC_IMPL(__imp__sub_825435C8) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 + 20;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cntlzw r8,r5
	ctx.r8.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r9,r8,11,20,20
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 11) & 0x800) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543610"))) PPC_WEAK_FUNC(sub_82543610);
PPC_FUNC_IMPL(__imp__sub_82543610) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1028);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r3,r11,21,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543628"))) PPC_WEAK_FUNC(sub_82543628);
PPC_FUNC_IMPL(__imp__sub_82543628) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r31,8(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r30,12(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r7,11584(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11584);
	// lwz r4,12376(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12376);
	// lwz r5,12380(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12380);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r8,12384(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12384);
	// lwz r9,12388(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12388);
	// add r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 + ctx.r4.u64;
	// stw r11,12400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12400, ctx.r11.u32);
	// add r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stw r10,12404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12404, ctx.r10.u32);
	// stw r31,12408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12408, ctx.r31.u32);
	// stw r30,12412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12412, ctx.r30.u32);
	// beq cr6,0x825436b0
	if (ctx.cr6.eq) goto loc_825436B0;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8254368c
	if (ctx.cr6.gt) goto loc_8254368C;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_8254368C:
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82543698
	if (ctx.cr6.gt) goto loc_82543698;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
loc_82543698:
	// cmpw cr6,r6,r31
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x825436a4
	if (ctx.cr6.lt) goto loc_825436A4;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_825436A4:
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x825436b0
	if (ctx.cr6.lt) goto loc_825436B0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
loc_825436B0:
	// lwz r11,10308(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10308);
	// lwz r10,10312(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10312);
	// rlwimi r11,r5,16,1,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 16) & 0x7FFF0000) | (ctx.r11.u64 & 0xFFFFFFFF8000FFFF);
	// rlwimi r10,r7,16,1,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 16) & 0x7FFF0000) | (ctx.r10.u64 & 0xFFFFFFFF8000FFFF);
	// rlwimi r11,r4,0,17,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x7FFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFF8000);
	// rlwimi r10,r6,0,17,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x7FFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF8000);
	// stw r11,10308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10308, ctx.r11.u32);
	// stw r10,10312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10312, ctx.r10.u32);
	// bl 0x82541120
	ctx.lr = 0x825436D4;
	sub_82541120(ctx, base);
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

__attribute__((alias("__imp__sub_825436F0"))) PPC_WEAK_FUNC(sub_825436F0);
PPC_FUNC_IMPL(__imp__sub_825436F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x825436F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,12168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12168);
	// mr. r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8254371c
	if (!ctx.cr0.eq) goto loc_8254371C;
	// lwz r9,12184(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12184);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82543910
	if (ctx.cr0.eq) goto loc_82543910;
loc_8254371C:
	// lbz r10,10808(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10808);
	// rlwinm. r8,r10,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82543730
	if (ctx.cr0.eq) goto loc_82543730;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x825437bc
	goto loc_825437BC;
loc_82543730:
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825437b4
	if (ctx.cr0.eq) goto loc_825437B4;
	// lwz r10,12452(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12452);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8254374c
	if (ctx.cr6.eq) goto loc_8254374C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825437b4
	if (!ctx.cr6.eq) goto loc_825437B4;
loc_8254374C:
	// lwz r11,12172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12172);
	// lwz r10,12456(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12456);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82543764
	if (ctx.cr6.eq) goto loc_82543764;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825437b4
	if (!ctx.cr6.eq) goto loc_825437B4;
loc_82543764:
	// lwz r11,12176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12176);
	// lwz r10,12460(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12460);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8254377c
	if (ctx.cr6.eq) goto loc_8254377C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825437b4
	if (!ctx.cr6.eq) goto loc_825437B4;
loc_8254377C:
	// lwz r11,12180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12180);
	// lwz r10,12464(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12464);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82543794
	if (ctx.cr6.eq) goto loc_82543794;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825437b4
	if (!ctx.cr6.eq) goto loc_825437B4;
loc_82543794:
	// lwz r11,12184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12184);
	// lwz r10,12468(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12468);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825437ac
	if (ctx.cr6.eq) goto loc_825437AC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825437b4
	if (!ctx.cr6.eq) goto loc_825437B4;
loc_825437AC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x825437b8
	goto loc_825437B8;
loc_825437B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825437B8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_825437BC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825437d0
	if (ctx.cr0.eq) goto loc_825437D0;
	// lwz r11,12900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12900);
	// lwz r8,12904(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12904);
	// b 0x825437e4
	goto loc_825437E4;
loc_825437D0:
	// lwz r11,36(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// rlwinm r9,r11,29,17,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x7FFF;
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
loc_825437E4:
	// lwz r26,0(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82543800
	if (!ctx.cr6.lt) goto loc_82543800;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82543800:
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82543814
	if (ctx.cr6.lt) goto loc_82543814;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82543814:
	// subf r28,r26,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r26.s64;
	// stw r26,12376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12376, ctx.r26.u32);
	// subf r27,r30,r9
	ctx.r27.s64 = ctx.r9.s64 - ctx.r30.s64;
	// stw r30,12380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12380, ctx.r30.u32);
	// addi r4,r31,12400
	ctx.r4.s64 = ctx.r31.s64 + 12400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,12384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12384, ctx.r28.u32);
	// stw r27,12388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12388, ctx.r27.u32);
	// lfs f0,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12392(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12392, temp.u32);
	// lfs f0,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12396(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12396, temp.u32);
	// bl 0x82543628
	ctx.lr = 0x82543848;
	sub_82543628(ctx, base);
	// clrldi r11,r28,32
	ctx.r11.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// clrldi r10,r27,32
	ctx.r10.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// clrldi r9,r26,32
	ctx.r9.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f11,104(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f10,f0
	ctx.f10.f64 = double(float(ctx.f0.f64));
	// lfs f0,3548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f13
	ctx.f9.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f13,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f13,10376(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10376, temp.u32);
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f13,10380(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10380, temp.u32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,10384(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10384, temp.u32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,10388(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10388, temp.u32);
	// lfs f0,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,10392(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10392, temp.u32);
	// lfs f0,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10396(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10396, temp.u32);
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
loc_82543910:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82543918"))) PPC_WEAK_FUNC(sub_82543918);
PPC_FUNC_IMPL(__imp__sub_82543918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x82543920;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82543988
	if (ctx.cr6.eq) goto loc_82543988;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// subfic r11,r29,17
	ctx.xer.ca = ctx.r29.u32 <= 17;
	ctx.r11.s64 = 17 - ctx.r29.s64;
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// rlwinm r6,r10,12,20,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r7,r10,3
	ctx.r7.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r10,r6,512
	ctx.r10.s64 = ctx.r6.s64 + 512;
	// addi r5,r11,206
	ctx.r5.s64 = ctx.r11.s64 + 206;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r6,r5,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r9,1652(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1652, ctx.r9.u32);
	// stwx r10,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r10.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_82543988:
	// addi r11,r29,3047
	ctx.r11.s64 = ctx.r29.s64 + 3047;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r27,r31
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq 0x82543a00
	if (ctx.cr0.eq) goto loc_82543A00;
	// lwz r11,10780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10780);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825439b0
	if (ctx.cr0.eq) goto loc_825439B0;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// b 0x82543a00
	goto loc_82543A00;
loc_825439B0:
	// lwz r11,10784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10784);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82543a00
	if (ctx.cr0.eq) goto loc_82543A00;
	// lwz r11,13152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13152);
	// lwz r3,13148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13148);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825439d8
	if (ctx.cr6.lt) goto loc_825439D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b9b8
	ctx.lr = 0x825439D8;
	sub_8253B9B8(ctx, base);
loc_825439D8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwimi r11,r28,30,2,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 30) & 0x3FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFC0000000);
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// stw r10,13148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13148, ctx.r10.u32);
loc_82543A00:
	// rlwinm. r11,r26,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 30) & 0x3FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r30,r27,r31
	PPC_STORE_U32(ctx.r27.u32 + ctx.r31.u32, ctx.r30.u32);
	// add r10,r31,r29
	ctx.r10.u64 = ctx.r31.u64 + ctx.r29.u64;
	// stb r11,12256(r10)
	PPC_STORE_U8(ctx.r10.u32 + 12256, ctx.r11.u8);
	// beq 0x82543a34
	if (ctx.cr0.eq) goto loc_82543A34;
	// lbz r10,11552(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 11552);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82543a34
	if (ctx.cr6.eq) goto loc_82543A34;
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// rldicr r12,r12,51,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 51) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_82543A34:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82543A40"))) PPC_WEAK_FUNC(sub_82543A40);
PPC_FUNC_IMPL(__imp__sub_82543A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x82543A48;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r29,3047
	ctx.r11.s64 = ctx.r29.s64 + 3047;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwzx r31,r11,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82543aa4
	if (ctx.cr0.eq) goto loc_82543AA4;
	// subfic r10,r29,223
	ctx.xer.ca = ctx.r29.u32 <= 223;
	ctx.r10.s64 = 223 - ctx.r29.s64;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subf r28,r11,r10
	ctx.r28.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bl 0x8253b3c0
	ctx.lr = 0x82543AA4;
	sub_8253B3C0(ctx, base);
loc_82543AA4:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r30,r29
	ctx.r10.u64 = ctx.r30.u64 + ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lbz r11,12256(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12256);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82543AC8"))) PPC_WEAK_FUNC(sub_82543AC8);
PPC_FUNC_IMPL(__imp__sub_82543AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82543AD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r30,12164(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12164);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82543b4c
	if (ctx.cr0.eq) goto loc_82543B4C;
	// lwz r11,10780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10780);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82543afc
	if (ctx.cr0.eq) goto loc_82543AFC;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// b 0x82543b4c
	goto loc_82543B4C;
loc_82543AFC:
	// lwz r11,10784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10784);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82543b4c
	if (ctx.cr0.eq) goto loc_82543B4C;
	// lwz r11,13152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13152);
	// lwz r3,13148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13148);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82543b24
	if (ctx.cr6.lt) goto loc_82543B24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b9b8
	ctx.lr = 0x82543B24;
	sub_8253B9B8(ctx, base);
loc_82543B24:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwimi r11,r30,30,2,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 30) & 0x3FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFC0000000);
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// stw r10,13148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13148, ctx.r10.u32);
loc_82543B4C:
	// stw r29,12164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12164, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82543B58"))) PPC_WEAK_FUNC(sub_82543B58);
PPC_FUNC_IMPL(__imp__sub_82543B58) {
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
	// addi r11,r4,3042
	ctx.r11.s64 = ctx.r4.s64 + 3042;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r3
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82543b84
	if (ctx.cr0.eq) goto loc_82543B84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b3c0
	ctx.lr = 0x82543B84;
	sub_8253B3C0(ctx, base);
loc_82543B84:
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

__attribute__((alias("__imp__sub_82543BA0"))) PPC_WEAK_FUNC(sub_82543BA0);
PPC_FUNC_IMPL(__imp__sub_82543BA0) {
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
	// lwz r31,12184(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12184);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82543bc4
	if (ctx.cr0.eq) goto loc_82543BC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b3c0
	ctx.lr = 0x82543BC4;
	sub_8253B3C0(ctx, base);
loc_82543BC4:
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

__attribute__((alias("__imp__sub_82543BE0"))) PPC_WEAK_FUNC(sub_82543BE0);
PPC_FUNC_IMPL(__imp__sub_82543BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-1632(r1)
	ea = -1632 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8254cf98
	ctx.lr = 0x82543C04;
	sub_8254CF98(ctx, base);
	// addi r3,r31,13584
	ctx.r3.s64 = ctx.r31.s64 + 13584;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r9,r11,1536
	ctx.r9.s64 = ctx.r11.s64 + 1536;
loc_82543C14:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82543c34
	if (!ctx.cr0.eq) goto loc_82543C34;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82543c14
	if (!ctx.cr6.eq) goto loc_82543C14;
loc_82543C34:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82543c54
	if (ctx.cr0.eq) goto loc_82543C54;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// bl 0x826df680
	ctx.lr = 0x82543C48;
	sub_826DF680(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8254d2c0
	ctx.lr = 0x82543C54;
	sub_8254D2C0(ctx, base);
loc_82543C54:
	// addi r1,r1,1632
	ctx.r1.s64 = ctx.r1.s64 + 1632;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543C68"))) PPC_WEAK_FUNC(sub_82543C68);
PPC_FUNC_IMPL(__imp__sub_82543C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-1632(r1)
	ea = -1632 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8254d138
	ctx.lr = 0x82543C8C;
	sub_8254D138(ctx, base);
	// addi r3,r31,13584
	ctx.r3.s64 = ctx.r31.s64 + 13584;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r9,r11,1536
	ctx.r9.s64 = ctx.r11.s64 + 1536;
loc_82543C9C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82543cbc
	if (!ctx.cr0.eq) goto loc_82543CBC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82543c9c
	if (!ctx.cr6.eq) goto loc_82543C9C;
loc_82543CBC:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82543cdc
	if (ctx.cr0.eq) goto loc_82543CDC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// bl 0x826df680
	ctx.lr = 0x82543CD0;
	sub_826DF680(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8254d3a0
	ctx.lr = 0x82543CDC;
	sub_8254D3A0(ctx, base);
loc_82543CDC:
	// addi r1,r1,1632
	ctx.r1.s64 = ctx.r1.s64 + 1632;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543CF0"))) PPC_WEAK_FUNC(sub_82543CF0);
PPC_FUNC_IMPL(__imp__sub_82543CF0) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,9
	ctx.r10.s64 = ctx.r4.s64 + 9;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r11,r4,634
	ctx.r11.s64 = ctx.r4.s64 + 634;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543D40"))) PPC_WEAK_FUNC(sub_82543D40);
PPC_FUNC_IMPL(__imp__sub_82543D40) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82543dd8
	if (!ctx.cr6.eq) goto loc_82543DD8;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82543d74
	if (!ctx.cr6.gt) goto loc_82543D74;
	// bl 0x8253e060
	ctx.lr = 0x82543D70;
	sub_8253E060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82543D74:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// ori r10,r10,24576
	ctx.r10.u64 = ctx.r10.u64 | 24576;
	// ori r9,r9,25088
	ctx.r9.u64 = ctx.r9.u64 | 25088;
	// li r8,-1
	ctx.r8.s64 = -1;
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// li r5,0
	ctx.r5.s64 = 0;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r7,r7,24832
	ctx.r7.u64 = ctx.r7.u64 | 24832;
	// ori r6,r10,25344
	ctx.r6.u64 = ctx.r10.u64 | 25344;
	// lwz r10,12432(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12432);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// lwz r10,12436(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12436);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// stwu r5,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r11.u32 = ea;
	// lwz r10,10788(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10788);
	// rlwinm r4,r10,20,30,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x3;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x8254dd40
	ctx.lr = 0x82543DD8;
	sub_8254DD40(ctx, base);
loc_82543DD8:
	// lwz r11,10312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10312);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,10308(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10308);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,17,0,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r7,r9,17
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 17;
	// rlwinm r10,r10,17,0,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFFFE0000;
	// srawi r6,r11,17
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 17;
	// srawi r5,r8,17
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 17;
	// srawi r4,r10,17
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 17;
	// bl 0x82541120
	ctx.lr = 0x82543E08;
	sub_82541120(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
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

__attribute__((alias("__imp__sub_82543E38"))) PPC_WEAK_FUNC(sub_82543E38);
PPC_FUNC_IMPL(__imp__sub_82543E38) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,24(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// rlwinm. r11,r8,16,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82543e4c
	if (!ctx.cr0.eq) goto loc_82543E4C;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82543e64
	goto loc_82543E64;
loc_82543E4C:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lis r7,0
	ctx.r7.s64 = 0;
	// bne cr6,0x82543e60
	if (!ctx.cr6.eq) goto loc_82543E60;
	// ori r7,r7,32769
	ctx.r7.u64 = ctx.r7.u64 | 32769;
	// b 0x82543e64
	goto loc_82543E64;
loc_82543E60:
	// ori r7,r7,49155
	ctx.r7.u64 = ctx.r7.u64 | 49155;
loc_82543E64:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r7,10556(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10556, ctx.r7.u32);
	// li r12,1
	ctx.r12.s64 = 1;
	// stw r8,10240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10240, ctx.r8.u32);
	// addi r9,r11,-9796
	ctx.r9.s64 = ctx.r11.s64 + -9796;
	// rldicr r12,r12,38,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 38) & 0xFFFFFFFFFFFFFFFF;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r11,r3,12400
	ctx.r11.s64 = ctx.r3.s64 + 12400;
	// addi r4,r9,-9820
	ctx.r4.s64 = ctx.r9.s64 + -9820;
	// ld r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,36,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 36) & 0xFFFFFFFFFFFFFFFF;
	// std r9,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r9.u64);
	// ld r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 | ctx.r12.u64;
	// std r9,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r9.u64);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x825436f0
	sub_825436F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82543ED0"))) PPC_WEAK_FUNC(sub_82543ED0);
PPC_FUNC_IMPL(__imp__sub_82543ED0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r4,r3,12400
	ctx.r4.s64 = ctx.r3.s64 + 12400;
	// stw r11,11584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11584, ctx.r11.u32);
	// b 0x82543628
	sub_82543628(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82543EE0"))) PPC_WEAK_FUNC(sub_82543EE0);
PPC_FUNC_IMPL(__imp__sub_82543EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82543EE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,3042
	ctx.r11.s64 = ctx.r4.s64 + 3042;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stwx r5,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r5.u32);
	// beq cr6,0x82544028
	if (ctx.cr6.eq) goto loc_82544028;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq cr6,0x82543f14
	if (ctx.cr6.eq) goto loc_82543F14;
	// addi r9,r4,1
	ctx.r9.s64 = ctx.r4.s64 + 1;
loc_82543F14:
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lwz r3,28(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// li r7,1
	ctx.r7.s64 = 1;
	// ori r8,r11,282
	ctx.r8.u64 = ctx.r11.u64 | 282;
	// rldicr r7,r7,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r9,2561
	ctx.r9.s64 = ctx.r9.s64 + 2561;
	// addi r10,r4,2939
	ctx.r10.s64 = ctx.r4.s64 + 2939;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r3.u32);
	// clrldi r9,r11,56
	ctx.r9.u64 = ctx.r11.u64 & 0xFF;
	// srawi r11,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// srd r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r9.u8 & 0x7F));
	// or r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 | ctx.r3.u64;
	// stdx r9,r11,r31
	PPC_STORE_U64(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u64);
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwzx r11,r6,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stwx r9,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r9.u32);
	// beq 0x82544028
	if (ctx.cr0.eq) goto loc_82544028;
	// lwz r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r10,r6,16,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x82543f98
	if (ctx.cr6.eq) goto loc_82543F98;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x82543f98
	if (ctx.cr6.eq) goto loc_82543F98;
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// beq cr6,0x82543f98
	if (ctx.cr6.eq) goto loc_82543F98;
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// bne cr6,0x82544028
	if (!ctx.cr6.eq) goto loc_82544028;
loc_82543F98:
	// rlwinm r10,r6,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 13) & 0x1;
	// xor. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82544028
	if (ctx.cr0.eq) goto loc_82544028;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// beq cr6,0x82543fb4
	if (ctx.cr6.eq) goto loc_82543FB4;
	// addi r6,r4,1
	ctx.r6.s64 = ctx.r4.s64 + 1;
loc_82543FB4:
	// addi r3,r6,2561
	ctx.r3.s64 = ctx.r6.s64 + 2561;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// clrldi r29,r8,56
	ctx.r29.u64 = ctx.r8.u64 & 0xFF;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// rlwinm r7,r10,16,28,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xF;
	// rlwinm r30,r10,0,16,11
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// srawi r10,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 16;
	// rlwinm r8,r7,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-3
	ctx.r8.s64 = ctx.r8.s64 + -3;
	// and r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 & ctx.r9.u64;
	// srd r3,r3,r29
	ctx.r3.u64 = ctx.r29.u8 & 0x40 ? 0 : (ctx.r3.u64 >> (ctx.r29.u8 & 0x7F));
	// addi r29,r7,3
	ctx.r29.s64 = ctx.r7.s64 + 3;
	// rlwinm r7,r29,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// andc r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r9.u64;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// or r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r10,r10,16,12,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xF0000;
	// or r8,r30,r10
	ctx.r8.u64 = ctx.r30.u64 | ctx.r10.u64;
	// stw r8,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// lwzx r11,r6,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// rlwinm r11,r11,0,16,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stwx r11,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r11.u32);
	// ldx r11,r9,r31
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r31.u32);
	// or r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 | ctx.r11.u64;
	// stdx r11,r9,r31
	PPC_STORE_U64(ctx.r9.u32 + ctx.r31.u32, ctx.r11.u64);
loc_82544028:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82544178
	if (!ctx.cr6.eq) goto loc_82544178;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82544040
	if (ctx.cr6.eq) goto loc_82544040;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x8254404c
	goto loc_8254404C;
loc_82544040:
	// lwz r4,12184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12184);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82544054
	if (ctx.cr0.eq) goto loc_82544054;
loc_8254404C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82543e38
	ctx.lr = 0x82544054;
	sub_82543E38(ctx, base);
loc_82544054:
	// lwz r11,12440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12440);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82544140
	if (!ctx.cr6.eq) goto loc_82544140;
	// lbz r10,10808(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10808);
	// rlwinm. r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82544074
	if (ctx.cr0.eq) goto loc_82544074;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82544104
	goto loc_82544104;
loc_82544074:
	// rlwinm. r11,r10,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825440fc
	if (ctx.cr0.eq) goto loc_825440FC;
	// lwz r11,12168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12168);
	// lwz r9,12452(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12452);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82544094
	if (ctx.cr6.eq) goto loc_82544094;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825440fc
	if (!ctx.cr6.eq) goto loc_825440FC;
loc_82544094:
	// lwz r11,12172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12172);
	// lwz r9,12456(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12456);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825440ac
	if (ctx.cr6.eq) goto loc_825440AC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825440fc
	if (!ctx.cr6.eq) goto loc_825440FC;
loc_825440AC:
	// lwz r11,12176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12176);
	// lwz r9,12460(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12460);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825440c4
	if (ctx.cr6.eq) goto loc_825440C4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825440fc
	if (!ctx.cr6.eq) goto loc_825440FC;
loc_825440C4:
	// lwz r11,12180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12180);
	// lwz r9,12464(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12464);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825440dc
	if (ctx.cr6.eq) goto loc_825440DC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825440fc
	if (!ctx.cr6.eq) goto loc_825440FC;
loc_825440DC:
	// lwz r11,12184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12184);
	// lwz r9,12468(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12468);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825440f4
	if (ctx.cr6.eq) goto loc_825440F4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825440fc
	if (!ctx.cr6.eq) goto loc_825440FC;
loc_825440F4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82544100
	goto loc_82544100;
loc_825440FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82544100:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82544104:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82544140
	if (ctx.cr0.eq) goto loc_82544140;
	// rlwinm. r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82544140
	if (!ctx.cr0.eq) goto loc_82544140;
	// lbz r11,10811(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10811);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82544138
	if (!ctx.cr0.eq) goto loc_82544138;
	// lbz r11,11849(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11849);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82544140
	if (!ctx.cr0.eq) goto loc_82544140;
	// lbz r11,11915(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11915);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82544140
	if (!ctx.cr0.eq) goto loc_82544140;
loc_82544138:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82544144
	goto loc_82544144;
loc_82544140:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82544144:
	// lbz r9,10808(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10808);
	// lwz r11,11588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11588);
	// rlwimi r9,r10,1,30,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x2) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFD);
	// stb r9,10808(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10808, ctx.r9.u8);
	// lwz r10,12168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12168);
	// stw r11,11588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11588, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82544168
	if (!ctx.cr6.eq) goto loc_82544168;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82544168:
	// lwz r10,10332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10332);
	// rlwimi r11,r10,0,0,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// stw r11,10332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10332, ctx.r11.u32);
	// b 0x825441fc
	goto loc_825441FC;
loc_82544178:
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bne cr6,0x825441a4
	if (!ctx.cr6.eq) goto loc_825441A4;
	// lwz r11,12172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,11592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11592);
	// stw r11,11592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11592, ctx.r11.u32);
	// bne cr6,0x82544198
	if (!ctx.cr6.eq) goto loc_82544198;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82544198:
	// lwz r10,10332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10332);
	// rlwimi r10,r11,4,24,27
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 4) & 0xF0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF0F);
	// b 0x825441f8
	goto loc_825441F8;
loc_825441A4:
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bne cr6,0x825441d0
	if (!ctx.cr6.eq) goto loc_825441D0;
	// lwz r11,12176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,11596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11596);
	// stw r11,11596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11596, ctx.r11.u32);
	// bne cr6,0x825441c4
	if (!ctx.cr6.eq) goto loc_825441C4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825441C4:
	// lwz r10,10332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10332);
	// rlwimi r10,r11,8,20,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF0FF);
	// b 0x825441f8
	goto loc_825441F8;
loc_825441D0:
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bne cr6,0x82544208
	if (!ctx.cr6.eq) goto loc_82544208;
	// lwz r11,12180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,11600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11600);
	// stw r11,11600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11600, ctx.r11.u32);
	// bne cr6,0x825441f0
	if (!ctx.cr6.eq) goto loc_825441F0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825441F0:
	// lwz r10,10332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10332);
	// rlwimi r10,r11,12,16,19
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0xF000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0FFF);
loc_825441F8:
	// stw r10,10332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10332, ctx.r10.u32);
loc_825441FC:
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
loc_82544208:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82544210"))) PPC_WEAK_FUNC(sub_82544210);
PPC_FUNC_IMPL(__imp__sub_82544210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82544218;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// rldicr r29,r11,49,63
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u64, 49) & 0xFFFFFFFFFFFFFFFF;
	// stw r30,12184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12184, ctx.r30.u32);
	// beq cr6,0x82544358
	if (ctx.cr6.eq) goto loc_82544358;
	// lwz r11,12168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82544248
	if (!ctx.cr6.eq) goto loc_82544248;
	// bl 0x82543e38
	ctx.lr = 0x82544248;
	sub_82543E38(ctx, base);
loc_82544248:
	// lbz r10,10811(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10811);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,10248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10248, ctx.r11.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,10432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10432, ctx.r11.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r10,10810(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10810);
	// rlwimi r10,r11,5,26,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 5) & 0x20) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFDF);
	// stb r10,10810(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10810, ctx.r10.u8);
	// beq 0x82544330
	if (ctx.cr0.eq) goto loc_82544330;
	// lbz r11,10808(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10808);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82544288
	if (ctx.cr0.eq) goto loc_82544288;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82544318
	goto loc_82544318;
loc_82544288:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82544310
	if (ctx.cr0.eq) goto loc_82544310;
	// lwz r11,12168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12168);
	// lwz r10,12452(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12452);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825442a8
	if (ctx.cr6.eq) goto loc_825442A8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82544310
	if (!ctx.cr6.eq) goto loc_82544310;
loc_825442A8:
	// lwz r11,12172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12172);
	// lwz r10,12456(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12456);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825442c0
	if (ctx.cr6.eq) goto loc_825442C0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82544310
	if (!ctx.cr6.eq) goto loc_82544310;
loc_825442C0:
	// lwz r11,12176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12176);
	// lwz r10,12460(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12460);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825442d8
	if (ctx.cr6.eq) goto loc_825442D8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82544310
	if (!ctx.cr6.eq) goto loc_82544310;
loc_825442D8:
	// lwz r11,12180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12180);
	// lwz r10,12464(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12464);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825442f0
	if (ctx.cr6.eq) goto loc_825442F0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82544310
	if (!ctx.cr6.eq) goto loc_82544310;
loc_825442F0:
	// lwz r11,12184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12184);
	// lwz r10,12468(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12468);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82544308
	if (ctx.cr6.eq) goto loc_82544308;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82544310
	if (!ctx.cr6.eq) goto loc_82544310;
loc_82544308:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82544314
	goto loc_82544314;
loc_82544310:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82544314:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82544318:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82544330
	if (ctx.cr0.eq) goto loc_82544330;
	// lwz r10,10240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10240);
	// lwz r11,12896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12896);
	// rlwimi r10,r11,18,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 18) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// stw r10,10240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10240, ctx.r10.u32);
loc_82544330:
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// rldicr r12,r12,36,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 36) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// or r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 | ctx.r29.u64;
	// b 0x82544378
	goto loc_82544378;
loc_82544358:
	// lbz r10,10810(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10810);
	// lwz r11,10432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10432);
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r11,10432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10432, ctx.r11.u32);
	// andi. r10,r10,223
	ctx.r10.u64 = ctx.r10.u64 & 223;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r10,10810(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10810, ctx.r10.u8);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
loc_82544378:
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// lwz r11,12440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12440);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82544468
	if (!ctx.cr6.eq) goto loc_82544468;
	// lbz r10,10808(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10808);
	// rlwinm. r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254439c
	if (ctx.cr0.eq) goto loc_8254439C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8254442c
	goto loc_8254442C;
loc_8254439C:
	// rlwinm. r11,r10,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82544424
	if (ctx.cr0.eq) goto loc_82544424;
	// lwz r11,12168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12168);
	// lwz r9,12452(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12452);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825443bc
	if (ctx.cr6.eq) goto loc_825443BC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82544424
	if (!ctx.cr6.eq) goto loc_82544424;
loc_825443BC:
	// lwz r11,12172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12172);
	// lwz r9,12456(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12456);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825443d4
	if (ctx.cr6.eq) goto loc_825443D4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82544424
	if (!ctx.cr6.eq) goto loc_82544424;
loc_825443D4:
	// lwz r11,12176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12176);
	// lwz r9,12460(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12460);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825443ec
	if (ctx.cr6.eq) goto loc_825443EC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82544424
	if (!ctx.cr6.eq) goto loc_82544424;
loc_825443EC:
	// lwz r11,12180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12180);
	// lwz r9,12464(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12464);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82544404
	if (ctx.cr6.eq) goto loc_82544404;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82544424
	if (!ctx.cr6.eq) goto loc_82544424;
loc_82544404:
	// lwz r11,12184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12184);
	// lwz r9,12468(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12468);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8254441c
	if (ctx.cr6.eq) goto loc_8254441C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82544424
	if (!ctx.cr6.eq) goto loc_82544424;
loc_8254441C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82544428
	goto loc_82544428;
loc_82544424:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82544428:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8254442C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82544468
	if (ctx.cr0.eq) goto loc_82544468;
	// rlwinm. r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82544468
	if (!ctx.cr0.eq) goto loc_82544468;
	// lbz r11,10811(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10811);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82544460
	if (!ctx.cr0.eq) goto loc_82544460;
	// lbz r11,11849(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11849);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82544468
	if (!ctx.cr0.eq) goto loc_82544468;
	// lbz r11,11915(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11915);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82544468
	if (!ctx.cr0.eq) goto loc_82544468;
loc_82544460:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8254446c
	goto loc_8254446C;
loc_82544468:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8254446C:
	// lbz r9,10808(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10808);
	// lwz r11,11604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11604);
	// rlwimi r9,r10,1,30,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x2) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFD);
	// stb r9,10808(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10808, ctx.r9.u8);
	// lwz r10,12184(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12184);
	// stw r11,11604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11604, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82544490
	if (!ctx.cr6.eq) goto loc_82544490;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82544490:
	// lwz r10,10420(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10420);
	// rlwimi r10,r11,1,30,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0x2) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r10,10420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10420, ctx.r10.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// or r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 | ctx.r29.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// lwz r11,11608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11608);
	// lwz r10,12184(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12184);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,11608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11608, ctx.r11.u32);
	// bne cr6,0x825444c8
	if (!ctx.cr6.eq) goto loc_825444C8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825444C8:
	// lwz r10,10420(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10420);
	// rlwimi r10,r11,0,31,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x1) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFE);
	// stw r10,10420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10420, ctx.r10.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// or r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 | ctx.r29.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825444F0"))) PPC_WEAK_FUNC(sub_825444F0);
PPC_FUNC_IMPL(__imp__sub_825444F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82543ee0
	sub_82543EE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825444F8"))) PPC_WEAK_FUNC(sub_825444F8);
PPC_FUNC_IMPL(__imp__sub_825444F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,32712
	ctx.r11.s64 = 2143813632;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r10,12820(r11)
	PPC_MM_STORE_U32(ctx.r11.u32 + 12820, ctx.r10.u32);
	// eieio 
	// li r10,2048
	ctx.r10.s64 = 2048;
	// stw r10,13320(r11)
	PPC_MM_STORE_U32(ctx.r11.u32 + 13320, ctx.r10.u32);
	// eieio 
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82544518"))) PPC_WEAK_FUNC(sub_82544518);
PPC_FUNC_IMPL(__imp__sub_82544518) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82aea49c
	ctx.lr = 0x8254452C;
	__imp__ExRegisterTitleTerminateNotification(ctx, base);
	// bl 0x82aea48c
	ctx.lr = 0x82544530;
	__imp__VdShutdownEngines(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82544540"))) PPC_WEAK_FUNC(sub_82544540);
PPC_FUNC_IMPL(__imp__sub_82544540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b8
	ctx.lr = 0x82544548;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r29,r11,-26520
	ctx.r29.s64 = ctx.r11.s64 + -26520;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lwz r25,13220(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13220);
loc_82544564:
	// rlwinm r11,r30,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r9,r30,r31
	ctx.r9.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r8,r11,14
	ctx.r8.s64 = ctx.r11.s64 + 14;
	// addi r11,r11,131
	ctx.r11.s64 = ctx.r11.s64 + 131;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,56(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825445A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmplwi cr6,r30,388
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 388, ctx.xer);
	// blt cr6,0x82544564
	if (ctx.cr6.lt) goto loc_82544564;
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// addi r27,r31,1024
	ctx.r27.s64 = ctx.r31.s64 + 1024;
	// addi r26,r11,-25352
	ctx.r26.s64 = ctx.r11.s64 + -25352;
loc_825445C0:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// addi r29,r26,8
	ctx.r29.s64 = ctx.r26.s64 + 8;
loc_825445C8:
	// rlwinm r11,r30,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r10,-4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// add r9,r30,r31
	ctx.r9.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r8,r11,111
	ctx.r8.s64 = ctx.r11.s64 + 111;
	// addi r11,r11,228
	ctx.r11.s64 = ctx.r11.s64 + 228;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r10,-8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,444(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 444);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82544608;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmplwi cr6,r30,80
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 80, ctx.xer);
	// blt cr6,0x825445c8
	if (ctx.cr6.lt) goto loc_825445C8;
	// addi r11,r28,20
	ctx.r11.s64 = ctx.r28.s64 + 20;
	// li r10,1
	ctx.r10.s64 = 1;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rldicr r10,r10,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srd r6,r10,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r11.u8 & 0x7F));
	// bl 0x8253ac40
	ctx.lr = 0x8254463C;
	sub_8253AC40(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,24
	ctx.r27.s64 = ctx.r27.s64 + 24;
	// cmplwi cr6,r28,26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 26, ctx.xer);
	// blt cr6,0x825445c0
	if (ctx.cr6.lt) goto loc_825445C0;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,11920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11920, ctx.r11.u32);
	// stw r10,11924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11924, ctx.r10.u32);
	// bl 0x8254dd40
	ctx.lr = 0x82544668;
	sub_8254DD40(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825487d0
	ctx.lr = 0x82544674;
	sub_825487D0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82542c18
	ctx.lr = 0x82544680;
	sub_82542C18(ctx, base);
	// lbz r10,10808(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10808);
	// stw r24,12440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12440, ctx.r24.u32);
	// rlwinm. r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82544698
	if (ctx.cr0.eq) goto loc_82544698;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82544728
	goto loc_82544728;
loc_82544698:
	// rlwinm. r11,r10,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82544720
	if (ctx.cr0.eq) goto loc_82544720;
	// lwz r11,12168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12168);
	// lwz r9,12452(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12452);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825446b8
	if (ctx.cr6.eq) goto loc_825446B8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82544720
	if (!ctx.cr6.eq) goto loc_82544720;
loc_825446B8:
	// lwz r11,12172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12172);
	// lwz r9,12456(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12456);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825446d0
	if (ctx.cr6.eq) goto loc_825446D0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82544720
	if (!ctx.cr6.eq) goto loc_82544720;
loc_825446D0:
	// lwz r11,12176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12176);
	// lwz r9,12460(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12460);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825446e8
	if (ctx.cr6.eq) goto loc_825446E8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82544720
	if (!ctx.cr6.eq) goto loc_82544720;
loc_825446E8:
	// lwz r11,12180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12180);
	// lwz r9,12464(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12464);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82544700
	if (ctx.cr6.eq) goto loc_82544700;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82544720
	if (!ctx.cr6.eq) goto loc_82544720;
loc_82544700:
	// lwz r11,12184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12184);
	// lwz r9,12468(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12468);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82544718
	if (ctx.cr6.eq) goto loc_82544718;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82544720
	if (!ctx.cr6.eq) goto loc_82544720;
loc_82544718:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82544724
	goto loc_82544724;
loc_82544720:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82544724:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82544728:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82544764
	if (ctx.cr0.eq) goto loc_82544764;
	// rlwinm. r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82544764
	if (!ctx.cr0.eq) goto loc_82544764;
	// lbz r11,10811(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10811);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254475c
	if (!ctx.cr0.eq) goto loc_8254475C;
	// lbz r11,11849(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11849);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82544764
	if (!ctx.cr0.eq) goto loc_82544764;
	// lbz r11,11915(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11915);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82544764
	if (!ctx.cr0.eq) goto loc_82544764;
loc_8254475C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82544768
	goto loc_82544768;
loc_82544764:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82544768:
	// rlwimi r10,r11,1,30,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0x2) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r24,12436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12436, ctx.r24.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r24,10800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10800, ctx.r24.u32);
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// stw r24,10804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10804, ctx.r24.u32);
	// stw r9,12432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12432, ctx.r9.u32);
	// stb r11,10808(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10808, ctx.r11.u8);
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825447a4
	if (!ctx.cr0.eq) goto loc_825447A4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82547278
	ctx.lr = 0x825447A4;
	sub_82547278(ctx, base);
loc_825447A4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825447B0"))) PPC_WEAK_FUNC(sub_825447B0);
PPC_FUNC_IMPL(__imp__sub_825447B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b8
	ctx.lr = 0x825447B8;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r30,64(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r27,4(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi r30,0
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r25,16(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r24,40(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r26,8(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bne 0x825447ec
	if (!ctx.cr0.eq) goto loc_825447EC;
	// clrlwi r11,r26,26
	ctx.r11.u64 = ctx.r26.u32 & 0x3F;
	// b 0x825447fc
	goto loc_825447FC;
loc_825447EC:
	// lis r11,10280
	ctx.r11.s64 = 673710080;
	// ori r11,r11,390
	ctx.r11.u64 = ctx.r11.u64 | 390;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82544804
	if (!ctx.cr6.eq) goto loc_82544804;
loc_825447FC:
	// lis r30,10280
	ctx.r30.s64 = 673710080;
	// b 0x82544818
	goto loc_82544818;
loc_82544804:
	// lis r11,6184
	ctx.r11.s64 = 405274624;
	// ori r11,r11,390
	ctx.r11.u64 = ctx.r11.u64 | 390;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82544820
	if (!ctx.cr6.eq) goto loc_82544820;
	// lis r30,6184
	ctx.r30.s64 = 405274624;
loc_82544818:
	// ori r30,r30,262
	ctx.r30.u64 = ctx.r30.u64 | 262;
	// b 0x82544850
	goto loc_82544850;
loc_82544820:
	// lis r11,10280
	ctx.r11.s64 = 673710080;
	// ori r11,r11,438
	ctx.r11.u64 = ctx.r11.u64 | 438;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82544838
	if (!ctx.cr6.eq) goto loc_82544838;
	// lis r30,10280
	ctx.r30.s64 = 673710080;
	// b 0x8254484c
	goto loc_8254484C;
loc_82544838:
	// lis r11,6184
	ctx.r11.s64 = 405274624;
	// ori r11,r11,438
	ctx.r11.u64 = ctx.r11.u64 | 438;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82544850
	if (!ctx.cr6.eq) goto loc_82544850;
	// lis r30,6184
	ctx.r30.s64 = 405274624;
loc_8254484C:
	// ori r30,r30,310
	ctx.r30.u64 = ctx.r30.u64 | 310;
loc_82544850:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82aea4ac
	ctx.lr = 0x82544858;
	__imp__VdQueryVideoMode(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,19964(r29)
	PPC_STORE_U32(ctx.r29.u32 + 19964, ctx.r11.u32);
	// stw r10,19968(r29)
	PPC_STORE_U32(ctx.r29.u32 + 19968, ctx.r10.u32);
	// stw r11,19972(r29)
	PPC_STORE_U32(ctx.r29.u32 + 19972, ctx.r11.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r11,19976(r29)
	PPC_STORE_U32(ctx.r29.u32 + 19976, ctx.r11.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825448b8
	if (!ctx.cr6.eq) goto loc_825448B8;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8253a8d8
	ctx.lr = 0x825448A4;
	sub_8253A8D8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x825448b4
	if (!ctx.cr0.eq) goto loc_825448B4;
loc_825448AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82544968
	goto loc_82544968;
loc_825448B4:
	// stw r3,13408(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13408, ctx.r3.u32);
loc_825448B8:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825448f4
	if (!ctx.cr6.eq) goto loc_825448F4;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8253a9f8
	ctx.lr = 0x825448DC;
	sub_8253A9F8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x825448ac
	if (ctx.cr0.eq) goto loc_825448AC;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r5,13412(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13412, ctx.r5.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82543ee0
	ctx.lr = 0x825448F4;
	sub_82543EE0(ctx, base);
loc_825448F4:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8254492c
	if (ctx.cr6.eq) goto loc_8254492C;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8253a9f8
	ctx.lr = 0x82544918;
	sub_8253A9F8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x825448ac
	if (ctx.cr0.eq) goto loc_825448AC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r4,13404(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13404, ctx.r4.u32);
	// bl 0x82544210
	ctx.lr = 0x8254492C;
	sub_82544210(ctx, base);
loc_8254492C:
	// addi r3,r29,13168
	ctx.r3.s64 = ctx.r29.s64 + 13168;
	// li r5,124
	ctx.r5.s64 = 124;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826df680
	ctx.lr = 0x8254493C;
	sub_826DF680(ctx, base);
	// lis r11,32
	ctx.r11.s64 = 2097152;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// ori r11,r11,1285
	ctx.r11.u64 = ctx.r11.u64 | 1285;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwimi r30,r11,19,0,25
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r11.u32, 19) & 0xFFFFFFC0) | (ctx.r30.u64 & 0xFFFFFFFF0000003F);
	// stw r30,13232(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13232, ctx.r30.u32);
	// bl 0x82551ad0
	ctx.lr = 0x82544958;
	sub_82551AD0(ctx, base);
	// lbz r11,10809(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 10809);
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,10809(r29)
	PPC_STORE_U8(ctx.r29.u32 + 10809, ctx.r11.u8);
loc_82544968:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82544970"))) PPC_WEAK_FUNC(sub_82544970);
PPC_FUNC_IMPL(__imp__sub_82544970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82544978;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82552710
	ctx.lr = 0x82544984;
	sub_82552710(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825449c8
	if (ctx.cr6.eq) goto loc_825449C8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82544210
	ctx.lr = 0x825449A0;
	sub_82544210(ctx, base);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_825449A4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82543ee0
	ctx.lr = 0x825449B4;
	sub_82543EE0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x825449a4
	if (ctx.cr6.lt) goto loc_825449A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253e2c8
	ctx.lr = 0x825449C8;
	sub_8253E2C8(ctx, base);
loc_825449C8:
	// lwz r3,13408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13408);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825449dc
	if (ctx.cr0.eq) goto loc_825449DC;
	// bl 0x8253b438
	ctx.lr = 0x825449D8;
	sub_8253B438(ctx, base);
	// stw r29,13408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13408, ctx.r29.u32);
loc_825449DC:
	// lwz r3,13412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13412);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825449f0
	if (ctx.cr0.eq) goto loc_825449F0;
	// bl 0x8253b438
	ctx.lr = 0x825449EC;
	sub_8253B438(ctx, base);
	// stw r29,13412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13412, ctx.r29.u32);
loc_825449F0:
	// lwz r3,13404(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13404);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82544a04
	if (ctx.cr0.eq) goto loc_82544A04;
	// bl 0x8253b438
	ctx.lr = 0x82544A00;
	sub_8253B438(ctx, base);
	// stw r29,13404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13404, ctx.r29.u32);
loc_82544A04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82544A10"))) PPC_WEAK_FUNC(sub_82544A10);
PPC_FUNC_IMPL(__imp__sub_82544A10) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82544a54
	if (ctx.cr6.eq) goto loc_82544A54;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82544a10
	ctx.lr = 0x82544A34;
	sub_82544A10(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82537f08
	ctx.lr = 0x82544A48;
	sub_82537F08(ctx, base);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82537f08
	ctx.lr = 0x82544A54;
	sub_82537F08(ctx, base);
loc_82544A54:
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

__attribute__((alias("__imp__sub_82544A68"))) PPC_WEAK_FUNC(sub_82544A68);
PPC_FUNC_IMPL(__imp__sub_82544A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82544A70;
	__savegprlr_29(ctx, base);
	// stwu r1,-1744(r1)
	ea = -1744 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82544b18
	if (ctx.cr6.eq) goto loc_82544B18;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r30,0
	ctx.r30.s64 = 0;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x82544ac0
	if (ctx.cr6.eq) goto loc_82544AC0;
	// cmplwi cr6,r11,54
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 54, ctx.xer);
	// beq cr6,0x82544ac0
	if (ctx.cr6.eq) goto loc_82544AC0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8254d490
	ctx.lr = 0x82544AAC;
	sub_8254D490(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82543be0
	ctx.lr = 0x82544ABC;
	sub_82543BE0(ctx, base);
	// b 0x82544ae0
	goto loc_82544AE0;
loc_82544AC0:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8254d4e8
	ctx.lr = 0x82544ACC;
	sub_8254D4E8(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lis r30,2048
	ctx.r30.s64 = 134217728;
	// bl 0x82543c68
	ctx.lr = 0x82544AE0;
	sub_82543C68(ctx, base);
loc_82544AE0:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r10,r11,28,2,3
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 28) & 0x30000000) | (ctx.r10.u64 & 0xFFFFFFFFCFFFFFFF);
	// cmplwi cr6,r9,720
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 720, ctx.xer);
	// or r3,r10,r30
	ctx.r3.u64 = ctx.r10.u64 | ctx.r30.u64;
	// bne cr6,0x82544b14
	if (!ctx.cr6.eq) goto loc_82544B14;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,480
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 480, ctx.xer);
	// beq cr6,0x82544b10
	if (ctx.cr6.eq) goto loc_82544B10;
	// cmplwi cr6,r11,576
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 576, ctx.xer);
	// bne cr6,0x82544b14
	if (!ctx.cr6.eq) goto loc_82544B14;
loc_82544B10:
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
loc_82544B14:
	// bl 0x82aea4cc
	ctx.lr = 0x82544B18;
	__imp__VdSetDisplayMode(ctx, base);
loc_82544B18:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82aea4bc
	ctx.lr = 0x82544B20;
	__imp__VdGetCurrentDisplayInformation(ctx, base);
	// lhz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 152);
	// lhz r10,154(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 154);
	// lhz r9,166(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 166);
	// lbz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// stw r11,19964(r29)
	PPC_STORE_U32(ctx.r29.u32 + 19964, ctx.r11.u32);
	// stw r10,19968(r29)
	PPC_STORE_U32(ctx.r29.u32 + 19968, ctx.r10.u32);
	// stw r9,19972(r29)
	PPC_STORE_U32(ctx.r29.u32 + 19972, ctx.r9.u32);
	// stw r8,19976(r29)
	PPC_STORE_U32(ctx.r29.u32 + 19976, ctx.r8.u32);
	// addi r1,r1,1744
	ctx.r1.s64 = ctx.r1.s64 + 1744;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82544B48"))) PPC_WEAK_FUNC(sub_82544B48);
PPC_FUNC_IMPL(__imp__sub_82544B48) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,17656
	ctx.r4.s64 = ctx.r11.s64 + 17656;
	// lis r3,3529
	ctx.r3.s64 = 231276544;
	// bl 0x82aea4ec
	ctx.lr = 0x82544B78;
	__imp__VdInitializeEngines(ctx, base);
	// bl 0x82aea48c
	ctx.lr = 0x82544B7C;
	__imp__VdShutdownEngines(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r7,r11,2456
	ctx.r7.s64 = ctx.r11.s64 + 2456;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r3,3529
	ctx.r3.s64 = 231276544;
	// addi r6,r11,1304
	ctx.r6.s64 = ctx.r11.s64 + 1304;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r4,r11,17656
	ctx.r4.s64 = ctx.r11.s64 + 17656;
	// bl 0x82aea4ec
	ctx.lr = 0x82544BA0;
	__imp__VdInitializeEngines(ctx, base);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-25112
	ctx.r3.s64 = ctx.r11.s64 + -25112;
	// bl 0x82aea49c
	ctx.lr = 0x82544BB0;
	__imp__ExRegisterTitleTerminateNotification(ctx, base);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-12352
	ctx.r3.s64 = ctx.r11.s64 + -12352;
	// bl 0x82aea4dc
	ctx.lr = 0x82544BC0;
	__imp__VdSetGraphicsInterruptCallback(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_82544BD8"))) PPC_WEAK_FUNC(sub_82544BD8);
PPC_FUNC_IMPL(__imp__sub_82544BD8) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// ld r11,-26976(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -26976);
	// std r11,10752(r31)
	PPC_STORE_U64(ctx.r31.u32 + 10752, ctx.r11.u64);
	// bl 0x826fc3b8
	ctx.lr = 0x82544C04;
	sub_826FC3B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r4,-19072
	ctx.r4.s64 = -1249902592;
	// li r3,4800
	ctx.r3.s64 = 4800;
	// stw r11,10760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10760, ctx.r11.u32);
	// stw r10,10764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10764, ctx.r10.u32);
	// bl 0x82537e70
	ctx.lr = 0x82544C20;
	sub_82537E70(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// stw r3,15152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15152, ctx.r3.u32);
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82544C48"))) PPC_WEAK_FUNC(sub_82544C48);
PPC_FUNC_IMPL(__imp__sub_82544C48) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82544bd8
	ctx.lr = 0x82544C68;
	sub_82544BD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82544c78
	if (!ctx.cr0.eq) goto loc_82544C78;
loc_82544C70:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82544e38
	goto loc_82544E38;
loc_82544C78:
	// addi r3,r31,13524
	ctx.r3.s64 = ctx.r31.s64 + 13524;
	// bl 0x82aea1fc
	ctx.lr = 0x82544C80;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// addi r3,r31,13552
	ctx.r3.s64 = ctx.r31.s64 + 13552;
	// bl 0x82aea1fc
	ctx.lr = 0x82544C88;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lbz r11,10810(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10810);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,10810(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10810, ctx.r11.u8);
	// bl 0x82544b48
	ctx.lr = 0x82544CA0;
	sub_82544B48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82544c70
	if (ctx.cr0.eq) goto loc_82544C70;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r31,15140
	ctx.r5.s64 = ctx.r31.s64 + 15140;
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r11,2016(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2016);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x82aea2fc
	ctx.lr = 0x82544CD4;
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82544c70
	if (ctx.cr0.lt) goto loc_82544C70;
	// addi r4,r30,72
	ctx.r4.s64 = ctx.r30.s64 + 72;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253e398
	ctx.lr = 0x82544CE8;
	sub_8253E398(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82544c70
	if (!ctx.cr0.eq) goto loc_82544C70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82554468
	ctx.lr = 0x82544CF8;
	sub_82554468(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82544c70
	if (ctx.cr0.eq) goto loc_82544C70;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,19984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19984, ctx.r11.u32);
	// stw r11,19988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19988, ctx.r11.u32);
	// bl 0x82553588
	ctx.lr = 0x82544D14;
	sub_82553588(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825447b0
	ctx.lr = 0x82544D20;
	sub_825447B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82544c70
	if (ctx.cr0.eq) goto loc_82544C70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82544540
	ctx.lr = 0x82544D30;
	sub_82544540(ctx, base);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82537f08
	ctx.lr = 0x82544D3C;
	sub_82537F08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2048);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82544d58
	if (ctx.cr0.eq) goto loc_82544D58;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x82544d5c
	goto loc_82544D5C;
loc_82544D58:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82544D5C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82544d90
	if (ctx.cr6.eq) goto loc_82544D90;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// ble cr6,0x82544d80
	if (!ctx.cr6.gt) goto loc_82544D80;
	// addi r10,r31,15144
	ctx.r10.s64 = ctx.r31.s64 + 15144;
	// addi r9,r31,15148
	ctx.r9.s64 = ctx.r31.s64 + 15148;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_82544D80:
	// addi r10,r31,20000
	ctx.r10.s64 = ctx.r31.s64 + 20000;
	// addi r9,r31,20004
	ctx.r9.s64 = ctx.r31.s64 + 20004;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
loc_82544D90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253e060
	ctx.lr = 0x82544D98;
	sub_8253E060(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826fc3c8
	ctx.lr = 0x82544DA0;
	sub_826FC3C8(ctx, base);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,14088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,20016(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20016, temp.u32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f0,20020(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20020, temp.u32);
	// bl 0x8254c8d0
	ctx.lr = 0x82544DCC;
	sub_8254C8D0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825534a0
	ctx.lr = 0x82544DDC;
	sub_825534A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82543d40
	ctx.lr = 0x82544DE8;
	sub_82543D40(ctx, base);
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// lwz r11,-22124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -22124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82544e0c
	if (!ctx.cr6.eq) goto loc_82544E0C;
	// bl 0x82aea4fc
	ctx.lr = 0x82544DFC;
	__imp__VdIsHSIOTrainingSucceeded(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,-22124(r30)
	PPC_STORE_U32(ctx.r30.u32 + -22124, ctx.r11.u32);
	// beq 0x82544e18
	if (ctx.cr0.eq) goto loc_82544E18;
loc_82544E0C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-6704
	ctx.r3.s64 = ctx.r11.s64 + -6704;
	// bl 0x82540a28
	ctx.lr = 0x82544E18;
	sub_82540A28(ctx, base);
loc_82544E18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82551bc0
	ctx.lr = 0x82544E20;
	sub_82551BC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82544e34
	if (!ctx.cr0.eq) goto loc_82544E34;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-6776
	ctx.r3.s64 = ctx.r11.s64 + -6776;
	// bl 0x82540a28
	ctx.lr = 0x82544E34;
	sub_82540A28(ctx, base);
loc_82544E34:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82544E38:
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

__attribute__((alias("__imp__sub_82544E50"))) PPC_WEAK_FUNC(sub_82544E50);
PPC_FUNC_IMPL(__imp__sub_82544E50) {
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
	// bl 0x82544bd8
	ctx.lr = 0x82544E68;
	sub_82544BD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82544e9c
	if (ctx.cr0.eq) goto loc_82544E9C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d1b8
	ctx.lr = 0x82544E78;
	sub_8253D1B8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,19984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19984, ctx.r11.u32);
	// stw r11,19988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19988, ctx.r11.u32);
	// stw r11,13516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13516, ctx.r11.u32);
	// bl 0x82553588
	ctx.lr = 0x82544E90;
	sub_82553588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82544540
	ctx.lr = 0x82544E98;
	sub_82544540(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82544E9C:
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

__attribute__((alias("__imp__sub_82544EB0"))) PPC_WEAK_FUNC(sub_82544EB0);
PPC_FUNC_IMPL(__imp__sub_82544EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82544EB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82544ed0
	if (ctx.cr6.eq) goto loc_82544ED0;
	// bl 0x8253eb88
	ctx.lr = 0x82544ED0;
	sub_8253EB88(ctx, base);
loc_82544ED0:
	// lbz r11,10808(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10808);
	// lis r28,-20096
	ctx.r28.s64 = -1317011456;
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82545014
	if (!ctx.cr0.eq) goto loc_82545014;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82544ef4
	if (ctx.cr6.eq) goto loc_82544EF4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253e2c8
	ctx.lr = 0x82544EF4;
	sub_8253E2C8(ctx, base);
loc_82544EF4:
	// addi r31,r30,20060
	ctx.r31.s64 = ctx.r30.s64 + 20060;
	// li r29,4
	ctx.r29.s64 = 4;
loc_82544EFC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82544f0c
	if (ctx.cr0.eq) goto loc_82544F0C;
	// bl 0x8254fb88
	ctx.lr = 0x82544F0C;
	sub_8254FB88(ctx, base);
loc_82544F0C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82544efc
	if (!ctx.cr0.eq) goto loc_82544EFC;
	// lwz r3,20076(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20076);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82544f2c
	if (ctx.cr0.eq) goto loc_82544F2C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82537f08
	ctx.lr = 0x82544F2C;
	sub_82537F08(ctx, base);
loc_82544F2C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825530d0
	ctx.lr = 0x82544F34;
	sub_825530D0(ctx, base);
	// lis r31,-32256
	ctx.r31.s64 = -2113929216;
	// lwz r11,2048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2048);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82544f60
	if (ctx.cr0.eq) goto loc_82544F60;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82544F5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,2048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2048);
loc_82544F60:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82544f80
	if (ctx.cr0.eq) goto loc_82544F80;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,48
	ctx.r3.s64 = 48;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82544F80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82544F80:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82aea46c
	ctx.lr = 0x82544F88;
	__imp__VdSetSystemCommandBufferGpuIdentifierAddress(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82544970
	ctx.lr = 0x82544F90;
	sub_82544970(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82553a50
	ctx.lr = 0x82544F98;
	sub_82553A50(ctx, base);
	// lwz r11,2048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2048);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82544fb4
	if (ctx.cr0.eq) goto loc_82544FB4;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x82544fb8
	goto loc_82544FB8;
loc_82544FB4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82544FB8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82544fdc
	if (ctx.cr6.eq) goto loc_82544FDC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// ble cr6,0x82544fd4
	if (!ctx.cr6.gt) goto loc_82544FD4;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_82544FD4:
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// stw r31,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
loc_82544FDC:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82aea4dc
	ctx.lr = 0x82544FE8;
	__imp__VdSetGraphicsInterruptCallback(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253e398
	ctx.lr = 0x82544FF4;
	sub_8253E398(ctx, base);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-25112
	ctx.r3.s64 = ctx.r11.s64 + -25112;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2016(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2016);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// bl 0x82aea49c
	ctx.lr = 0x82545010;
	__imp__ExRegisterTitleTerminateNotification(ctx, base);
	// bl 0x82aea48c
	ctx.lr = 0x82545014;
	__imp__VdShutdownEngines(ctx, base);
loc_82545014:
	// lwz r3,15152(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15152);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82545028
	if (ctx.cr0.eq) goto loc_82545028;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82537f08
	ctx.lr = 0x82545028;
	sub_82537F08(ctx, base);
loc_82545028:
	// lwz r3,19996(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 19996);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82545038
	if (ctx.cr0.eq) goto loc_82545038;
	// bl 0x82544a10
	ctx.lr = 0x82545038;
	sub_82544A10(ctx, base);
loc_82545038:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82545040"))) PPC_WEAK_FUNC(sub_82545040);
PPC_FUNC_IMPL(__imp__sub_82545040) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82545048;
	__savegprlr_27(ctx, base);
	// lis r6,44
	ctx.r6.s64 = 2883584;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r30,r6,33700
	ctx.r30.u64 = ctx.r6.u64 | 33700;
	// lis r6,24
	ctx.r6.s64 = 1572864;
	// andi. r7,r3,16398
	ctx.r7.u64 = ctx.r3.u64 & 16398;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ori r31,r6,10374
	ctx.r31.u64 = ctx.r6.u64 | 10374;
	// lis r6,42
	ctx.r6.s64 = 2752512;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r10,r4,52
	ctx.r10.s64 = ctx.r4.s64 + 52;
	// ori r6,r6,9145
	ctx.r6.u64 = ctx.r6.u64 | 9145;
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r7,10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 10, ctx.xer);
	// bgt cr6,0x82545280
	if (ctx.cr6.gt) goto loc_82545280;
	// beq cr6,0x825451d8
	if (ctx.cr6.eq) goto loc_825451D8;
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// beq cr6,0x825451c0
	if (ctx.cr6.eq) goto loc_825451C0;
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// beq cr6,0x825453f8
	if (ctx.cr6.eq) goto loc_825453F8;
	// cmplwi cr6,r7,6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 6, ctx.xer);
	// beq cr6,0x82545140
	if (ctx.cr6.eq) goto loc_82545140;
	// cmplwi cr6,r7,8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 8, ctx.xer);
	// bne cr6,0x825453f8
	if (!ctx.cr6.eq) goto loc_825453F8;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// rlwinm. r9,r3,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// stb r11,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r11.u8);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// stb r5,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r5.u8);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// beq 0x82545110
	if (ctx.cr0.eq) goto loc_82545110;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
loc_825450E4:
	// lis r9,26
	ctx.r9.s64 = 1703936;
	// li r7,16
	ctx.r7.s64 = 16;
	// ori r29,r9,8838
	ctx.r29.u64 = ctx.r9.u64 | 8838;
	// li r9,20
	ctx.r9.s64 = 20;
loc_825450F4:
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// li r28,2
	ctx.r28.s64 = 2;
	// li r8,3
	ctx.r8.s64 = 3;
	// sth r7,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r7.u16);
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// stb r28,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r28.u8);
	// b 0x825453e8
	goto loc_825453E8;
loc_82545110:
	// rlwinm. r9,r3,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r9,12
	ctx.r9.s64 = 12;
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// beq 0x82545128
	if (ctx.cr0.eq) goto loc_82545128;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// b 0x825450e4
	goto loc_825450E4;
loc_82545128:
	// lis r8,44
	ctx.r8.s64 = 2883584;
	// li r9,20
	ctx.r9.s64 = 20;
	// ori r7,r8,9125
	ctx.r7.u64 = ctx.r8.u64 | 9125;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// b 0x825453f4
	goto loc_825453F4;
loc_82545140:
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// rlwinm. r9,r3,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// stb r11,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r11.u8);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// beq 0x82545184
	if (ctx.cr0.eq) goto loc_82545184;
	// lis r8,26
	ctx.r8.s64 = 1703936;
	// li r9,12
	ctx.r9.s64 = 12;
	// ori r7,r8,8838
	ctx.r7.u64 = ctx.r8.u64 | 8838;
	// li r8,2
	ctx.r8.s64 = 2;
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// li r9,16
	ctx.r9.s64 = 16;
	// stb r8,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r8.u8);
	// b 0x825453e4
	goto loc_825453E4;
loc_82545184:
	// rlwinm. r9,r3,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// li r9,12
	ctx.r9.s64 = 12;
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// li r8,2
	ctx.r8.s64 = 2;
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// li r9,16
	ctx.r9.s64 = 16;
	// beq 0x825451b4
	if (ctx.cr0.eq) goto loc_825451B4;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// stb r8,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r8.u8);
	// b 0x825453f4
	goto loc_825453F4;
loc_825451B4:
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// stb r5,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r5.u8);
	// b 0x825453f4
	goto loc_825453F4;
loc_825451C0:
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// li r9,12
	ctx.r9.s64 = 12;
loc_825451C8:
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// stb r11,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r11.u8);
	// b 0x825453e8
	goto loc_825453E8;
loc_825451D8:
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// rlwinm. r9,r3,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// stb r11,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r11.u8);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// stb r5,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r5.u8);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// beq 0x82545234
	if (ctx.cr0.eq) goto loc_82545234;
	// li r9,12
	ctx.r9.s64 = 12;
	// lis r8,44
	ctx.r8.s64 = 2883584;
	// li r7,20
	ctx.r7.s64 = 20;
	// ori r8,r8,9125
	ctx.r8.u64 = ctx.r8.u64 | 9125;
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// lis r9,26
	ctx.r9.s64 = 1703936;
	// ori r29,r9,8838
	ctx.r29.u64 = ctx.r9.u64 | 8838;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// b 0x825450f4
	goto loc_825450F4;
loc_82545234:
	// rlwinm. r9,r3,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r9,12
	ctx.r9.s64 = 12;
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// li r9,24
	ctx.r9.s64 = 24;
	// beq 0x82545274
	if (ctx.cr0.eq) goto loc_82545274;
	// lis r8,44
	ctx.r8.s64 = 2883584;
	// li r7,20
	ctx.r7.s64 = 20;
	// ori r8,r8,9125
	ctx.r8.u64 = ctx.r8.u64 | 9125;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82545258:
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// li r29,2
	ctx.r29.s64 = 2;
	// li r8,3
	ctx.r8.s64 = 3;
	// sth r7,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r7.u16);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// stb r29,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r29.u8);
	// b 0x825453e8
	goto loc_825453E8;
loc_82545274:
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// b 0x825453f4
	goto loc_825453F4;
loc_82545280:
	// cmplwi cr6,r7,12
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 12, ctx.xer);
	// beq cr6,0x82545358
	if (ctx.cr6.eq) goto loc_82545358;
	// cmplwi cr6,r7,14
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 14, ctx.xer);
	// beq cr6,0x825452ac
	if (ctx.cr6.eq) goto loc_825452AC;
	// cmplwi cr6,r7,16386
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16386, ctx.xer);
	// bne cr6,0x825453f8
	if (!ctx.cr6.eq) goto loc_825453F8;
	// lis r9,26
	ctx.r9.s64 = 1703936;
	// ori r9,r9,9126
	ctx.r9.u64 = ctx.r9.u64 | 9126;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// b 0x825451c8
	goto loc_825451C8;
loc_825452AC:
	// lis r8,26
	ctx.r8.s64 = 1703936;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// ori r8,r8,9126
	ctx.r8.u64 = ctx.r8.u64 | 9126;
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// rlwinm. r7,r3,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r11,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r11.u8);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// stb r5,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r5.u8);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// beq 0x8254531c
	if (ctx.cr0.eq) goto loc_8254531C;
	// li r9,28
	ctx.r9.s64 = 28;
	// li r29,2
	ctx.r29.s64 = 2;
	// lis r8,26
	ctx.r8.s64 = 1703936;
	// ori r7,r8,8838
	ctx.r7.u64 = ctx.r8.u64 | 8838;
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// li r8,3
	ctx.r8.s64 = 3;
	// li r9,32
	ctx.r9.s64 = 32;
	// stb r29,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r29.u8);
	// b 0x825453e4
	goto loc_825453E4;
loc_8254531C:
	// rlwinm. r9,r3,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// li r9,28
	ctx.r9.s64 = 28;
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// li r7,2
	ctx.r7.s64 = 2;
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// li r8,3
	ctx.r8.s64 = 3;
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// li r9,32
	ctx.r9.s64 = 32;
	// stb r7,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r7.u8);
	// beq 0x82545350
	if (ctx.cr0.eq) goto loc_82545350;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// b 0x825453f4
	goto loc_825453F4;
loc_82545350:
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// b 0x825453f4
	goto loc_825453F4;
loc_82545358:
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// rlwinm. r9,r3,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// stb r11,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r11.u8);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// stb r5,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r5.u8);
	// beq 0x825453ac
	if (ctx.cr0.eq) goto loc_825453AC;
	// li r9,12
	ctx.r9.s64 = 12;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// li r7,24
	ctx.r7.s64 = 24;
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// lis r9,26
	ctx.r9.s64 = 1703936;
	// ori r29,r9,8838
	ctx.r29.u64 = ctx.r9.u64 | 8838;
	// li r9,28
	ctx.r9.s64 = 28;
	// b 0x825450f4
	goto loc_825450F4;
loc_825453AC:
	// rlwinm. r9,r3,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r9,12
	ctx.r9.s64 = 12;
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// li r9,28
	ctx.r9.s64 = 28;
	// beq 0x825453d8
	if (ctx.cr0.eq) goto loc_825453D8;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// li r7,24
	ctx.r7.s64 = 24;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// b 0x82545258
	goto loc_82545258;
loc_825453D8:
	// lis r8,26
	ctx.r8.s64 = 1703936;
	// ori r7,r8,9126
	ctx.r7.u64 = ctx.r8.u64 | 9126;
	// li r8,2
	ctx.r8.s64 = 2;
loc_825453E4:
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_825453E8:
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
loc_825453F4:
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_825453F8:
	// rlwinm. r7,r3,0,27,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82545430
	if (ctx.cr0.eq) goto loc_82545430;
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// li r7,3
	ctx.r7.s64 = 3;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// stb r7,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r7.u8);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_82545430:
	// rlwinm. r7,r3,0,26,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82545468
	if (ctx.cr0.eq) goto loc_82545468;
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// li r7,4
	ctx.r7.s64 = 4;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// stb r7,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r7.u8);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_82545468:
	// rlwinm. r6,r3,0,25,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// li r7,10
	ctx.r7.s64 = 10;
	// beq 0x825454a0
	if (ctx.cr0.eq) goto loc_825454A0;
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// stb r7,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r7.u8);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_825454A0:
	// rlwinm. r6,r3,0,24,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x825454d4
	if (ctx.cr0.eq) goto loc_825454D4;
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// stb r7,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r7.u8);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// stb r5,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r5.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_825454D4:
	// rlwinm. r29,r3,24,28,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// rlwinm r6,r3,16,16,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// beq 0x82545548
	if (ctx.cr0.eq) goto loc_82545548;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// add r8,r29,r8
	ctx.r8.u64 = ctx.r29.u64 + ctx.r8.u64;
	// addi r5,r5,-6624
	ctx.r5.s64 = ctx.r5.s64 + -6624;
loc_825454F0:
	// clrlwi r3,r6,30
	ctx.r3.u64 = ctx.r6.u32 & 0x3;
	// clrlwi r31,r9,16
	ctx.r31.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r30,r5,4
	ctx.r30.s64 = ctx.r5.s64 + 4;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// li r27,5
	ctx.r27.s64 = 5;
	// lbzx r3,r3,r5
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r5.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// rlwinm r6,r6,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r9,r3,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFC;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// cmplw cr6,r7,r29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, ctx.xer);
	// add r3,r9,r30
	ctx.r3.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// lwz r3,-4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// stb r27,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r27.u8);
	// stb r28,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r28.u8);
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// blt cr6,0x825454f0
	if (ctx.cr6.lt) goto loc_825454F0;
loc_82545548:
	// li r9,255
	ctx.r9.s64 = 255;
	// sth r11,-62(r1)
	PPC_STORE_U16(ctx.r1.u32 + -62, ctx.r11.u16);
	// stb r11,-56(r1)
	PPC_STORE_U8(ctx.r1.u32 + -56, ctx.r11.u8);
	// stb r11,-55(r1)
	PPC_STORE_U8(ctx.r1.u32 + -55, ctx.r11.u8);
	// stb r11,-54(r1)
	PPC_STORE_U8(ctx.r1.u32 + -54, ctx.r11.u8);
	// lwz r6,-56(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	// sth r9,-64(r1)
	PPC_STORE_U16(ctx.r1.u32 + -64, ctx.r9.u16);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r7,-64(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r8,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r8.u32);
	// stw r11,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r11.u32);
	// stw r11,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r11.u32);
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82545588"))) PPC_WEAK_FUNC(sub_82545588);
PPC_FUNC_IMPL(__imp__sub_82545588) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82545598"))) PPC_WEAK_FUNC(sub_82545598);
PPC_FUNC_IMPL(__imp__sub_82545598) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// beq cr6,0x825455d8
	if (ctx.cr6.eq) goto loc_825455D8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826dfd40
	ctx.lr = 0x825455D8;
	sub_826DFD40(ctx, base);
loc_825455D8:
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

__attribute__((alias("__imp__sub_825455F0"))) PPC_WEAK_FUNC(sub_825455F0);
PPC_FUNC_IMPL(__imp__sub_825455F0) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r30,r11,r5
	ctx.r30.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82545634
	if (ctx.cr6.gt) goto loc_82545634;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82545648
	if (ctx.cr6.eq) goto loc_82545648;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x826df680
	ctx.lr = 0x82545630;
	sub_826DF680(ctx, base);
	// b 0x82545648
	goto loc_82545648;
loc_82545634:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82545648
	if (ctx.cr6.eq) goto loc_82545648;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82545648:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8254565c
	if (!ctx.cr6.gt) goto loc_8254565C;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_8254565C:
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

__attribute__((alias("__imp__sub_82545678"))) PPC_WEAK_FUNC(sub_82545678);
PPC_FUNC_IMPL(__imp__sub_82545678) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r11,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r9,r9,16,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xF;
	// rlwinm. r10,r11,17,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8254569c
	if (ctx.cr0.eq) goto loc_8254569C;
	// rlwinm. r8,r11,0,17,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8254569c
	if (ctx.cr0.eq) goto loc_8254569C;
	// li r9,15
	ctx.r9.s64 = 15;
loc_8254569C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825456b4
	if (ctx.cr6.eq) goto loc_825456B4;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x825456b8
	if (ctx.cr6.lt) goto loc_825456B8;
loc_825456B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825456B8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825456cc
	if (ctx.cr0.eq) goto loc_825456CC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x825456d0
	if (!ctx.cr6.eq) goto loc_825456D0;
loc_825456CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825456D0:
	// clrlwi. r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825456F0"))) PPC_WEAK_FUNC(sub_825456F0);
PPC_FUNC_IMPL(__imp__sub_825456F0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_825456F8:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// blt cr6,0x825456f8
	if (ctx.cr6.lt) goto loc_825456F8;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
loc_82545720:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r8,r9,16,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xF;
	// rlwinm r9,r9,14,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x3C;
	// stwx r8,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r8.u32);
	// bne 0x82545720
	if (!ctx.cr0.eq) goto loc_82545720;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82545740"))) PPC_WEAK_FUNC(sub_82545740);
PPC_FUNC_IMPL(__imp__sub_82545740) {
	PPC_FUNC_PROLOGUE();
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// beq 0x8254577c
	if (ctx.cr0.eq) goto loc_8254577C;
	// rlwinm r10,r11,22,24,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0xFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwimi r11,r10,12,14,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x3F000) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0FFF);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// rlwinm r11,r11,29,24,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0xFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// rlwimi r9,r11,5,21,26
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 5) & 0x7E0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF81F);
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_8254577C:
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825457a4
	if (!ctx.cr0.eq) goto loc_825457A4;
	// rlwinm r10,r11,26,24,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwimi r11,r10,8,18,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0x3F00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC0FF);
	// rlwinm r10,r11,2,24,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFC;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwimi r10,r11,0,0,25
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFC0) | (ctx.r10.u64 & 0xFFFFFFFF0000003F);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
loc_825457A4:
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// addi r11,r11,-25096
	ctx.r11.s64 = ctx.r11.s64 + -25096;
	// rlwinm r5,r6,6,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0x3F;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// lbzx r5,r5,r9
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// rlwinm r9,r10,8,27,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x1F;
	// lbzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x825457f0
	if (ctx.cr6.lt) goto loc_825457F0;
	// rlwinm. r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825457f0
	if (ctx.cr0.eq) goto loc_825457F0;
	// lbz r11,9(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 9);
	// rlwinm r10,r11,2,24,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFC;
	// rlwinm r11,r11,0,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stb r11,9(r7)
	PPC_STORE_U8(ctx.r7.u32 + 9, ctx.r11.u8);
loc_825457F0:
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x8254581c
	if (ctx.cr6.lt) goto loc_8254581C;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254581c
	if (ctx.cr0.eq) goto loc_8254581C;
	// lbz r11,10(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 10);
	// rlwinm r10,r11,2,24,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFC;
	// rlwinm r11,r11,0,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stb r11,10(r7)
	PPC_STORE_U8(ctx.r7.u32 + 10, ctx.r11.u8);
loc_8254581C:
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bge cr6,0x8254582c
	if (!ctx.cr6.lt) goto loc_8254582C;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x82545850
	if (!ctx.cr6.eq) goto loc_82545850;
loc_8254582C:
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82545850
	if (ctx.cr0.eq) goto loc_82545850;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r10,r11,2,24,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFC;
	// rlwinm r11,r11,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stb r11,11(r7)
	PPC_STORE_U8(ctx.r7.u32 + 11, ctx.r11.u8);
loc_82545850:
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// rlwimi r9,r11,30,4,4
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 30) & 0x8000000) | (ctx.r9.u64 & 0xFFFFFFFFF7FFFFFF);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// rlwimi r5,r9,6,30,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 6) & 0x3) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFFC);
	// clrlwi r9,r5,26
	ctx.r9.u64 = ctx.r5.u32 & 0x3F;
	// rlwinm r5,r9,2,24,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFC;
	// rlwinm r9,r9,0,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFC0;
	// lwzx r8,r5,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwimi r10,r9,0,26,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3C) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFC3);
	// rlwimi r11,r9,28,2,2
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 28) & 0x20000000) | (ctx.r11.u64 & 0xFFFFFFFFDFFFFFFF);
	// rlwimi r6,r9,26,5,5
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 26) & 0x4000000) | (ctx.r6.u64 & 0xFFFFFFFFFBFFFFFF);
	// stb r10,7(r7)
	PPC_STORE_U8(ctx.r7.u32 + 7, ctx.r10.u8);
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825458A0"))) PPC_WEAK_FUNC(sub_825458A0);
PPC_FUNC_IMPL(__imp__sub_825458A0) {
	PPC_FUNC_PROLOGUE();
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm r10,r11,2,24,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwimi r10,r11,0,0,25
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFC0) | (ctx.r10.u64 & 0xFFFFFFFF0000003F);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825458D0"))) PPC_WEAK_FUNC(sub_825458D0);
PPC_FUNC_IMPL(__imp__sub_825458D0) {
	PPC_FUNC_PROLOGUE();
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// clrlwi. r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82545900
	if (ctx.cr0.eq) goto loc_82545900;
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r10,r9,20,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x3F;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x825458f8
	if (ctx.cr6.gt) goto loc_825458F8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_825458F8:
	// rlwinm r10,r9,27,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x3F;
	// b 0x825459cc
	goto loc_825459CC;
loc_82545900:
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm. r10,r6,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8254592c
	if (!ctx.cr0.eq) goto loc_8254592C;
	// rlwinm r10,r6,24,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0x3F;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8254591c
	if (ctx.cr6.gt) goto loc_8254591C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8254591C:
	// clrlwi r10,r6,26
	ctx.r10.u64 = ctx.r6.u32 & 0x3F;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8254592c
	if (ctx.cr6.gt) goto loc_8254592C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8254592C:
	// lis r9,-32072
	ctx.r9.s64 = -2101870592;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r4,r6,6,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0x3F;
	// addi r9,r9,-25096
	ctx.r9.s64 = ctx.r9.s64 + -25096;
	// addi r5,r9,32
	ctx.r5.s64 = ctx.r9.s64 + 32;
	// lbzx r4,r4,r5
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// rlwinm r5,r10,8,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x1F;
	// lbzx r5,r5,r9
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x8254596c
	if (ctx.cr6.lt) goto loc_8254596C;
	// rlwinm. r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8254596c
	if (ctx.cr0.eq) goto loc_8254596C;
	// rlwinm r9,r10,16,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x3F;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8254596c
	if (ctx.cr6.gt) goto loc_8254596C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8254596C:
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// blt cr6,0x8254598c
	if (ctx.cr6.lt) goto loc_8254598C;
	// rlwinm. r9,r10,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8254598c
	if (ctx.cr0.eq) goto loc_8254598C;
	// rlwinm r9,r10,24,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x3F;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8254598c
	if (ctx.cr6.gt) goto loc_8254598C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8254598C:
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// bge cr6,0x8254599c
	if (!ctx.cr6.lt) goto loc_8254599C;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bne cr6,0x825459b4
	if (!ctx.cr6.eq) goto loc_825459B4;
loc_8254599C:
	// rlwinm. r9,r10,0,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825459b4
	if (ctx.cr0.eq) goto loc_825459B4;
	// clrlwi r9,r10,26
	ctx.r9.u64 = ctx.r10.u32 & 0x3F;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x825459b4
	if (ctx.cr6.gt) goto loc_825459B4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_825459B4:
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bne cr6,0x825459d8
	if (!ctx.cr6.eq) goto loc_825459D8;
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// rlwimi r6,r10,30,4,4
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0x8000000) | (ctx.r6.u64 & 0xFFFFFFFFF7FFFFFF);
	// rlwimi r9,r6,6,30,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r6.u32, 6) & 0x3) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFC);
	// clrlwi r10,r9,26
	ctx.r10.u64 = ctx.r9.u32 & 0x3F;
loc_825459CC:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x825459d8
	if (ctx.cr6.gt) goto loc_825459D8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_825459D8:
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825459E0"))) PPC_WEAK_FUNC(sub_825459E0);
PPC_FUNC_IMPL(__imp__sub_825459E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,20
	ctx.r10.u64 = ctx.r11.u32 & 0xFFF;
	// rlwinm r5,r11,16,20,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFF;
	// rlwinm. r8,r11,20,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mulli r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 * 12;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82545A08:
	// slw r10,r3,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r6.u8 & 0x3F));
	// and r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 & ctx.r5.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82545a64
	if (!ctx.cr0.eq) goto loc_82545A64;
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// rlwinm r9,r9,6,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x3F;
	// addi r10,r10,-20
	ctx.r10.s64 = ctx.r10.s64 + -20;
	// addi r9,r9,-27
	ctx.r9.s64 = ctx.r9.s64 + -27;
	// subfic r10,r10,3
	ctx.xer.ca = ctx.r10.u32 <= 3;
	ctx.r10.s64 = 3 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r9,r9,7
	ctx.xer.ca = ctx.r9.u32 <= 7;
	ctx.r9.s64 = 7 - ctx.r9.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82545a7c
	if (!ctx.cr0.eq) goto loc_82545A7C;
	// clrlwi. r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82545a7c
	if (!ctx.cr0.eq) goto loc_82545A7C;
loc_82545A64:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82545a08
	if (ctx.cr6.lt) goto loc_82545A08;
	// blr 
	return;
loc_82545A7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82545A88"))) PPC_WEAK_FUNC(sub_82545A88);
PPC_FUNC_IMPL(__imp__sub_82545A88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82545A90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82545b5c
	if (ctx.cr0.eq) goto loc_82545B5C;
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r30,r31,20,28,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 20) & 0xF;
	// slw r11,r11,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// andi. r11,r11,24702
	ctx.r11.u64 = ctx.r11.u64 & 24702;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82545b5c
	if (ctx.cr0.eq) goto loc_82545B5C;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825459e0
	ctx.lr = 0x82545AD4;
	sub_825459E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r30,6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 6, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// bgt cr6,0x82545b20
	if (ctx.cr6.gt) goto loc_82545B20;
	// cmplwi cr6,r30,5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 5, ctx.xer);
	// bge cr6,0x82545b18
	if (!ctx.cr6.lt) goto loc_82545B18;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82545b5c
	if (ctx.cr6.eq) goto loc_82545B5C;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// ble cr6,0x82545b18
	if (!ctx.cr6.gt) goto loc_82545B18;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// beq cr6,0x82545b44
	if (ctx.cr6.eq) goto loc_82545B44;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// beq cr6,0x82545b30
	if (ctx.cr6.eq) goto loc_82545B30;
	// b 0x82545b5c
	goto loc_82545B5C;
loc_82545B18:
	// rlwimi r31,r11,9,22,22
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 9) & 0x200) | (ctx.r31.u64 & 0xFFFFFFFFFFFFFDFF);
	// b 0x82545b58
	goto loc_82545B58;
loc_82545B20:
	// cmplwi cr6,r30,13
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 13, ctx.xer);
	// beq cr6,0x82545b44
	if (ctx.cr6.eq) goto loc_82545B44;
	// cmplwi cr6,r30,14
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 14, ctx.xer);
	// bne cr6,0x82545b5c
	if (!ctx.cr6.eq) goto loc_82545B5C;
loc_82545B30:
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r11,r11,10
	ctx.r11.u64 = ctx.r11.u64 & 10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x82545b54
	goto loc_82545B54;
loc_82545B44:
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r11,r11,10
	ctx.r11.u64 = ctx.r11.u64 & 10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
loc_82545B54:
	// rlwimi r31,r11,12,16,19
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0xF000) | (ctx.r31.u64 & 0xFFFFFFFFFFFF0FFF);
loc_82545B58:
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
loc_82545B5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82545B68"))) PPC_WEAK_FUNC(sub_82545B68);
PPC_FUNC_IMPL(__imp__sub_82545B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82545B70;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82545c30
	if (!ctx.cr0.eq) goto loc_82545C30;
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82545c30
	if (!ctx.cr0.eq) goto loc_82545C30;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82545678
	ctx.lr = 0x82545B9C;
	sub_82545678(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82545c30
	if (ctx.cr0.eq) goto loc_82545C30;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r4,r11,26
	ctx.r4.u64 = ctx.r11.u32 & 0x3F;
loc_82545BB4:
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r5
	ctx.r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r5.u8 & 0x3F));
	// and. r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 & ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82545c24
	if (ctx.cr0.eq) goto loc_82545C24;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x82545c24
	if (ctx.cr6.eq) goto loc_82545C24;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r30,r29,20
	ctx.r30.u64 = ctx.r29.u32 & 0xFFF;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// clrlwi r8,r8,20
	ctx.r8.u64 = ctx.r8.u32 & 0xFFF;
	// lhzx r7,r11,r31
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r30.u32);
	// lhzx r8,r11,r31
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// sthx r8,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u16);
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r11,r11,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// andc r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 & ~ctx.r11.u64;
loc_82545C24:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// blt cr6,0x82545bb4
	if (ctx.cr6.lt) goto loc_82545BB4;
loc_82545C30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82545C38"))) PPC_WEAK_FUNC(sub_82545C38);
PPC_FUNC_IMPL(__imp__sub_82545C38) {
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
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82545ce4
	if (!ctx.cr0.eq) goto loc_82545CE4;
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82545ce4
	if (!ctx.cr0.eq) goto loc_82545CE4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82545678
	ctx.lr = 0x82545C70;
	sub_82545678(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82545ce4
	if (ctx.cr0.eq) goto loc_82545CE4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r5,r11,26
	ctx.r5.u64 = ctx.r11.u32 & 0x3F;
loc_82545C88:
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r6.u8 & 0x3F));
	// and. r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82545cd8
	if (ctx.cr0.eq) goto loc_82545CD8;
	// addi r11,r5,2
	ctx.r11.s64 = ctx.r5.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lbzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x82545cd8
	if (ctx.cr6.eq) goto loc_82545CD8;
	// addi r10,r11,36
	ctx.r10.s64 = ctx.r11.s64 + 36;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r11,r11,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// andc r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r11.u64;
loc_82545CD8:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// blt cr6,0x82545c88
	if (ctx.cr6.lt) goto loc_82545C88;
loc_82545CE4:
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

__attribute__((alias("__imp__sub_82545D00"))) PPC_WEAK_FUNC(sub_82545D00);
PPC_FUNC_IMPL(__imp__sub_82545D00) {
	PPC_FUNC_PROLOGUE();
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82545d58
	if (ctx.cr0.eq) goto loc_82545D58;
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x82545d44
	if (ctx.cr6.gt) goto loc_82545D44;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwimi r10,r11,0,0,27
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFF0) | (ctx.r10.u64 & 0xFFFFFFFF0000000F);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// b 0x82545d58
	goto loc_82545D58;
loc_82545D44:
	// cmplwi cr6,r10,61
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 61, ctx.xer);
	// bne cr6,0x82545d58
	if (!ctx.cr6.eq) goto loc_82545D58;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
loc_82545D58:
	// lbz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 8);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// blt cr6,0x82545d70
	if (ctx.cr6.lt) goto loc_82545D70;
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// ble cr6,0x82545d88
	if (!ctx.cr6.gt) goto loc_82545D88;
loc_82545D70:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r11,r11,6,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// cmplwi cr6,r11,35
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 35, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmplwi cr6,r11,39
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 39, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
loc_82545D88:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82545D98"))) PPC_WEAK_FUNC(sub_82545D98);
PPC_FUNC_IMPL(__imp__sub_82545D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8a8
	ctx.lr = 0x82545DA0;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r20,r9
	ctx.r20.u64 = ctx.r9.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r26,r11,20,29,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x82545e7c
	if (ctx.cr0.eq) goto loc_82545E7C;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi r9,r11,20
	ctx.r9.u64 = ctx.r11.u32 & 0xFFF;
	// rlwinm r25,r11,16,20,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFF;
	// rlwinm r8,r10,4,26,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x30;
	// mulli r10,r9,12
	ctx.r10.s64 = ctx.r9.s64 * 12;
	// rlwinm r9,r11,4,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// add r31,r10,r7
	ctx.r31.u64 = ctx.r10.u64 + ctx.r7.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// or r24,r8,r9
	ctx.r24.u64 = ctx.r8.u64 | ctx.r9.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82545e7c
	if (ctx.cr6.eq) goto loc_82545E7C;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82545DF8:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82545e78
	if (ctx.cr6.gt) goto loc_82545E78;
	// bne cr6,0x82545e60
	if (!ctx.cr6.eq) goto loc_82545E60;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// slw r10,r27,r28
	ctx.r10.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r28.u8 & 0x3F));
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// and r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 & ctx.r25.u64;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// li r3,0
	ctx.r3.s64 = 0;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// xori r4,r10,1
	ctx.r4.u64 = ctx.r10.u64 ^ 1;
	// slw r11,r27,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r30.u8 & 0x3F));
	// and r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 & ctx.r24.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// bctrl 
	ctx.lr = 0x82545E58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
loc_82545E60:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82545df8
	if (ctx.cr6.lt) goto loc_82545DF8;
	// b 0x82545e7c
	goto loc_82545E7C;
loc_82545E78:
	// stw r27,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r27.u32);
loc_82545E7C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de8f8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82545E88"))) PPC_WEAK_FUNC(sub_82545E88);
PPC_FUNC_IMPL(__imp__sub_82545E88) {
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
	// lwz r3,19768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19768);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82545ec8
	if (ctx.cr0.eq) goto loc_82545EC8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82545EC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,19768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19768, ctx.r11.u32);
loc_82545EC8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,19768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19768, ctx.r30.u32);
	// beq cr6,0x82545ee8
	if (ctx.cr6.eq) goto loc_82545EE8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82545EE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82545EE8:
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

__attribute__((alias("__imp__sub_82545F00"))) PPC_WEAK_FUNC(sub_82545F00);
PPC_FUNC_IMPL(__imp__sub_82545F00) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// andi. r11,r4,249
	ctx.r11.u64 = ctx.r4.u64 & 249;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,19764(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19764);
	// rlwinm r10,r10,0,29,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF07;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,19764(r3)
	PPC_STORE_U32(ctx.r3.u32 + 19764, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82545F20"))) PPC_WEAK_FUNC(sub_82545F20);
PPC_FUNC_IMPL(__imp__sub_82545F20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9872
	ctx.r11.s64 = ctx.r11.s64 * 9872;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r4,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r4.u32);
	// stw r5,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82545F38"))) PPC_WEAK_FUNC(sub_82545F38);
PPC_FUNC_IMPL(__imp__sub_82545F38) {
	PPC_FUNC_PROLOGUE();
	// b 0x82545e88
	sub_82545E88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82545F40"))) PPC_WEAK_FUNC(sub_82545F40);
PPC_FUNC_IMPL(__imp__sub_82545F40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b0
	ctx.lr = 0x82545F48;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82545f84
	if (!ctx.cr6.eq) goto loc_82545F84;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82545f84
	if (!ctx.cr0.eq) goto loc_82545F84;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82545F84:
	// rlwinm. r11,r22,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x6;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825460e4
	if (ctx.cr0.eq) goto loc_825460E4;
	// lwz r31,4(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// rlwinm. r11,r31,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82545fa4
	if (ctx.cr0.eq) goto loc_82545FA4;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// b 0x82545fac
	goto loc_82545FAC;
loc_82545FA4:
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
loc_82545FAC:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm. r25,r11,20,29,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq 0x825460e4
	if (ctx.cr0.eq) goto loc_825460E4;
	// clrlwi r10,r11,20
	ctx.r10.u64 = ctx.r11.u32 & 0xFFF;
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x825460dc
	if (ctx.cr6.lt) goto loc_825460DC;
	// mulli r9,r25,12
	ctx.r9.s64 = ctx.r25.s64 * 12;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x825460dc
	if (ctx.cr6.gt) goto loc_825460DC;
	// rlwinm r9,r31,4,26,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0x30;
	// rlwinm r8,r11,4,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// add r29,r10,r7
	ctx.r29.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r28,r11,16,20,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFF;
	// or r26,r9,r8
	ctx.r26.u64 = ctx.r9.u64 | ctx.r8.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x825460e4
	if (ctx.cr6.eq) goto loc_825460E4;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82546000:
	// li r11,2
	ctx.r11.s64 = 2;
	// slw r10,r27,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r30.u8 & 0x3F));
	// and r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 & ctx.r28.u64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// slw r11,r11,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// and r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 & ctx.r28.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// xori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 ^ 1;
	// slw r11,r27,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r31.u8 & 0x3F));
	// and r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 & ctx.r26.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// xori r9,r8,1
	ctx.r9.u64 = ctx.r8.u64 ^ 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// beq 0x82546064
	if (ctx.cr0.eq) goto loc_82546064;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
loc_82546064:
	// clrlwi. r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82546070
	if (ctx.cr0.eq) goto loc_82546070;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_82546070:
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// rlwinm. r9,r10,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82546080
	if (ctx.cr0.eq) goto loc_82546080;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_82546080:
	// rlwinm r10,r10,0,16,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF000;
	// cmplwi cr6,r10,20480
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 20480, ctx.xer);
	// bne cr6,0x82546090
	if (!ctx.cr6.eq) goto loc_82546090;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
loc_82546090:
	// and r10,r11,r22
	ctx.r10.u64 = ctx.r11.u64 & ctx.r22.u64;
	// rlwinm. r10,r10,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x6;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825460c4
	if (ctx.cr0.eq) goto loc_825460C4;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,260(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// clrlwi r10,r10,20
	ctx.r10.u64 = ctx.r10.u32 & 0xFFF;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
	// bctrl 
	ctx.lr = 0x825460BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x825460e4
	if (ctx.cr0.lt) goto loc_825460E4;
loc_825460C4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82546000
	if (ctx.cr6.lt) goto loc_82546000;
	// b 0x825460e4
	goto loc_825460E4;
loc_825460DC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_825460E4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de900
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825460F0"))) PPC_WEAK_FUNC(sub_825460F0);
PPC_FUNC_IMPL(__imp__sub_825460F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de890
	ctx.lr = 0x825460F8;
	__savegprlr_14(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r20,r10
	ctx.r20.u64 = ctx.r10.u64;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r14,r8
	ctx.r14.u64 = ctx.r8.u64;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r19,-1
	ctx.r19.s64 = -1;
	// li r15,-1
	ctx.r15.s64 = -1;
	// addi r22,r11,-4
	ctx.r22.s64 = ctx.r11.s64 + -4;
	// addi r24,r10,-4
	ctx.r24.s64 = ctx.r10.s64 + -4;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8254614C:
	// li r11,12
	ctx.r11.s64 = 12;
	// li r9,6
	ctx.r9.s64 = 6;
	// divwu r11,r31,r11
	ctx.r11.u32 = ctx.r31.u32 / ctx.r11.u32;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// subf r10,r11,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// divwu r10,r10,r9
	ctx.r10.u32 = ctx.r10.u32 / ctx.r9.u32;
	// beq cr6,0x8254617c
	if (ctx.cr6.eq) goto loc_8254617C;
	// cmplw cr6,r31,r16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r16.u32, ctx.xer);
	// bge cr6,0x82546470
	if (!ctx.cr6.lt) goto loc_82546470;
	// add r27,r11,r17
	ctx.r27.u64 = ctx.r11.u64 + ctx.r17.u64;
	// b 0x8254618c
	goto loc_8254618C;
loc_8254617C:
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82546470
	if (!ctx.cr6.lt) goto loc_82546470;
	// add r27,r11,r18
	ctx.r27.u64 = ctx.r11.u64 + ctx.r18.u64;
loc_8254618C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// clrlwi. r8,r21,31
	ctx.r8.u64 = ctx.r21.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r11,6(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 6);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lhz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 4);
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lhz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 8);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// beq 0x825461ec
	if (ctx.cr0.eq) goto loc_825461EC;
	// lwz r6,404(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// divwu r4,r31,r9
	ctx.r4.u32 = ctx.r31.u32 / ctx.r9.u32;
	// li r3,1
	ctx.r3.s64 = 1;
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
	// bctrl 
	ctx.lr = 0x825461E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82546478
	if (ctx.cr0.lt) goto loc_82546478;
loc_825461EC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r10,r11,20,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// bgt cr6,0x825463f8
	if (ctx.cr6.gt) goto loc_825463F8;
	// lis r12,-32252
	ctx.r12.s64 = -2113667072;
	// addi r12,r12,-6312
	ctx.r12.s64 = ctx.r12.s64 + -6312;
	// lbzx r0,r12,r10
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r10.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32172
	ctx.r12.s64 = -2108424192;
	// addi r12,r12,25128
	ctx.r12.s64 = ctx.r12.s64 + 25128;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_825463F4;
	case 1:
		goto loc_825463F0;
	case 2:
		goto loc_825463EC;
	case 3:
		goto loc_82546228;
	case 4:
		goto loc_825463BC;
	case 5:
		goto loc_825463F0;
	case 6:
		goto loc_825463EC;
	case 7:
		goto loc_8254625C;
	case 8:
		goto loc_825462A0;
	case 9:
		goto loc_825462E0;
	case 10:
		goto loc_82546354;
	case 11:
		goto loc_82546374;
	case 12:
		goto loc_825463F4;
	case 13:
		goto loc_82546228;
	case 14:
		goto loc_825463BC;
	case 15:
		goto loc_825463F4;
	default:
		__builtin_unreachable();
	}
loc_82546228:
	// rlwinm r10,r11,30,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFF;
	// rlwinm r11,r11,22,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1;
	// clrlwi r9,r10,27
	ctx.r9.u64 = ctx.r10.u32 & 0x1F;
	// rlwinm r10,r10,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// lwzx r10,r10,r25
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// slw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r9.u8 & 0x3F));
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825463f4
	if (!ctx.cr6.eq) goto loc_825463F4;
	// b 0x825463f0
	goto loc_825463F0;
loc_8254625C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r9,r10,18,25,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x7C;
	// lwzx r9,r9,r14
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r14.u32);
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82546280
	if (!ctx.cr0.eq) goto loc_82546280;
	// clrlwi r10,r10,19
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFF;
loc_82546274:
	// rlwinm r28,r11,21,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// mulli r31,r10,6
	ctx.r31.s64 = ctx.r10.s64 * 6;
	// b 0x825463f8
	goto loc_825463F8;
loc_82546280:
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmpwi cr6,r15,4
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 4, ctx.xer);
	// blt cr6,0x82546298
	if (ctx.cr6.lt) goto loc_82546298;
loc_82546290:
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// b 0x825463f8
	goto loc_825463F8;
loc_82546298:
	// stw r8,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r8.u32);
	// b 0x825463f4
	goto loc_825463F4;
loc_825462A0:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// blt cr6,0x82546290
	if (ctx.cr6.lt) goto loc_82546290;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r7,r9,18,25,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x7C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r7,r7,r14
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r14.u32);
	// stw r10,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x825462d4
	if (!ctx.cr6.lt) goto loc_825462D4;
loc_825462CC:
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
	// b 0x82546274
	goto loc_82546274;
loc_825462D4:
	// addi r15,r15,-1
	ctx.r15.s64 = ctx.r15.s64 + -1;
	// addi r24,r24,-4
	ctx.r24.s64 = ctx.r24.s64 + -4;
	// b 0x825463f4
	goto loc_825463F4;
loc_825462E0:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r10,r9,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82546324
	if (!ctx.cr0.eq) goto loc_82546324;
	// rlwinm. r10,r9,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825463f4
	if (!ctx.cr0.eq) goto loc_825463F4;
	// rlwinm r10,r11,30,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFF;
	// rlwinm r7,r11,22,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1;
	// clrlwi r6,r10,27
	ctx.r6.u64 = ctx.r10.u32 & 0x1F;
	// rlwinm r10,r10,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// lwzx r10,r10,r25
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// slw r6,r29,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r6.u8 & 0x3F));
	// and r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 & ctx.r10.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x825463f4
	if (!ctx.cr6.eq) goto loc_825463F4;
loc_82546324:
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// cmpwi cr6,r19,4
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 4, ctx.xer);
	// bge cr6,0x82546290
	if (!ctx.cr6.lt) goto loc_82546290;
	// rlwinm r10,r28,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 16) & 0xFFFF0000;
	// addi r7,r31,6
	ctx.r7.s64 = ctx.r31.s64 + 6;
	// clrlwi r9,r9,19
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFF;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwinm r28,r11,21,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// mulli r31,r9,6
	ctx.r31.s64 = ctx.r9.s64 * 6;
	// stw r10,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r10.u32);
	// b 0x825463f8
	goto loc_825463F8;
loc_82546354:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// blt cr6,0x82546290
	if (ctx.cr6.lt) goto loc_82546290;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r19,r19,-1
	ctx.r19.s64 = ctx.r19.s64 + -1;
	// addi r22,r22,-4
	ctx.r22.s64 = ctx.r22.s64 + -4;
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r28,r11,16,16,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// b 0x825463f8
	goto loc_825463F8;
loc_82546374:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r10,r9,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825462cc
	if (!ctx.cr0.eq) goto loc_825462CC;
	// rlwinm. r10,r9,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825463f4
	if (!ctx.cr0.eq) goto loc_825463F4;
	// rlwinm r10,r11,30,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFF;
	// rlwinm r7,r11,22,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1;
	// clrlwi r6,r10,27
	ctx.r6.u64 = ctx.r10.u32 & 0x1F;
	// rlwinm r10,r10,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// lwzx r10,r10,r25
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// slw r6,r29,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r6.u8 & 0x3F));
	// and r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 & ctx.r10.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x825463f4
	if (!ctx.cr6.eq) goto loc_825463F4;
	// b 0x825462cc
	goto loc_825462CC;
loc_825463BC:
	// rlwinm r10,r11,30,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFF;
	// rlwinm r11,r11,22,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1;
	// clrlwi r9,r10,27
	ctx.r9.u64 = ctx.r10.u32 & 0x1F;
	// rlwinm r10,r10,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// lwzx r10,r10,r25
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// slw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r9.u8 & 0x3F));
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825463f4
	if (!ctx.cr6.eq) goto loc_825463F4;
loc_825463EC:
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_825463F0:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_825463F4:
	// addi r31,r31,6
	ctx.r31.s64 = ctx.r31.s64 + 6;
loc_825463F8:
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82546434
	if (ctx.cr0.eq) goto loc_82546434;
	// lwz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82545f40
	ctx.lr = 0x8254642C;
	sub_82545F40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82546478
	if (ctx.cr0.lt) goto loc_82546478;
loc_82546434:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwimi r10,r11,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r10,r10,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// beq 0x8254614c
	if (ctx.cr0.eq) goto loc_8254614C;
	// b 0x82546478
	goto loc_82546478;
loc_82546470:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82546478:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826de8e0
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82546480"))) PPC_WEAK_FUNC(sub_82546480);
PPC_FUNC_IMPL(__imp__sub_82546480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8a0
	ctx.lr = 0x82546488;
	__savegprlr_18(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm. r11,r27,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825464c4
	if (ctx.cr0.eq) goto loc_825464C4;
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825460f0
	ctx.lr = 0x825464C0;
	sub_825460F0(ctx, base);
	// b 0x825465f0
	goto loc_825465F0;
loc_825464C4:
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825465f0
	if (ctx.cr6.eq) goto loc_825465F0;
	// lwz r21,340(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// clrlwi r18,r27,31
	ctx.r18.u64 = ctx.r27.u32 & 0x1;
loc_825464E0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r23,r30,4
	ctx.r23.s64 = ctx.r30.s64 + 4;
	// addi r22,r30,8
	ctx.r22.s64 = ctx.r30.s64 + 8;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r1,112
	ctx.r31.s64 = ctx.r1.s64 + 112;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// rlwinm r9,r11,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r8,r10,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// or r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// rlwinm r11,r10,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
loc_82546520:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x82546550
	if (ctx.cr6.eq) goto loc_82546550;
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// divwu r11,r24,r11
	ctx.r11.u32 = ctx.r24.u32 / ctx.r11.u32;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x82546548;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x825465f0
	if (ctx.cr0.lt) goto loc_825465F0;
loc_82546550:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r11,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// andi. r11,r11,24702
	ctx.r11.u64 = ctx.r11.u64 & 24702;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825465a0
	if (ctx.cr0.eq) goto loc_825465A0;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82545f40
	ctx.lr = 0x825465A0;
	sub_82545F40(ctx, base);
loc_825465A0:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// blt cr6,0x82546520
	if (ctx.cr6.lt) goto loc_82546520;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r24,r24,12
	ctx.r24.s64 = ctx.r24.s64 + 12;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// rlwimi r10,r11,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// rlwinm r9,r9,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// stw r10,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825464e0
	if (ctx.cr6.lt) goto loc_825464E0;
loc_825465F0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826de8f0
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825465F8"))) PPC_WEAK_FUNC(sub_825465F8);
PPC_FUNC_IMPL(__imp__sub_825465F8) {
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
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x8254665c
	if (ctx.cr6.gt) goto loc_8254665C;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8254665c
	if (!ctx.cr6.lt) goto loc_8254665C;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826de940
	ctx.lr = 0x82546650;
	sub_826DE940(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_8254665C:
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

