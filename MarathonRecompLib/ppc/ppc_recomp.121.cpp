#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_828F2D80"))) PPC_WEAK_FUNC(sub_828F2D80);
PPC_FUNC_IMPL(__imp__sub_828F2D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 52);
	// clrlwi. r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f2e10
	if (ctx.cr0.eq) goto loc_828F2E10;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// lwz r7,60(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r6,64(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r5,68(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,13064(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13064);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,0,r8
	PPC_STORE_U32(ctx.r8.u32, ctx.f13.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// subf r10,r10,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r10.s64;
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,0,r8
	PPC_STORE_U32(ctx.r8.u32, ctx.f13.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// subf r10,r10,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r8
	PPC_STORE_U32(ctx.r8.u32, ctx.f0.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// subf r11,r11,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r11.s64;
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
loc_828F2E10:
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwimi r9,r11,0,31,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFFFFFFF0001) | (ctx.r9.u64 & 0xFFFE);
	// sth r9,52(r3)
	PPC_STORE_U16(ctx.r3.u32 + 52, ctx.r9.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F2E20"))) PPC_WEAK_FUNC(sub_828F2E20);
PPC_FUNC_IMPL(__imp__sub_828F2E20) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,14584
	ctx.r11.s64 = ctx.r11.s64 + 14584;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828f6b38
	ctx.lr = 0x828F2E4C;
	sub_828F6B38(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f2e5c
	if (ctx.cr0.eq) goto loc_828F2E5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e6f78
	ctx.lr = 0x828F2E5C;
	sub_825E6F78(ctx, base);
loc_828F2E5C:
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

__attribute__((alias("__imp__sub_828F2E78"))) PPC_WEAK_FUNC(sub_828F2E78);
PPC_FUNC_IMPL(__imp__sub_828F2E78) {
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
	// bl 0x828f6a90
	ctx.lr = 0x828F2E90;
	sub_828F6A90(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,19794
	ctx.r10.s64 = 1297219584;
	// addi r11,r11,14640
	ctx.r11.s64 = ctx.r11.s64 + 14640;
	// ori r10,r10,20047
	ctx.r10.u64 = ctx.r10.u64 | 20047;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x828fd888
	ctx.lr = 0x828F2EB0;
	sub_828FD888(ctx, base);
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

__attribute__((alias("__imp__sub_828F2EC8"))) PPC_WEAK_FUNC(sub_828F2EC8);
PPC_FUNC_IMPL(__imp__sub_828F2EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x828F2ED0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,76
	ctx.r3.s64 = 76;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x825e6f70
	ctx.lr = 0x828F2EE8;
	sub_825E6F70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f2f04
	if (ctx.cr0.eq) goto loc_828F2F04;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828f2e78
	ctx.lr = 0x828F2F00;
	sub_828F2E78(ctx, base);
	// b 0x828f2f08
	goto loc_828F2F08;
loc_828F2F04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828F2F08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F2F10"))) PPC_WEAK_FUNC(sub_828F2F10);
PPC_FUNC_IMPL(__imp__sub_828F2F10) {
	PPC_FUNC_PROLOGUE();
	// li r3,20
	ctx.r3.s64 = 20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F2F18"))) PPC_WEAK_FUNC(sub_828F2F18);
PPC_FUNC_IMPL(__imp__sub_828F2F18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// lfs f0,-23900(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23900);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f13.u32);
	// fctiwz f13,f12
	ctx.f13.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfiwx f13,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f13.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x828fd8a0
	ctx.lr = 0x828F2F80;
	sub_828FD8A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F2F90"))) PPC_WEAK_FUNC(sub_828F2F90);
PPC_FUNC_IMPL(__imp__sub_828F2F90) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lhz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,60
	ctx.r4.s64 = ctx.r11.s64 + 60;
	// b 0x8262ff38
	sub_8262FF38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F2FB0"))) PPC_WEAK_FUNC(sub_828F2FB0);
PPC_FUNC_IMPL(__imp__sub_828F2FB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F2FB8"))) PPC_WEAK_FUNC(sub_828F2FB8);
PPC_FUNC_IMPL(__imp__sub_828F2FB8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,14640
	ctx.r11.s64 = ctx.r11.s64 + 14640;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828f6b38
	ctx.lr = 0x828F2FE4;
	sub_828F6B38(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f2ff4
	if (ctx.cr0.eq) goto loc_828F2FF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e6f78
	ctx.lr = 0x828F2FF4;
	sub_825E6F78(ctx, base);
loc_828F2FF4:
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

__attribute__((alias("__imp__sub_828F3010"))) PPC_WEAK_FUNC(sub_828F3010);
PPC_FUNC_IMPL(__imp__sub_828F3010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x828F3018;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,60
	ctx.r3.s64 = 60;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x825e6f70
	ctx.lr = 0x828F3030;
	sub_825E6F70(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828f306c
	if (ctx.cr0.eq) goto loc_828F306C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f6a90
	ctx.lr = 0x828F304C;
	sub_828F6A90(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,21586
	ctx.r10.s64 = 1414660096;
	// addi r11,r11,14696
	ctx.r11.s64 = ctx.r11.s64 + 14696;
	// ori r10,r10,21330
	ctx.r10.u64 = ctx.r10.u64 | 21330;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x828f3070
	goto loc_828F3070;
loc_828F306C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828F3070:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F3078"))) PPC_WEAK_FUNC(sub_828F3078);
PPC_FUNC_IMPL(__imp__sub_828F3078) {
	PPC_FUNC_PROLOGUE();
	// lis r3,12
	ctx.r3.s64 = 786432;
	// ori r3,r3,23569
	ctx.r3.u64 = ctx.r3.u64 | 23569;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F3088"))) PPC_WEAK_FUNC(sub_828F3088);
PPC_FUNC_IMPL(__imp__sub_828F3088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x828F3090;
	__savegprlr_29(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828f3370
	if (!ctx.cr0.eq) goto loc_828F3370;
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// lwz r11,-17756(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17756);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f3370
	if (ctx.cr0.eq) goto loc_828F3370;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// bl 0x825e7708
	ctx.lr = 0x828F30C4;
	sub_825E7708(ctx, base);
	// lwz r11,-17756(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17756);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r4,r11,96
	ctx.r4.s64 = ctx.r11.s64 + 96;
	// bl 0x825e81c8
	ctx.lr = 0x828F30DC;
	sub_825E81C8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825e80a0
	ctx.lr = 0x828F30E4;
	sub_825E80A0(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwa r11,12(r11)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 12));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x825e81f8
	ctx.lr = 0x828F3108;
	sub_825E81F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x825e8198
	ctx.lr = 0x828F3118;
	sub_825E8198(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8262fa18
	ctx.lr = 0x828F3124;
	sub_8262FA18(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825e81c8
	ctx.lr = 0x828F3134;
	sub_825E81C8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// fctiwz f11,f0
	ctx.f11.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f10,f13
	ctx.f10.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f9,f12
	ctx.f9.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f11,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f11.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfiwx f10,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f10.u32);
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// stfiwx f9,0,r7
	PPC_STORE_U32(ctx.r7.u32, ctx.f9.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// extsw r10,r7
	ctx.r10.s64 = ctx.r7.s32;
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// ble 0x828f3248
	if (!ctx.cr0.gt) goto loc_828F3248;
	// divw r4,r9,r10
	ctx.r4.s32 = ctx.r9.s32 / ctx.r10.s32;
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mullw r4,r4,r10
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// twllei r10,0
	// twlgei r11,-1
	// srawi r11,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x828f322c
	if (!ctx.cr6.gt) goto loc_828F322C;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_828F322C:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f12,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
loc_828F3248:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x828f32b4
	if (!ctx.cr6.gt) goto loc_828F32B4;
	// divw r10,r8,r6
	ctx.r10.s32 = ctx.r8.s32 / ctx.r6.s32;
	// rotlwi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// andc r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 & ~ctx.r11.u64;
	// twllei r6,0
	// twlgei r11,-1
	// srawi r11,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 1;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f13,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x828f3298
	if (!ctx.cr6.gt) goto loc_828F3298;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_828F3298:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f12,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
loc_828F32B4:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x828f3320
	if (!ctx.cr6.gt) goto loc_828F3320;
	// divw r10,r7,r5
	ctx.r10.s32 = ctx.r7.s32 / ctx.r5.s32;
	// rotlwi r11,r7,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// subf r10,r10,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// andc r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 & ~ctx.r11.u64;
	// twllei r5,0
	// twlgei r11,-1
	// srawi r11,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 1;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f13,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x828f3304
	if (!ctx.cr6.gt) goto loc_828F3304;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_828F3304:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
loc_828F3320:
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825e8198
	ctx.lr = 0x828F3330;
	sub_825E8198(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825e8198
	ctx.lr = 0x828F3340;
	sub_825E8198(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x8262fa88
	ctx.lr = 0x828F3370;
	sub_8262FA88(ctx, base);
loc_828F3370:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F3378"))) PPC_WEAK_FUNC(sub_828F3378);
PPC_FUNC_IMPL(__imp__sub_828F3378) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,14696
	ctx.r11.s64 = ctx.r11.s64 + 14696;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828f6b38
	ctx.lr = 0x828F33A4;
	sub_828F6B38(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f33b4
	if (ctx.cr0.eq) goto loc_828F33B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e6f78
	ctx.lr = 0x828F33B4;
	sub_825E6F78(ctx, base);
loc_828F33B4:
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

__attribute__((alias("__imp__sub_828F33D0"))) PPC_WEAK_FUNC(sub_828F33D0);
PPC_FUNC_IMPL(__imp__sub_828F33D0) {
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
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x828f6e00
	ctx.lr = 0x828F33F0;
	sub_828F6E00(ctx, base);
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// stfs f1,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
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

__attribute__((alias("__imp__sub_828F3418"))) PPC_WEAK_FUNC(sub_828F3418);
PPC_FUNC_IMPL(__imp__sub_828F3418) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lhz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x828f3450
	if (!ctx.cr6.eq) goto loc_828F3450;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8262fdd8
	sub_8262FDD8(ctx, base);
	return;
loc_828F3450:
	// b 0x8262fa88
	sub_8262FA88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F3454"))) PPC_WEAK_FUNC(sub_828F3454);
PPC_FUNC_IMPL(__imp__sub_828F3454) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F3458"))) PPC_WEAK_FUNC(sub_828F3458);
PPC_FUNC_IMPL(__imp__sub_828F3458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// fsubs f30,f2,f31
	ctx.f30.f64 = double(float(ctx.f2.f64 - ctx.f31.f64));
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x828f34a0
	if (ctx.cr6.lt) goto loc_828F34A0;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x828f34b0
	if (!ctx.cr6.lt) goto loc_828F34B0;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82630a00
	ctx.lr = 0x828F3498;
	sub_82630A00(ctx, base);
	// fadds f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// b 0x828f34b4
	goto loc_828F34B4;
loc_828F34A0:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x828f86c8
	ctx.lr = 0x828F34A8;
	sub_828F86C8(ctx, base);
	// fmadds f1,f1,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f30.f64 + ctx.f31.f64));
	// b 0x828f34b4
	goto loc_828F34B4;
loc_828F34B0:
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
loc_828F34B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F34D0"))) PPC_WEAK_FUNC(sub_828F34D0);
PPC_FUNC_IMPL(__imp__sub_828F34D0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// bne cr6,0x828f3510
	if (!ctx.cr6.eq) goto loc_828F3510;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x828f3514
	goto loc_828F3514;
loc_828F3510:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_828F3514:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828f3540
	if (ctx.cr6.eq) goto loc_828F3540;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828f3530
	if (!ctx.cr6.eq) goto loc_828F3530;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826304f0
	ctx.lr = 0x828F352C;
	sub_826304F0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_828F3530:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82630958
	ctx.lr = 0x828F353C;
	sub_82630958(ctx, base);
	// b 0x828f3560
	goto loc_828F3560;
loc_828F3540:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_828F3560:
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

__attribute__((alias("__imp__sub_828F3578"))) PPC_WEAK_FUNC(sub_828F3578);
PPC_FUNC_IMPL(__imp__sub_828F3578) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,120(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x828f35fc
	if (ctx.cr6.eq) goto loc_828F35FC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x828f3654
	if (ctx.cr6.lt) goto loc_828F3654;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x828f35d8
	if (!ctx.cr6.gt) goto loc_828F35D8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x828f3654
	if (!ctx.cr6.eq) goto loc_828F3654;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8262fa18
	ctx.lr = 0x828F35C8;
	sub_8262FA18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e80d8
	ctx.lr = 0x828F35D4;
	sub_825E80D8(ctx, base);
	// b 0x828f3654
	goto loc_828F3654;
loc_828F35D8:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// b 0x828f3654
	goto loc_828F3654;
loc_828F35FC:
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828f3654
	if (ctx.cr6.eq) goto loc_828F3654;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x828f3624
	if (!ctx.cr6.eq) goto loc_828F3624;
	// lwz r5,40(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
loc_828F3624:
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,52(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F3644;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82630958
	ctx.lr = 0x828F3654;
	sub_82630958(ctx, base);
loc_828F3654:
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

__attribute__((alias("__imp__sub_828F3670"))) PPC_WEAK_FUNC(sub_828F3670);
PPC_FUNC_IMPL(__imp__sub_828F3670) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,14752
	ctx.r11.s64 = ctx.r11.s64 + 14752;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828f6b38
	ctx.lr = 0x828F369C;
	sub_828F6B38(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f36ac
	if (ctx.cr0.eq) goto loc_828F36AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e6f78
	ctx.lr = 0x828F36AC;
	sub_825E6F78(ctx, base);
loc_828F36AC:
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

__attribute__((alias("__imp__sub_828F36C8"))) PPC_WEAK_FUNC(sub_828F36C8);
PPC_FUNC_IMPL(__imp__sub_828F36C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x828F36D0;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x828f3720
	if (ctx.cr6.lt) goto loc_828F3720;
	// bne cr6,0x828f3744
	if (!ctx.cr6.eq) goto loc_828F3744;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lfs f0,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lhz r10,18(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 18);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x828f3740
	goto loc_828F3740;
loc_828F3720:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f6dd8
	ctx.lr = 0x828F3728;
	sub_828F6DD8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lhz r11,18(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 18);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_828F3740:
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_828F3744:
	// addi r29,r31,96
	ctx.r29.s64 = ctx.r31.s64 + 96;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lfs f0,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lfs f0,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// lfs f0,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828f3794
	if (ctx.cr0.eq) goto loc_828F3794;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x828f3790
	if (ctx.cr6.eq) goto loc_828F3790;
	// li r11,0
	ctx.r11.s64 = 0;
loc_828F3790:
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_828F3794:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// beq cr6,0x828f37d0
	if (ctx.cr6.eq) goto loc_828F37D0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lfs f2,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828f3458
	ctx.lr = 0x828F37C8;
	sub_828F3458(ctx, base);
	// stfs f1,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// stfs f1,128(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
loc_828F37D0:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r6,r30,3
	ctx.r6.s64 = ctx.r30.s64 + 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828f3458
	ctx.lr = 0x828F37E8;
	sub_828F3458(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r6,r30,2
	ctx.r6.s64 = ctx.r30.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f2,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828f3458
	ctx.lr = 0x828F3804;
	sub_828F3458(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r6,r30,1
	ctx.r6.s64 = ctx.r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828f3458
	ctx.lr = 0x828F3820;
	sub_828F3458(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x825e80a8
	ctx.lr = 0x828F3830;
	sub_825E80A8(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r6,r30,4
	ctx.r6.s64 = ctx.r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828f3458
	ctx.lr = 0x828F3848;
	sub_828F3458(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// stfs f1,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// lfs f13,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x828f388c
	if (!ctx.cr6.eq) goto loc_828F388C;
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f0,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f0,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lfs f0,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// b 0x828f3890
	goto loc_828F3890;
loc_828F388C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_828F3890:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F38A0"))) PPC_WEAK_FUNC(sub_828F38A0);
PPC_FUNC_IMPL(__imp__sub_828F38A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x828f38ec
	if (ctx.cr6.lt) goto loc_828F38EC;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// stw r5,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r5.u32);
	// lfs f0,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f0,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lfs f0,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// lfs f0,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// b 0x828f36c8
	sub_828F36C8(ctx, base);
	return;
loc_828F38EC:
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bltlr 
	if (ctx.cr0.lt) return;
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// lfs f0,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f0,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lfs f0,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// lfs f0,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// b 0x828f36c8
	sub_828F36C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F393C"))) PPC_WEAK_FUNC(sub_828F393C);
PPC_FUNC_IMPL(__imp__sub_828F393C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F3940"))) PPC_WEAK_FUNC(sub_828F3940);
PPC_FUNC_IMPL(__imp__sub_828F3940) {
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
	// bl 0x828f6a90
	ctx.lr = 0x828F3958;
	sub_828F6A90(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lis r10,19796
	ctx.r10.s64 = 1297350656;
	// addi r11,r11,14752
	ctx.r11.s64 = ctx.r11.s64 + 14752;
	// ori r10,r10,18255
	ctx.r10.u64 = ctx.r10.u64 | 18255;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828f3994
	if (!ctx.cr6.eq) goto loc_828F3994;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// b 0x828f39c8
	goto loc_828F39C8;
loc_828F3994:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x825d2310
	ctx.lr = 0x828F399C;
	sub_825D2310(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// bl 0x828f36c8
	ctx.lr = 0x828F39C8;
	sub_828F36C8(ctx, base);
loc_828F39C8:
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

__attribute__((alias("__imp__sub_828F39E0"))) PPC_WEAK_FUNC(sub_828F39E0);
PPC_FUNC_IMPL(__imp__sub_828F39E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x828F39E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,144
	ctx.r3.s64 = 144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x825e6f70
	ctx.lr = 0x828F3A00;
	sub_825E6F70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f3a1c
	if (ctx.cr0.eq) goto loc_828F3A1C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828f3940
	ctx.lr = 0x828F3A18;
	sub_828F3940(ctx, base);
	// b 0x828f3a20
	goto loc_828F3A20;
loc_828F3A1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828F3A20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F3A28"))) PPC_WEAK_FUNC(sub_828F3A28);
PPC_FUNC_IMPL(__imp__sub_828F3A28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x828F3A30;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828f3be4
	if (!ctx.cr0.eq) goto loc_828F3BE4;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x828f3a88
	if (!ctx.cr6.eq) goto loc_828F3A88;
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// beq cr6,0x828f3a88
	if (ctx.cr6.eq) goto loc_828F3A88;
	// lhz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f3a88
	if (ctx.cr0.eq) goto loc_828F3A88;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828f36c8
	ctx.lr = 0x828F3A88;
	sub_828F36C8(ctx, base);
loc_828F3A88:
	// lhz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// sth r10,52(r31)
	PPC_STORE_U16(ctx.r31.u32 + 52, ctx.r10.u16);
	// b 0x828f3b10
	goto loc_828F3B10;
loc_828F3AA4:
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828f3b8c
	if (ctx.cr6.eq) goto loc_828F3B8C;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lfs f0,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x828f3ae4
	if (!ctx.cr6.eq) goto loc_828F3AE4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x828f3ae8
	goto loc_828F3AE8;
loc_828F3AE4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_828F3AE8:
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f36c8
	ctx.lr = 0x828F3AF8;
	sub_828F36C8(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// or r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 | ctx.r30.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x828f3b10
	if (!ctx.cr6.eq) goto loc_828F3B10;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x828f3ba4
	if (ctx.cr6.eq) goto loc_828F3BA4;
loc_828F3B10:
	// lfs f13,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x828f3aa4
	if (!ctx.cr6.lt) goto loc_828F3AA4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// lfs f13,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// stfs f30,132(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// bl 0x828f34d0
	ctx.lr = 0x828F3B48;
	sub_828F34D0(ctx, base);
	// addi r6,r31,96
	ctx.r6.s64 = ctx.r31.s64 + 96;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f3578
	ctx.lr = 0x828F3B5C;
	sub_828F3578(ctx, base);
	// lfs f2,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f2,f31
	ctx.cr6.compare(ctx.f2.f64, ctx.f31.f64);
	// bne cr6,0x828f3bb4
	if (!ctx.cr6.eq) goto loc_828F3BB4;
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f13,68(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f12,72(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f11,76(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// b 0x828f3be4
	goto loc_828F3BE4;
loc_828F3B8C:
	// addi r6,r31,96
	ctx.r6.s64 = ctx.r31.s64 + 96;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f3578
	ctx.lr = 0x828F3BA0;
	sub_828F3578(ctx, base);
	// b 0x828f3be4
	goto loc_828F3BE4;
loc_828F3BA4:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// b 0x828f3be4
	goto loc_828F3BE4;
loc_828F3BB4:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lfs f0,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f3,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// lwz r7,44(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x828f70c0
	ctx.lr = 0x828F3BD4;
	sub_828F70C0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82631158
	ctx.lr = 0x828F3BE4;
	sub_82631158(ctx, base);
loc_828F3BE4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F3BF8"))) PPC_WEAK_FUNC(sub_828F3BF8);
PPC_FUNC_IMPL(__imp__sub_828F3BF8) {
	PPC_FUNC_PROLOGUE();
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F3C00"))) PPC_WEAK_FUNC(sub_828F3C00);
PPC_FUNC_IMPL(__imp__sub_828F3C00) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lhz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// b 0x8262fdd8
	sub_8262FDD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F3C28"))) PPC_WEAK_FUNC(sub_828F3C28);
PPC_FUNC_IMPL(__imp__sub_828F3C28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F3C30"))) PPC_WEAK_FUNC(sub_828F3C30);
PPC_FUNC_IMPL(__imp__sub_828F3C30) {
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
	// bl 0x828f6a90
	ctx.lr = 0x828F3C48;
	sub_828F6A90(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lis r10,19796
	ctx.r10.s64 = 1297350656;
	// addi r11,r11,14808
	ctx.r11.s64 = ctx.r11.s64 + 14808;
	// ori r10,r10,16711
	ctx.r10.u64 = ctx.r10.u64 | 16711;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828f3c84
	if (!ctx.cr6.eq) goto loc_828F3C84;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// b 0x828f3cb4
	goto loc_828F3CB4;
loc_828F3C84:
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x825d2310
	ctx.lr = 0x828F3C8C;
	sub_825D2310(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x825d2310
	ctx.lr = 0x828F3C94;
	sub_825D2310(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,140(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// bl 0x828f0258
	ctx.lr = 0x828F3CB4;
	sub_828F0258(ctx, base);
loc_828F3CB4:
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

__attribute__((alias("__imp__sub_828F3CD0"))) PPC_WEAK_FUNC(sub_828F3CD0);
PPC_FUNC_IMPL(__imp__sub_828F3CD0) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,14808
	ctx.r11.s64 = ctx.r11.s64 + 14808;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828f6b38
	ctx.lr = 0x828F3CFC;
	sub_828F6B38(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f3d0c
	if (ctx.cr0.eq) goto loc_828F3D0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e6f78
	ctx.lr = 0x828F3D0C;
	sub_825E6F78(ctx, base);
loc_828F3D0C:
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

__attribute__((alias("__imp__sub_828F3D28"))) PPC_WEAK_FUNC(sub_828F3D28);
PPC_FUNC_IMPL(__imp__sub_828F3D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x828F3D30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,144
	ctx.r3.s64 = 144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x825e6f70
	ctx.lr = 0x828F3D48;
	sub_825E6F70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f3d64
	if (ctx.cr0.eq) goto loc_828F3D64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828f3c30
	ctx.lr = 0x828F3D60;
	sub_828F3C30(ctx, base);
	// b 0x828f3d68
	goto loc_828F3D68;
loc_828F3D64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828F3D68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F3D70"))) PPC_WEAK_FUNC(sub_828F3D70);
PPC_FUNC_IMPL(__imp__sub_828F3D70) {
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
	// bl 0x828f6a90
	ctx.lr = 0x828F3D88;
	sub_828F6A90(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// addi r11,r11,14864
	ctx.r11.s64 = ctx.r11.s64 + 14864;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828f8e50
	ctx.lr = 0x828F3D9C;
	sub_828F8E50(ctx, base);
	// lis r11,19796
	ctx.r11.s64 = 1297350656;
	// ori r11,r11,21328
	ctx.r11.u64 = ctx.r11.u64 | 21328;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x828f3dcc
	if (!ctx.cr6.lt) goto loc_828F3DCC;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// b 0x828f3e54
	goto loc_828F3E54;
loc_828F3DCC:
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x825d2310
	ctx.lr = 0x828F3DD4;
	sub_825D2310(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x828f3dec
	if (ctx.cr6.eq) goto loc_828F3DEC;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x828f3e04
	if (!ctx.cr6.eq) goto loc_828F3E04;
loc_828F3DEC:
	// lhz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// sth r11,52(r31)
	PPC_STORE_U16(ctx.r31.u32 + 52, ctx.r11.u16);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
loc_828F3E04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f6e88
	ctx.lr = 0x828F3E0C;
	sub_828F6E88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f3e20
	if (ctx.cr0.eq) goto loc_828F3E20;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_828F3E20:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x828f3e4c
	if (ctx.cr6.eq) goto loc_828F3E4C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828f3e44
	if (ctx.cr6.eq) goto loc_828F3E44;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828f3e50
	if (!ctx.cr6.eq) goto loc_828F3E50;
	// b 0x828f3e50
	goto loc_828F3E50;
loc_828F3E44:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x828f3e50
	goto loc_828F3E50;
loc_828F3E4C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_828F3E50:
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
loc_828F3E54:
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

__attribute__((alias("__imp__sub_828F3E70"))) PPC_WEAK_FUNC(sub_828F3E70);
PPC_FUNC_IMPL(__imp__sub_828F3E70) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,14864
	ctx.r11.s64 = ctx.r11.s64 + 14864;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828f89d0
	ctx.lr = 0x828F3E98;
	sub_828F89D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f6b38
	ctx.lr = 0x828F3EA0;
	sub_828F6B38(ctx, base);
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

__attribute__((alias("__imp__sub_828F3EB8"))) PPC_WEAK_FUNC(sub_828F3EB8);
PPC_FUNC_IMPL(__imp__sub_828F3EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x828F3EC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,208
	ctx.r3.s64 = 208;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x825e6f70
	ctx.lr = 0x828F3ED8;
	sub_825E6F70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f3ef4
	if (ctx.cr0.eq) goto loc_828F3EF4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828f3d70
	ctx.lr = 0x828F3EF0;
	sub_828F3D70(ctx, base);
	// b 0x828f3ef8
	goto loc_828F3EF8;
loc_828F3EF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828F3EF8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F3F00"))) PPC_WEAK_FUNC(sub_828F3F00);
PPC_FUNC_IMPL(__imp__sub_828F3F00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x828F3F08;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lhz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 12);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828f4030
	if (!ctx.cr0.eq) goto loc_828F4030;
	// lwz r10,56(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// lis r11,744
	ctx.r11.s64 = 48758784;
	// ori r11,r11,47662
	ctx.r11.u64 = ctx.r11.u64 | 47662;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r26,0(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// mulli r3,r26,88
	ctx.r3.s64 = ctx.r26.s64 * 88;
	// ble cr6,0x828f3f48
	if (!ctx.cr6.gt) goto loc_828F3F48;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_828F3F48:
	// bl 0x82186158
	ctx.lr = 0x828F3F4C;
	sub_82186158(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x828f3f60
	if (!ctx.cr0.eq) goto loc_828F3F60;
	// lhz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 12);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// b 0x828f402c
	goto loc_828F402C;
loc_828F3F60:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x828f3fd4
	if (ctx.cr6.eq) goto loc_828F3FD4;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_828F3F7C:
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// lfs f9,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x828fd710
	ctx.lr = 0x828F3FC4;
	sub_828FD710(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,88
	ctx.r29.s64 = ctx.r29.s64 + 88;
	// bne 0x828f3f7c
	if (!ctx.cr0.eq) goto loc_828F3F7C;
loc_828F3FD4:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r28,60
	ctx.r3.s64 = ctx.r28.s64 + 60;
	// bl 0x828f8f08
	ctx.lr = 0x828F3FE4;
	sub_828F8F08(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82186190
	ctx.lr = 0x828F3FEC;
	sub_82186190(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828f6e88
	ctx.lr = 0x828F3FF4;
	sub_828F6E88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f4024
	if (ctx.cr0.eq) goto loc_828F4024;
	// addi r31,r28,128
	ctx.r31.s64 = ctx.r28.s64 + 128;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8262fd98
	ctx.lr = 0x828F400C;
	sub_8262FD98(ctx, base);
	// lwz r11,192(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828f4024
	if (!ctx.cr6.eq) goto loc_828F4024;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82630750
	ctx.lr = 0x828F4024;
	sub_82630750(ctx, base);
loc_828F4024:
	// lhz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 12);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
loc_828F402C:
	// sth r11,12(r28)
	PPC_STORE_U16(ctx.r28.u32 + 12, ctx.r11.u16);
loc_828F4030:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F4040"))) PPC_WEAK_FUNC(sub_828F4040);
PPC_FUNC_IMPL(__imp__sub_828F4040) {
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
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828f4078
	if (!ctx.cr0.eq) goto loc_828F4078;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x828f6e00
	ctx.lr = 0x828F406C;
	sub_828F6E00(ctx, base);
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x828f8fc0
	ctx.lr = 0x828F4078;
	sub_828F8FC0(ctx, base);
loc_828F4078:
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

__attribute__((alias("__imp__sub_828F4090"))) PPC_WEAK_FUNC(sub_828F4090);
PPC_FUNC_IMPL(__imp__sub_828F4090) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lhz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 52);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r5,192(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r3,112
	ctx.r6.s64 = ctx.r3.s64 + 112;
	// b 0x828f6fc0
	sub_828F6FC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F40C0"))) PPC_WEAK_FUNC(sub_828F40C0);
PPC_FUNC_IMPL(__imp__sub_828F40C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F40C8"))) PPC_WEAK_FUNC(sub_828F40C8);
PPC_FUNC_IMPL(__imp__sub_828F40C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f4198
	if (!ctx.cr0.eq) goto loc_828F4198;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f4198
	if (ctx.cr0.eq) goto loc_828F4198;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r6,r31,112
	ctx.r6.s64 = ctx.r31.s64 + 112;
	// lwz r5,192(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x821e0968
	ctx.lr = 0x828F4108;
	sub_821E0968(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f6e88
	ctx.lr = 0x828F4110;
	sub_828F6E88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f4198
	if (ctx.cr0.eq) goto loc_828F4198;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x828f4154
	if (ctx.cr0.eq) goto loc_828F4154;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_828F4138:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// bne 0x828f4138
	if (!ctx.cr0.eq) goto loc_828F4138;
loc_828F4154:
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f4180
	if (ctx.cr0.eq) goto loc_828F4180;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828f4180
	if (ctx.cr6.eq) goto loc_828F4180;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x828f4198
	if (!ctx.cr6.eq) goto loc_828F4198;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8262fd50
	ctx.lr = 0x828F4178;
	sub_8262FD50(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// b 0x828f4184
	goto loc_828F4184;
loc_828F4180:
	// addi r5,r31,128
	ctx.r5.s64 = ctx.r31.s64 + 128;
loc_828F4184:
	// li r7,-1
	ctx.r7.s64 = -1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,100
	ctx.r6.s64 = 100;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x828f8918
	ctx.lr = 0x828F4198;
	sub_828F8918(ctx, base);
loc_828F4198:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_828F41B0"))) PPC_WEAK_FUNC(sub_828F41B0);
PPC_FUNC_IMPL(__imp__sub_828F41B0) {
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
	// bl 0x828f3e70
	ctx.lr = 0x828F41D0;
	sub_828F3E70(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f41e0
	if (ctx.cr0.eq) goto loc_828F41E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e6f78
	ctx.lr = 0x828F41E0;
	sub_825E6F78(ctx, base);
loc_828F41E0:
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

__attribute__((alias("__imp__sub_828F4200"))) PPC_WEAK_FUNC(sub_828F4200);
PPC_FUNC_IMPL(__imp__sub_828F4200) {
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
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x828f6e00
	ctx.lr = 0x828F4220;
	sub_828F6E00(ctx, base);
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// stfs f1,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
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

__attribute__((alias("__imp__sub_828F4248"))) PPC_WEAK_FUNC(sub_828F4248);
PPC_FUNC_IMPL(__imp__sub_828F4248) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lhz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// lwz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x828f4280
	if (!ctx.cr6.eq) goto loc_828F4280;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8262fdd8
	sub_8262FDD8(ctx, base);
	return;
loc_828F4280:
	// b 0x8262fa88
	sub_8262FA88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F4284"))) PPC_WEAK_FUNC(sub_828F4284);
PPC_FUNC_IMPL(__imp__sub_828F4284) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F4288"))) PPC_WEAK_FUNC(sub_828F4288);
PPC_FUNC_IMPL(__imp__sub_828F4288) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r31,96
	ctx.r30.s64 = ctx.r31.s64 + 96;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828f42f0
	if (ctx.cr0.eq) goto loc_828F42F0;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x828f42ec
	if (ctx.cr6.eq) goto loc_828F42EC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_828F42EC:
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_828F42F0:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825e80a8
	ctx.lr = 0x828F4328;
	sub_825E80A8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x828f4364
	if (!ctx.cr6.eq) goto loc_828F4364;
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// b 0x828f4368
	goto loc_828F4368;
loc_828F4364:
	// li r3,1
	ctx.r3.s64 = 1;
loc_828F4368:
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

__attribute__((alias("__imp__sub_828F4380"))) PPC_WEAK_FUNC(sub_828F4380);
PPC_FUNC_IMPL(__imp__sub_828F4380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x828f43c8
	if (ctx.cr6.lt) goto loc_828F43C8;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// stw r5,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r5.u32);
	// lfs f0,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// lfs f0,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lfs f0,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// lfs f0,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// b 0x828f4288
	sub_828F4288(ctx, base);
	return;
loc_828F43C8:
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bltlr 
	if (ctx.cr0.lt) return;
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// lfs f0,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// lfs f0,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lfs f0,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// lfs f0,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// b 0x828f4288
	sub_828F4288(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F4414"))) PPC_WEAK_FUNC(sub_828F4414);
PPC_FUNC_IMPL(__imp__sub_828F4414) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F4418"))) PPC_WEAK_FUNC(sub_828F4418);
PPC_FUNC_IMPL(__imp__sub_828F4418) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// bne cr6,0x828f4458
	if (!ctx.cr6.eq) goto loc_828F4458;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x828f445c
	goto loc_828F445C;
loc_828F4458:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_828F445C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828f4488
	if (ctx.cr6.eq) goto loc_828F4488;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828f4478
	if (!ctx.cr6.eq) goto loc_828F4478;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826304f0
	ctx.lr = 0x828F4474;
	sub_826304F0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_828F4478:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82630958
	ctx.lr = 0x828F4484;
	sub_82630958(ctx, base);
	// b 0x828f44a8
	goto loc_828F44A8;
loc_828F4488:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_828F44A8:
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

__attribute__((alias("__imp__sub_828F44C0"))) PPC_WEAK_FUNC(sub_828F44C0);
PPC_FUNC_IMPL(__imp__sub_828F44C0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,120(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x828f4544
	if (ctx.cr6.eq) goto loc_828F4544;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x828f459c
	if (ctx.cr6.lt) goto loc_828F459C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x828f4520
	if (!ctx.cr6.gt) goto loc_828F4520;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x828f459c
	if (!ctx.cr6.eq) goto loc_828F459C;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8262fa18
	ctx.lr = 0x828F4510;
	sub_8262FA18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e80d8
	ctx.lr = 0x828F451C;
	sub_825E80D8(ctx, base);
	// b 0x828f459c
	goto loc_828F459C;
loc_828F4520:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// b 0x828f459c
	goto loc_828F459C;
loc_828F4544:
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828f459c
	if (ctx.cr6.eq) goto loc_828F459C;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x828f456c
	if (!ctx.cr6.eq) goto loc_828F456C;
	// lwz r5,40(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
loc_828F456C:
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,32(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F458C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82630958
	ctx.lr = 0x828F459C;
	sub_82630958(ctx, base);
loc_828F459C:
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

__attribute__((alias("__imp__sub_828F45B8"))) PPC_WEAK_FUNC(sub_828F45B8);
PPC_FUNC_IMPL(__imp__sub_828F45B8) {
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
	// bl 0x828f6a90
	ctx.lr = 0x828F45D0;
	sub_828F6A90(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lis r10,19796
	ctx.r10.s64 = 1297350656;
	// addi r11,r11,14920
	ctx.r11.s64 = ctx.r11.s64 + 14920;
	// ori r10,r10,18255
	ctx.r10.u64 = ctx.r10.u64 | 18255;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828f460c
	if (!ctx.cr6.eq) goto loc_828F460C;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// b 0x828f463c
	goto loc_828F463C;
loc_828F460C:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x825d2310
	ctx.lr = 0x828F4614;
	sub_825D2310(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// bl 0x828f4288
	ctx.lr = 0x828F463C;
	sub_828F4288(ctx, base);
loc_828F463C:
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

__attribute__((alias("__imp__sub_828F4658"))) PPC_WEAK_FUNC(sub_828F4658);
PPC_FUNC_IMPL(__imp__sub_828F4658) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,14920
	ctx.r11.s64 = ctx.r11.s64 + 14920;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828f6b38
	ctx.lr = 0x828F4684;
	sub_828F6B38(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f4694
	if (ctx.cr0.eq) goto loc_828F4694;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e6f78
	ctx.lr = 0x828F4694;
	sub_825E6F78(ctx, base);
loc_828F4694:
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

__attribute__((alias("__imp__sub_828F46B0"))) PPC_WEAK_FUNC(sub_828F46B0);
PPC_FUNC_IMPL(__imp__sub_828F46B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x828F46B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,144
	ctx.r3.s64 = 144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x825e6f70
	ctx.lr = 0x828F46D0;
	sub_825E6F70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f46ec
	if (ctx.cr0.eq) goto loc_828F46EC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828f45b8
	ctx.lr = 0x828F46E8;
	sub_828F45B8(ctx, base);
	// b 0x828f46f0
	goto loc_828F46F0;
loc_828F46EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828F46F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F46F8"))) PPC_WEAK_FUNC(sub_828F46F8);
PPC_FUNC_IMPL(__imp__sub_828F46F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x828F4700;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828f4878
	if (!ctx.cr0.eq) goto loc_828F4878;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// b 0x828f4798
	goto loc_828F4798;
loc_828F4730:
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828f4820
	if (ctx.cr6.eq) goto loc_828F4820;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lfs f0,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,124(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x828f4770
	if (!ctx.cr6.eq) goto loc_828F4770;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x828f4774
	goto loc_828F4774;
loc_828F4770:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_828F4774:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// bl 0x828f4288
	ctx.lr = 0x828F4780;
	sub_828F4288(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// or r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 | ctx.r30.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x828f4798
	if (!ctx.cr6.eq) goto loc_828F4798;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x828f4838
	if (ctx.cr6.eq) goto loc_828F4838;
loc_828F4798:
	// lfs f13,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x828f4730
	if (!ctx.cr6.lt) goto loc_828F4730;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// lfs f13,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// stfs f31,128(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// bl 0x828f4418
	ctx.lr = 0x828F47D0;
	sub_828F4418(ctx, base);
	// addi r6,r31,96
	ctx.r6.s64 = ctx.r31.s64 + 96;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f44c0
	ctx.lr = 0x828F47E4;
	sub_828F44C0(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x828f4848
	if (!ctx.cr6.eq) goto loc_828F4848;
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f13,68(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f12,72(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f11,76(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// b 0x828f4878
	goto loc_828F4878;
loc_828F4820:
	// addi r6,r31,96
	ctx.r6.s64 = ctx.r31.s64 + 96;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f44c0
	ctx.lr = 0x828F4834;
	sub_828F44C0(ctx, base);
	// b 0x828f4878
	goto loc_828F4878;
loc_828F4838:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// b 0x828f4878
	goto loc_828F4878;
loc_828F4848:
	// lfs f2,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,124(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lfs f3,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// fsubs f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// bl 0x828f70c0
	ctx.lr = 0x828F4868;
	sub_828F70C0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82631158
	ctx.lr = 0x828F4878;
	sub_82631158(ctx, base);
loc_828F4878:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F4888"))) PPC_WEAK_FUNC(sub_828F4888);
PPC_FUNC_IMPL(__imp__sub_828F4888) {
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
	// bl 0x828f6a90
	ctx.lr = 0x828F48A0;
	sub_828F6A90(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,21586
	ctx.r10.s64 = 1414660096;
	// addi r11,r11,14976
	ctx.r11.s64 = ctx.r11.s64 + 14976;
	// ori r10,r10,21321
	ctx.r10.u64 = ctx.r10.u64 | 21321;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x825d2310
	ctx.lr = 0x828F48C0;
	sub_825D2310(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x828f48d8
	if (ctx.cr6.eq) goto loc_828F48D8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x828f48f0
	if (!ctx.cr6.eq) goto loc_828F48F0;
loc_828F48D8:
	// lhz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// sth r11,52(r31)
	PPC_STORE_U16(ctx.r31.u32 + 52, ctx.r11.u16);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
loc_828F48F0:
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

__attribute__((alias("__imp__sub_828F4908"))) PPC_WEAK_FUNC(sub_828F4908);
PPC_FUNC_IMPL(__imp__sub_828F4908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x828F4910;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,144
	ctx.r3.s64 = 144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x825e6f70
	ctx.lr = 0x828F4928;
	sub_825E6F70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f4944
	if (ctx.cr0.eq) goto loc_828F4944;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828f4888
	ctx.lr = 0x828F4940;
	sub_828F4888(ctx, base);
	// b 0x828f4948
	goto loc_828F4948;
loc_828F4944:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828F4948:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F4950"))) PPC_WEAK_FUNC(sub_828F4950);
PPC_FUNC_IMPL(__imp__sub_828F4950) {
	PPC_FUNC_PROLOGUE();
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F4958"))) PPC_WEAK_FUNC(sub_828F4958);
PPC_FUNC_IMPL(__imp__sub_828F4958) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lhz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 52);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r3,64
	ctx.r6.s64 = ctx.r3.s64 + 64;
	// lwz r5,72(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// b 0x828f6fc0
	sub_828F6FC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F4984"))) PPC_WEAK_FUNC(sub_828F4984);
PPC_FUNC_IMPL(__imp__sub_828F4984) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F4988"))) PPC_WEAK_FUNC(sub_828F4988);
PPC_FUNC_IMPL(__imp__sub_828F4988) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r6,r3,64
	ctx.r6.s64 = ctx.r3.s64 + 64;
	// lwz r7,76(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r5,72(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// b 0x821e0968
	sub_821E0968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F49A8"))) PPC_WEAK_FUNC(sub_828F49A8);
PPC_FUNC_IMPL(__imp__sub_828F49A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F49B0"))) PPC_WEAK_FUNC(sub_828F49B0);
PPC_FUNC_IMPL(__imp__sub_828F49B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r4,68(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x828f6e00
	ctx.lr = 0x828F49D0;
	sub_828F6E00(ctx, base);
	// lfs f13,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fmadds f0,f0,f1,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// lfs f13,-23900(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23900);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82630c50
	ctx.lr = 0x828F49FC;
	sub_82630C50(ctx, base);
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825e81f8
	ctx.lr = 0x828F4A08;
	sub_825E81F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825e8198
	ctx.lr = 0x828F4A18;
	sub_825E8198(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F4A50"))) PPC_WEAK_FUNC(sub_828F4A50);
PPC_FUNC_IMPL(__imp__sub_828F4A50) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,14976
	ctx.r11.s64 = ctx.r11.s64 + 14976;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828f6b38
	ctx.lr = 0x828F4A7C;
	sub_828F6B38(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f4a8c
	if (ctx.cr0.eq) goto loc_828F4A8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e6f78
	ctx.lr = 0x828F4A8C;
	sub_825E6F78(ctx, base);
loc_828F4A8C:
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

__attribute__((alias("__imp__sub_828F4AA8"))) PPC_WEAK_FUNC(sub_828F4AA8);
PPC_FUNC_IMPL(__imp__sub_828F4AA8) {
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
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f29.u64);
	// stfd f30,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x828f4b08
	if (ctx.cr6.lt) goto loc_828F4B08;
	// bne cr6,0x828f4b2c
	if (!ctx.cr6.eq) goto loc_828F4B2C;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lfs f0,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lhz r10,18(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 18);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x828f4b28
	goto loc_828F4B28;
loc_828F4B08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f6dd8
	ctx.lr = 0x828F4B10;
	sub_828F6DD8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lhz r11,18(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 18);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_828F4B28:
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_828F4B2C:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828f1950
	ctx.lr = 0x828F4B44;
	sub_828F1950(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r6,r30,3
	ctx.r6.s64 = ctx.r30.s64 + 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,2128(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2128);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lfs f2,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828f1950
	ctx.lr = 0x828F4B6C;
	sub_828F1950(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r6,r30,2
	ctx.r6.s64 = ctx.r30.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f2,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828f1950
	ctx.lr = 0x828F4B88;
	sub_828F1950(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r6,r30,1
	ctx.r6.s64 = ctx.r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lfs f2,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828f1950
	ctx.lr = 0x828F4BA4;
	sub_828F1950(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stfs f31,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r6,r30,6
	ctx.r6.s64 = ctx.r30.s64 + 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f31,14088(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f2,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828f1950
	ctx.lr = 0x828F4BD4;
	sub_828F1950(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r6,r30,5
	ctx.r6.s64 = ctx.r30.s64 + 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lfs f2,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828f1950
	ctx.lr = 0x828F4BF0;
	sub_828F1950(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r6,r30,4
	ctx.r6.s64 = ctx.r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// lfs f2,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828f1950
	ctx.lr = 0x828F4C0C;
	sub_828F1950(ctx, base);
	// lfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
	// stfs f29,116(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fsubs f1,f30,f13
	ctx.f1.f64 = double(float(ctx.f30.f64 - ctx.f13.f64));
	// stfs f30,120(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x82630b48
	ctx.lr = 0x828F4C2C;
	sub_82630B48(ctx, base);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// bl 0x82630b48
	ctx.lr = 0x828F4C40;
	sub_82630B48(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// bl 0x82630b48
	ctx.lr = 0x828F4C54;
	sub_82630B48(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// lfs f31,3548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f3,f30,f31
	ctx.f3.f64 = double(float(ctx.f30.f64 * ctx.f31.f64));
	// fmuls f2,f29,f31
	ctx.f2.f64 = double(float(ctx.f29.f64 * ctx.f31.f64));
	// fmuls f1,f1,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// bl 0x825e80a8
	ctx.lr = 0x828F4C70;
	sub_825E80A8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825e8198
	ctx.lr = 0x828F4C80;
	sub_825E8198(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825e81f8
	ctx.lr = 0x828F4C90;
	sub_825E81F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r6,r30,7
	ctx.r6.s64 = ctx.r30.s64 + 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lfs f2,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828f1950
	ctx.lr = 0x828F4CCC;
	sub_828F1950(ctx, base);
	// stfs f1,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
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

__attribute__((alias("__imp__sub_828F4CF8"))) PPC_WEAK_FUNC(sub_828F4CF8);
PPC_FUNC_IMPL(__imp__sub_828F4CF8) {
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
	// bl 0x828f4aa8
	ctx.lr = 0x828F4D10;
	sub_828F4AA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f49b0
	ctx.lr = 0x828F4D18;
	sub_828F49B0(ctx, base);
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
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

__attribute__((alias("__imp__sub_828F4D38"))) PPC_WEAK_FUNC(sub_828F4D38);
PPC_FUNC_IMPL(__imp__sub_828F4D38) {
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
	// lhz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f4d84
	if (ctx.cr0.eq) goto loc_828F4D84;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828f4d7c
	if (!ctx.cr6.eq) goto loc_828F4D7C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x828f4d7c
	if (ctx.cr6.eq) goto loc_828F4D7C;
	// bl 0x828f4aa8
	ctx.lr = 0x828F4D7C;
	sub_828F4AA8(ctx, base);
loc_828F4D7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f49b0
	ctx.lr = 0x828F4D84;
	sub_828F49B0(ctx, base);
loc_828F4D84:
	// lhz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// sth r11,52(r31)
	PPC_STORE_U16(ctx.r31.u32 + 52, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_828F4DA8"))) PPC_WEAK_FUNC(sub_828F4DA8);
PPC_FUNC_IMPL(__imp__sub_828F4DA8) {
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
	// bl 0x828f6a90
	ctx.lr = 0x828F4DC0;
	sub_828F6A90(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,19796
	ctx.r10.s64 = 1297350656;
	// addi r11,r11,15032
	ctx.r11.s64 = ctx.r11.s64 + 15032;
	// ori r10,r10,21321
	ctx.r10.u64 = ctx.r10.u64 | 21321;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x825d2310
	ctx.lr = 0x828F4DE0;
	sub_825D2310(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x828f4df8
	if (ctx.cr6.eq) goto loc_828F4DF8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x828f4e10
	if (!ctx.cr6.eq) goto loc_828F4E10;
loc_828F4DF8:
	// lhz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// sth r11,52(r31)
	PPC_STORE_U16(ctx.r31.u32 + 52, ctx.r11.u16);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
loc_828F4E10:
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

__attribute__((alias("__imp__sub_828F4E28"))) PPC_WEAK_FUNC(sub_828F4E28);
PPC_FUNC_IMPL(__imp__sub_828F4E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x828F4E30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x825e6f70
	ctx.lr = 0x828F4E48;
	sub_825E6F70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f4e64
	if (ctx.cr0.eq) goto loc_828F4E64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828f4da8
	ctx.lr = 0x828F4E60;
	sub_828F4DA8(ctx, base);
	// b 0x828f4e68
	goto loc_828F4E68;
loc_828F4E64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828F4E68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F4E70"))) PPC_WEAK_FUNC(sub_828F4E70);
PPC_FUNC_IMPL(__imp__sub_828F4E70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x828F4E78;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r30,r31,112
	ctx.r30.s64 = ctx.r31.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lfs f0,2128(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lfs f3,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825e80a8
	ctx.lr = 0x828F4EB8;
	sub_825E80A8(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r29,r31,96
	ctx.r29.s64 = ctx.r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f3,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825e80a8
	ctx.lr = 0x828F4ED4;
	sub_825E80A8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e8138
	ctx.lr = 0x828F4EE0;
	sub_825E8138(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,3548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825e8170
	ctx.lr = 0x828F4EF0;
	sub_825E8170(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825e80d8
	ctx.lr = 0x828F4EFC;
	sub_825E80D8(ctx, base);
	// lfs f1,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82630b48
	ctx.lr = 0x828F4F04;
	sub_82630B48(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f1,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82630b48
	ctx.lr = 0x828F4F10;
	sub_82630B48(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lfs f1,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82630b48
	ctx.lr = 0x828F4F1C;
	sub_82630B48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x825e80a8
	ctx.lr = 0x828F4F2C;
	sub_825E80A8(ctx, base);
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F4F48"))) PPC_WEAK_FUNC(sub_828F4F48);
PPC_FUNC_IMPL(__imp__sub_828F4F48) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lhz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 52);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r3,64
	ctx.r6.s64 = ctx.r3.s64 + 64;
	// lwz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x828f6fc0
	sub_828F6FC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F4F74"))) PPC_WEAK_FUNC(sub_828F4F74);
PPC_FUNC_IMPL(__imp__sub_828F4F74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F4F78"))) PPC_WEAK_FUNC(sub_828F4F78);
PPC_FUNC_IMPL(__imp__sub_828F4F78) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r6,r3,64
	ctx.r6.s64 = ctx.r3.s64 + 64;
	// lwz r7,40(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x821e0968
	sub_821E0968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F4F98"))) PPC_WEAK_FUNC(sub_828F4F98);
PPC_FUNC_IMPL(__imp__sub_828F4F98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F4FA0"))) PPC_WEAK_FUNC(sub_828F4FA0);
PPC_FUNC_IMPL(__imp__sub_828F4FA0) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,15032
	ctx.r11.s64 = ctx.r11.s64 + 15032;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828f6b38
	ctx.lr = 0x828F4FCC;
	sub_828F6B38(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f4fdc
	if (ctx.cr0.eq) goto loc_828F4FDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e6f78
	ctx.lr = 0x828F4FDC;
	sub_825E6F78(ctx, base);
loc_828F4FDC:
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

__attribute__((alias("__imp__sub_828F4FF8"))) PPC_WEAK_FUNC(sub_828F4FF8);
PPC_FUNC_IMPL(__imp__sub_828F4FF8) {
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
	// bl 0x828f6a90
	ctx.lr = 0x828F5010;
	sub_828F6A90(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,21586
	ctx.r10.s64 = 1414660096;
	// addi r11,r11,15088
	ctx.r11.s64 = ctx.r11.s64 + 15088;
	// ori r10,r10,16728
	ctx.r10.u64 = ctx.r10.u64 | 16728;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x825d2310
	ctx.lr = 0x828F5030;
	sub_825D2310(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x825d2310
	ctx.lr = 0x828F5038;
	sub_825D2310(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x828f5050
	if (ctx.cr6.eq) goto loc_828F5050;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x828f5068
	if (!ctx.cr6.eq) goto loc_828F5068;
loc_828F5050:
	// lhz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// sth r11,52(r31)
	PPC_STORE_U16(ctx.r31.u32 + 52, ctx.r11.u16);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
loc_828F5068:
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

__attribute__((alias("__imp__sub_828F5080"))) PPC_WEAK_FUNC(sub_828F5080);
PPC_FUNC_IMPL(__imp__sub_828F5080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x828F5088;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,112
	ctx.r3.s64 = 112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x825e6f70
	ctx.lr = 0x828F50A0;
	sub_825E6F70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f50bc
	if (ctx.cr0.eq) goto loc_828F50BC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828f4ff8
	ctx.lr = 0x828F50B8;
	sub_828F4FF8(ctx, base);
	// b 0x828f50c0
	goto loc_828F50C0;
loc_828F50BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828F50C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F50C8"))) PPC_WEAK_FUNC(sub_828F50C8);
PPC_FUNC_IMPL(__imp__sub_828F50C8) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lhz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 52);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r3,64
	ctx.r6.s64 = ctx.r3.s64 + 64;
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x828f6fc0
	sub_828F6FC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F50F4"))) PPC_WEAK_FUNC(sub_828F50F4);
PPC_FUNC_IMPL(__imp__sub_828F50F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F50F8"))) PPC_WEAK_FUNC(sub_828F50F8);
PPC_FUNC_IMPL(__imp__sub_828F50F8) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r6,r3,64
	ctx.r6.s64 = ctx.r3.s64 + 64;
	// lwz r7,36(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x821e0968
	sub_821E0968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F5118"))) PPC_WEAK_FUNC(sub_828F5118);
PPC_FUNC_IMPL(__imp__sub_828F5118) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F5120"))) PPC_WEAK_FUNC(sub_828F5120);
PPC_FUNC_IMPL(__imp__sub_828F5120) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,15088
	ctx.r11.s64 = ctx.r11.s64 + 15088;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828f6b38
	ctx.lr = 0x828F514C;
	sub_828F6B38(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f515c
	if (ctx.cr0.eq) goto loc_828F515C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e6f78
	ctx.lr = 0x828F515C;
	sub_825E6F78(ctx, base);
loc_828F515C:
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

__attribute__((alias("__imp__sub_828F5178"))) PPC_WEAK_FUNC(sub_828F5178);
PPC_FUNC_IMPL(__imp__sub_828F5178) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x828f51d4
	if (ctx.cr6.lt) goto loc_828F51D4;
	// bne cr6,0x828f51f8
	if (!ctx.cr6.eq) goto loc_828F51F8;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lfs f0,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lhz r10,18(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 18);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x828f51f4
	goto loc_828F51F4;
loc_828F51D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f6dd8
	ctx.lr = 0x828F51DC;
	sub_828F6DD8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lhz r11,18(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 18);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_828F51F4:
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_828F51F8:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r6,r30,2
	ctx.r6.s64 = ctx.r30.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828f2138
	ctx.lr = 0x828F5210;
	sub_828F2138(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r6,r30,1
	ctx.r6.s64 = ctx.r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f2,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828f2138
	ctx.lr = 0x828F522C;
	sub_828F2138(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lfs f2,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828f2138
	ctx.lr = 0x828F5248;
	sub_828F2138(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x825e80a8
	ctx.lr = 0x828F5258;
	sub_825E80A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
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

__attribute__((alias("__imp__sub_828F5278"))) PPC_WEAK_FUNC(sub_828F5278);
PPC_FUNC_IMPL(__imp__sub_828F5278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828f5178
	ctx.lr = 0x828F5290;
	sub_828F5178(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi r4,0
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x828f52e4
	if (ctx.cr0.eq) goto loc_828F52E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f6e00
	ctx.lr = 0x828F52A8;
	sub_828F6E00(ctx, base);
	// fmuls f13,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,3548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x825e81f8
	ctx.lr = 0x828F52C4;
	sub_825E81F8(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
loc_828F52E4:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_828F5308"))) PPC_WEAK_FUNC(sub_828F5308);
PPC_FUNC_IMPL(__imp__sub_828F5308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lhz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f5360
	if (ctx.cr0.eq) goto loc_828F5360;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828f5354
	if (!ctx.cr6.eq) goto loc_828F5354;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// beq cr6,0x828f5354
	if (ctx.cr6.eq) goto loc_828F5354;
	// bl 0x828f5178
	ctx.lr = 0x828F5354;
	sub_828F5178(ctx, base);
loc_828F5354:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x825e80d8
	ctx.lr = 0x828F5360;
	sub_825E80D8(ctx, base);
loc_828F5360:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x828f6e00
	ctx.lr = 0x828F5370;
	sub_828F6E00(ctx, base);
	// fadds f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f1,f1
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmsubs f13,f0,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,3548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x825e81f8
	ctx.lr = 0x828F5394;
	sub_825E81F8(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// lhz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// sth r11,52(r31)
	PPC_STORE_U16(ctx.r31.u32 + 52, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F53D8"))) PPC_WEAK_FUNC(sub_828F53D8);
PPC_FUNC_IMPL(__imp__sub_828F53D8) {
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
	// bl 0x828f6a90
	ctx.lr = 0x828F53F0;
	sub_828F6A90(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,21586
	ctx.r10.s64 = 1414660096;
	// addi r11,r11,15144
	ctx.r11.s64 = ctx.r11.s64 + 15144;
	// ori r10,r10,16708
	ctx.r10.u64 = ctx.r10.u64 | 16708;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x825d2310
	ctx.lr = 0x828F5410;
	sub_825D2310(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x828f5428
	if (ctx.cr6.eq) goto loc_828F5428;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x828f5440
	if (!ctx.cr6.eq) goto loc_828F5440;
loc_828F5428:
	// lhz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// sth r11,52(r31)
	PPC_STORE_U16(ctx.r31.u32 + 52, ctx.r11.u16);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
loc_828F5440:
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

__attribute__((alias("__imp__sub_828F5458"))) PPC_WEAK_FUNC(sub_828F5458);
PPC_FUNC_IMPL(__imp__sub_828F5458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x828F5460;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,96
	ctx.r3.s64 = 96;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x825e6f70
	ctx.lr = 0x828F5478;
	sub_825E6F70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f5494
	if (ctx.cr0.eq) goto loc_828F5494;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828f53d8
	ctx.lr = 0x828F5490;
	sub_828F53D8(ctx, base);
	// b 0x828f5498
	goto loc_828F5498;
loc_828F5494:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828F5498:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F54A0"))) PPC_WEAK_FUNC(sub_828F54A0);
PPC_FUNC_IMPL(__imp__sub_828F54A0) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,15144
	ctx.r11.s64 = ctx.r11.s64 + 15144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828f6b38
	ctx.lr = 0x828F54CC;
	sub_828F6B38(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f54dc
	if (ctx.cr0.eq) goto loc_828F54DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e6f78
	ctx.lr = 0x828F54DC;
	sub_825E6F78(ctx, base);
loc_828F54DC:
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

__attribute__((alias("__imp__sub_828F54F8"))) PPC_WEAK_FUNC(sub_828F54F8);
PPC_FUNC_IMPL(__imp__sub_828F54F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828f2510
	ctx.lr = 0x828F5510;
	sub_828F2510(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x828f6e00
	ctx.lr = 0x828F5520;
	sub_828F6E00(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825e81f8
	ctx.lr = 0x828F552C;
	sub_825E81F8(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_828F5570"))) PPC_WEAK_FUNC(sub_828F5570);
PPC_FUNC_IMPL(__imp__sub_828F5570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lhz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f55d8
	if (ctx.cr0.eq) goto loc_828F55D8;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828f55bc
	if (!ctx.cr6.eq) goto loc_828F55BC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// beq cr6,0x828f55bc
	if (ctx.cr6.eq) goto loc_828F55BC;
	// bl 0x828f2510
	ctx.lr = 0x828F55BC;
	sub_828F2510(ctx, base);
loc_828F55BC:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825e81f8
	ctx.lr = 0x828F55CC;
	sub_825E81F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x825e80d8
	ctx.lr = 0x828F55D8;
	sub_825E80D8(ctx, base);
loc_828F55D8:
	// lhz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// sth r11,52(r31)
	PPC_STORE_U16(ctx.r31.u32 + 52, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_828F5600"))) PPC_WEAK_FUNC(sub_828F5600);
PPC_FUNC_IMPL(__imp__sub_828F5600) {
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
	// bl 0x828f6a90
	ctx.lr = 0x828F5618;
	sub_828F6A90(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,21586
	ctx.r10.s64 = 1414660096;
	// addi r11,r11,15200
	ctx.r11.s64 = ctx.r11.s64 + 15200;
	// ori r10,r10,20047
	ctx.r10.u64 = ctx.r10.u64 | 20047;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x825d2310
	ctx.lr = 0x828F5638;
	sub_825D2310(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x828f5650
	if (ctx.cr6.eq) goto loc_828F5650;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x828f5668
	if (!ctx.cr6.eq) goto loc_828F5668;
loc_828F5650:
	// lhz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// sth r11,52(r31)
	PPC_STORE_U16(ctx.r31.u32 + 52, ctx.r11.u16);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
loc_828F5668:
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

__attribute__((alias("__imp__sub_828F5680"))) PPC_WEAK_FUNC(sub_828F5680);
PPC_FUNC_IMPL(__imp__sub_828F5680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x828F5688;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,96
	ctx.r3.s64 = 96;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x825e6f70
	ctx.lr = 0x828F56A0;
	sub_825E6F70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f56bc
	if (ctx.cr0.eq) goto loc_828F56BC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828f5600
	ctx.lr = 0x828F56B8;
	sub_828F5600(ctx, base);
	// b 0x828f56c0
	goto loc_828F56C0;
loc_828F56BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828F56C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F56C8"))) PPC_WEAK_FUNC(sub_828F56C8);
PPC_FUNC_IMPL(__imp__sub_828F56C8) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lhz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 52);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r3,64
	ctx.r6.s64 = ctx.r3.s64 + 64;
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x828f6fc0
	sub_828F6FC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F56F4"))) PPC_WEAK_FUNC(sub_828F56F4);
PPC_FUNC_IMPL(__imp__sub_828F56F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F56F8"))) PPC_WEAK_FUNC(sub_828F56F8);
PPC_FUNC_IMPL(__imp__sub_828F56F8) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r6,r3,64
	ctx.r6.s64 = ctx.r3.s64 + 64;
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x821e0968
	sub_821E0968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F5718"))) PPC_WEAK_FUNC(sub_828F5718);
PPC_FUNC_IMPL(__imp__sub_828F5718) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F5720"))) PPC_WEAK_FUNC(sub_828F5720);
PPC_FUNC_IMPL(__imp__sub_828F5720) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,15200
	ctx.r11.s64 = ctx.r11.s64 + 15200;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828f6b38
	ctx.lr = 0x828F574C;
	sub_828F6B38(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f575c
	if (ctx.cr0.eq) goto loc_828F575C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e6f78
	ctx.lr = 0x828F575C;
	sub_825E6F78(ctx, base);
loc_828F575C:
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

__attribute__((alias("__imp__sub_828F5778"))) PPC_WEAK_FUNC(sub_828F5778);
PPC_FUNC_IMPL(__imp__sub_828F5778) {
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
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828f57bc
	if (!ctx.cr6.eq) goto loc_828F57BC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x828f57bc
	if (ctx.cr6.eq) goto loc_828F57BC;
	// lhz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f57bc
	if (ctx.cr0.eq) goto loc_828F57BC;
	// bl 0x828f2510
	ctx.lr = 0x828F57BC;
	sub_828F2510(ctx, base);
loc_828F57BC:
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f0,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f0,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lfs f0,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lhz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// sth r11,52(r31)
	PPC_STORE_U16(ctx.r31.u32 + 52, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_828F5800"))) PPC_WEAK_FUNC(sub_828F5800);
PPC_FUNC_IMPL(__imp__sub_828F5800) {
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
	// bl 0x828f6a90
	ctx.lr = 0x828F5818;
	sub_828F6A90(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,19796
	ctx.r10.s64 = 1297350656;
	// addi r11,r11,15256
	ctx.r11.s64 = ctx.r11.s64 + 15256;
	// ori r10,r10,16728
	ctx.r10.u64 = ctx.r10.u64 | 16728;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x825d2310
	ctx.lr = 0x828F5838;
	sub_825D2310(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x828f5850
	if (ctx.cr6.eq) goto loc_828F5850;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x828f5868
	if (!ctx.cr6.eq) goto loc_828F5868;
loc_828F5850:
	// lhz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// sth r11,52(r31)
	PPC_STORE_U16(ctx.r31.u32 + 52, ctx.r11.u16);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
loc_828F5868:
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

__attribute__((alias("__imp__sub_828F5880"))) PPC_WEAK_FUNC(sub_828F5880);
PPC_FUNC_IMPL(__imp__sub_828F5880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x828F5888;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,96
	ctx.r3.s64 = 96;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x825e6f70
	ctx.lr = 0x828F58A0;
	sub_825E6F70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f58bc
	if (ctx.cr0.eq) goto loc_828F58BC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828f5800
	ctx.lr = 0x828F58B8;
	sub_828F5800(ctx, base);
	// b 0x828f58c0
	goto loc_828F58C0;
loc_828F58BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828F58C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F58C8"))) PPC_WEAK_FUNC(sub_828F58C8);
PPC_FUNC_IMPL(__imp__sub_828F58C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828f6e00
	ctx.lr = 0x828F58E8;
	sub_828F6E00(ctx, base);
	// fmuls f13,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,3548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x825e81f8
	ctx.lr = 0x828F5904;
	sub_825E81F8(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
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

__attribute__((alias("__imp__sub_828F5938"))) PPC_WEAK_FUNC(sub_828F5938);
PPC_FUNC_IMPL(__imp__sub_828F5938) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r6,r3,64
	ctx.r6.s64 = ctx.r3.s64 + 64;
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x821e0968
	sub_821E0968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F5958"))) PPC_WEAK_FUNC(sub_828F5958);
PPC_FUNC_IMPL(__imp__sub_828F5958) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F5960"))) PPC_WEAK_FUNC(sub_828F5960);
PPC_FUNC_IMPL(__imp__sub_828F5960) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,15256
	ctx.r11.s64 = ctx.r11.s64 + 15256;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828f6b38
	ctx.lr = 0x828F598C;
	sub_828F6B38(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f599c
	if (ctx.cr0.eq) goto loc_828F599C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e6f78
	ctx.lr = 0x828F599C;
	sub_825E6F78(ctx, base);
loc_828F599C:
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

__attribute__((alias("__imp__sub_828F59B8"))) PPC_WEAK_FUNC(sub_828F59B8);
PPC_FUNC_IMPL(__imp__sub_828F59B8) {
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
	// bl 0x828f6a90
	ctx.lr = 0x828F59D0;
	sub_828F6A90(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,19796
	ctx.r10.s64 = 1297350656;
	// addi r11,r11,15312
	ctx.r11.s64 = ctx.r11.s64 + 15312;
	// ori r10,r10,16708
	ctx.r10.u64 = ctx.r10.u64 | 16708;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x825d2310
	ctx.lr = 0x828F59F0;
	sub_825D2310(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x828f5a08
	if (ctx.cr6.eq) goto loc_828F5A08;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x828f5a20
	if (!ctx.cr6.eq) goto loc_828F5A20;
loc_828F5A08:
	// lhz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// sth r11,52(r31)
	PPC_STORE_U16(ctx.r31.u32 + 52, ctx.r11.u16);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
loc_828F5A20:
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

__attribute__((alias("__imp__sub_828F5A38"))) PPC_WEAK_FUNC(sub_828F5A38);
PPC_FUNC_IMPL(__imp__sub_828F5A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x828F5A40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,96
	ctx.r3.s64 = 96;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x825e6f70
	ctx.lr = 0x828F5A58;
	sub_825E6F70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f5a74
	if (ctx.cr0.eq) goto loc_828F5A74;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828f59b8
	ctx.lr = 0x828F5A70;
	sub_828F59B8(ctx, base);
	// b 0x828f5a78
	goto loc_828F5A78;
loc_828F5A74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828F5A78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F5A80"))) PPC_WEAK_FUNC(sub_828F5A80);
PPC_FUNC_IMPL(__imp__sub_828F5A80) {
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
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lfs f3,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825e80a8
	ctx.lr = 0x828F5AAC;
	sub_825E80A8(ctx, base);
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
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

__attribute__((alias("__imp__sub_828F5AD0"))) PPC_WEAK_FUNC(sub_828F5AD0);
PPC_FUNC_IMPL(__imp__sub_828F5AD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828f6e00
	ctx.lr = 0x828F5AF0;
	sub_828F6E00(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825e81f8
	ctx.lr = 0x828F5AFC;
	sub_825E81F8(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
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

__attribute__((alias("__imp__sub_828F5B30"))) PPC_WEAK_FUNC(sub_828F5B30);
PPC_FUNC_IMPL(__imp__sub_828F5B30) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lhz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 52);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r3,64
	ctx.r6.s64 = ctx.r3.s64 + 64;
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x828f6fc0
	sub_828F6FC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F5B5C"))) PPC_WEAK_FUNC(sub_828F5B5C);
PPC_FUNC_IMPL(__imp__sub_828F5B5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F5B60"))) PPC_WEAK_FUNC(sub_828F5B60);
PPC_FUNC_IMPL(__imp__sub_828F5B60) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,15312
	ctx.r11.s64 = ctx.r11.s64 + 15312;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828f6b38
	ctx.lr = 0x828F5B8C;
	sub_828F6B38(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f5b9c
	if (ctx.cr0.eq) goto loc_828F5B9C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e6f78
	ctx.lr = 0x828F5B9C;
	sub_825E6F78(ctx, base);
loc_828F5B9C:
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

__attribute__((alias("__imp__sub_828F5BB8"))) PPC_WEAK_FUNC(sub_828F5BB8);
PPC_FUNC_IMPL(__imp__sub_828F5BB8) {
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
	// bl 0x828f8fd0
	ctx.lr = 0x828F5BD0;
	sub_828F8FD0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,15368
	ctx.r10.s64 = ctx.r11.s64 + 15368;
	// lis r11,16715
	ctx.r11.s64 = 1095434240;
	// ori r9,r11,19795
	ctx.r9.u64 = ctx.r11.u64 | 19795;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
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

__attribute__((alias("__imp__sub_828F5C28"))) PPC_WEAK_FUNC(sub_828F5C28);
PPC_FUNC_IMPL(__imp__sub_828F5C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x828F5C30;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,15368
	ctx.r11.s64 = ctx.r11.s64 + 15368;
	// addi r30,r29,16
	ctx.r30.s64 = ctx.r29.s64 + 16;
	// li r28,5
	ctx.r28.s64 = 5;
	// lis r27,-32044
	ctx.r27.s64 = -2100035584;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_828F5C50:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x828f5c84
	if (ctx.cr0.eq) goto loc_828F5C84;
loc_828F5C5C:
	// lwz r3,-17740(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -17740);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r31,8(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F5C78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x828f5c5c
	if (!ctx.cr6.eq) goto loc_828F5C5C;
loc_828F5C84:
	// li r11,0
	ctx.r11.s64 = 0;
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x828f5c50
	if (!ctx.cr0.eq) goto loc_828F5C50;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828f9018
	ctx.lr = 0x828F5CA0;
	sub_828F9018(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F5CA8"))) PPC_WEAK_FUNC(sub_828F5CA8);
PPC_FUNC_IMPL(__imp__sub_828F5CA8) {
	PPC_FUNC_PROLOGUE();
	// li r11,5
	ctx.r11.s64 = 5;
	// divwu r11,r4,r11
	ctx.r11.u32 = ctx.r4.u32 / ctx.r11.u32;
	// mulli r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 * 5;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// b 0x828f5cd8
	goto loc_828F5CD8;
loc_828F5CC8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x828f5ce8
	if (ctx.cr6.eq) goto loc_828F5CE8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_828F5CD8:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x828f5cc8
	if (!ctx.cr0.eq) goto loc_828F5CC8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_828F5CE8:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F5CF0"))) PPC_WEAK_FUNC(sub_828F5CF0);
PPC_FUNC_IMPL(__imp__sub_828F5CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x828F5CF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x828f5e00
	if (ctx.cr6.eq) goto loc_828F5E00;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x828F5D18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,5
	ctx.r11.s64 = 5;
	// divwu r11,r3,r11
	ctx.r11.u32 = ctx.r3.u32 / ctx.r11.u32;
	// mulli r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 * 5;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r30,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x828f5d9c
	if (!ctx.cr0.eq) goto loc_828F5D9C;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r3,-17740(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17740);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F5D5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stwx r3,r30,r29
	PPC_STORE_U32(ctx.r30.u32 + ctx.r29.u32, ctx.r3.u32);
	// beq 0x828f5df4
	if (ctx.cr0.eq) goto loc_828F5DF4;
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x828F5D74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// b 0x828f5dec
	goto loc_828F5DEC;
loc_828F5D84:
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x828F5D8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x828f5e00
	if (ctx.cr6.eq) goto loc_828F5E00;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_828F5D9C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828f5d84
	if (!ctx.cr6.eq) goto loc_828F5D84;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r3,-17740(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17740);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F5DC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// beq 0x828f5df4
	if (ctx.cr0.eq) goto loc_828F5DF4;
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x828F5DE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_828F5DEC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_828F5DF4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_828F5DF8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_828F5E00:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x828f5df8
	goto loc_828F5DF8;
}

__attribute__((alias("__imp__sub_828F5E08"))) PPC_WEAK_FUNC(sub_828F5E08);
PPC_FUNC_IMPL(__imp__sub_828F5E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// lwz r10,13844(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13844);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828f5e20
	if (ctx.cr6.eq) goto loc_828F5E20;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_828F5E20:
	// stw r3,13844(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13844, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F5E30"))) PPC_WEAK_FUNC(sub_828F5E30);
PPC_FUNC_IMPL(__imp__sub_828F5E30) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,13844(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13844, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F5E40"))) PPC_WEAK_FUNC(sub_828F5E40);
PPC_FUNC_IMPL(__imp__sub_828F5E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// lwz r3,13844(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13844);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F5E50"))) PPC_WEAK_FUNC(sub_828F5E50);
PPC_FUNC_IMPL(__imp__sub_828F5E50) {
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
	// bl 0x828f5c28
	ctx.lr = 0x828F5E70;
	sub_828F5C28(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f5e80
	if (ctx.cr0.eq) goto loc_828F5E80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e6f78
	ctx.lr = 0x828F5E80;
	sub_825E6F78(ctx, base);
loc_828F5E80:
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

__attribute__((alias("__imp__sub_828F5EA0"))) PPC_WEAK_FUNC(sub_828F5EA0);
PPC_FUNC_IMPL(__imp__sub_828F5EA0) {
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
	// bl 0x828f6a90
	ctx.lr = 0x828F5EB8;
	sub_828F6A90(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lis r10,19796
	ctx.r10.s64 = 1297350656;
	// addi r11,r11,15372
	ctx.r11.s64 = ctx.r11.s64 + 15372;
	// ori r10,r10,20047
	ctx.r10.u64 = ctx.r10.u64 | 20047;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x828f5ee8
	if (ctx.cr6.eq) goto loc_828F5EE8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x828f5f00
	if (!ctx.cr6.eq) goto loc_828F5F00;
loc_828F5EE8:
	// lhz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// sth r11,52(r31)
	PPC_STORE_U16(ctx.r31.u32 + 52, ctx.r11.u16);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
loc_828F5F00:
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

__attribute__((alias("__imp__sub_828F5F18"))) PPC_WEAK_FUNC(sub_828F5F18);
PPC_FUNC_IMPL(__imp__sub_828F5F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x828F5F20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,60
	ctx.r3.s64 = 60;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x825e6f70
	ctx.lr = 0x828F5F38;
	sub_825E6F70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f5f54
	if (ctx.cr0.eq) goto loc_828F5F54;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828f5ea0
	ctx.lr = 0x828F5F50;
	sub_828F5EA0(ctx, base);
	// b 0x828f5f58
	goto loc_828F5F58;
loc_828F5F54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828F5F58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F5F60"))) PPC_WEAK_FUNC(sub_828F5F60);
PPC_FUNC_IMPL(__imp__sub_828F5F60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f5fb4
	if (ctx.cr0.eq) goto loc_828F5FB4;
	// lhz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 52);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828f5fb4
	if (!ctx.cr0.eq) goto loc_828F5FB4;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f3,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825e80a8
	ctx.lr = 0x828F5FA4;
	sub_825E80A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8262fdd8
	ctx.lr = 0x828F5FB4;
	sub_8262FDD8(ctx, base);
loc_828F5FB4:
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

__attribute__((alias("__imp__sub_828F5FC8"))) PPC_WEAK_FUNC(sub_828F5FC8);
PPC_FUNC_IMPL(__imp__sub_828F5FC8) {
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
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f6024
	if (ctx.cr0.eq) goto loc_828F6024;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f3,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825e80a8
	ctx.lr = 0x828F6008;
	sub_825E80A8(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x821e0968
	ctx.lr = 0x828F6024;
	sub_821E0968(ctx, base);
loc_828F6024:
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

__attribute__((alias("__imp__sub_828F6040"))) PPC_WEAK_FUNC(sub_828F6040);
PPC_FUNC_IMPL(__imp__sub_828F6040) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,15372
	ctx.r11.s64 = ctx.r11.s64 + 15372;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828f6b38
	ctx.lr = 0x828F606C;
	sub_828F6B38(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f607c
	if (ctx.cr0.eq) goto loc_828F607C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e6f78
	ctx.lr = 0x828F607C;
	sub_825E6F78(ctx, base);
loc_828F607C:
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

__attribute__((alias("__imp__sub_828F6098"))) PPC_WEAK_FUNC(sub_828F6098);
PPC_FUNC_IMPL(__imp__sub_828F6098) {
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
	// bl 0x828f8fd0
	ctx.lr = 0x828F60B8;
	sub_828F8FD0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,15428
	ctx.r11.s64 = ctx.r11.s64 + 15428;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828f9028
	ctx.lr = 0x828F60CC;
	sub_828F9028(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// bl 0x828f9140
	ctx.lr = 0x828F60D8;
	sub_828F9140(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// bl 0x828fc3e8
	ctx.lr = 0x828F60F0;
	sub_828FC3E8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// sth r30,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r30.u16);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// bne 0x828f6134
	if (!ctx.cr0.eq) goto loc_828F6134;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,17
	ctx.r10.s64 = 17;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
loc_828F6134:
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

__attribute__((alias("__imp__sub_828F6150"))) PPC_WEAK_FUNC(sub_828F6150);
PPC_FUNC_IMPL(__imp__sub_828F6150) {
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
	// bl 0x828f8fd0
	ctx.lr = 0x828F6170;
	sub_828F8FD0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,15428
	ctx.r11.s64 = ctx.r11.s64 + 15428;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// bl 0x828f9140
	ctx.lr = 0x828F618C;
	sub_828F9140(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// lwz r10,68(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// bne cr6,0x828f6208
	if (!ctx.cr6.eq) goto loc_828F6208;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// sth r10,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r10.u16);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_828F6208:
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

__attribute__((alias("__imp__sub_828F6228"))) PPC_WEAK_FUNC(sub_828F6228);
PPC_FUNC_IMPL(__imp__sub_828F6228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x828F6230;
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
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x828f62cc
	if (ctx.cr6.eq) goto loc_828F62CC;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828f62cc
	if (!ctx.cr0.eq) goto loc_828F62CC;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x828f5ca8
	ctx.lr = 0x828F6260;
	sub_828F5CA8(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f6290
	if (ctx.cr0.eq) goto loc_828F6290;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F6274;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x828f62a8
	if (!ctx.cr6.eq) goto loc_828F62A8;
loc_828F6290:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// li r10,4
	ctx.r10.s64 = 4;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// b 0x828f62cc
	goto loc_828F62CC;
loc_828F62A8:
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F62C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r11,r29
	PPC_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u8);
loc_828F62CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F62D8"))) PPC_WEAK_FUNC(sub_828F62D8);
PPC_FUNC_IMPL(__imp__sub_828F62D8) {
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
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828f6344
	if (!ctx.cr0.eq) goto loc_828F6344;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x828f6344
	if (ctx.cr6.eq) goto loc_828F6344;
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lbzx r9,r9,r30
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r30.u32);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828f6344
	if (!ctx.cr0.eq) goto loc_828F6344;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f6344
	if (ctx.cr0.eq) goto loc_828F6344;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F6344;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F6344:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_828F6370"))) PPC_WEAK_FUNC(sub_828F6370);
PPC_FUNC_IMPL(__imp__sub_828F6370) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x828f9208
	ctx.lr = 0x828F6394;
	sub_828F9208(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x828f63a4
	if (ctx.cr6.lt) goto loc_828F63A4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x828f63cc
	goto loc_828F63CC;
loc_828F63A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x828f9140
	ctx.lr = 0x828F63C0;
	sub_828F9140(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_828F63CC:
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

__attribute__((alias("__imp__sub_828F63E8"))) PPC_WEAK_FUNC(sub_828F63E8);
PPC_FUNC_IMPL(__imp__sub_828F63E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x828f63f8
	if (!ctx.cr0.eq) goto loc_828F63F8;
	// blr 
	return;
loc_828F63F8:
	// b 0x828f9208
	sub_828F9208(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F6400"))) PPC_WEAK_FUNC(sub_828F6400);
PPC_FUNC_IMPL(__imp__sub_828F6400) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x828f641c
	if (ctx.cr6.lt) goto loc_828F641C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_828F641C:
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F6440"))) PPC_WEAK_FUNC(sub_828F6440);
PPC_FUNC_IMPL(__imp__sub_828F6440) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x828f645c
	if (ctx.cr6.lt) goto loc_828F645C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_828F645C:
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// lwz r10,72(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F6480"))) PPC_WEAK_FUNC(sub_828F6480);
PPC_FUNC_IMPL(__imp__sub_828F6480) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x828f64a0
	if (!ctx.cr6.eq) goto loc_828F64A0;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,188(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 188);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_828F64A0:
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,184(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r8,188(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_828F64BC:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x828f64e0
	if (ctx.cr6.eq) goto loc_828F64E0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x828f64bc
	if (ctx.cr6.lt) goto loc_828F64BC;
	// blr 
	return;
loc_828F64E0:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F64F0"))) PPC_WEAK_FUNC(sub_828F64F0);
PPC_FUNC_IMPL(__imp__sub_828F64F0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x828f6510
	if (!ctx.cr6.eq) goto loc_828F6510;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,188(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 188);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_828F6510:
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,184(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r8,188(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_828F652C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x828f6550
	if (ctx.cr6.eq) goto loc_828F6550;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x828f652c
	if (ctx.cr6.lt) goto loc_828F652C;
	// blr 
	return;
loc_828F6550:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F6560"))) PPC_WEAK_FUNC(sub_828F6560);
PPC_FUNC_IMPL(__imp__sub_828F6560) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x828f657c
	if (!ctx.cr6.eq) goto loc_828F657C;
	// lwz r11,28(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_828F657C:
	// lwz r10,28(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,184(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 184);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x828f65c0
	if (ctx.cr0.eq) goto loc_828F65C0;
	// lwz r7,188(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 188);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_828F6598:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x828f65c8
	if (ctx.cr6.eq) goto loc_828F65C8;
	// lwz r9,28(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,184(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 184);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x828f6598
	if (ctx.cr6.lt) goto loc_828F6598;
loc_828F65C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_828F65C8:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x828f65c0
	if (!ctx.cr6.lt) goto loc_828F65C0;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F65F8"))) PPC_WEAK_FUNC(sub_828F65F8);
PPC_FUNC_IMPL(__imp__sub_828F65F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x828F6600;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lhz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// andi. r11,r10,65533
	ctx.r11.u64 = ctx.r10.u64 & 65533;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// bne cr6,0x828f663c
	if (!ctx.cr6.eq) goto loc_828F663C;
	// li r10,2
	ctx.r10.s64 = 2;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// b 0x828f682c
	goto loc_828F682C;
loc_828F663C:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x828f9238
	ctx.lr = 0x828F6644;
	sub_828F9238(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x828f9390
	ctx.lr = 0x828F664C;
	sub_828F9390(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828f678c
	if (!ctx.cr6.eq) goto loc_828F678C;
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// rlwinm r30,r27,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-17740(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17740);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F6680;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// li r28,8
	ctx.r28.s64 = 8;
	// beq 0x828f66a0
	if (ctx.cr0.eq) goto loc_828F66A0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826312e8
	ctx.lr = 0x828F669C;
	sub_826312E8(ctx, base);
	// b 0x828f66b0
	goto loc_828F66B0;
loc_828F66A0:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// stw r28,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r28.u32);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
loc_828F66B0:
	// lwz r3,-17740(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17740);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F66CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// beq 0x828f66e8
	if (ctx.cr0.eq) goto loc_828F66E8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826312e8
	ctx.lr = 0x828F66E4;
	sub_826312E8(ctx, base);
	// b 0x828f66f8
	goto loc_828F66F8;
loc_828F66E8:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// stw r28,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r28.u32);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
loc_828F66F8:
	// lwz r3,-17740(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17740);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F6714;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// beq 0x828f6730
	if (ctx.cr0.eq) goto loc_828F6730;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,255
	ctx.r4.s64 = 255;
	// bl 0x826312e8
	ctx.lr = 0x828F672C;
	sub_826312E8(ctx, base);
	// b 0x828f6740
	goto loc_828F6740;
loc_828F6730:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// stw r28,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r28.u32);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
loc_828F6740:
	// lwz r3,-17740(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17740);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F675C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// beq 0x828f6778
	if (ctx.cr0.eq) goto loc_828F6778;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826312e8
	ctx.lr = 0x828F6774;
	sub_826312E8(ctx, base);
	// b 0x828f6788
	goto loc_828F6788;
loc_828F6778:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// stw r28,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r28.u32);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
loc_828F6788:
	// stw r27,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r27.u32);
loc_828F678C:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// bne 0x828f6828
	if (!ctx.cr0.eq) goto loc_828F6828;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x828f6828
	if (ctx.cr6.eq) goto loc_828F6828;
	// li r29,0
	ctx.r29.s64 = 0;
loc_828F67B4:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828f6818
	if (!ctx.cr6.eq) goto loc_828F6818;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x828f92f0
	ctx.lr = 0x828F67D0;
	sub_828F92F0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x828f9340
	ctx.lr = 0x828F67E0;
	sub_828F9340(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stwx r3,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r3.u32);
	// beq cr6,0x828f6818
	if (ctx.cr6.eq) goto loc_828F6818;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r10,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F6818;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F6818:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x828f67b4
	if (ctx.cr6.lt) goto loc_828F67B4;
loc_828F6828:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
loc_828F682C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F6838"))) PPC_WEAK_FUNC(sub_828F6838);
PPC_FUNC_IMPL(__imp__sub_828F6838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x828F6840;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// beq cr6,0x828f6890
	if (ctx.cr6.eq) goto loc_828F6890;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x828f68e0
	if (!ctx.cr6.gt) goto loc_828F68E0;
loc_828F6864:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F687C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x828f6864
	if (ctx.cr6.lt) goto loc_828F6864;
	// b 0x828f68e0
	goto loc_828F68E0;
loc_828F6890:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x828f68e0
	if (!ctx.cr6.gt) goto loc_828F68E0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_828F689C:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828f68cc
	if (ctx.cr0.eq) goto loc_828F68CC;
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x828f68cc
	if (!ctx.cr6.eq) goto loc_828F68CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F68CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F68CC:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x828f689c
	if (ctx.cr6.lt) goto loc_828F689C;
loc_828F68E0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F68F0"))) PPC_WEAK_FUNC(sub_828F68F0);
PPC_FUNC_IMPL(__imp__sub_828F68F0) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f6904
	if (ctx.cr0.eq) goto loc_828F6904;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_828F6904:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F6918"))) PPC_WEAK_FUNC(sub_828F6918);
PPC_FUNC_IMPL(__imp__sub_828F6918) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x828f91a0
	sub_828F91A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F6920"))) PPC_WEAK_FUNC(sub_828F6920);
PPC_FUNC_IMPL(__imp__sub_828F6920) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,15428
	ctx.r11.s64 = ctx.r11.s64 + 15428;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne cr6,0x828f6a1c
	if (!ctx.cr6.eq) goto loc_828F6A1C;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x828f6988
	if (!ctx.cr6.gt) goto loc_828F6988;
loc_828F6960:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F6978;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x828f6960
	if (ctx.cr6.lt) goto loc_828F6960;
loc_828F6988:
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x828f69b0
	if (ctx.cr0.eq) goto loc_828F69B0;
	// lwz r3,-17740(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17740);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F69B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F69B0:
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x828f69d4
	if (ctx.cr0.eq) goto loc_828F69D4;
	// lwz r3,-17740(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17740);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F69D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F69D4:
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x828f69f8
	if (ctx.cr0.eq) goto loc_828F69F8;
	// lwz r3,-17740(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17740);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F69F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F69F8:
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x828f6a1c
	if (ctx.cr0.eq) goto loc_828F6A1C;
	// lwz r3,-17740(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17740);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F6A1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F6A1C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f9018
	ctx.lr = 0x828F6A24;
	sub_828F9018(ctx, base);
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

__attribute__((alias("__imp__sub_828F6A40"))) PPC_WEAK_FUNC(sub_828F6A40);
PPC_FUNC_IMPL(__imp__sub_828F6A40) {
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
	// bl 0x828f6920
	ctx.lr = 0x828F6A60;
	sub_828F6920(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f6a70
	if (ctx.cr0.eq) goto loc_828F6A70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e6f78
	ctx.lr = 0x828F6A70;
	sub_825E6F78(ctx, base);
loc_828F6A70:
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

__attribute__((alias("__imp__sub_828F6A90"))) PPC_WEAK_FUNC(sub_828F6A90);
PPC_FUNC_IMPL(__imp__sub_828F6A90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x828F6A98;
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x828f8fd0
	ctx.lr = 0x828F6AB0;
	sub_828F8FD0(ctx, base);
	// lis r10,16715
	ctx.r10.s64 = 1095434240;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// ori r9,r10,19778
	ctx.r9.u64 = ctx.r10.u64 | 19778;
	// stw r28,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,15440
	ctx.r11.s64 = ctx.r11.s64 + 15440;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lhz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rlwinm r9,r9,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,28(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// sth r10,52(r31)
	PPC_STORE_U16(ctx.r31.u32 + 52, ctx.r10.u16);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,32(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// sth r9,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r9.u16);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F6B38"))) PPC_WEAK_FUNC(sub_828F6B38);
PPC_FUNC_IMPL(__imp__sub_828F6B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,15440
	ctx.r11.s64 = ctx.r11.s64 + 15440;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// sth r11,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r11.u16);
	// b 0x828f9018
	sub_828F9018(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F6B58"))) PPC_WEAK_FUNC(sub_828F6B58);
PPC_FUNC_IMPL(__imp__sub_828F6B58) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lfs f12,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x828f6bec
	if (ctx.cr6.gt) goto loc_828F6BEC;
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x828f6bac
	if (ctx.cr6.lt) goto loc_828F6BAC;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x828f6bec
	if (ctx.cr6.lt) goto loc_828F6BEC;
loc_828F6BAC:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828f6be0
	if (!ctx.cr0.eq) goto loc_828F6BE0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F6BD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// ori r11,r11,17
	ctx.r11.u64 = ctx.r11.u64 | 17;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_828F6BE0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x828f6c48
	goto loc_828F6C48;
loc_828F6BEC:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x828f6c5c
	if (ctx.cr0.eq) goto loc_828F6C5C;
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828f6c30
	if (!ctx.cr0.eq) goto loc_828F6C30;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F6C1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,2,29,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0x4) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFB);
	// rlwimi r11,r10,2,27,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0x10) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFEF);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_828F6C30:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f6c5c
	if (ctx.cr0.eq) goto loc_828F6C5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
loc_828F6C48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F6C5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F6C5C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828f6c78
	if (!ctx.cr0.eq) goto loc_828F6C78;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f6c94
	if (ctx.cr0.eq) goto loc_828F6C94;
loc_828F6C78:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F6C94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F6C94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F6CB0"))) PPC_WEAK_FUNC(sub_828F6CB0);
PPC_FUNC_IMPL(__imp__sub_828F6CB0) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x828f6d10
	if (ctx.cr0.eq) goto loc_828F6D10;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828f6d04
	if (!ctx.cr0.eq) goto loc_828F6D04;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F6CF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_828F6D04:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x828f6d60
	goto loc_828F6D60;
loc_828F6D10:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x828f6d74
	if (ctx.cr0.eq) goto loc_828F6D74;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828f6d48
	if (!ctx.cr0.eq) goto loc_828F6D48;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F6D3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_828F6D48:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f6d74
	if (ctx.cr0.eq) goto loc_828F6D74;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
loc_828F6D60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F6D74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F6D74:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828f6d90
	if (!ctx.cr0.eq) goto loc_828F6D90;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f6dac
	if (ctx.cr0.eq) goto loc_828F6DAC;
loc_828F6D90:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F6DAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F6DAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F6DC8"))) PPC_WEAK_FUNC(sub_828F6DC8);
PPC_FUNC_IMPL(__imp__sub_828F6DC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r3,r11,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F6DD8"))) PPC_WEAK_FUNC(sub_828F6DD8);
PPC_FUNC_IMPL(__imp__sub_828F6DD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x828f6df4
	if (!ctx.cr6.lt) goto loc_828F6DF4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_828F6DF4:
	// lfs f13,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F6E00"))) PPC_WEAK_FUNC(sub_828F6E00);
PPC_FUNC_IMPL(__imp__sub_828F6E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x828f6e30
	if (!ctx.cr6.eq) goto loc_828F6E30;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x828f6e24
	if (!ctx.cr6.lt) goto loc_828F6E24;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_828F6E24:
	// lfs f13,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// blr 
	return;
loc_828F6E30:
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x828f6e44
	if (!ctx.cr6.eq) goto loc_828F6E44;
	// lfs f1,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_828F6E44:
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lfs f0,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// lfs f13,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x828f6e64
	if (ctx.cr6.eq) goto loc_828F6E64;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
loc_828F6E64:
	// fsubs f1,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F6E70"))) PPC_WEAK_FUNC(sub_828F6E70);
PPC_FUNC_IMPL(__imp__sub_828F6E70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lhz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// sth r10,20(r11)
	PPC_STORE_U16(ctx.r11.u32 + 20, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F6E88"))) PPC_WEAK_FUNC(sub_828F6E88);
PPC_FUNC_IMPL(__imp__sub_828F6E88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828f6eac
	if (ctx.cr6.eq) goto loc_828F6EAC;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
loc_828F6EAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F6EB8"))) PPC_WEAK_FUNC(sub_828F6EB8);
PPC_FUNC_IMPL(__imp__sub_828F6EB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F6EC8"))) PPC_WEAK_FUNC(sub_828F6EC8);
PPC_FUNC_IMPL(__imp__sub_828F6EC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r3,r11,0,26,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F6ED8"))) PPC_WEAK_FUNC(sub_828F6ED8);
PPC_FUNC_IMPL(__imp__sub_828F6ED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x828f6ee4
	if (!ctx.cr6.eq) goto loc_828F6EE4;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
loc_828F6EE4:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x828f6f2c
	if (!ctx.cr6.eq) goto loc_828F6F2C;
	// lfs f13,4(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f13,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f13,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f0,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// b 0x828f6fb8
	goto loc_828F6FB8;
loc_828F6F2C:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x828f6f74
	if (!ctx.cr6.eq) goto loc_828F6F74;
	// lfs f13,4(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f13,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f13,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f0,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x828f6fb8
	goto loc_828F6FB8;
loc_828F6F74:
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lfs f13,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f13,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f13,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f0,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_828F6FB8:
	// stfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F6FC0"))) PPC_WEAK_FUNC(sub_828F6FC0);
PPC_FUNC_IMPL(__imp__sub_828F6FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x828F6FC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x828f6ff0
	if (!ctx.cr6.eq) goto loc_828F6FF0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8262fdd8
	ctx.lr = 0x828F6FEC;
	sub_8262FDD8(ctx, base);
	// b 0x828f70b4
	goto loc_828F70B4;
loc_828F6FF0:
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bne cr6,0x828f7000
	if (!ctx.cr6.eq) goto loc_828F7000;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x828f70ac
	goto loc_828F70AC;
loc_828F7000:
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// bne cr6,0x828f7044
	if (!ctx.cr6.eq) goto loc_828F7044;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r11,-17756(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17756);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f70b4
	if (ctx.cr0.eq) goto loc_828F70B4;
	// bl 0x825e7650
	ctx.lr = 0x828F7020;
	sub_825E7650(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82630540
	ctx.lr = 0x828F702C;
	sub_82630540(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82630660
	ctx.lr = 0x828F703C;
	sub_82630660(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// b 0x828f70ac
	goto loc_828F70AC;
loc_828F7044:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8262fa18
	ctx.lr = 0x828F7050;
	sub_8262FA18(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bne cr6,0x828f7060
	if (!ctx.cr6.eq) goto loc_828F7060;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x828f70a0
	goto loc_828F70A0;
loc_828F7060:
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x828f70a8
	if (!ctx.cr6.eq) goto loc_828F70A8;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r11,-17756(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17756);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f70b4
	if (ctx.cr0.eq) goto loc_828F70B4;
	// bl 0x825e7650
	ctx.lr = 0x828F7080;
	sub_825E7650(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82630540
	ctx.lr = 0x828F708C;
	sub_82630540(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82630660
	ctx.lr = 0x828F709C;
	sub_82630660(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_828F70A0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825e80d8
	ctx.lr = 0x828F70A8;
	sub_825E80D8(ctx, base);
loc_828F70A8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_828F70AC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8262fa88
	ctx.lr = 0x828F70B4;
	sub_8262FA88(ctx, base);
loc_828F70B4:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F70C0"))) PPC_WEAK_FUNC(sub_828F70C0);
PPC_FUNC_IMPL(__imp__sub_828F70C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f2.f64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// bne cr6,0x828f70e4
	if (!ctx.cr6.eq) goto loc_828F70E4;
	// fdivs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// b 0x828f7168
	goto loc_828F7168;
loc_828F70E4:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x828f713c
	if (!ctx.cr6.eq) goto loc_828F713C;
	// fdivs f0,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lfs f13,-14636(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14636);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f0,-23900(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23900);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// beq cr6,0x828f7128
	if (ctx.cr6.eq) goto loc_828F7128;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82630c98
	ctx.lr = 0x828F7124;
	sub_82630C98(ctx, base);
	// b 0x828f715c
	goto loc_828F715C;
loc_828F7128:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfiwx f0,0,r10
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82630c50
	ctx.lr = 0x828F7138;
	sub_82630C50(ctx, base);
	// b 0x828f7168
	goto loc_828F7168;
loc_828F713C:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x828f7150
	if (ctx.cr6.eq) goto loc_828F7150;
	// fdivs f1,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// bl 0x82630ce0
	ctx.lr = 0x828F714C;
	sub_82630CE0(ctx, base);
	// b 0x828f7168
	goto loc_828F7168;
loc_828F7150:
	// fsubs f13,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fdivs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// bl 0x82630ce0
	ctx.lr = 0x828F715C;
	sub_82630CE0(ctx, base);
loc_828F715C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,14088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
loc_828F7168:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F7178"))) PPC_WEAK_FUNC(sub_828F7178);
PPC_FUNC_IMPL(__imp__sub_828F7178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lhz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
	// sth r10,20(r11)
	PPC_STORE_U16(ctx.r11.u32 + 20, ctx.r10.u16);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F7198"))) PPC_WEAK_FUNC(sub_828F7198);
PPC_FUNC_IMPL(__imp__sub_828F7198) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lhz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// andi. r10,r10,65519
	ctx.r10.u64 = ctx.r10.u64 & 65519;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r10,20(r11)
	PPC_STORE_U16(ctx.r11.u32 + 20, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F71B0"))) PPC_WEAK_FUNC(sub_828F71B0);
PPC_FUNC_IMPL(__imp__sub_828F71B0) {
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
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828f71f8
	if (ctx.cr6.eq) goto loc_828F71F8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bne cr6,0x828f71f8
	if (!ctx.cr6.eq) goto loc_828F71F8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x828f71f0
	if (ctx.cr6.lt) goto loc_828F71F0;
loc_828F71E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x828f7220
	goto loc_828F7220;
loc_828F71F0:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x828f720c
	goto loc_828F720C;
loc_828F71F8:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x828f71e8
	if (!ctx.cr6.lt) goto loc_828F71E8;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
loc_828F720C:
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x828f68f0
	ctx.lr = 0x828F7220;
	sub_828F68F0(ctx, base);
loc_828F7220:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F7230"))) PPC_WEAK_FUNC(sub_828F7230);
PPC_FUNC_IMPL(__imp__sub_828F7230) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828f7258
	if (ctx.cr6.eq) goto loc_828F7258;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bne cr6,0x828f7258
	if (!ctx.cr6.eq) goto loc_828F7258;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
loc_828F7258:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F7268"))) PPC_WEAK_FUNC(sub_828F7268);
PPC_FUNC_IMPL(__imp__sub_828F7268) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x828f72a0
	if (ctx.cr6.lt) goto loc_828F72A0;
	// blr 
	return;
loc_828F72A0:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x828f68f0
	sub_828F68F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F72B8"))) PPC_WEAK_FUNC(sub_828F72B8);
PPC_FUNC_IMPL(__imp__sub_828F72B8) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x828f72f0
	if (ctx.cr6.lt) goto loc_828F72F0;
	// blr 
	return;
loc_828F72F0:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x828f68f0
	sub_828F68F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F7308"))) PPC_WEAK_FUNC(sub_828F7308);
PPC_FUNC_IMPL(__imp__sub_828F7308) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x828f7340
	if (ctx.cr6.lt) goto loc_828F7340;
	// blr 
	return;
loc_828F7340:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x828f68f0
	sub_828F68F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F7358"))) PPC_WEAK_FUNC(sub_828F7358);
PPC_FUNC_IMPL(__imp__sub_828F7358) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x828f7390
	if (ctx.cr6.lt) goto loc_828F7390;
	// blr 
	return;
loc_828F7390:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x828f68f0
	sub_828F68F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F73A8"))) PPC_WEAK_FUNC(sub_828F73A8);
PPC_FUNC_IMPL(__imp__sub_828F73A8) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 7, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x828f73e0
	if (ctx.cr6.lt) goto loc_828F73E0;
	// blr 
	return;
loc_828F73E0:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x828f68f0
	sub_828F68F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F73F8"))) PPC_WEAK_FUNC(sub_828F73F8);
PPC_FUNC_IMPL(__imp__sub_828F73F8) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x828f7430
	if (ctx.cr6.lt) goto loc_828F7430;
	// blr 
	return;
loc_828F7430:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x828f68f0
	sub_828F68F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F7448"))) PPC_WEAK_FUNC(sub_828F7448);
PPC_FUNC_IMPL(__imp__sub_828F7448) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,15440
	ctx.r11.s64 = ctx.r11.s64 + 15440;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// bl 0x828f9018
	ctx.lr = 0x828F7480;
	sub_828F9018(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f7490
	if (ctx.cr0.eq) goto loc_828F7490;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e6f78
	ctx.lr = 0x828F7490;
	sub_825E6F78(ctx, base);
loc_828F7490:
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

__attribute__((alias("__imp__sub_828F74B0"))) PPC_WEAK_FUNC(sub_828F74B0);
PPC_FUNC_IMPL(__imp__sub_828F74B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x828F74B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x828f6400
	ctx.lr = 0x828F74D0;
	sub_828F6400(ctx, base);
	// li r3,224
	ctx.r3.s64 = 224;
	// bl 0x825e6f70
	ctx.lr = 0x828F74D8;
	sub_825E6F70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f74f4
	if (ctx.cr0.eq) goto loc_828F74F4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r5,240(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// bl 0x828fa258
	ctx.lr = 0x828F74F0;
	sub_828FA258(ctx, base);
	// b 0x828f74f8
	goto loc_828F74F8;
loc_828F74F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828F74F8:
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// beq 0x828f753c
	if (ctx.cr0.eq) goto loc_828F753C;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r9,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x828f753c
	if (ctx.cr0.eq) goto loc_828F753C;
	// lwz r6,48(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f1,264(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,44(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// li r3,1
	ctx.r3.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F753C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F753C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F7548"))) PPC_WEAK_FUNC(sub_828F7548);
PPC_FUNC_IMPL(__imp__sub_828F7548) {
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
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828f75bc
	if (ctx.cr0.eq) goto loc_828F75BC;
	// rlwinm r30,r4,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828f75bc
	if (ctx.cr6.eq) goto loc_828F75BC;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x828f6400
	ctx.lr = 0x828F7584;
	sub_828F6400(ctx, base);
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f75a8
	if (ctx.cr0.eq) goto loc_828F75A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F75A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F75A8:
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stwx r10,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u32);
	// stw r9,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r9.u32);
loc_828F75BC:
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

__attribute__((alias("__imp__sub_828F75D8"))) PPC_WEAK_FUNC(sub_828F75D8);
PPC_FUNC_IMPL(__imp__sub_828F75D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b0
	ctx.lr = 0x828F75E0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x828f7794
	if (!ctx.cr6.gt) goto loc_828F7794;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// li r24,1
	ctx.r24.s64 = 1;
loc_828F7608:
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwzx r10,r27,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828f7780
	if (ctx.cr6.eq) goto loc_828F7780;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lhz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f7780
	if (ctx.cr0.eq) goto loc_828F7780;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x828f6400
	ctx.lr = 0x828F7634;
	sub_828F6400(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// lwz r29,24(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x828f7720
	if (!ctx.cr6.gt) goto loc_828F7720;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
loc_828F7650:
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// lwz r9,240(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x828f767c
	if (ctx.cr6.eq) goto loc_828F767C;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x828f7688
	if (ctx.cr0.eq) goto loc_828F7688;
loc_828F767C:
	// lwz r10,248(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// mulli r9,r11,80
	ctx.r9.s64 = ctx.r11.s64 * 80;
	// stwx r24,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r24.u32);
loc_828F7688:
	// mulli r30,r11,80
	ctx.r30.s64 = ctx.r11.s64 * 80;
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r22,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r22.u32);
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828f770c
	if (ctx.cr6.eq) goto loc_828F770C;
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f770c
	if (ctx.cr0.eq) goto loc_828F770C;
	// lwz r9,240(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwzx r11,r27,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r9.u32);
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x8262fd98
	ctx.lr = 0x828F76D8;
	sub_8262FD98(ctx, base);
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r24,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828f770c
	if (!ctx.cr6.eq) goto loc_828F770C;
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82630750
	ctx.lr = 0x828F770C;
	sub_82630750(ctx, base);
loc_828F770C:
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x828f7650
	if (ctx.cr6.lt) goto loc_828F7650;
loc_828F7720:
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r11,r27,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// lwz r30,148(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x828f7548
	ctx.lr = 0x828F7738;
	sub_828F7548(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x828f775c
	if (!ctx.cr6.lt) goto loc_828F775C;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x828f7780
	if (!ctx.cr6.eq) goto loc_828F7780;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f74b0
	ctx.lr = 0x828F7758;
	sub_828F74B0(ctx, base);
	// b 0x828f7780
	goto loc_828F7780;
loc_828F775C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble 0x828f7780
	if (!ctx.cr0.gt) goto loc_828F7780;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f74b0
	ctx.lr = 0x828F7774;
	sub_828F74B0(ctx, base);
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwzx r11,r27,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// stw r30,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r30.u32);
loc_828F7780:
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x828f7608
	if (ctx.cr6.lt) goto loc_828F7608;
loc_828F7794:
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x828f7820
	if (!ctx.cr6.gt) goto loc_828F7820;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
loc_828F77AC:
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828f7808
	if (ctx.cr6.eq) goto loc_828F7808;
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828f77d8
	if (ctx.cr6.eq) goto loc_828F77D8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f7548
	ctx.lr = 0x828F77D8;
	sub_828F7548(ctx, base);
loc_828F77D8:
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x828f77fc
	if (!ctx.cr6.eq) goto loc_828F77FC;
	// li r5,0
	ctx.r5.s64 = 0;
loc_828F77FC:
	// bl 0x828f74b0
	ctx.lr = 0x828F7800;
	sub_828F74B0(ctx, base);
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// stwx r22,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r22.u32);
loc_828F7808:
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r30,r30,80
	ctx.r30.s64 = ctx.r30.s64 + 80;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x828f77ac
	if (ctx.cr6.lt) goto loc_828F77AC;
loc_828F7820:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de900
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F7828"))) PPC_WEAK_FUNC(sub_828F7828);
PPC_FUNC_IMPL(__imp__sub_828F7828) {
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
	// lwz r4,240(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x828f786c
	if (ctx.cr0.eq) goto loc_828F786C;
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
	ctx.lr = 0x828F7864;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
loc_828F786C:
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

__attribute__((alias("__imp__sub_828F7880"))) PPC_WEAK_FUNC(sub_828F7880);
PPC_FUNC_IMPL(__imp__sub_828F7880) {
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
	// lwz r4,248(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x828f78c4
	if (ctx.cr0.eq) goto loc_828F78C4;
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
	ctx.lr = 0x828F78BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
loc_828F78C4:
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

__attribute__((alias("__imp__sub_828F78D8"))) PPC_WEAK_FUNC(sub_828F78D8);
PPC_FUNC_IMPL(__imp__sub_828F78D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x828F78E0;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x828f7a00
	if (ctx.cr0.eq) goto loc_828F7A00;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f7a00
	if (!ctx.cr0.eq) goto loc_828F7A00;
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f7a00
	if (!ctx.cr0.eq) goto loc_828F7A00;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x828f7920
	if (!ctx.cr6.lt) goto loc_828F7920;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_828F7920:
	// lwz r10,224(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828f7940
	if (ctx.cr6.eq) goto loc_828F7940;
	// stfs f31,188(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// stw r27,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r27.u32);
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// b 0x828f7988
	goto loc_828F7988;
loc_828F7940:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f7970
	if (!ctx.cr0.eq) goto loc_828F7970;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lfs f0,260(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x828f7968
	if (ctx.cr6.lt) goto loc_828F7968;
	// rlwimi r11,r27,0,31,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r27.u32, 0) & 0xFFFFFFFFFFFF0001) | (ctx.r11.u64 & 0xFFFE);
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// b 0x828f7970
	goto loc_828F7970;
loc_828F7968:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,260(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
loc_828F7970:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f7a00
	if (ctx.cr0.eq) goto loc_828F7A00;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x828f6370
	ctx.lr = 0x828F7988;
	sub_828F6370(ctx, base);
loc_828F7988:
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// stfs f31,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x828f79fc
	if (!ctx.cr6.gt) goto loc_828F79FC;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r28,-32043
	ctx.r28.s64 = -2099970048;
loc_828F79A4:
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828f79e8
	if (ctx.cr6.eq) goto loc_828F79E8;
	// lwz r11,13848(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13848);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828f79d0
	if (ctx.cr0.eq) goto loc_828F79D0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F79D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F79D0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x828f6400
	ctx.lr = 0x828F79DC;
	sub_828F6400(ctx, base);
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x828fa6c8
	ctx.lr = 0x828F79E8;
	sub_828FA6C8(ctx, base);
loc_828F79E8:
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x828f79a4
	if (ctx.cr6.lt) goto loc_828F79A4;
loc_828F79FC:
	// stw r27,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r27.u32);
loc_828F7A00:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F7A10"))) PPC_WEAK_FUNC(sub_828F7A10);
PPC_FUNC_IMPL(__imp__sub_828F7A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x828F7A18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x828f7ac0
	if (ctx.cr0.eq) goto loc_828F7AC0;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x828f7ac0
	if (ctx.cr0.eq) goto loc_828F7AC0;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f7ac0
	if (!ctx.cr0.eq) goto loc_828F7AC0;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828f7ac0
	if (!ctx.cr0.eq) goto loc_828F7AC0;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x828f6370
	ctx.lr = 0x828F7A50;
	sub_828F6370(ctx, base);
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x828f7ac0
	if (!ctx.cr6.gt) goto loc_828F7AC0;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r28,-32043
	ctx.r28.s64 = -2099970048;
loc_828F7A68:
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828f7aac
	if (ctx.cr6.eq) goto loc_828F7AAC;
	// lwz r11,13848(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13848);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828f7a94
	if (ctx.cr0.eq) goto loc_828F7A94;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F7A94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F7A94:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x828f6400
	ctx.lr = 0x828F7AA0;
	sub_828F6400(ctx, base);
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x828fa0a0
	ctx.lr = 0x828F7AAC;
	sub_828FA0A0(ctx, base);
loc_828F7AAC:
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x828f7a68
	if (ctx.cr6.lt) goto loc_828F7A68;
loc_828F7AC0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F7AC8"))) PPC_WEAK_FUNC(sub_828F7AC8);
PPC_FUNC_IMPL(__imp__sub_828F7AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x828F7AD0;
	__savegprlr_27(ctx, base);
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
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f7c60
	if (!ctx.cr0.eq) goto loc_828F7C60;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f7c60
	if (!ctx.cr0.eq) goto loc_828F7C60;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f7c60
	if (!ctx.cr0.eq) goto loc_828F7C60;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x828f7c60
	if (ctx.cr6.eq) goto loc_828F7C60;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// bl 0x828f6370
	ctx.lr = 0x828F7B20;
	sub_828F6370(ctx, base);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r27,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r27.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// bne cr6,0x828f7b64
	if (!ctx.cr6.eq) goto loc_828F7B64;
	// bl 0x828f5e40
	ctx.lr = 0x828F7B5C;
	sub_828F5E40(ctx, base);
	// stw r3,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r3.u32);
	// b 0x828f7b68
	goto loc_828F7B68;
loc_828F7B64:
	// stw r28,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r28.u32);
loc_828F7B68:
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// lwz r10,244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,-17740(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17740);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F7B8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r3.u32);
	// lwz r3,-17740(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17740);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// mulli r4,r11,80
	ctx.r4.s64 = ctx.r11.s64 * 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F7BB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// stw r3,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828f7c44
	if (ctx.cr6.eq) goto loc_828F7C44;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f7c44
	if (ctx.cr6.eq) goto loc_828F7C44;
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x828f7c3c
	if (!ctx.cr6.gt) goto loc_828F7C3C;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_828F7BE4:
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stwx r27,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r27.u32);
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// stwx r27,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r27.u32);
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x828f6400
	ctx.lr = 0x828F7C00;
	sub_828F6400(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f7c24
	if (ctx.cr0.eq) goto loc_828F7C24;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f74b0
	ctx.lr = 0x828F7C24;
	sub_828F74B0(ctx, base);
loc_828F7C24:
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r28,r28,80
	ctx.r28.s64 = ctx.r28.s64 + 80;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x828f7be4
	if (ctx.cr6.lt) goto loc_828F7BE4;
loc_828F7C3C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828f7c64
	goto loc_828F7C64;
loc_828F7C44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f7828
	ctx.lr = 0x828F7C4C;
	sub_828F7828(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f7880
	ctx.lr = 0x828F7C54;
	sub_828F7880(ctx, base);
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
loc_828F7C60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828F7C64:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F7C70"))) PPC_WEAK_FUNC(sub_828F7C70);
PPC_FUNC_IMPL(__imp__sub_828F7C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x828F7C78;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828f7d14
	if (ctx.cr6.eq) goto loc_828F7D14;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x828f6370
	ctx.lr = 0x828F7CA0;
	sub_828F6370(ctx, base);
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x828f7d14
	if (!ctx.cr6.gt) goto loc_828F7D14;
	// li r30,0
	ctx.r30.s64 = 0;
loc_828F7CB4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x828f6400
	ctx.lr = 0x828F7CC0;
	sub_828F6400(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x828f7cdc
	if (ctx.cr6.eq) goto loc_828F7CDC;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// bne cr6,0x828f7d00
	if (!ctx.cr6.eq) goto loc_828F7D00;
loc_828F7CDC:
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828f7cfc
	if (ctx.cr6.eq) goto loc_828F7CFC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// rlwinm r10,r10,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
loc_828F7CFC:
	// li r28,1
	ctx.r28.s64 = 1;
loc_828F7D00:
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x828f7cb4
	if (ctx.cr6.lt) goto loc_828F7CB4;
loc_828F7D14:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F7D20"))) PPC_WEAK_FUNC(sub_828F7D20);
PPC_FUNC_IMPL(__imp__sub_828F7D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x828F7D28;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828f7dc4
	if (ctx.cr6.eq) goto loc_828F7DC4;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x828f6370
	ctx.lr = 0x828F7D50;
	sub_828F6370(ctx, base);
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x828f7dc4
	if (!ctx.cr6.gt) goto loc_828F7DC4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_828F7D64:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x828f6400
	ctx.lr = 0x828F7D70;
	sub_828F6400(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x828f7d8c
	if (ctx.cr6.eq) goto loc_828F7D8C;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// bne cr6,0x828f7db0
	if (!ctx.cr6.eq) goto loc_828F7DB0;
loc_828F7D8C:
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828f7dac
	if (ctx.cr6.eq) goto loc_828F7DAC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
loc_828F7DAC:
	// li r28,1
	ctx.r28.s64 = 1;
loc_828F7DB0:
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x828f7d64
	if (ctx.cr6.lt) goto loc_828F7D64;
loc_828F7DC4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F7DD0"))) PPC_WEAK_FUNC(sub_828F7DD0);
PPC_FUNC_IMPL(__imp__sub_828F7DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x828F7DD8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828f7e98
	if (!ctx.cr0.eq) goto loc_828F7E98;
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828f7e98
	if (ctx.cr6.eq) goto loc_828F7E98;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x828f6370
	ctx.lr = 0x828F7E10;
	sub_828F6370(ctx, base);
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x828f7e98
	if (!ctx.cr6.gt) goto loc_828F7E98;
	// li r28,0
	ctx.r28.s64 = 0;
loc_828F7E24:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x828f6400
	ctx.lr = 0x828F7E30;
	sub_828F6400(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x828f7e4c
	if (ctx.cr6.eq) goto loc_828F7E4C;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// bne cr6,0x828f7e84
	if (!ctx.cr6.eq) goto loc_828F7E84;
loc_828F7E4C:
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828f7e70
	if (ctx.cr6.eq) goto loc_828F7E70;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x828f7e84
	if (ctx.cr6.eq) goto loc_828F7E84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f7548
	ctx.lr = 0x828F7E70;
	sub_828F7548(ctx, base);
loc_828F7E70:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f74b0
	ctx.lr = 0x828F7E80;
	sub_828F74B0(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
loc_828F7E84:
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x828f7e24
	if (ctx.cr6.lt) goto loc_828F7E24;
loc_828F7E98:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F7EA8"))) PPC_WEAK_FUNC(sub_828F7EA8);
PPC_FUNC_IMPL(__imp__sub_828F7EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x828F7EB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828f7f58
	if (!ctx.cr0.eq) goto loc_828F7F58;
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828f7f58
	if (ctx.cr6.eq) goto loc_828F7F58;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x828f6370
	ctx.lr = 0x828F7EE4;
	sub_828F6370(ctx, base);
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x828f7f58
	if (!ctx.cr6.gt) goto loc_828F7F58;
	// li r30,0
	ctx.r30.s64 = 0;
loc_828F7EF8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x828f6400
	ctx.lr = 0x828F7F04;
	sub_828F6400(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x828f7f20
	if (ctx.cr6.eq) goto loc_828F7F20;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// bne cr6,0x828f7f44
	if (!ctx.cr6.eq) goto loc_828F7F44;
loc_828F7F20:
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828f7f44
	if (ctx.cr6.eq) goto loc_828F7F44;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r28,1
	ctx.r28.s64 = 1;
	// lhz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// sth r10,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r10.u16);
loc_828F7F44:
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x828f7ef8
	if (ctx.cr6.lt) goto loc_828F7EF8;
loc_828F7F58:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F7F68"))) PPC_WEAK_FUNC(sub_828F7F68);
PPC_FUNC_IMPL(__imp__sub_828F7F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x828F7F70;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828f8018
	if (!ctx.cr0.eq) goto loc_828F8018;
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828f8018
	if (ctx.cr6.eq) goto loc_828F8018;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x828f6370
	ctx.lr = 0x828F7FA4;
	sub_828F6370(ctx, base);
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x828f8018
	if (!ctx.cr6.gt) goto loc_828F8018;
	// li r30,0
	ctx.r30.s64 = 0;
loc_828F7FB8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x828f6400
	ctx.lr = 0x828F7FC4;
	sub_828F6400(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x828f7fe0
	if (ctx.cr6.eq) goto loc_828F7FE0;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// bne cr6,0x828f8004
	if (!ctx.cr6.eq) goto loc_828F8004;
loc_828F7FE0:
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828f8004
	if (ctx.cr6.eq) goto loc_828F8004;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r28,1
	ctx.r28.s64 = 1;
	// lhz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// andi. r10,r10,65503
	ctx.r10.u64 = ctx.r10.u64 & 65503;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r10,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r10.u16);
loc_828F8004:
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x828f7fb8
	if (ctx.cr6.lt) goto loc_828F7FB8;
loc_828F8018:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F8028"))) PPC_WEAK_FUNC(sub_828F8028);
PPC_FUNC_IMPL(__imp__sub_828F8028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x828F8030;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828f8118
	if (!ctx.cr0.eq) goto loc_828F8118;
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828f8118
	if (ctx.cr6.eq) goto loc_828F8118;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x828f6370
	ctx.lr = 0x828F8068;
	sub_828F6370(ctx, base);
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x828f80fc
	if (!ctx.cr6.gt) goto loc_828F80FC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_828F807C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x828f6400
	ctx.lr = 0x828F8088;
	sub_828F6400(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x828f80a4
	if (ctx.cr6.eq) goto loc_828F80A4;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// bne cr6,0x828f80e8
	if (!ctx.cr6.eq) goto loc_828F80E8;
loc_828F80A4:
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828f80e8
	if (ctx.cr6.eq) goto loc_828F80E8;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x828f80dc
	if (ctx.cr6.eq) goto loc_828F80DC;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,196(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	// rlwinm. r9,r9,0,21,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x828f80dc
	if (ctx.cr0.eq) goto loc_828F80DC;
	// lwz r11,196(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r11,196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 196, ctx.r11.u32);
	// b 0x828f80e4
	goto loc_828F80E4;
loc_828F80DC:
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x828faa78
	ctx.lr = 0x828F80E4;
	sub_828FAA78(ctx, base);
loc_828F80E4:
	// li r28,1
	ctx.r28.s64 = 1;
loc_828F80E8:
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x828f807c
	if (ctx.cr6.lt) goto loc_828F807C;
loc_828F80FC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f75d8
	ctx.lr = 0x828F8108;
	sub_828F75D8(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x828f8118
	if (ctx.cr6.eq) goto loc_828F8118;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
loc_828F8118:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F8128"))) PPC_WEAK_FUNC(sub_828F8128);
PPC_FUNC_IMPL(__imp__sub_828F8128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x828F8130;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x828f6370
	ctx.lr = 0x828F8148;
	sub_828F6370(ctx, base);
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828f8244
	if (!ctx.cr0.eq) goto loc_828F8244;
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828f8244
	if (ctx.cr6.eq) goto loc_828F8244;
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x828f8244
	if (!ctx.cr6.gt) goto loc_828F8244;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
loc_828F817C:
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828f8230
	if (ctx.cr6.eq) goto loc_828F8230;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f81c4
	if (ctx.cr0.eq) goto loc_828F81C4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x828f6400
	ctx.lr = 0x828F81A8;
	sub_828F6400(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x828f8230
	if (!ctx.cr6.gt) goto loc_828F8230;
loc_828F81BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x828f8254
	goto loc_828F8254;
loc_828F81C4:
	// bl 0x828fa188
	ctx.lr = 0x828F81C8;
	sub_828FA188(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x828f8260
	if (!ctx.cr0.eq) goto loc_828F8260;
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// lfs f0,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x828f81bc
	if (ctx.cr6.gt) goto loc_828F81BC;
	// lwz r9,212(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x828f8230
	if (!ctx.cr6.gt) goto loc_828F8230;
	// lwz r9,208(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_828F8200:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x828f8214
	if (ctx.cr6.eq) goto loc_828F8214;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x828f81bc
	if (ctx.cr6.eq) goto loc_828F81BC;
loc_828F8214:
	// lwz r8,240(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r8,r30,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// lwz r8,212(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 212);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x828f8200
	if (ctx.cr6.lt) goto loc_828F8200;
loc_828F8230:
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x828f817c
	if (ctx.cr6.lt) goto loc_828F817C;
loc_828F8244:
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_828F8254:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_828F8260:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// b 0x828f8254
	goto loc_828F8254;
}

__attribute__((alias("__imp__sub_828F8270"))) PPC_WEAK_FUNC(sub_828F8270);
PPC_FUNC_IMPL(__imp__sub_828F8270) {
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
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x828f8fd0
	ctx.lr = 0x828F8298;
	sub_828F8FD0(ctx, base);
	// lis r10,16715
	ctx.r10.s64 = 1095434240;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// ori r9,r10,21586
	ctx.r9.u64 = ctx.r10.u64 | 21586;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,15496
	ctx.r11.s64 = ctx.r11.s64 + 15496;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lfs f31,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,260(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// sth r30,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r30.u16);
	// stfs f31,264(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// stw r30,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r30.u32);
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// stw r30,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// stw r30,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r30.u32);
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
	// bl 0x8262fd50
	ctx.lr = 0x828F82F8;
	sub_8262FD50(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8262fd50
	ctx.lr = 0x828F8300;
	sub_8262FD50(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f30,180(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stfs f30,184(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// stfs f31,188(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// stfs f0,200(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// stfs f0,204(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 204, temp.u32);
	// stfs f0,208(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// stw r30,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r30.u32);
	// stw r30,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r30.u32);
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_828F8370"))) PPC_WEAK_FUNC(sub_828F8370);
PPC_FUNC_IMPL(__imp__sub_828F8370) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f8404
	if (!ctx.cr0.eq) goto loc_828F8404;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// beq 0x828f8404
	if (ctx.cr0.eq) goto loc_828F8404;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x828f6370
	ctx.lr = 0x828F83B0;
	sub_828F6370(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// stfs f0,260(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// stfs f0,264(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x828f83f4
	if (!ctx.cr6.gt) goto loc_828F83F4;
loc_828F83D8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f7548
	ctx.lr = 0x828F83E4;
	sub_828F7548(ctx, base);
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x828f83d8
	if (ctx.cr6.lt) goto loc_828F83D8;
loc_828F83F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f7828
	ctx.lr = 0x828F83FC;
	sub_828F7828(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f7880
	ctx.lr = 0x828F8404;
	sub_828F7880(ctx, base);
loc_828F8404:
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

__attribute__((alias("__imp__sub_828F8420"))) PPC_WEAK_FUNC(sub_828F8420);
PPC_FUNC_IMPL(__imp__sub_828F8420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x828F8428;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x828f85cc
	if (ctx.cr0.eq) goto loc_828F85CC;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x828f85cc
	if (ctx.cr0.eq) goto loc_828F85CC;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f85cc
	if (!ctx.cr0.eq) goto loc_828F85CC;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828f85cc
	if (!ctx.cr0.eq) goto loc_828F85CC;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x828f6370
	ctx.lr = 0x828F8464;
	sub_828F6370(ctx, base);
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x828f8498
	if (ctx.cr6.eq) goto loc_828F8498;
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828f8498
	if (ctx.cr6.eq) goto loc_828F8498;
	// lfs f0,188(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// stw r28,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r28.u32);
	// stfs f0,184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// stfs f31,188(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
loc_828F8498:
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x828f84e8
	if (!ctx.cr6.gt) goto loc_828F84E8;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_828F84AC:
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828f84d4
	if (ctx.cr6.eq) goto loc_828F84D4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x828f6400
	ctx.lr = 0x828F84C8;
	sub_828F6400(ctx, base);
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x828fa868
	ctx.lr = 0x828F84D4;
	sub_828FA868(ctx, base);
loc_828F84D4:
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x828f84ac
	if (ctx.cr6.lt) goto loc_828F84AC;
loc_828F84E8:
	// lfs f0,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x828f8524
	if (ctx.cr6.eq) goto loc_828F8524;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lfs f13,264(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,264(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// lfs f13,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// blt cr6,0x828f8524
	if (ctx.cr6.lt) goto loc_828F8524;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x828f8524
	if (ctx.cr6.lt) goto loc_828F8524;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f8370
	ctx.lr = 0x828F8520;
	sub_828F8370(ctx, base);
	// b 0x828f85cc
	goto loc_828F85CC;
loc_828F8524:
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828f85b0
	if (ctx.cr6.eq) goto loc_828F85B0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r30,268(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x828f85b0
	if (!ctx.cr6.lt) goto loc_828F85B0;
	// rlwinm r29,r30,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_828F8548:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lfs f1,264(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,268(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x828f85b0
	if (ctx.cr6.lt) goto loc_828F85B0;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828F858C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x828f8548
	if (ctx.cr6.lt) goto loc_828F8548;
loc_828F85B0:
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x828f6370
	ctx.lr = 0x828F85BC;
	sub_828F6370(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f75d8
	ctx.lr = 0x828F85C8;
	sub_828F75D8(ctx, base);
	// stw r28,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r28.u32);
loc_828F85CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F85D8"))) PPC_WEAK_FUNC(sub_828F85D8);
PPC_FUNC_IMPL(__imp__sub_828F85D8) {
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
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f8608
	if (!ctx.cr0.eq) goto loc_828F8608;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828f8608
	if (!ctx.cr0.eq) goto loc_828F8608;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x828f8638
	goto loc_828F8638;
loc_828F8608:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f8370
	ctx.lr = 0x828F8610;
	sub_828F8370(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,164(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r7,168(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// lwz r6,172(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,160(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// bl 0x828f7ac8
	ctx.lr = 0x828F8634;
	sub_828F7AC8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_828F8638:
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

__attribute__((alias("__imp__sub_828F8650"))) PPC_WEAK_FUNC(sub_828F8650);
PPC_FUNC_IMPL(__imp__sub_828F8650) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,15496
	ctx.r11.s64 = ctx.r11.s64 + 15496;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828f8370
	ctx.lr = 0x828F867C;
	sub_828F8370(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f9018
	ctx.lr = 0x828F8684;
	sub_828F9018(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f8694
	if (ctx.cr0.eq) goto loc_828F8694;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e6f78
	ctx.lr = 0x828F8694;
	sub_825E6F78(ctx, base);
loc_828F8694:
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

__attribute__((alias("__imp__sub_828F86B0"))) PPC_WEAK_FUNC(sub_828F86B0);
PPC_FUNC_IMPL(__imp__sub_828F86B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,15528
	ctx.r11.s64 = ctx.r11.s64 + 15528;
	// lbzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F86C8"))) PPC_WEAK_FUNC(sub_828F86C8);
PPC_FUNC_IMPL(__imp__sub_828F86C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,15528
	ctx.r11.s64 = ctx.r11.s64 + 15528;
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
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
	// lfs f0,13920(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13920);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F86F8"))) PPC_WEAK_FUNC(sub_828F86F8);
PPC_FUNC_IMPL(__imp__sub_828F86F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r9,r9,15528
	ctx.r9.s64 = ctx.r9.s64 + 15528;
	// lbz r11,13852(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 13852);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,13852(r10)
	PPC_STORE_U8(ctx.r10.u32 + 13852, ctx.r11.u8);
	// lbzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
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
	// lfs f0,13920(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13920);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F8738"))) PPC_WEAK_FUNC(sub_828F8738);
PPC_FUNC_IMPL(__imp__sub_828F8738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f12,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f12.f64 = double(temp.f32);
	// ble cr6,0x828f875c
	if (!ctx.cr6.gt) goto loc_828F875C;
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// b 0x828f8768
	goto loc_828F8768;
loc_828F875C:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x828f8768
	if (!ctx.cr6.lt) goto loc_828F8768;
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
loc_828F8768:
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x828f877c
	if (!ctx.cr6.gt) goto loc_828F877C;
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// b 0x828f8788
	goto loc_828F8788;
loc_828F877C:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x828f8788
	if (!ctx.cr6.lt) goto loc_828F8788;
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
loc_828F8788:
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x828f879c
	if (!ctx.cr6.gt) goto loc_828F879C;
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// b 0x828f87a8
	goto loc_828F87A8;
loc_828F879C:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x828f87a8
	if (!ctx.cr6.lt) goto loc_828F87A8;
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
loc_828F87A8:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x828f87bc
	if (!ctx.cr6.gt) goto loc_828F87BC;
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
loc_828F87BC:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F87D0"))) PPC_WEAK_FUNC(sub_828F87D0);
PPC_FUNC_IMPL(__imp__sub_828F87D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f29,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f29.u64);
	// stfd f30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// beq cr6,0x828f8830
	if (ctx.cr6.eq) goto loc_828F8830;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x828f884c
	if (!ctx.cr6.eq) goto loc_828F884C;
	// fsubs f2,f29,f30
	ctx.f2.f64 = double(float(ctx.f29.f64 - ctx.f30.f64));
	// fsubs f1,f31,f30
	ctx.f1.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// bl 0x82630d60
	ctx.lr = 0x828F8810;
	sub_82630D60(ctx, base);
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bge cr6,0x828f8820
	if (!ctx.cr6.lt) goto loc_828F8820;
	// fsubs f31,f29,f1
	ctx.f31.f64 = double(float(ctx.f29.f64 - ctx.f1.f64));
	// b 0x828f884c
	goto loc_828F884C;
loc_828F8820:
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// ble cr6,0x828f884c
	if (!ctx.cr6.gt) goto loc_828F884C;
	// fadds f31,f1,f30
	ctx.f31.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
	// b 0x828f884c
	goto loc_828F884C;
loc_828F8830:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bge cr6,0x828f8840
	if (!ctx.cr6.lt) goto loc_828F8840;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// b 0x828f884c
	goto loc_828F884C;
loc_828F8840:
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// ble cr6,0x828f884c
	if (!ctx.cr6.gt) goto loc_828F884C;
	// fmr f31,f29
	ctx.f31.f64 = ctx.f29.f64;
loc_828F884C:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-32(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f30,-24(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F8870"))) PPC_WEAK_FUNC(sub_828F8870);
PPC_FUNC_IMPL(__imp__sub_828F8870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f29.u64);
	// stfd f30,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f30,f3
	ctx.f30.f64 = ctx.f3.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x82630e08
	ctx.lr = 0x828F88A4;
	sub_82630E08(ctx, base);
	// fmuls f13,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// fmadds f1,f31,f31,f13
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f31.f64 + ctx.f13.f64));
	// lfs f13,-9120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9120);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// bl 0x82630c48
	ctx.lr = 0x828F88CC;
	sub_82630C48(ctx, base);
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82630e08
	ctx.lr = 0x828F88D8;
	sub_82630E08(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,3564(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3564);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r31
	PPC_STORE_U32(ctx.r31.u32, ctx.f0.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-40(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F8918"))) PPC_WEAK_FUNC(sub_828F8918);
PPC_FUNC_IMPL(__imp__sub_828F8918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x828F8920;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// blt cr6,0x828f89c0
	if (ctx.cr6.lt) goto loc_828F89C0;
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// rlwinm r3,r31,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x828f8958
	if (!ctx.cr6.gt) goto loc_828F8958;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_828F8958:
	// bl 0x82186158
	ctx.lr = 0x828F895C;
	sub_82186158(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x828f89c0
	if (ctx.cr6.eq) goto loc_828F89C0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r31,-1
	ctx.r10.s64 = ctx.r31.s64 + -1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// clrldi r11,r10,32
	ctx.r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f30,f30,f0
	ctx.f30.f64 = double(float(ctx.f30.f64 / ctx.f0.f64));
	// beq cr6,0x828f89b8
	if (ctx.cr6.eq) goto loc_828F89B8;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_828F8998:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828f8fc0
	ctx.lr = 0x828F89A8;
	sub_828F8FC0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// fadds f31,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// bne 0x828f8998
	if (!ctx.cr0.eq) goto loc_828F8998;
loc_828F89B8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82186190
	ctx.lr = 0x828F89C0;
	sub_82186190(ctx, base);
loc_828F89C0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F89D0"))) PPC_WEAK_FUNC(sub_828F89D0);
PPC_FUNC_IMPL(__imp__sub_828F89D0) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,15784
	ctx.r11.s64 = ctx.r11.s64 + 15784;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x828f8a08
	if (ctx.cr0.eq) goto loc_828F8A08;
	// bl 0x82186190
	ctx.lr = 0x828F8A00;
	sub_82186190(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_828F8A08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f9018
	ctx.lr = 0x828F8A10;
	sub_828F9018(ctx, base);
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

__attribute__((alias("__imp__sub_828F8A28"))) PPC_WEAK_FUNC(sub_828F8A28);
PPC_FUNC_IMPL(__imp__sub_828F8A28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fadds f13,f2,f3
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x828f8a58
	if (!ctx.cr6.gt) goto loc_828F8A58;
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f2,f13,f2
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// fmuls f3,f13,f3
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
loc_828F8A58:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// lfs f13,5024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5024);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f2
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// fsubs f12,f12,f3
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f3.f64));
	// fdivs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// bge cr6,0x828f8a84
	if (!ctx.cr6.lt) goto loc_828F8A84;
	// fdivs f0,f12,f2
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f2.f64));
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// blr 
	return;
loc_828F8A84:
	// fsubs f11,f0,f3
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f3.f64));
	// fcmpu cr6,f1,f11
	ctx.cr6.compare(ctx.f1.f64, ctx.f11.f64);
	// bge cr6,0x828f8a9c
	if (!ctx.cr6.lt) goto loc_828F8A9C;
	// fmsubs f0,f1,f13,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 - ctx.f2.f64));
	// fmuls f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// blr 
	return;
loc_828F8A9C:
	// fsubs f13,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fdivs f12,f12,f3
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f3.f64));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fnmsubs f1,f12,f13,f0
	ctx.f1.f64 = double(float(-(ctx.f12.f64 * ctx.f13.f64 - ctx.f0.f64)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F8AB0"))) PPC_WEAK_FUNC(sub_828F8AB0);
PPC_FUNC_IMPL(__imp__sub_828F8AB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfd f31,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// lfs f9,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f9,f13
	ctx.cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// ble cr6,0x828f8ae0
	if (!ctx.cr6.gt) goto loc_828F8AE0;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mulli r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 * 88;
	// lfsx f12,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// b 0x828f8af8
	goto loc_828F8AF8;
loc_828F8AE0:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x828f8afc
	if (!ctx.cr6.gt) goto loc_828F8AFC;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mulli r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 * 88;
	// lfsx f12,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
loc_828F8AF8:
	// fadds f0,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
loc_828F8AFC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fsubs f11,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// fsubs f1,f13,f9
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f10,76(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 76);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f9,68(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 68);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,72(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// lfs f3,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f9
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// lfs f2,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fadds f5,f10,f0
	ctx.f5.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfs f9,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f6,f12,f0
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f8,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f7,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f4,f0,f12
	ctx.f4.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fdivs f0,f1,f11
	ctx.f0.f64 = double(float(ctx.f1.f64 / ctx.f11.f64));
	// fdivs f12,f31,f11
	ctx.f12.f64 = double(float(ctx.f31.f64 / ctx.f11.f64));
	// fsubs f3,f9,f3
	ctx.f3.f64 = double(float(ctx.f9.f64 - ctx.f3.f64));
	// fsubs f2,f2,f9
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f9.f64));
	// fmuls f11,f5,f13
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f9,f6,f10
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fmuls f6,f6,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmuls f5,f10,f13
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f11,f11,f4
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// fmuls f10,f9,f13
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmuls f9,f5,f4
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmuls f6,f3,f11
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// fmuls f5,f3,f13
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmadds f6,f2,f10,f6
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f10.f64 + ctx.f6.f64));
	// fmadds f5,f2,f9,f5
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f6,24(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 24, temp.u32);
	// fmuls f6,f5,f12
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// stfs f6,40(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 40, temp.u32);
	// lfs f6,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f6,f8,f6
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// lfs f5,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f8,f5,f8
	ctx.f8.f64 = double(float(ctx.f5.f64 - ctx.f8.f64));
	// fmuls f5,f6,f11
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fmuls f6,f6,f13
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmadds f5,f8,f10,f5
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + ctx.f5.f64));
	// fmadds f8,f8,f9,f6
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fmuls f6,f5,f0
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f6,28(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 28, temp.u32);
	// fmuls f8,f8,f12
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// stfs f8,44(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 44, temp.u32);
	// lfs f8,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f8,f7,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// lfs f6,16(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f7,f6,f7
	ctx.f7.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// fmuls f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmadds f11,f7,f10,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fmadds f13,f7,f9,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f9.f64 + ctx.f13.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,32(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 32, temp.u32);
	// fmuls f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f0,48(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 48, temp.u32);
	// lfd f31,-8(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F8C00"))) PPC_WEAK_FUNC(sub_828F8C00);
PPC_FUNC_IMPL(__imp__sub_828F8C00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x828F8C08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x828f8c34
	if (!ctx.cr6.lt) goto loc_828F8C34;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// b 0x828f8c58
	goto loc_828F8C58;
loc_828F8C34:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 * 88;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x828f8c58
	if (ctx.cr6.lt) goto loc_828F8C58;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-17156(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17156);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_828F8C58:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828f8c70
	if (!ctx.cr6.eq) goto loc_828F8C70;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828f8c9c
	if (ctx.cr6.eq) goto loc_828F8C9C;
loc_828F8C70:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mulli r10,r11,88
	ctx.r10.s64 = ctx.r11.s64 * 88;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// bl 0x826e4738
	ctx.lr = 0x828F8C8C;
	sub_826E4738(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_828F8C9C:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x828f8cd0
	if (!ctx.cr6.lt) goto loc_828F8CD0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_828F8CC8:
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// b 0x828f8e44
	goto loc_828F8E44;
loc_828F8CD0:
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mulli r11,r9,88
	ctx.r11.s64 = ctx.r9.s64 * 88;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x828f8d28
	if (!ctx.cr6.gt) goto loc_828F8D28;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 * 88;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 * 88;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 * 88;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x828f8cc8
	goto loc_828F8CC8;
loc_828F8D28:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x828f8d54
	if (!ctx.cr6.gt) goto loc_828F8D54;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
loc_828F8D38:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x828f8d54
	if (!ctx.cr6.lt) goto loc_828F8D54;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828f8d38
	if (ctx.cr6.lt) goto loc_828F8D38;
loc_828F8D54:
	// mulli r10,r11,88
	ctx.r10.s64 = ctx.r11.s64 * 88;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f3,168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// fdivs f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// bl 0x828f8a28
	ctx.lr = 0x828F8D84;
	sub_828F8A28(ctx, base);
	// fmuls f0,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f11,5024(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5024);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,96(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f5,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,5524(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5524);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmuls f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fnmsubs f0,f0,f11,f13
	ctx.f0.f64 = double(float(-(ctx.f0.f64 * ctx.f11.f64 - ctx.f13.f64)));
	// lfs f11,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f10,f9
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fsubs f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// fadds f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// fmuls f10,f8,f13
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmadds f10,f7,f12,f10
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f10,f6,f0,f10
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f10,f5,f11,f10
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f10.f64));
	// stfs f10,0(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f10,100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f9,116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f10,f9,f12,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f10,f8,f0,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f10,f7,f11,f10
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f10.f64));
	// stfs f10,0(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f10,104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f10,120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f13,f10,f12,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f0,f9,f0,f13
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f0,f8,f11,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f0.f64));
loc_828F8E44:
	// stfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F8E50"))) PPC_WEAK_FUNC(sub_828F8E50);
PPC_FUNC_IMPL(__imp__sub_828F8E50) {
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
	// bl 0x828f8fd0
	ctx.lr = 0x828F8E68;
	sub_828F8FD0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,15784
	ctx.r10.s64 = ctx.r11.s64 + 15784;
	// lis r11,16707
	ctx.r11.s64 = 1094909952;
	// ori r9,r11,18763
	ctx.r9.u64 = ctx.r11.u64 | 18763;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828F8EB8"))) PPC_WEAK_FUNC(sub_828F8EB8);
PPC_FUNC_IMPL(__imp__sub_828F8EB8) {
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
	// bl 0x828f89d0
	ctx.lr = 0x828F8ED8;
	sub_828F89D0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f8ee8
	if (ctx.cr0.eq) goto loc_828F8EE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e6f78
	ctx.lr = 0x828F8EE8;
	sub_825E6F78(ctx, base);
loc_828F8EE8:
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

__attribute__((alias("__imp__sub_828F8F08"))) PPC_WEAK_FUNC(sub_828F8F08);
PPC_FUNC_IMPL(__imp__sub_828F8F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x828F8F10;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f8f30
	if (ctx.cr0.eq) goto loc_828F8F30;
	// bl 0x82186190
	ctx.lr = 0x828F8F30;
	sub_82186190(ctx, base);
loc_828F8F30:
	// lis r11,744
	ctx.r11.s64 = 48758784;
	// mulli r3,r28,88
	ctx.r3.s64 = ctx.r28.s64 * 88;
	// ori r11,r11,47662
	ctx.r11.u64 = ctx.r11.u64 | 47662;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x828f8f48
	if (!ctx.cr6.gt) goto loc_828F8F48;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_828F8F48:
	// bl 0x82186158
	ctx.lr = 0x828F8F4C;
	sub_82186158(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r3.u32);
	// bne 0x828f8f68
	if (!ctx.cr0.eq) goto loc_828F8F68;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r11.u32);
	// b 0x828f8fb8
	goto loc_828F8FB8;
loc_828F8F68:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x828f8f98
	if (ctx.cr6.eq) goto loc_828F8F98;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_828F8F78:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// add r4,r31,r27
	ctx.r4.u64 = ctx.r31.u64 + ctx.r27.u64;
	// li r5,88
	ctx.r5.s64 = 88;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x826df680
	ctx.lr = 0x828F8F8C;
	sub_826DF680(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,88
	ctx.r31.s64 = ctx.r31.s64 + 88;
	// bne 0x828f8f78
	if (!ctx.cr0.eq) goto loc_828F8F78;
loc_828F8F98:
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// stw r28,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r28.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// stw r10,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r10.u32);
	// bl 0x828fd590
	ctx.lr = 0x828F8FB4;
	sub_828FD590(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_828F8FB8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F8FC0"))) PPC_WEAK_FUNC(sub_828F8FC0);
PPC_FUNC_IMPL(__imp__sub_828F8FC0) {
	PPC_FUNC_PROLOGUE();
	// addi r6,r4,8
	ctx.r6.s64 = ctx.r4.s64 + 8;
	// addi r5,r4,4
	ctx.r5.s64 = ctx.r4.s64 + 4;
	// b 0x828f8c00
	sub_828F8C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F8FD0"))) PPC_WEAK_FUNC(sub_828F8FD0);
PPC_FUNC_IMPL(__imp__sub_828F8FD0) {
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
	ctx.lr = 0x828F8FE8;
	sub_825E6F28(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,16707
	ctx.r10.s64 = 1094909952;
	// addi r11,r11,-23908
	ctx.r11.s64 = ctx.r11.s64 + -23908;
	// ori r10,r10,16979
	ctx.r10.u64 = ctx.r10.u64 | 16979;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_828F9018"))) PPC_WEAK_FUNC(sub_828F9018);
PPC_FUNC_IMPL(__imp__sub_828F9018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,-23908
	ctx.r11.s64 = ctx.r11.s64 + -23908;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825e6f60
	sub_825E6F60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F9028"))) PPC_WEAK_FUNC(sub_828F9028);
PPC_FUNC_IMPL(__imp__sub_828F9028) {
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
	// bne cr6,0x828f9050
	if (!ctx.cr6.eq) goto loc_828F9050;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r11,15984
	ctx.r3.s64 = ctx.r11.s64 + 15984;
	// b 0x828f9100
	goto loc_828F9100;
loc_828F9050:
	// lis r10,16706
	ctx.r10.s64 = 1094844416;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r10,r10,17473
	ctx.r10.u64 = ctx.r10.u64 | 17473;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x828f9070
	if (ctx.cr6.eq) goto loc_828F9070;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r11,15956
	ctx.r3.s64 = ctx.r11.s64 + 15956;
	// b 0x828f9100
	goto loc_828F9100;
loc_828F9070:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828f9124
	if (!ctx.cr0.eq) goto loc_828F9124;
	// lis r11,30609
	ctx.r11.s64 = 2005991424;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// ori r11,r11,29477
	ctx.r11.u64 = ctx.r11.u64 | 29477;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828f90dc
	if (ctx.cr6.eq) goto loc_828F90DC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r11,15896
	ctx.r3.s64 = ctx.r11.s64 + 15896;
	// bl 0x821e0968
	ctx.lr = 0x828F909C;
	sub_821E0968(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r4,306
	ctx.r4.s64 = 20054016;
	// addi r3,r11,15856
	ctx.r3.s64 = ctx.r11.s64 + 15856;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,6193
	ctx.r4.u64 = ctx.r4.u64 | 6193;
	// bl 0x821e0968
	ctx.lr = 0x828F90B4;
	sub_821E0968(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r9,100
	ctx.r9.s64 = 100;
	// addi r3,r10,15816
	ctx.r3.s64 = ctx.r10.s64 + 15816;
	// divwu r10,r11,r9
	ctx.r10.u32 = ctx.r11.u32 / ctx.r9.u32;
	// divwu r4,r11,r9
	ctx.r4.u32 = ctx.r11.u32 / ctx.r9.u32;
	// mulli r10,r10,100
	ctx.r10.s64 = ctx.r10.s64 * 100;
	// subf r5,r10,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x821e0968
	ctx.lr = 0x828F90D8;
	sub_821E0968(ctx, base);
	// b 0x828f9104
	goto loc_828F9104;
loc_828F90DC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r10,20559
	ctx.r10.s64 = 1347354624;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ori r10,r10,17968
	ctx.r10.u64 = ctx.r10.u64 | 17968;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x828f910c
	if (ctx.cr6.eq) goto loc_828F910C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r11,15788
	ctx.r3.s64 = ctx.r11.s64 + 15788;
loc_828F9100:
	// bl 0x821e0968
	ctx.lr = 0x828F9104;
	sub_821E0968(ctx, base);
loc_828F9104:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x828f9128
	goto loc_828F9128;
loc_828F910C:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x828fda28
	ctx.lr = 0x828F911C;
	sub_828FDA28(ctx, base);
	// li r11,256
	ctx.r11.s64 = 256;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
loc_828F9124:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_828F9128:
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

__attribute__((alias("__imp__sub_828F9140"))) PPC_WEAK_FUNC(sub_828F9140);
PPC_FUNC_IMPL(__imp__sub_828F9140) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f9188
	if (ctx.cr6.eq) goto loc_828F9188;
	// lis r10,16706
	ctx.r10.s64 = 1094844416;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r10,r10,17473
	ctx.r10.u64 = ctx.r10.u64 | 17473;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x828f9188
	if (!ctx.cr6.eq) goto loc_828F9188;
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f9188
	if (ctx.cr0.eq) goto loc_828F9188;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x828f9188
	if (!ctx.cr6.lt) goto loc_828F9188;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x828f9190
	if (!ctx.cr0.eq) goto loc_828F9190;
loc_828F9188:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_828F9190:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F91A0"))) PPC_WEAK_FUNC(sub_828F91A0);
PPC_FUNC_IMPL(__imp__sub_828F91A0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f91d4
	if (ctx.cr6.eq) goto loc_828F91D4;
	// lis r10,16706
	ctx.r10.s64 = 1094844416;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r10,r10,17473
	ctx.r10.u64 = ctx.r10.u64 | 17473;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x828f91d4
	if (!ctx.cr6.eq) goto loc_828F91D4;
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f91d4
	if (ctx.cr0.eq) goto loc_828F91D4;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x828f91dc
	if (ctx.cr6.lt) goto loc_828F91DC;
loc_828F91D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_828F91DC:
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 | ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F9208"))) PPC_WEAK_FUNC(sub_828F9208);
PPC_FUNC_IMPL(__imp__sub_828F9208) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f9224
	if (ctx.cr6.eq) goto loc_828F9224;
	// lis r10,16706
	ctx.r10.s64 = 1094844416;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r10,r10,17473
	ctx.r10.u64 = ctx.r10.u64 | 17473;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x828f922c
	if (ctx.cr6.eq) goto loc_828F922C;
loc_828F9224:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_828F922C:
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F9238"))) PPC_WEAK_FUNC(sub_828F9238);
PPC_FUNC_IMPL(__imp__sub_828F9238) {
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
	// bne cr6,0x828f9260
	if (!ctx.cr6.eq) goto loc_828F9260;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r11,16044
	ctx.r3.s64 = ctx.r11.s64 + 16044;
	// b 0x828f92b0
	goto loc_828F92B0;
loc_828F9260:
	// lis r10,16706
	ctx.r10.s64 = 1094844416;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r10,r10,21075
	ctx.r10.u64 = ctx.r10.u64 | 21075;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x828f9280
	if (ctx.cr6.eq) goto loc_828F9280;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r11,16016
	ctx.r3.s64 = ctx.r11.s64 + 16016;
	// b 0x828f92b0
	goto loc_828F92B0;
loc_828F9280:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828f92d8
	if (!ctx.cr0.eq) goto loc_828F92D8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r10,20559
	ctx.r10.s64 = 1347354624;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ori r10,r10,17968
	ctx.r10.u64 = ctx.r10.u64 | 17968;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x828f92bc
	if (ctx.cr6.eq) goto loc_828F92BC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r11,15788
	ctx.r3.s64 = ctx.r11.s64 + 15788;
loc_828F92B0:
	// bl 0x821e0968
	ctx.lr = 0x828F92B4;
	sub_821E0968(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x828f92dc
	goto loc_828F92DC;
loc_828F92BC:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x828fda28
	ctx.lr = 0x828F92CC;
	sub_828FDA28(ctx, base);
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
loc_828F92D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_828F92DC:
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

__attribute__((alias("__imp__sub_828F92F0"))) PPC_WEAK_FUNC(sub_828F92F0);
PPC_FUNC_IMPL(__imp__sub_828F92F0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x828f9300
	if (!ctx.cr6.eq) goto loc_828F9300;
loc_828F92F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_828F9300:
	// lis r10,16706
	ctx.r10.s64 = 1094844416;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r10,r10,21075
	ctx.r10.u64 = ctx.r10.u64 | 21075;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x828f92f8
	if (!ctx.cr6.eq) goto loc_828F92F8;
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f92f8
	if (ctx.cr0.eq) goto loc_828F92F8;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x828f92f8
	if (!ctx.cr6.lt) goto loc_828F92F8;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F9340"))) PPC_WEAK_FUNC(sub_828F9340);
PPC_FUNC_IMPL(__imp__sub_828F9340) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x828f9350
	if (!ctx.cr6.eq) goto loc_828F9350;
loc_828F9348:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_828F9350:
	// lis r10,16706
	ctx.r10.s64 = 1094844416;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r10,r10,21075
	ctx.r10.u64 = ctx.r10.u64 | 21075;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x828f9348
	if (!ctx.cr6.eq) goto loc_828F9348;
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f9348
	if (ctx.cr0.eq) goto loc_828F9348;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x828f9348
	if (!ctx.cr6.lt) goto loc_828F9348;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F9390"))) PPC_WEAK_FUNC(sub_828F9390);
PPC_FUNC_IMPL(__imp__sub_828F9390) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x828f93a0
	if (!ctx.cr6.eq) goto loc_828F93A0;
loc_828F9398:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_828F93A0:
	// lis r10,16706
	ctx.r10.s64 = 1094844416;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r10,r10,21075
	ctx.r10.u64 = ctx.r10.u64 | 21075;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x828f9398
	if (!ctx.cr6.eq) goto loc_828F9398;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F93C0"))) PPC_WEAK_FUNC(sub_828F93C0);
PPC_FUNC_IMPL(__imp__sub_828F93C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x828F93C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828f9420
	if (ctx.cr6.eq) goto loc_828F9420;
loc_828F93E0:
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x828f93f8
	if (ctx.cr0.eq) goto loc_828F93F8;
	// addi r5,r28,1
	ctx.r5.s64 = ctx.r28.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828f93c0
	ctx.lr = 0x828F93F8;
	sub_828F93C0(ctx, base);
loc_828F93F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,112(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F9414;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x828f93e0
	if (!ctx.cr6.eq) goto loc_828F93E0;
loc_828F9420:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F9428"))) PPC_WEAK_FUNC(sub_828F9428);
PPC_FUNC_IMPL(__imp__sub_828F9428) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x828f95e0
	if (ctx.cr0.eq) goto loc_828F95E0;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x828f9508
	if (ctx.cr6.eq) goto loc_828F9508;
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r9,140(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// stw r9,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r9.u32);
	// lwz r6,32(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x828f947c
	if (!ctx.cr6.eq) goto loc_828F947C;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x828f95e0
	if (ctx.cr6.eq) goto loc_828F95E0;
loc_828F947C:
	// lwz r9,140(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x828f95e0
	if (ctx.cr6.eq) goto loc_828F95E0;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r3,140(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x828f94c8
	if (!ctx.cr6.eq) goto loc_828F94C8;
	// lwz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq 0x828f94b4
	if (ctx.cr0.eq) goto loc_828F94B4;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x828f94bc
	goto loc_828F94BC;
loc_828F94B4:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
loc_828F94BC:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F94C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x828f9598
	goto loc_828F9598;
loc_828F94C8:
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828f94ec
	if (ctx.cr0.eq) goto loc_828F94EC;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x828f94fc
	goto loc_828F94FC;
loc_828F94EC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
loc_828F94FC:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F9504;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x828f95e0
	goto loc_828F95E0;
loc_828F9508:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r9,188(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x828f95e0
	if (ctx.cr0.eq) goto loc_828F95E0;
	// lwz r10,192(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x828f95e0
	if (ctx.cr6.eq) goto loc_828F95E0;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r3,80(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x828f9554
	if (!ctx.cr6.eq) goto loc_828F9554;
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x828f95b4
	if (ctx.cr6.eq) goto loc_828F95B4;
loc_828F9554:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f95b4
	if (ctx.cr6.eq) goto loc_828F95B4;
	// lwz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq 0x828f9578
	if (ctx.cr0.eq) goto loc_828F9578;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x828f9580
	goto loc_828F9580;
loc_828F9578:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
loc_828F9580:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F9588;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828f95a4
	if (!ctx.cr6.eq) goto loc_828F95A4;
loc_828F9598:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82630750
	ctx.lr = 0x828F95A4;
	sub_82630750(ctx, base);
loc_828F95A4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8262fd98
	ctx.lr = 0x828F95B0;
	sub_8262FD98(ctx, base);
	// b 0x828f95e0
	goto loc_828F95E0;
loc_828F95B4:
	// addi r30,r31,80
	ctx.r30.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8262fd98
	ctx.lr = 0x828F95C4;
	sub_8262FD98(ctx, base);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828f95e0
	if (!ctx.cr6.eq) goto loc_828F95E0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82630750
	ctx.lr = 0x828F95E0;
	sub_82630750(ctx, base);
loc_828F95E0:
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

__attribute__((alias("__imp__sub_828F95F8"))) PPC_WEAK_FUNC(sub_828F95F8);
PPC_FUNC_IMPL(__imp__sub_828F95F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x828F9600;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x828f96d8
	if (ctx.cr6.gt) goto loc_828F96D8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x828f96e0
	if (ctx.cr6.eq) goto loc_828F96E0;
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f96e0
	if (ctx.cr0.eq) goto loc_828F96E0;
	// lfs f0,128(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x828f96d8
	if (ctx.cr6.lt) goto loc_828F96D8;
	// lhz r11,174(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 174);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f966c
	if (!ctx.cr0.eq) goto loc_828F966C;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x828f966c
	if (ctx.cr6.lt) goto loc_828F966C;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// sth r11,174(r30)
	PPC_STORE_U16(ctx.r30.u32 + 174, ctx.r11.u16);
	// b 0x828f9764
	goto loc_828F9764;
loc_828F966C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,28(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// lfs f31,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f2,f31
	ctx.cr6.compare(ctx.f2.f64, ctx.f31.f64);
	// ble cr6,0x828f96d8
	if (!ctx.cr6.gt) goto loc_828F96D8;
	// lfs f1,132(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f2
	ctx.cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// blt cr6,0x828f96d8
	if (ctx.cr6.lt) goto loc_828F96D8;
	// bl 0x82630d60
	ctx.lr = 0x828F9690;
	sub_82630D60(ctx, base);
	// stfs f1,132(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 132, temp.u32);
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f96d8
	if (ctx.cr0.eq) goto loc_828F96D8;
	// lfs f0,32(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x828f96c0
	if (ctx.cr6.lt) goto loc_828F96C0;
	// lfs f13,128(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
loc_828F96B0:
	// lfs f12,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x828f96d8
	if (!ctx.cr6.lt) goto loc_828F96D8;
loc_828F96C0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f1,14088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82630a00
	ctx.lr = 0x828F96CC;
	sub_82630A00(ctx, base);
	// lfs f0,36(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x828f9764
	if (ctx.cr6.lt) goto loc_828F9764;
loc_828F96D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x828f9768
	goto loc_828F9768;
loc_828F96E0:
	// lfs f0,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x828f96d8
	if (ctx.cr6.lt) goto loc_828F96D8;
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// rlwinm r30,r5,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x828f970c
	if (!ctx.cr6.eq) goto loc_828F970C;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x828f975c
	if (!ctx.cr6.lt) goto loc_828F975C;
loc_828F970C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,28(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// lfs f31,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f2,f31
	ctx.cr6.compare(ctx.f2.f64, ctx.f31.f64);
	// beq cr6,0x828f96d8
	if (ctx.cr6.eq) goto loc_828F96D8;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lfsx f1,r11,r30
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f2
	ctx.cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// blt cr6,0x828f96d8
	if (ctx.cr6.lt) goto loc_828F96D8;
	// bl 0x82630d60
	ctx.lr = 0x828F9734;
	sub_82630D60(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// stfsx f1,r11,r30
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, temp.u32);
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f96d8
	if (ctx.cr0.eq) goto loc_828F96D8;
	// lfs f0,32(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x828f96c0
	if (ctx.cr6.lt) goto loc_828F96C0;
	// lfs f13,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// b 0x828f96b0
	goto loc_828F96B0;
loc_828F975C:
	// li r10,1
	ctx.r10.s64 = 1;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
loc_828F9764:
	// li r3,1
	ctx.r3.s64 = 1;
loc_828F9768:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F9778"))) PPC_WEAK_FUNC(sub_828F9778);
PPC_FUNC_IMPL(__imp__sub_828F9778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x828F9780;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lfs f0,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f30.f64 = double(temp.f32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x828f98fc
	if (ctx.cr6.lt) goto loc_828F98FC;
	// lfs f0,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x828f98fc
	if (ctx.cr6.lt) goto loc_828F98FC;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,-17756(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17756);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x825e7708
	ctx.lr = 0x828F97D0;
	sub_825E7708(ctx, base);
	// addi r4,r29,80
	ctx.r4.s64 = ctx.r29.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8262fa18
	ctx.lr = 0x828F97DC;
	sub_8262FA18(ctx, base);
	// lfs f13,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f11,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f13,f12,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// blt cr6,0x828f98fc
	if (ctx.cr6.lt) goto loc_828F98FC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f12,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// lfs f1,14096(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14096);
	ctx.f1.f64 = double(temp.f32);
	// ble cr6,0x828f9878
	if (!ctx.cr6.gt) goto loc_828F9878;
	// bl 0x82630a00
	ctx.lr = 0x828F9830;
	sub_82630A00(ctx, base);
	// lfs f0,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x828f9978
	if (ctx.cr6.gt) goto loc_828F9978;
	// lfs f0,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x828f9850
	if (!ctx.cr6.lt) goto loc_828F9850;
	// lfs f0,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// b 0x828f9924
	goto loc_828F9924;
loc_828F9850:
	// lfs f13,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bl 0x82630a00
	ctx.lr = 0x828F9868;
	sub_82630A00(ctx, base);
	// bl 0x82630d08
	ctx.lr = 0x828F986C;
	sub_82630D08(ctx, base);
	// lfs f0,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// b 0x828f995c
	goto loc_828F995C;
loc_828F9878:
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fdivs f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// bl 0x82630a00
	ctx.lr = 0x828F988C;
	sub_82630A00(ctx, base);
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fnmsubs f0,f13,f31,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f31.f64 - ctx.f0.f64)));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x828f9978
	if (ctx.cr6.gt) goto loc_828F9978;
	// lfs f12,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, ctx.f30.f64);
	// bge cr6,0x828f98c4
	if (!ctx.cr6.lt) goto loc_828F98C4;
	// lfs f13,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fnmsubs f0,f13,f31,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f31.f64 - ctx.f0.f64)));
	// b 0x828f9924
	goto loc_828F9924;
loc_828F98C4:
	// lfs f11,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsubs f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fnmsubs f30,f11,f31,f0
	ctx.f30.f64 = double(float(-(ctx.f11.f64 * ctx.f31.f64 - ctx.f0.f64)));
	// fnmsubs f0,f12,f31,f13
	ctx.f0.f64 = double(float(-(ctx.f12.f64 * ctx.f31.f64 - ctx.f13.f64)));
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bl 0x82630a00
	ctx.lr = 0x828F98F0;
	sub_82630A00(ctx, base);
	// bl 0x82630d08
	ctx.lr = 0x828F98F4;
	sub_82630D08(ctx, base);
	// fadds f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
	// b 0x828f995c
	goto loc_828F995C;
loc_828F98FC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f1,14096(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14096);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82630a00
	ctx.lr = 0x828F9908;
	sub_82630A00(ctx, base);
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x828f9978
	if (ctx.cr6.gt) goto loc_828F9978;
	// lfs f0,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x828f9938
	if (!ctx.cr6.lt) goto loc_828F9938;
	// lfs f0,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
loc_828F9924:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x828f9978
	goto loc_828F9978;
loc_828F9938:
	// lfs f13,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bl 0x82630a00
	ctx.lr = 0x828F9950;
	sub_82630A00(ctx, base);
	// bl 0x82630d08
	ctx.lr = 0x828F9954;
	sub_82630D08(ctx, base);
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
loc_828F995C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x828f9978
	if (!ctx.cr6.lt) goto loc_828F9978;
	// li r30,0
	ctx.r30.s64 = 0;
loc_828F9978:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F9990"))) PPC_WEAK_FUNC(sub_828F9990);
PPC_FUNC_IMPL(__imp__sub_828F9990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8a8
	ctx.lr = 0x828F9998;
	__savegprlr_20(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x828f9c6c
	if (ctx.cr6.gt) goto loc_828F9C6C;
	// rlwinm r20,r27,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r21,r27,12
	ctx.r21.s64 = ctx.r27.s64 * 12;
	// li r22,0
	ctx.r22.s64 = 0;
loc_828F99C8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// bl 0x828f6440
	ctx.lr = 0x828F99D4;
	sub_828F6440(ctx, base);
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r28,28(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x828f95f8
	ctx.lr = 0x828F99F0;
	sub_828F95F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f9c00
	if (ctx.cr0.eq) goto loc_828F9C00;
	// lwz r29,0(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq 0x828f9a18
	if (ctx.cr0.eq) goto loc_828F9A18;
	// b 0x828f9a0c
	goto loc_828F9A0C;
loc_828F9A08:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_828F9A0C:
	// lwz r11,112(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x828f9a08
	if (!ctx.cr0.eq) goto loc_828F9A08;
loc_828F9A18:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f9a4c
	if (ctx.cr0.eq) goto loc_828F9A4C;
	// lwz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828f9a4c
	if (ctx.cr0.eq) goto loc_828F9A4C;
	// lwz r6,72(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// lfs f1,144(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,68(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// li r3,2
	ctx.r3.s64 = 2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F9A4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F9A4C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828f9778
	ctx.lr = 0x828F9A58;
	sub_828F9778(ctx, base);
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x828f9c00
	if (ctx.cr0.eq) goto loc_828F9C00;
loc_828F9A64:
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// lwz r4,28(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82ad03f8
	ctx.lr = 0x828F9A70;
	sub_82AD03F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f9bf4
	if (ctx.cr0.eq) goto loc_828F9BF4;
	// lwz r11,216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// li r3,176
	ctx.r3.s64 = 176;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// stb r10,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r10.u8);
	// lbz r11,9(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// stb r11,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r11.u8);
	// bl 0x825e6f70
	ctx.lr = 0x828F9AA4;
	sub_825E6F70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f9ac4
	if (ctx.cr0.eq) goto loc_828F9AC4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,176(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// addi r5,r30,80
	ctx.r5.s64 = ctx.r30.s64 + 80;
	// bl 0x828fbd18
	ctx.lr = 0x828F9ABC;
	sub_828FBD18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x828f9ac8
	goto loc_828F9AC8;
loc_828F9AC4:
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_828F9AC8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828f9bf4
	if (ctx.cr6.eq) goto loc_828F9BF4;
	// lwz r11,216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x828f9af4
	if (!ctx.cr6.eq) goto loc_828F9AF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x828fbb50
	ctx.lr = 0x828F9AF4;
	sub_828FBB50(ctx, base);
loc_828F9AF4:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828f9b20
	if (!ctx.cr6.eq) goto loc_828F9B20;
	// stw r31,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
	// stw r22,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r22.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// stw r22,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r22.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// stw r23,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r23.u32);
	// lwz r29,0(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// b 0x828f9b34
	goto loc_828F9B34;
loc_828F9B20:
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// stw r31,112(r29)
	PPC_STORE_U32(ctx.r29.u32 + 112, ctx.r31.u32);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stw r22,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r22.u32);
	// stw r23,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r23.u32);
loc_828F9B34:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f9bf4
	if (ctx.cr0.eq) goto loc_828F9BF4;
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f9b9c
	if (ctx.cr0.eq) goto loc_828F9B9C;
	// lwz r10,108(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x828f9bf4
	if (!ctx.cr6.lt) goto loc_828F9BF4;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x828f9b74
	goto loc_828F9B74;
loc_828F9B6C:
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// lwz r9,136(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
loc_828F9B74:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x828f9b6c
	if (!ctx.cr6.eq) goto loc_828F9B6C;
	// lwz r10,132(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x828f9bf0
	if (!ctx.cr6.eq) goto loc_828F9BF0;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r10,132(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x828f9bf0
	if (!ctx.cr6.eq) goto loc_828F9BF0;
	// b 0x828f9bc8
	goto loc_828F9BC8;
loc_828F9B9C:
	// lwz r11,132(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828f9be0
	if (!ctx.cr6.eq) goto loc_828F9BE0;
	// lwz r11,108(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// lwz r10,192(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r10,132(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x828f9be0
	if (!ctx.cr6.eq) goto loc_828F9BE0;
loc_828F9BC8:
	// lwz r3,80(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f9bf4
	if (ctx.cr0.eq) goto loc_828F9BF4;
	// lwz r4,80(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// bl 0x821e0968
	ctx.lr = 0x828F9BDC;
	sub_821E0968(ctx, base);
	// b 0x828f9bf4
	goto loc_828F9BF4;
loc_828F9BE0:
	// lwz r11,108(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// lwz r10,192(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_828F9BF0:
	// stw r11,124(r29)
	PPC_STORE_U32(ctx.r29.u32 + 124, ctx.r11.u32);
loc_828F9BF4:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplw cr6,r25,r26
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x828f9a64
	if (ctx.cr6.lt) goto loc_828F9A64;
loc_828F9C00:
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828f9c3c
	if (!ctx.cr0.eq) goto loc_828F9C3C;
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r21,r21,12
	ctx.r21.s64 = ctx.r21.s64 + 12;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x828f9c6c
	if (ctx.cr6.gt) goto loc_828F9C6C;
	// lwz r11,192(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// add r24,r11,r20
	ctx.r24.u64 = ctx.r11.u64 + ctx.r20.u64;
	// b 0x828f99c8
	goto loc_828F99C8;
loc_828F9C3C:
	// lwz r31,0(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x828f9c6c
	if (ctx.cr0.eq) goto loc_828F9C6C;
	// addi r29,r27,1
	ctx.r29.s64 = ctx.r27.s64 + 1;
loc_828F9C4C:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828f9990
	ctx.lr = 0x828F9C60;
	sub_828F9990(ctx, base);
	// lwz r31,112(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x828f9c4c
	if (!ctx.cr0.eq) goto loc_828F9C4C;
loc_828F9C6C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826de8f8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F9C78"))) PPC_WEAK_FUNC(sub_828F9C78);
PPC_FUNC_IMPL(__imp__sub_828F9C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x828F9C80;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828f9dfc
	if (ctx.cr6.eq) goto loc_828F9DFC;
loc_828F9C9C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,180(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 180);
	// bl 0x828f6440
	ctx.lr = 0x828F9CA8;
	sub_828F6440(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828fb558
	ctx.lr = 0x828F9CB4;
	sub_828FB558(ctx, base);
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x828f9df0
	if (ctx.cr0.eq) goto loc_828F9DF0;
	// lwz r11,184(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 184);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f9de0
	if (ctx.cr0.eq) goto loc_828F9DE0;
	// lhz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 100);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f9cec
	if (ctx.cr0.eq) goto loc_828F9CEC;
	// addi r11,r4,80
	ctx.r11.s64 = ctx.r4.s64 + 80;
	// lhz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// sth r10,20(r11)
	PPC_STORE_U16(ctx.r11.u32 + 20, ctx.r10.u16);
loc_828F9CEC:
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r30,104(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x828f9db0
	if (!ctx.cr6.eq) goto loc_828F9DB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,104(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x828fb1c8
	ctx.lr = 0x828F9D0C;
	sub_828FB1C8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x828f9df0
	if (ctx.cr0.eq) goto loc_828F9DF0;
	// lwz r11,132(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828f9da4
	if (!ctx.cr6.eq) goto loc_828F9DA4;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bne cr6,0x828f9d78
	if (!ctx.cr6.eq) goto loc_828F9D78;
	// lwz r5,104(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne 0x828f9d50
	if (!ctx.cr0.eq) goto loc_828F9D50;
	// lwz r5,100(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x828f9d54
	goto loc_828F9D54;
loc_828F9D50:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
loc_828F9D54:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F9D5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82630750
	ctx.lr = 0x828F9D68;
	sub_82630750(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8262fd98
	ctx.lr = 0x828F9D74;
	sub_8262FD98(ctx, base);
	// b 0x828f9da4
	goto loc_828F9DA4;
loc_828F9D78:
	// lwz r6,104(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// addi r5,r31,16
	ctx.r5.s64 = ctx.r31.s64 + 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne 0x828f9d98
	if (!ctx.cr0.eq) goto loc_828F9D98;
	// lwz r6,100(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x828f9d9c
	goto loc_828F9D9C;
loc_828F9D98:
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
loc_828F9D9C:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F9DA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F9DA4:
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// b 0x828f9de4
	goto loc_828F9DE4;
loc_828F9DB0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f9dd8
	if (ctx.cr0.eq) goto loc_828F9DD8;
	// lwz r11,124(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828f9dd8
	if (ctx.cr6.eq) goto loc_828F9DD8;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r11,124(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// b 0x828f9de4
	goto loc_828F9DE4;
loc_828F9DD8:
	// addi r5,r31,16
	ctx.r5.s64 = ctx.r31.s64 + 16;
	// b 0x828f9de4
	goto loc_828F9DE4;
loc_828F9DE0:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_828F9DE4:
	// addi r6,r26,1
	ctx.r6.s64 = ctx.r26.s64 + 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x828f9c78
	ctx.lr = 0x828F9DF0;
	sub_828F9C78(ctx, base);
loc_828F9DF0:
	// lwz r31,112(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x828f9c9c
	if (!ctx.cr0.eq) goto loc_828F9C9C;
loc_828F9DFC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F9E08"))) PPC_WEAK_FUNC(sub_828F9E08);
PPC_FUNC_IMPL(__imp__sub_828F9E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x828F9E10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828f9e80
	if (ctx.cr6.eq) goto loc_828F9E80;
loc_828F9E2C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// bl 0x828f6440
	ctx.lr = 0x828F9E38;
	sub_828F6440(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828fb820
	ctx.lr = 0x828F9E44;
	sub_828FB820(ctx, base);
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x828f9e74
	if (ctx.cr0.eq) goto loc_828F9E74;
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// addi r6,r29,1
	ctx.r6.s64 = ctx.r29.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,16
	ctx.r5.s64 = ctx.r31.s64 + 16;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828f9e70
	if (!ctx.cr0.eq) goto loc_828F9E70;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_828F9E70:
	// bl 0x828f9e08
	ctx.lr = 0x828F9E74;
	sub_828F9E08(ctx, base);
loc_828F9E74:
	// lwz r31,112(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x828f9e2c
	if (!ctx.cr0.eq) goto loc_828F9E2C;
loc_828F9E80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F9E88"))) PPC_WEAK_FUNC(sub_828F9E88);
PPC_FUNC_IMPL(__imp__sub_828F9E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x828F9E90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828f9efc
	if (ctx.cr6.eq) goto loc_828F9EFC;
loc_828F9EAC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// bl 0x828f6440
	ctx.lr = 0x828F9EB8;
	sub_828F6440(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828fb9d8
	ctx.lr = 0x828F9EC0;
	sub_828FB9D8(ctx, base);
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x828f9ef0
	if (ctx.cr0.eq) goto loc_828F9EF0;
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// addi r6,r29,1
	ctx.r6.s64 = ctx.r29.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,16
	ctx.r5.s64 = ctx.r31.s64 + 16;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828f9eec
	if (!ctx.cr0.eq) goto loc_828F9EEC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_828F9EEC:
	// bl 0x828f9e88
	ctx.lr = 0x828F9EF0;
	sub_828F9E88(ctx, base);
loc_828F9EF0:
	// lwz r31,112(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x828f9eac
	if (!ctx.cr0.eq) goto loc_828F9EAC;
loc_828F9EFC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F9F08"))) PPC_WEAK_FUNC(sub_828F9F08);
PPC_FUNC_IMPL(__imp__sub_828F9F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x828F9F10;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x828fa098
	if (ctx.cr0.eq) goto loc_828FA098;
	// li r29,0
	ctx.r29.s64 = 0;
loc_828F9F2C:
	// addi r31,r30,120
	ctx.r31.s64 = ctx.r30.s64 + 120;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828f9f48
	if (ctx.cr6.eq) goto loc_828F9F48;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828f9f08
	ctx.lr = 0x828F9F48;
	sub_828F9F08(ctx, base);
loc_828F9F48:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828fa08c
	if (!ctx.cr6.eq) goto loc_828FA08C;
	// lhz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fa08c
	if (ctx.cr0.eq) goto loc_828FA08C;
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x828f9f90
	if (!ctx.cr0.eq) goto loc_828F9F90;
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r30,112(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828f9fc4
	if (ctx.cr0.eq) goto loc_828F9FC4;
	// stw r29,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r29.u32);
	// b 0x828f9fc4
	goto loc_828F9FC4;
loc_828F9F90:
	// lwz r10,112(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x828f9fa8
	if (!ctx.cr6.eq) goto loc_828F9FA8;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r29,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r29.u32);
	// b 0x828f9fc4
	goto loc_828F9FC4;
loc_828F9FA8:
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// lwz r10,112(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// stw r10,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// lwz r10,108(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// stw r10,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
	// lwz r30,112(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
loc_828F9FC4:
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fa070
	if (ctx.cr0.eq) goto loc_828FA070;
	// lwz r11,184(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fa02c
	if (ctx.cr0.eq) goto loc_828FA02C;
	// lwz r10,108(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x828fa090
	if (!ctx.cr6.lt) goto loc_828FA090;
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x828fa01c
	if (ctx.cr6.eq) goto loc_828FA01C;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r10,108(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
loc_828FA00C:
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// lwz r8,136(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x828fa00c
	if (!ctx.cr6.eq) goto loc_828FA00C;
loc_828FA01C:
	// lwz r10,132(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x828fa06c
	if (!ctx.cr6.eq) goto loc_828FA06C;
	// b 0x828fa048
	goto loc_828FA048;
loc_828FA02C:
	// lwz r11,132(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828fa06c
	if (!ctx.cr6.eq) goto loc_828FA06C;
	// lwz r11,108(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	// lwz r10,192(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 192);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_828FA048:
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r10,132(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x828fa06c
	if (!ctx.cr6.eq) goto loc_828FA06C;
	// lwz r3,80(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828fa06c
	if (ctx.cr0.eq) goto loc_828FA06C;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x821e0968
	ctx.lr = 0x828FA06C;
	sub_821E0968(ctx, base);
loc_828FA06C:
	// stw r29,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r29.u32);
loc_828FA070:
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
	ctx.lr = 0x828FA088;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x828fa090
	goto loc_828FA090;
loc_828FA08C:
	// lwz r30,112(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
loc_828FA090:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x828f9f2c
	if (!ctx.cr6.eq) goto loc_828F9F2C;
loc_828FA098:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FA0A0"))) PPC_WEAK_FUNC(sub_828FA0A0);
PPC_FUNC_IMPL(__imp__sub_828FA0A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x828FA0A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x828fa180
	if (ctx.cr0.eq) goto loc_828FA180;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828fa180
	if (!ctx.cr0.eq) goto loc_828FA180;
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828fa180
	if (!ctx.cr0.eq) goto loc_828FA180;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828fa180
	if (!ctx.cr0.eq) goto loc_828FA180;
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828fa180
	if (ctx.cr6.eq) goto loc_828FA180;
	// lwz r4,172(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r28,-32044
	ctx.r28.s64 = -2100035584;
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x828fa110
	if (ctx.cr0.eq) goto loc_828FA110;
	// lwz r3,-17740(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -17740);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FA10C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
loc_828FA110:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828fa140
	if (ctx.cr0.eq) goto loc_828FA140;
	// lwz r3,-17740(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -17740);
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FA138;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r3.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
loc_828FA140:
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x828fa180
	if (!ctx.cr6.gt) goto loc_828FA180;
	// addi r28,r31,80
	ctx.r28.s64 = ctx.r31.s64 + 80;
loc_828FA154:
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x828f9e08
	ctx.lr = 0x828FA16C;
	sub_828F9E08(ctx, base);
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x828fa154
	if (ctx.cr6.lt) goto loc_828FA154;
loc_828FA180:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FA188"))) PPC_WEAK_FUNC(sub_828FA188);
PPC_FUNC_IMPL(__imp__sub_828FA188) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,192(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x828fa1c0
	if (ctx.cr0.eq) goto loc_828FA1C0;
	// lwz r9,212(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x828fa1c0
	if (ctx.cr0.eq) goto loc_828FA1C0;
loc_828FA1A4:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x828fa1c8
	if (!ctx.cr6.eq) goto loc_828FA1C8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x828fa1a4
	if (ctx.cr6.lt) goto loc_828FA1A4;
loc_828FA1C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_828FA1C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FA1D0"))) PPC_WEAK_FUNC(sub_828FA1D0);
PPC_FUNC_IMPL(__imp__sub_828FA1D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x828FA1D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828fa24c
	if (ctx.cr6.eq) goto loc_828FA24C;
loc_828FA1F8:
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x828fa218
	if (ctx.cr0.eq) goto loc_828FA218;
	// addi r7,r28,1
	ctx.r7.s64 = ctx.r28.s64 + 1;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828fa1d0
	ctx.lr = 0x828FA218;
	sub_828FA1D0(ctx, base);
loc_828FA218:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// bl 0x828f6440
	ctx.lr = 0x828FA224;
	sub_828F6440(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x828fa240
	if (!ctx.cr6.eq) goto loc_828FA240;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828fbb50
	ctx.lr = 0x828FA240;
	sub_828FBB50(ctx, base);
loc_828FA240:
	// lwz r31,112(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x828fa1f8
	if (!ctx.cr0.eq) goto loc_828FA1F8;
loc_828FA24C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FA258"))) PPC_WEAK_FUNC(sub_828FA258);
PPC_FUNC_IMPL(__imp__sub_828FA258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x828FA260;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x828f8fd0
	ctx.lr = 0x828FA27C;
	sub_828F8FD0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r28,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r28.u32);
	// lis r10,16715
	ctx.r10.s64 = 1095434240;
	// addi r11,r11,16076
	ctx.r11.s64 = ctx.r11.s64 + 16076;
	// ori r10,r10,16978
	ctx.r10.u64 = ctx.r10.u64 | 16978;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// sth r29,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r29.u16);
	// lwz r11,128(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// lwz r3,-17740(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17740);
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FA2E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r29,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r3.u32);
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// stfs f31,200(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// lwz r3,-17740(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17740);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FA31C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r3.u32);
	// lwz r3,-17740(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17740);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FA340;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r3.u32);
	// lwz r3,-17740(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17740);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// mulli r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 * 12;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FA364;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r3.u32);
	// beq 0x828fa3d4
	if (ctx.cr0.eq) goto loc_828FA3D4;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x828fa3e0
	if (!ctx.cr6.gt) goto loc_828FA3E0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_828FA384:
	// lwz r9,216(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r29,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r29.u32);
	// lwz r9,216(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r29,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r29.u32);
	// lwz r9,216(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stb r29,8(r9)
	PPC_STORE_U8(ctx.r9.u32 + 8, ctx.r29.u8);
	// lwz r9,216(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stb r29,9(r9)
	PPC_STORE_U8(ctx.r9.u32 + 9, ctx.r29.u8);
	// lwz r9,216(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stb r29,10(r9)
	PPC_STORE_U8(ctx.r9.u32 + 10, ctx.r29.u8);
	// lwz r9,212(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x828fa384
	if (ctx.cr6.lt) goto loc_828FA384;
	// b 0x828fa3e0
	goto loc_828FA3E0;
loc_828FA3D4:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
loc_828FA3E0:
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r10,192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// beq cr6,0x828fa42c
	if (ctx.cr6.eq) goto loc_828FA42C;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x828fa438
	if (!ctx.cr6.gt) goto loc_828FA438;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_828FA40C:
	// lwz r9,192(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r29,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r29.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,212(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x828fa40c
	if (ctx.cr6.lt) goto loc_828FA40C;
	// b 0x828fa438
	goto loc_828FA438;
loc_828FA42C:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
loc_828FA438:
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828fa48c
	if (ctx.cr6.eq) goto loc_828FA48C;
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828fa48c
	if (ctx.cr6.eq) goto loc_828FA48C;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x828fa498
	if (!ctx.cr6.gt) goto loc_828FA498;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_828FA464:
	// lwz r9,204(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfsx f31,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// lwz r9,208(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// stwx r29,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r29.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,212(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x828fa464
	if (ctx.cr6.lt) goto loc_828FA464;
	// b 0x828fa498
	goto loc_828FA498;
loc_828FA48C:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
loc_828FA498:
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// beq cr6,0x828fa4bc
	if (ctx.cr6.eq) goto loc_828FA4BC;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// bl 0x8262fd98
	ctx.lr = 0x828FA4B8;
	sub_8262FD98(ctx, base);
	// b 0x828fa4c8
	goto loc_828FA4C8;
loc_828FA4BC:
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// bl 0x8262fd50
	ctx.lr = 0x828FA4C8;
	sub_8262FD50(ctx, base);
loc_828FA4C8:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8262fd50
	ctx.lr = 0x828FA4D0;
	sub_8262FD50(ctx, base);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// stfs f31,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq 0x828fa4f8
	if (ctx.cr0.eq) goto loc_828FA4F8;
	// stw r10,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
	// b 0x828fa4fc
	goto loc_828FA4FC;
loc_828FA4F8:
	// stw r29,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r29.u32);
loc_828FA4FC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x828fa510
	if (ctx.cr0.eq) goto loc_828FA510;
	// stw r10,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r10.u32);
	// b 0x828fa514
	goto loc_828FA514;
loc_828FA510:
	// stw r29,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r29.u32);
loc_828FA514:
	// lwz r10,140(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 140);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r29.u32);
	// stw r29,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r29.u32);
	// stw r10,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r10.u32);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FA540"))) PPC_WEAK_FUNC(sub_828FA540);
PPC_FUNC_IMPL(__imp__sub_828FA540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x828FA548;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828fa6bc
	if (!ctx.cr0.eq) goto loc_828FA6BC;
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x828fa598
	if (!ctx.cr6.gt) goto loc_828FA598;
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828fa598
	if (ctx.cr0.eq) goto loc_828FA598;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828fa598
	if (ctx.cr6.eq) goto loc_828FA598;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addic. r4,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r4.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x828fa598
	if (ctx.cr0.eq) goto loc_828FA598;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8262fd98
	ctx.lr = 0x828FA598;
	sub_8262FD98(ctx, base);
loc_828FA598:
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828fa5e4
	if (ctx.cr6.eq) goto loc_828FA5E4;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x828fa5e4
	if (!ctx.cr6.gt) goto loc_828FA5E4;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_828FA5BC:
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x828f93c0
	ctx.lr = 0x828FA5D0;
	sub_828F93C0(ctx, base);
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x828fa5bc
	if (ctx.cr6.lt) goto loc_828FA5BC;
loc_828FA5E4:
	// lwz r4,172(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x828fa610
	if (ctx.cr0.eq) goto loc_828FA610;
	// lwz r3,-17740(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17740);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FA60C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r29.u32);
loc_828FA610:
	// lwz r4,204(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x828fa638
	if (ctx.cr0.eq) goto loc_828FA638;
	// lwz r3,-17740(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17740);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FA634;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r29.u32);
loc_828FA638:
	// lwz r4,208(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x828fa660
	if (ctx.cr0.eq) goto loc_828FA660;
	// lwz r3,-17740(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17740);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FA65C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r29.u32);
loc_828FA660:
	// lwz r4,192(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x828fa688
	if (ctx.cr0.eq) goto loc_828FA688;
	// lwz r3,-17740(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17740);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FA684;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r29.u32);
loc_828FA688:
	// lwz r4,216(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x828fa6b0
	if (ctx.cr0.eq) goto loc_828FA6B0;
	// lwz r3,-17740(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17740);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FA6AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r29.u32);
loc_828FA6B0:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
loc_828FA6BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FA6C8"))) PPC_WEAK_FUNC(sub_828FA6C8);
PPC_FUNC_IMPL(__imp__sub_828FA6C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x828FA6D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828fa860
	if (!ctx.cr0.eq) goto loc_828FA860;
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828fa860
	if (!ctx.cr0.eq) goto loc_828FA860;
	// lwz r10,192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828fa860
	if (ctx.cr6.eq) goto loc_828FA860;
	// lwz r4,176(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r10,192(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 192);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x828fa750
	if (!ctx.cr6.eq) goto loc_828FA750;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828fa73c
	if (!ctx.cr0.eq) goto loc_828FA73C;
	// lwz r10,184(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lfs f0,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x828fa730
	if (ctx.cr6.lt) goto loc_828FA730;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// b 0x828fa73c
	goto loc_828FA73C;
loc_828FA730:
	// lfs f13,152(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,200(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
loc_828FA73C:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x828fa860
	if (ctx.cr0.eq) goto loc_828FA860;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828fa860
	if (!ctx.cr0.eq) goto loc_828FA860;
loc_828FA750:
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828fa768
	if (!ctx.cr0.eq) goto loc_828FA768;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8262fd98
	ctx.lr = 0x828FA768;
	sub_8262FD98(ctx, base);
loc_828FA768:
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fa780
	if (ctx.cr0.eq) goto loc_828FA780;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8262fd98
	ctx.lr = 0x828FA780;
	sub_8262FD98(ctx, base);
loc_828FA780:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f9428
	ctx.lr = 0x828FA788;
	sub_828F9428(ctx, base);
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828fa7b4
	if (!ctx.cr6.eq) goto loc_828FA7B4;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,192(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f9990
	ctx.lr = 0x828FA7B0;
	sub_828F9990(ctx, base);
	// stw r28,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r28.u32);
loc_828FA7B4:
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x828fa860
	if (!ctx.cr6.gt) goto loc_828FA860;
	// addi r27,r31,80
	ctx.r27.s64 = ctx.r31.s64 + 80;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_828FA7CC:
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828fa80c
	if (!ctx.cr6.eq) goto loc_828FA80C;
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r10,10(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x828fa80c
	if (ctx.cr0.eq) goto loc_828FA80C;
	// lwz r10,192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r4,r30,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// bl 0x828fa1d0
	ctx.lr = 0x828FA80C;
	sub_828FA1D0(ctx, base);
loc_828FA80C:
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x828f9c78
	ctx.lr = 0x828FA824;
	sub_828F9C78(ctx, base);
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828fa848
	if (!ctx.cr6.eq) goto loc_828FA848;
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r10,10(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r10.u8);
loc_828FA848:
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x828fa7cc
	if (ctx.cr6.lt) goto loc_828FA7CC;
loc_828FA860:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FA868"))) PPC_WEAK_FUNC(sub_828FA868);
PPC_FUNC_IMPL(__imp__sub_828FA868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x828FA870;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x828faa6c
	if (ctx.cr0.eq) goto loc_828FAA6C;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828faa6c
	if (!ctx.cr0.eq) goto loc_828FAA6C;
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828faa6c
	if (!ctx.cr0.eq) goto loc_828FAA6C;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828faa6c
	if (!ctx.cr0.eq) goto loc_828FAA6C;
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828faa6c
	if (ctx.cr6.eq) goto loc_828FAA6C;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x828fa8ec
	if (!ctx.cr6.gt) goto loc_828FA8EC;
	// addi r28,r31,80
	ctx.r28.s64 = ctx.r31.s64 + 80;
	// li r30,0
	ctx.r30.s64 = 0;
loc_828FA8C0:
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x828f9e88
	ctx.lr = 0x828FA8D8;
	sub_828F9E88(ctx, base);
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x828fa8c0
	if (ctx.cr6.lt) goto loc_828FA8C0;
loc_828FA8EC:
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828fa924
	if (ctx.cr6.eq) goto loc_828FA924;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lhz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// rlwinm. r9,r9,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x828fa924
	if (ctx.cr0.eq) goto loc_828FA924;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828fa91c
	if (ctx.cr6.eq) goto loc_828FA91C;
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
loc_828FA91C:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8262fd98
	ctx.lr = 0x828FA924;
	sub_8262FD98(ctx, base);
loc_828FA924:
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x828fa968
	if (!ctx.cr6.gt) goto loc_828FA968;
	// li r29,0
	ctx.r29.s64 = 0;
loc_828FA938:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// bl 0x828f6440
	ctx.lr = 0x828FA944;
	sub_828F6440(ctx, base);
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x828f9f08
	ctx.lr = 0x828FA954;
	sub_828F9F08(ctx, base);
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x828fa938
	if (ctx.cr6.lt) goto loc_828FA938;
loc_828FA968:
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lfs f13,152(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5144);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x828faa6c
	if (ctx.cr6.lt) goto loc_828FAA6C;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x828faa30
	if (!ctx.cr6.gt) goto loc_828FAA30;
	// li r30,0
	ctx.r30.s64 = 0;
loc_828FA994:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// bl 0x828f6440
	ctx.lr = 0x828FA9A0;
	sub_828F6440(ctx, base);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lfs f0,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x828faa1c
	if (ctx.cr6.lt) goto loc_828FAA1C;
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828faa04
	if (ctx.cr6.eq) goto loc_828FAA04;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lhz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 100);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x828fa9ec
	if (ctx.cr0.eq) goto loc_828FA9EC;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// lfs f0,92(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,152(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x828fa9f4
	goto loc_828FA9F4;
loc_828FA9EC:
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// lfs f0,152(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
loc_828FA9F4:
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lfsx f13,r11,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// b 0x828faa18
	goto loc_828FAA18;
loc_828FAA04:
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lfsx f13,r11,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,152(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_828FAA18:
	// stfsx f0,r11,r30
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, temp.u32);
loc_828FAA1C:
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x828fa994
	if (ctx.cr6.lt) goto loc_828FA994;
loc_828FAA30:
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lfs f13,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,184(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lfs f0,152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// lfs f13,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x828faa6c
	if (ctx.cr6.lt) goto loc_828FAA6C;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x828faa6c
	if (ctx.cr6.lt) goto loc_828FAA6C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828fa540
	ctx.lr = 0x828FAA6C;
	sub_828FA540(ctx, base);
loc_828FAA6C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FAA78"))) PPC_WEAK_FUNC(sub_828FAA78);
PPC_FUNC_IMPL(__imp__sub_828FAA78) {
	PPC_FUNC_PROLOGUE();
	// b 0x828fa540
	sub_828FA540(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FAA80"))) PPC_WEAK_FUNC(sub_828FAA80);
PPC_FUNC_IMPL(__imp__sub_828FAA80) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,16076
	ctx.r11.s64 = ctx.r11.s64 + 16076;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828fa540
	ctx.lr = 0x828FAAAC;
	sub_828FA540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f9018
	ctx.lr = 0x828FAAB4;
	sub_828F9018(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828faac4
	if (ctx.cr0.eq) goto loc_828FAAC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e6f78
	ctx.lr = 0x828FAAC4;
	sub_825E6F78(ctx, base);
loc_828FAAC4:
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

__attribute__((alias("__imp__sub_828FAAE0"))) PPC_WEAK_FUNC(sub_828FAAE0);
PPC_FUNC_IMPL(__imp__sub_828FAAE0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r30,28(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x828fab20
	if (!ctx.cr6.lt) goto loc_828FAB20;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5424);
	ctx.f0.f64 = double(temp.f32);
	// b 0x828fab54
	goto loc_828FAB54;
loc_828FAB20:
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x828fab34
	if (!ctx.cr6.lt) goto loc_828FAB34;
	// stfs f13,152(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// b 0x828fab58
	goto loc_828FAB58;
loc_828FAB34:
	// fsubs f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bl 0x82630a00
	ctx.lr = 0x828FAB48;
	sub_82630A00(ctx, base);
	// bl 0x82630d08
	ctx.lr = 0x828FAB4C;
	sub_82630D08(ctx, base);
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
loc_828FAB54:
	// stfs f0,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
loc_828FAB58:
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

__attribute__((alias("__imp__sub_828FAB70"))) PPC_WEAK_FUNC(sub_828FAB70);
PPC_FUNC_IMPL(__imp__sub_828FAB70) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828fabac
	if (ctx.cr0.eq) goto loc_828FABAC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FABA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_828FABAC:
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

__attribute__((alias("__imp__sub_828FABC0"))) PPC_WEAK_FUNC(sub_828FABC0);
PPC_FUNC_IMPL(__imp__sub_828FABC0) {
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
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828fac40
	if (ctx.cr6.eq) goto loc_828FAC40;
	// bl 0x828fc150
	ctx.lr = 0x828FABE8;
	sub_828FC150(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x826df680
	ctx.lr = 0x828FAC00;
	sub_826DF680(ctx, base);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828fac28
	if (ctx.cr6.eq) goto loc_828FAC28;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828fac40
	if (ctx.cr0.eq) goto loc_828FAC40;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x828fdb50
	ctx.lr = 0x828FAC24;
	sub_828FDB50(ctx, base);
	// b 0x828fac40
	goto loc_828FAC40;
loc_828FAC28:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FAC40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828FAC40:
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

__attribute__((alias("__imp__sub_828FAC58"))) PPC_WEAK_FUNC(sub_828FAC58);
PPC_FUNC_IMPL(__imp__sub_828FAC58) {
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
	// bl 0x828fc150
	ctx.lr = 0x828FAC70;
	sub_828FC150(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828fac90
	if (!ctx.cr6.eq) goto loc_828FAC90;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x828fbfc0
	ctx.lr = 0x828FAC84;
	sub_828FBFC0(ctx, base);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// bctrl 
	ctx.lr = 0x828FAC8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
loc_828FAC90:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x828facd0
	if (!ctx.cr6.gt) goto loc_828FACD0;
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x828f68f0
	ctx.lr = 0x828FACB4;
	sub_828F68F0(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FACD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828FACD0:
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

__attribute__((alias("__imp__sub_828FACE8"))) PPC_WEAK_FUNC(sub_828FACE8);
PPC_FUNC_IMPL(__imp__sub_828FACE8) {
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
	// bl 0x828fc150
	ctx.lr = 0x828FAD00;
	sub_828FC150(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828fad20
	if (!ctx.cr6.eq) goto loc_828FAD20;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x828fbfc0
	ctx.lr = 0x828FAD14;
	sub_828FBFC0(ctx, base);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// bctrl 
	ctx.lr = 0x828FAD1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
loc_828FAD20:
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

__attribute__((alias("__imp__sub_828FAD38"))) PPC_WEAK_FUNC(sub_828FAD38);
PPC_FUNC_IMPL(__imp__sub_828FAD38) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828fc150
	ctx.lr = 0x828FAD58;
	sub_828FC150(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828fadac
	if (!ctx.cr6.eq) goto loc_828FADAC;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x828fbfc0
	ctx.lr = 0x828FAD6C;
	sub_828FBFC0(ctx, base);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// bctrl 
	ctx.lr = 0x828FAD74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r10,r10,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// beq 0x828fada4
	if (ctx.cr0.eq) goto loc_828FADA4;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// b 0x828fada8
	goto loc_828FADA8;
loc_828FADA4:
	// rlwinm r10,r10,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
loc_828FADA8:
	// stw r10,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r10.u32);
loc_828FADAC:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x828fadf4
	if (!ctx.cr6.gt) goto loc_828FADF4;
	// extsb r10,r30
	ctx.r10.s64 = ctx.r30.s8;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x828f68f0
	ctx.lr = 0x828FADD8;
	sub_828F68F0(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FADF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828FADF4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r10,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lfs f13,128(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,124(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,412(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 412, temp.u32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f13,416(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 416, temp.u32);
	// stfs f13,176(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 176, temp.u32);
	// stfs f12,172(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 172, temp.u32);
	// stfs f0,180(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 180, temp.u32);
	// lfs f13,416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,412(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	ctx.f12.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f13,236(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 236, temp.u32);
	// stfs f0,240(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 240, temp.u32);
	// stfs f12,232(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 232, temp.u32);
	// lfs f13,416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,412(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,296(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 296, temp.u32);
	// stfs f12,292(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 292, temp.u32);
	// stfs f0,300(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 300, temp.u32);
	// lfs f13,416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,412(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	ctx.f12.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f12,352(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 352, temp.u32);
	// stfs f0,360(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 360, temp.u32);
	// stfs f13,356(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 356, temp.u32);
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

__attribute__((alias("__imp__sub_828FAE98"))) PPC_WEAK_FUNC(sub_828FAE98);
PPC_FUNC_IMPL(__imp__sub_828FAE98) {
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
	// bl 0x828fc150
	ctx.lr = 0x828FAEB0;
	sub_828FC150(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828faed0
	if (!ctx.cr6.eq) goto loc_828FAED0;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x828fbfc0
	ctx.lr = 0x828FAEC4;
	sub_828FBFC0(ctx, base);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// bctrl 
	ctx.lr = 0x828FAECC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
loc_828FAED0:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x828faf10
	if (!ctx.cr6.gt) goto loc_828FAF10;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x828f68f0
	ctx.lr = 0x828FAEF4;
	sub_828F68F0(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FAF10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828FAF10:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x828faf50
	if (!ctx.cr6.gt) goto loc_828FAF50;
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x828f68f0
	ctx.lr = 0x828FAF34;
	sub_828F68F0(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FAF50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828FAF50:
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

__attribute__((alias("__imp__sub_828FAF68"))) PPC_WEAK_FUNC(sub_828FAF68);
PPC_FUNC_IMPL(__imp__sub_828FAF68) {
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
	// bl 0x828fc150
	ctx.lr = 0x828FAF80;
	sub_828FC150(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828fafa0
	if (!ctx.cr6.eq) goto loc_828FAFA0;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x828fbfc0
	ctx.lr = 0x828FAF94;
	sub_828FBFC0(ctx, base);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// bctrl 
	ctx.lr = 0x828FAF9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
loc_828FAFA0:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x828fafe0
	if (!ctx.cr6.gt) goto loc_828FAFE0;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x828f68f0
	ctx.lr = 0x828FAFC4;
	sub_828F68F0(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FAFE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828FAFE0:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x828fb054
	if (!ctx.cr6.gt) goto loc_828FB054;
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x828f68f0
	ctx.lr = 0x828FB004;
	sub_828F68F0(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FB020;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x828f68f0
	ctx.lr = 0x828FB038;
	sub_828F68F0(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FB054;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828FB054:
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

__attribute__((alias("__imp__sub_828FB068"))) PPC_WEAK_FUNC(sub_828FB068);
PPC_FUNC_IMPL(__imp__sub_828FB068) {
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
	// bl 0x828fc150
	ctx.lr = 0x828FB080;
	sub_828FC150(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828fb0a0
	if (!ctx.cr6.eq) goto loc_828FB0A0;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x828fbfc0
	ctx.lr = 0x828FB094;
	sub_828FBFC0(ctx, base);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// bctrl 
	ctx.lr = 0x828FB09C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
loc_828FB0A0:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x828fb0e0
	if (!ctx.cr6.gt) goto loc_828FB0E0;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x828f68f0
	ctx.lr = 0x828FB0C4;
	sub_828F68F0(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FB0E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828FB0E0:
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

__attribute__((alias("__imp__sub_828FB0F8"))) PPC_WEAK_FUNC(sub_828FB0F8);
PPC_FUNC_IMPL(__imp__sub_828FB0F8) {
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
	// lwz r3,156(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828fb140
	if (ctx.cr0.eq) goto loc_828FB140;
loc_828FB11C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,36(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FB134;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x828fb11c
	if (!ctx.cr6.eq) goto loc_828FB11C;
loc_828FB140:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828FB160"))) PPC_WEAK_FUNC(sub_828FB160);
PPC_FUNC_IMPL(__imp__sub_828FB160) {
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
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828fb1b0
	if (!ctx.cr6.eq) goto loc_828FB1B0;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r3,-17740(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17740);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FB1A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r3.u32);
	// beq 0x828fb1b0
	if (ctx.cr0.eq) goto loc_828FB1B0;
	// bl 0x8262fd50
	ctx.lr = 0x828FB1B0;
	sub_8262FD50(ctx, base);
loc_828FB1B0:
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
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

__attribute__((alias("__imp__sub_828FB1C8"))) PPC_WEAK_FUNC(sub_828FB1C8);
PPC_FUNC_IMPL(__imp__sub_828FB1C8) {
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
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828fb218
	if (!ctx.cr6.eq) goto loc_828FB218;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r3,-17740(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17740);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FB208;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// beq 0x828fb218
	if (ctx.cr0.eq) goto loc_828FB218;
	// bl 0x8262fd50
	ctx.lr = 0x828FB218;
	sub_8262FD50(ctx, base);
loc_828FB218:
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
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

__attribute__((alias("__imp__sub_828FB230"))) PPC_WEAK_FUNC(sub_828FB230);
PPC_FUNC_IMPL(__imp__sub_828FB230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x828FB238;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,16080
	ctx.r11.s64 = ctx.r11.s64 + 16080;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828fb0f8
	ctx.lr = 0x828FB250;
	sub_828FB0F8(ctx, base);
	// lwz r4,164(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x828fb280
	if (ctx.cr0.eq) goto loc_828FB280;
	// lwz r3,-17740(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17740);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FB27C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r29.u32);
loc_828FB280:
	// lwz r4,160(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x828fb2a8
	if (ctx.cr0.eq) goto loc_828FB2A8;
	// lwz r3,-17740(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17740);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FB2A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r29.u32);
loc_828FB2A8:
	// lwz r4,168(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x828fb2d0
	if (ctx.cr0.eq) goto loc_828FB2D0;
	// lwz r3,-17740(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17740);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FB2CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r29.u32);
loc_828FB2D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828fab70
	ctx.lr = 0x828FB2D8;
	sub_828FAB70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f9018
	ctx.lr = 0x828FB2E0;
	sub_828F9018(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FB2E8"))) PPC_WEAK_FUNC(sub_828FB2E8);
PPC_FUNC_IMPL(__imp__sub_828FB2E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x828FB2F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x828fab70
	ctx.lr = 0x828FB304;
	sub_828FAB70(ctx, base);
	// bl 0x828fc150
	ctx.lr = 0x828FB308;
	sub_828FC150(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828fb374
	if (!ctx.cr6.eq) goto loc_828FB374;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828fbfc0
	ctx.lr = 0x828FB31C;
	sub_828FBFC0(ctx, base);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// bctrl 
	ctx.lr = 0x828FB324;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// beq 0x828fb484
	if (ctx.cr0.eq) goto loc_828FB484;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r10,r10,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// beq 0x828fb35c
	if (ctx.cr0.eq) goto loc_828FB35C;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// b 0x828fb360
	goto loc_828FB360;
loc_828FB35C:
	// rlwinm r10,r10,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
loc_828FB360:
	// stw r10,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r10.u32);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r11,116(r10)
	PPC_STORE_U32(ctx.r10.u32 + 116, ctx.r11.u32);
loc_828FB374:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x828fb3bc
	if (!ctx.cr6.gt) goto loc_828FB3BC;
	// extsb r10,r30
	ctx.r10.s64 = ctx.r30.s8;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x828f68f0
	ctx.lr = 0x828FB3A0;
	sub_828F68F0(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FB3BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828FB3BC:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x828fb404
	if (!ctx.cr6.gt) goto loc_828FB404;
	// extsb r10,r29
	ctx.r10.s64 = ctx.r29.s8;
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x828f68f0
	ctx.lr = 0x828FB3E8;
	sub_828F68F0(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FB404;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828FB404:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x828fb444
	if (!ctx.cr6.gt) goto loc_828FB444;
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x828f68f0
	ctx.lr = 0x828FB428;
	sub_828F68F0(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FB444;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828FB444:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x828fb484
	if (!ctx.cr6.gt) goto loc_828FB484;
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x828f68f0
	ctx.lr = 0x828FB468;
	sub_828F68F0(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FB484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828FB484:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FB490"))) PPC_WEAK_FUNC(sub_828FB490);
PPC_FUNC_IMPL(__imp__sub_828FB490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x828FB498;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lha r4,172(r31)
	ctx.r4.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 172));
	// bl 0x828f64f0
	ctx.lr = 0x828FB4B4;
	sub_828F64F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828fb550
	if (ctx.cr0.eq) goto loc_828FB550;
	// addi r28,r31,80
	ctx.r28.s64 = ctx.r31.s64 + 80;
loc_828FB4C0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lha r4,172(r31)
	ctx.r4.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 172));
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x828f6560
	ctx.lr = 0x828FB4D0;
	sub_828F6560(ctx, base);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r3,136(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 136);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x828f5ca8
	ctx.lr = 0x828FB4E8;
	sub_828F5CA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FB500;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828fb53c
	if (ctx.cr0.eq) goto loc_828FB53C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x828fb518
	if (!ctx.cr6.eq) goto loc_828FB518;
	// stw r3,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r3.u32);
	// b 0x828fb51c
	goto loc_828FB51C;
loc_828FB518:
	// stw r3,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r3.u32);
loc_828FB51C:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lha r4,172(r31)
	ctx.r4.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 172));
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x828f64f0
	ctx.lr = 0x828FB530;
	sub_828F64F0(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x828fb4c0
	if (ctx.cr6.lt) goto loc_828FB4C0;
	// b 0x828fb550
	goto loc_828FB550;
loc_828FB53C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828fb0f8
	ctx.lr = 0x828FB544;
	sub_828FB0F8(ctx, base);
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
loc_828FB550:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FB558"))) PPC_WEAK_FUNC(sub_828FB558);
PPC_FUNC_IMPL(__imp__sub_828FB558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x828FB560;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828fb814
	if (!ctx.cr0.eq) goto loc_828FB814;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828fb814
	if (!ctx.cr0.eq) goto loc_828FB814;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828fb59c
	if (ctx.cr6.eq) goto loc_828FB59C;
	// lhz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 100);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fb814
	if (ctx.cr0.eq) goto loc_828FB814;
loc_828FB59C:
	// lhz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 100);
	// addi r27,r31,16
	ctx.r27.s64 = ctx.r31.s64 + 16;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828fb5b8
	if (!ctx.cr0.eq) goto loc_828FB5B8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// b 0x828fb5c4
	goto loc_828FB5C4;
loc_828FB5B8:
	// lwz r4,168(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x828fb5cc
	if (ctx.cr0.eq) goto loc_828FB5CC;
loc_828FB5C4:
	// bl 0x8262fd98
	ctx.lr = 0x828FB5C8;
	sub_8262FD98(ctx, base);
	// b 0x828fb5d0
	goto loc_828FB5D0;
loc_828FB5CC:
	// bl 0x8262fd50
	ctx.lr = 0x828FB5D0;
	sub_8262FD50(ctx, base);
loc_828FB5D0:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828fb5ec
	if (!ctx.cr6.eq) goto loc_828FB5EC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82630750
	ctx.lr = 0x828FB5EC;
	sub_82630750(ctx, base);
loc_828FB5EC:
	// lha r4,172(r31)
	ctx.r4.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 172));
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x828f6480
	ctx.lr = 0x828FB5F8;
	sub_828F6480(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828fb644
	if (ctx.cr0.eq) goto loc_828FB644;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828fb644
	if (ctx.cr6.eq) goto loc_828FB644;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828fb160
	ctx.lr = 0x828FB614;
	sub_828FB160(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x828fb644
	if (ctx.cr0.eq) goto loc_828FB644;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8262fa18
	ctx.lr = 0x828FB628;
	sub_8262FA18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8262fd98
	ctx.lr = 0x828FB634;
	sub_8262FD98(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8262fdd8
	ctx.lr = 0x828FB644;
	sub_8262FDD8(ctx, base);
loc_828FB644:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r30,r31,80
	ctx.r30.s64 = ctx.r31.s64 + 80;
	// addi r11,r11,164
	ctx.r11.s64 = ctx.r11.s64 + 164;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 + 80;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r10,164
	ctx.r10.s64 = ctx.r10.s64 + 164;
	// addi r9,r11,96
	ctx.r9.s64 = ctx.r11.s64 + 96;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x828fb6f4
	if (!ctx.cr6.eq) goto loc_828FB6F4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f4,14088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f4.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// lfs f2,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FB6F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x828fb70c
	goto loc_828FB70C;
loc_828FB6F4:
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828fb70c
	if (ctx.cr0.eq) goto loc_828FB70C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FB70C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828FB70C:
	// lhz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 20);
	// li r28,0
	ctx.r28.s64 = 0;
	// andi. r11,r11,65533
	ctx.r11.u64 = ctx.r11.u64 & 65533;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,20(r30)
	PPC_STORE_U16(ctx.r30.u32 + 20, ctx.r11.u16);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// sth r11,20(r30)
	PPC_STORE_U16(ctx.r30.u32 + 20, ctx.r11.u16);
	// lwz r29,156(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// b 0x828fb798
	goto loc_828FB798;
loc_828FB730:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lha r4,172(r31)
	ctx.r4.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 172));
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x828f6560
	ctx.lr = 0x828FB740;
	sub_828F6560(ctx, base);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fb760
	if (ctx.cr0.eq) goto loc_828FB760;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lfs f1,148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	ctx.f1.f64 = double(temp.f32);
	// b 0x828fb784
	goto loc_828FB784;
loc_828FB760:
	// lhz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// beq 0x828fb780
	if (ctx.cr0.eq) goto loc_828FB780;
	// lfs f0,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x828fb784
	goto loc_828FB784;
loc_828FB780:
	// lfs f1,152(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	ctx.f1.f64 = double(temp.f32);
loc_828FB784:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828f6b58
	ctx.lr = 0x828FB790;
	sub_828F6B58(ctx, base);
	// lwz r29,36(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_828FB798:
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne 0x828fb730
	if (!ctx.cr0.eq) goto loc_828FB730;
	// lhz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 100);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fb7ec
	if (ctx.cr0.eq) goto loc_828FB7EC;
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828fb7ec
	if (!ctx.cr6.eq) goto loc_828FB7EC;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r3,-17740(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17740);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FB7D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r3.u32);
	// beq 0x828fb7ec
	if (ctx.cr0.eq) goto loc_828FB7EC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8262fd98
	ctx.lr = 0x828FB7EC;
	sub_8262FD98(ctx, base);
loc_828FB7EC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x826df680
	ctx.lr = 0x828FB800;
	sub_826DF680(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FB814;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828FB814:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FB820"))) PPC_WEAK_FUNC(sub_828FB820);
PPC_FUNC_IMPL(__imp__sub_828FB820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x828FB828;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828fb9cc
	if (!ctx.cr0.eq) goto loc_828FB9CC;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828fb9cc
	if (!ctx.cr0.eq) goto loc_828FB9CC;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fb860
	if (ctx.cr0.eq) goto loc_828FB860;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828fb9cc
	if (ctx.cr6.eq) goto loc_828FB9CC;
loc_828FB860:
	// lwz r30,156(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x828fb8e0
	goto loc_828FB8E0;
loc_828FB86C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lha r4,172(r31)
	ctx.r4.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 172));
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x828f6560
	ctx.lr = 0x828FB87C;
	sub_828F6560(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fb8d8
	if (ctx.cr0.eq) goto loc_828FB8D8;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fb8a8
	if (ctx.cr0.eq) goto loc_828FB8A8;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lfs f1,148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	ctx.f1.f64 = double(temp.f32);
	// b 0x828fb8cc
	goto loc_828FB8CC;
loc_828FB8A8:
	// lhz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// beq 0x828fb8c8
	if (ctx.cr0.eq) goto loc_828FB8C8;
	// lfs f0,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x828fb8cc
	goto loc_828FB8CC;
loc_828FB8C8:
	// lfs f1,152(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	ctx.f1.f64 = double(temp.f32);
loc_828FB8CC:
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828f6cb0
	ctx.lr = 0x828FB8D8;
	sub_828F6CB0(ctx, base);
loc_828FB8D8:
	// lwz r30,36(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_828FB8E0:
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne 0x828fb86c
	if (!ctx.cr0.eq) goto loc_828FB86C;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fb908
	if (ctx.cr0.eq) goto loc_828FB908;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// oris r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 131072;
	// stw r10,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r10.u32);
loc_828FB908:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// beq cr6,0x828fb924
	if (ctx.cr6.eq) goto loc_828FB924;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828fb9cc
	if (!ctx.cr0.eq) goto loc_828FB9CC;
loc_828FB924:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// beq 0x828fb940
	if (ctx.cr0.eq) goto loc_828FB940;
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// b 0x828fb944
	goto loc_828FB944;
loc_828FB940:
	// rlwinm r10,r10,0,27,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
loc_828FB944:
	// stw r10,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r10.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lfs f0,14088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x828fb990
	if (ctx.cr6.lt) goto loc_828FB990;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x828fb984
	if (ctx.cr0.eq) goto loc_828FB984;
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// rlwinm. r9,r11,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828fb990
	if (!ctx.cr0.eq) goto loc_828FB990;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828fb990
	if (ctx.cr6.eq) goto loc_828FB990;
loc_828FB984:
	// lwz r11,124(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// b 0x828fb998
	goto loc_828FB998;
loc_828FB990:
	// lwz r11,124(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
loc_828FB998:
	// stw r11,124(r10)
	PPC_STORE_U32(ctx.r10.u32 + 124, ctx.r11.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fb9c4
	if (ctx.cr0.eq) goto loc_828FB9C4;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x828fb9c4
	if (ctx.cr6.eq) goto loc_828FB9C4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x828fb9c4
	if (ctx.cr6.eq) goto loc_828FB9C4;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x828fb9cc
	if (!ctx.cr6.eq) goto loc_828FB9CC;
loc_828FB9C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828fabc0
	ctx.lr = 0x828FB9CC;
	sub_828FABC0(ctx, base);
loc_828FB9CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FB9D8"))) PPC_WEAK_FUNC(sub_828FB9D8);
PPC_FUNC_IMPL(__imp__sub_828FB9D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x828FB9E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828fbb48
	if (!ctx.cr0.eq) goto loc_828FBB48;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828fbb48
	if (!ctx.cr0.eq) goto loc_828FBB48;
	// lwz r30,156(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x828fba88
	goto loc_828FBA88;
loc_828FBA08:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lha r4,172(r31)
	ctx.r4.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 172));
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x828f6560
	ctx.lr = 0x828FBA18;
	sub_828F6560(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FBA2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fba4c
	if (ctx.cr0.eq) goto loc_828FBA4C;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lfs f0,148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// b 0x828fba70
	goto loc_828FBA70;
loc_828FBA4C:
	// lhz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// beq 0x828fba6c
	if (ctx.cr0.eq) goto loc_828FBA6C;
	// lfs f0,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x828fba70
	goto loc_828FBA70;
loc_828FBA6C:
	// lfs f0,152(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
loc_828FBA70:
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// lwz r30,36(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_828FBA88:
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne 0x828fba08
	if (!ctx.cr0.eq) goto loc_828FBA08;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lfs f13,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x828fbad4
	if (ctx.cr6.lt) goto loc_828FBAD4;
	// lhz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// beq 0x828fbac4
	if (ctx.cr0.eq) goto loc_828FBAC4;
	// lfs f0,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// b 0x828fbac8
	goto loc_828FBAC8;
loc_828FBAC4:
	// lfs f0,152(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
loc_828FBAC8:
	// lfs f12,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
loc_828FBAD4:
	// lhz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// beq 0x828fbaf4
	if (ctx.cr0.eq) goto loc_828FBAF4;
	// lfs f0,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// b 0x828fbaf8
	goto loc_828FBAF8;
loc_828FBAF4:
	// lfs f0,152(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
loc_828FBAF8:
	// lhz r10,174(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 174);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// lfs f12,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// andi. r11,r10,65531
	ctx.r11.u64 = ctx.r10.u64 & 65531;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,174(r31)
	PPC_STORE_U16(ctx.r31.u32 + 174, ctx.r11.u16);
	// ble cr6,0x828fbb34
	if (!ctx.cr6.gt) goto loc_828FBB34;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x828fbb34
	if (ctx.cr6.lt) goto loc_828FBB34;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
loc_828FBB34:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FBB48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828FBB48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FBB50"))) PPC_WEAK_FUNC(sub_828FBB50);
PPC_FUNC_IMPL(__imp__sub_828FBB50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x828FBB58;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828fbba8
	if (!ctx.cr0.eq) goto loc_828FBBA8;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x828f6480
	ctx.lr = 0x828FBB78;
	sub_828F6480(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x828fbba8
	if (ctx.cr0.eq) goto loc_828FBBA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r29,172(r31)
	PPC_STORE_U16(ctx.r31.u32 + 172, ctx.r29.u16);
	// bl 0x828fb0f8
	ctx.lr = 0x828FBB8C;
	sub_828FB0F8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828fbc30
	if (ctx.cr6.eq) goto loc_828FBC30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828fb160
	ctx.lr = 0x828FBBA0;
	sub_828FB160(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x828fbbb0
	if (!ctx.cr0.eq) goto loc_828FBBB0;
loc_828FBBA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x828fbc54
	goto loc_828FBC54;
loc_828FBBB0:
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8262fd98
	ctx.lr = 0x828FBBBC;
	sub_8262FD98(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x828fbc18
	if (!ctx.cr6.eq) goto loc_828FBC18;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828fbc18
	if (ctx.cr0.eq) goto loc_828FBC18;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq 0x828fbbf0
	if (ctx.cr0.eq) goto loc_828FBBF0;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x828fbbf8
	goto loc_828FBBF8;
loc_828FBBF0:
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_828FBBF8:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FBC00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828fbc18
	if (ctx.cr0.eq) goto loc_828FBC18;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82630470
	ctx.lr = 0x828FBC18;
	sub_82630470(ctx, base);
loc_828FBC18:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828fbc30
	if (!ctx.cr6.eq) goto loc_828FBC30;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82630750
	ctx.lr = 0x828FBC30;
	sub_82630750(ctx, base);
loc_828FBC30:
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// andi. r10,r10,65503
	ctx.r10.u64 = ctx.r10.u64 & 65503;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r10,20(r11)
	PPC_STORE_U16(ctx.r11.u32 + 20, ctx.r10.u16);
	// lhz r5,98(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 98);
	// lhz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 96);
	// bl 0x828fb490
	ctx.lr = 0x828FBC50;
	sub_828FB490(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_828FBC54:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FBC60"))) PPC_WEAK_FUNC(sub_828FBC60);
PPC_FUNC_IMPL(__imp__sub_828FBC60) {
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
	// bl 0x828fb230
	ctx.lr = 0x828FBC80;
	sub_828FB230(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fbc90
	if (ctx.cr0.eq) goto loc_828FBC90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e6f78
	ctx.lr = 0x828FBC90;
	sub_825E6F78(ctx, base);
loc_828FBC90:
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

__attribute__((alias("__imp__sub_828FBCB0"))) PPC_WEAK_FUNC(sub_828FBCB0);
PPC_FUNC_IMPL(__imp__sub_828FBCB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fbd0c
	if (ctx.cr0.eq) goto loc_828FBD0C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x828fbd08
	if (ctx.cr6.eq) goto loc_828FBD08;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x828fbd04
	if (ctx.cr6.eq) goto loc_828FBD04;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x828fbd00
	if (ctx.cr6.eq) goto loc_828FBD00;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x828fbcfc
	if (ctx.cr6.eq) goto loc_828FBCFC;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x828fbcf4
	if (ctx.cr6.eq) goto loc_828FBCF4;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x828fb068
	sub_828FB068(ctx, base);
	return;
loc_828FBCF4:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x828fad38
	sub_828FAD38(ctx, base);
	return;
loc_828FBCFC:
	// b 0x828fae98
	sub_828FAE98(ctx, base);
	return;
loc_828FBD00:
	// b 0x828face8
	sub_828FACE8(ctx, base);
	return;
loc_828FBD04:
	// b 0x828fac58
	sub_828FAC58(ctx, base);
	return;
loc_828FBD08:
	// b 0x828faf68
	sub_828FAF68(ctx, base);
	return;
loc_828FBD0C:
	// b 0x828fb2e8
	sub_828FB2E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FBD10"))) PPC_WEAK_FUNC(sub_828FBD10);
PPC_FUNC_IMPL(__imp__sub_828FBD10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FBD18"))) PPC_WEAK_FUNC(sub_828FBD18);
PPC_FUNC_IMPL(__imp__sub_828FBD18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x828FBD20;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x828f8fd0
	ctx.lr = 0x828FBD3C;
	sub_828F8FD0(ctx, base);
	// lis r10,16715
	ctx.r10.s64 = 1095434240;
	// stw r28,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r28.u32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r27,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r27.u32);
	// ori r9,r10,19526
	ctx.r9.u64 = ctx.r10.u64 | 19526;
	// addi r11,r11,16080
	ctx.r11.s64 = ctx.r11.s64 + 16080;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// sth r30,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r30.u16);
	// lwz r11,128(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	// lfs f31,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stfs f31,128(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// sth r10,172(r31)
	PPC_STORE_U16(ctx.r31.u32 + 172, ctx.r10.u16);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// bl 0x8262fd50
	ctx.lr = 0x828FBD94;
	sub_8262FD50(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lfs f0,14088(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r8,r11,136
	ctx.r8.s64 = ctx.r11.s64 + 136;
	// stw r9,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r9.u32);
	// sth r10,174(r31)
	PPC_STORE_U16(ctx.r31.u32 + 174, ctx.r10.u16);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// sth r30,100(r31)
	PPC_STORE_U16(ctx.r31.u32 + 100, ctx.r30.u16);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
	// sth r10,96(r31)
	PPC_STORE_U16(ctx.r31.u32 + 96, ctx.r10.u16);
	// sth r9,98(r31)
	PPC_STORE_U16(ctx.r31.u32 + 98, ctx.r9.u16);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828faae0
	ctx.lr = 0x828FBDF0;
	sub_828FAAE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// lbz r5,13(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 13);
	// lbz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 12);
	// bl 0x828fbcb0
	ctx.lr = 0x828FBE18;
	sub_828FBCB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x828fb490
	ctx.lr = 0x828FBE28;
	sub_828FB490(ctx, base);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r10,r10,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// beq 0x828fbe48
	if (ctx.cr0.eq) goto loc_828FBE48;
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
	// b 0x828fbe4c
	goto loc_828FBE4C;
loc_828FBE48:
	// rlwinm r10,r10,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
loc_828FBE4C:
	// stw r10,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r10.u32);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r10,r10,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// beq 0x828fbe70
	if (ctx.cr0.eq) goto loc_828FBE70;
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// b 0x828fbe74
	goto loc_828FBE74;
loc_828FBE70:
	// rlwinm r10,r10,0,26,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
loc_828FBE74:
	// stw r10,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FBE88"))) PPC_WEAK_FUNC(sub_828FBE88);
PPC_FUNC_IMPL(__imp__sub_828FBE88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x828FBE90;
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
	ctx.lr = 0x828FBEA0;
	sub_825E6F28(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,21331
	ctx.r10.s64 = 1397948416;
	// addi r11,r11,16084
	ctx.r11.s64 = ctx.r11.s64 + 16084;
	// ori r10,r10,18259
	ctx.r10.u64 = ctx.r10.u64 | 18259;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// beq cr6,0x828fbf00
	if (ctx.cr6.eq) goto loc_828FBF00;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x825e6f70
	ctx.lr = 0x828FBEE4;
	sub_825E6F70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828fbef8
	if (ctx.cr0.eq) goto loc_828FBEF8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828fda30
	ctx.lr = 0x828FBEF4;
	sub_828FDA30(ctx, base);
	// b 0x828fbefc
	goto loc_828FBEFC;
loc_828FBEF8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_828FBEFC:
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
loc_828FBF00:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FBF18"))) PPC_WEAK_FUNC(sub_828FBF18);
PPC_FUNC_IMPL(__imp__sub_828FBF18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x828FBF20;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,16084
	ctx.r11.s64 = ctx.r11.s64 + 16084;
	// addi r30,r29,20
	ctx.r30.s64 = ctx.r29.s64 + 20;
	// li r28,5
	ctx.r28.s64 = 5;
	// lis r27,-32044
	ctx.r27.s64 = -2100035584;
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_828FBF44:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x828fbf78
	if (ctx.cr0.eq) goto loc_828FBF78;
loc_828FBF50:
	// lwz r3,-17740(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -17740);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r31,8(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FBF6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x828fbf50
	if (!ctx.cr6.eq) goto loc_828FBF50;
loc_828FBF78:
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x828fbf44
	if (!ctx.cr0.eq) goto loc_828FBF44;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828fbfac
	if (ctx.cr0.eq) goto loc_828FBFAC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FBFA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r26,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r26.u32);
loc_828FBFAC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825e6f60
	ctx.lr = 0x828FBFB4;
	sub_825E6F60(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FBFC0"))) PPC_WEAK_FUNC(sub_828FBFC0);
PPC_FUNC_IMPL(__imp__sub_828FBFC0) {
	PPC_FUNC_PROLOGUE();
	// li r11,5
	ctx.r11.s64 = 5;
	// divwu r11,r4,r11
	ctx.r11.u32 = ctx.r4.u32 / ctx.r11.u32;
	// mulli r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 * 5;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// b 0x828fbff0
	goto loc_828FBFF0;
loc_828FBFE0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x828fc000
	if (ctx.cr6.eq) goto loc_828FC000;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_828FBFF0:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x828fbfe0
	if (!ctx.cr0.eq) goto loc_828FBFE0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_828FC000:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FC008"))) PPC_WEAK_FUNC(sub_828FC008);
PPC_FUNC_IMPL(__imp__sub_828FC008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x828FC010;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x828fc110
	if (ctx.cr6.eq) goto loc_828FC110;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x828FC030;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,5
	ctx.r11.s64 = 5;
	// divwu r11,r3,r11
	ctx.r11.u32 = ctx.r3.u32 / ctx.r11.u32;
	// mulli r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 * 5;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r10,r11,5
	ctx.r10.s64 = ctx.r11.s64 + 5;
	// rlwinm r30,r10,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r30,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x828fc0ac
	if (!ctx.cr0.eq) goto loc_828FC0AC;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r3,-17740(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17740);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FC074;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stwx r3,r30,r29
	PPC_STORE_U32(ctx.r30.u32 + ctx.r29.u32, ctx.r3.u32);
	// beq 0x828fc104
	if (ctx.cr0.eq) goto loc_828FC104;
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x828FC08C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// b 0x828fc0fc
	goto loc_828FC0FC;
loc_828FC09C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828fc110
	if (ctx.cr6.eq) goto loc_828FC110;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_828FC0AC:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x828fc09c
	if (!ctx.cr6.eq) goto loc_828FC09C;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r3,-17740(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17740);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FC0D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// beq 0x828fc104
	if (ctx.cr0.eq) goto loc_828FC104;
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x828FC0F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_828FC0FC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_828FC104:
	// li r3,1
	ctx.r3.s64 = 1;
loc_828FC108:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_828FC110:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x828fc108
	goto loc_828FC108;
}

__attribute__((alias("__imp__sub_828FC118"))) PPC_WEAK_FUNC(sub_828FC118);
PPC_FUNC_IMPL(__imp__sub_828FC118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// lwz r10,13856(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13856);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828fc130
	if (ctx.cr6.eq) goto loc_828FC130;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_828FC130:
	// stw r3,13856(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13856, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FC140"))) PPC_WEAK_FUNC(sub_828FC140);
PPC_FUNC_IMPL(__imp__sub_828FC140) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,13856(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13856, ctx.r11.u32);
	// blr 
	return;
}

