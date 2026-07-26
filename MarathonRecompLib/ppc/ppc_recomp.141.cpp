#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82AD3ED8"))) PPC_WEAK_FUNC(sub_82AD3ED8);
PPC_FUNC_IMPL(__imp__sub_82AD3ED8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD3EE0"))) PPC_WEAK_FUNC(sub_82AD3EE0);
PPC_FUNC_IMPL(__imp__sub_82AD3EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82AD3EE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,5220
	ctx.r11.s64 = ctx.r11.s64 + 5220;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82ad3f3c
	if (!ctx.cr0.gt) goto loc_82AD3F3C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82AD3F10:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ad3f28
	if (ctx.cr0.eq) goto loc_82AD3F28;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82ad3718
	ctx.lr = 0x82AD3F28;
	sub_82AD3718(ctx, base);
loc_82AD3F28:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82ad3f10
	if (ctx.cr6.lt) goto loc_82AD3F10;
loc_82AD3F3C:
	// lwz r30,72(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm. r11,r30,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ad3f6c
	if (!ctx.cr0.eq) goto loc_82AD3F6C;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// lwz r29,64(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r28,20
	ctx.r28.s64 = 20;
	// lwz r3,12944(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12944);
	// bl 0x82aea80c
	ctx.lr = 0x82AD3F5C;
	__imp__KeTlsGetValue(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x828280f8
	ctx.lr = 0x82AD3F6C;
	sub_828280F8(ctx, base);
loc_82AD3F6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82abc428
	ctx.lr = 0x82AD3F74;
	sub_82ABC428(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD3F80"))) PPC_WEAK_FUNC(sub_82AD3F80);
PPC_FUNC_IMPL(__imp__sub_82AD3F80) {
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
	// bl 0x82ad3ee0
	ctx.lr = 0x82AD3FA0;
	sub_82AD3EE0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ad3fcc
	if (ctx.cr0.eq) goto loc_82AD3FCC;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// li r6,36
	ctx.r6.s64 = 36;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,12940(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12940);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD3FCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD3FCC:
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

__attribute__((alias("__imp__sub_82AD3FE8"))) PPC_WEAK_FUNC(sub_82AD3FE8);
PPC_FUNC_IMPL(__imp__sub_82AD3FE8) {
	PPC_FUNC_PROLOGUE();
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD3FF0"))) PPC_WEAK_FUNC(sub_82AD3FF0);
PPC_FUNC_IMPL(__imp__sub_82AD3FF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x82AD3FF8;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lfs f0,5272(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5272);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f13,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f0,-6904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stvx v0,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v13,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82ad40c0
	if (!ctx.cr0.gt) goto loc_82AD40C0;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82AD4078:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x82580d60
	ctx.lr = 0x82AD408C;
	sub_82580D60(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v13,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lvx128 v12,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vminfp v13,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaxfp v0,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx v13,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82ad4078
	if (ctx.cr6.lt) goto loc_82AD4078;
loc_82AD40C0:
	// lfs f0,52(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v13,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vsubfp v13,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx v13,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx v0,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD4100"))) PPC_WEAK_FUNC(sub_82AD4100);
PPC_FUNC_IMPL(__imp__sub_82AD4100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82ad4138
	if (ctx.cr6.eq) goto loc_82AD4138;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f0,12(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// addi r10,r10,-29636
	ctx.r10.s64 = ctx.r10.s64 + -29636;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// sth r9,6(r5)
	PPC_STORE_U16(ctx.r5.u32 + 6, ctx.r9.u16);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r8,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r8.u32);
	// b 0x82ad413c
	goto loc_82AD413C;
loc_82AD4138:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AD413C:
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mulli r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 * 12;
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r8,r3,16
	ctx.r8.s64 = ctx.r3.s64 + 16;
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r7,r3,32
	ctx.r7.s64 = ctx.r3.s64 + 32;
	// addi r6,r3,48
	ctx.r6.s64 = ctx.r3.s64 + 48;
	// lvx128 v0,r9,r5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lvx128 v0,r9,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lvx128 v0,r11,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD41A0"))) PPC_WEAK_FUNC(sub_82AD41A0);
PPC_FUNC_IMPL(__imp__sub_82AD41A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD41C0"))) PPC_WEAK_FUNC(sub_82AD41C0);
PPC_FUNC_IMPL(__imp__sub_82AD41C0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,5312
	ctx.r4.s64 = ctx.r11.s64 + 5312;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD4200;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82ad423c
	if (!ctx.cr0.eq) goto loc_82AD423C;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r4,r10,5300
	ctx.r4.s64 = ctx.r10.s64 + 5300;
	// rlwinm r7,r7,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD423C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD423C:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82ad427c
	if (!ctx.cr0.eq) goto loc_82AD427C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r8,r11,2
	ctx.r8.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mulli r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 * 12;
	// addi r4,r11,5288
	ctx.r4.s64 = ctx.r11.s64 + 5288;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mulli r7,r9,12
	ctx.r7.s64 = ctx.r9.s64 * 12;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD427C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD427C:
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm. r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ad42b4
	if (!ctx.cr0.eq) goto loc_82AD42B4;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lwz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// clrlwi r8,r10,2
	ctx.r8.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// addi r4,r11,5276
	ctx.r4.s64 = ctx.r11.s64 + 5276;
	// lwz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD42B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD42B4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD42C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82AD42E0"))) PPC_WEAK_FUNC(sub_82AD42E0);
PPC_FUNC_IMPL(__imp__sub_82AD42E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82AD42E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,20
	ctx.r28.s64 = 20;
	// lis r30,-32043
	ctx.r30.s64 = -2099970048;
	// lwz r29,48(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm. r11,r29,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ad4320
	if (!ctx.cr0.eq) goto loc_82AD4320;
	// lwz r3,12944(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12944);
	// lwz r27,40(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82aea80c
	ctx.lr = 0x82AD4310;
	__imp__KeTlsGetValue(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// clrlwi r5,r29,2
	ctx.r5.u64 = ctx.r29.u32 & 0x3FFFFFFF;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x828280f8
	ctx.lr = 0x82AD4320;
	sub_828280F8(ctx, base);
loc_82AD4320:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82ad4350
	if (!ctx.cr0.eq) goto loc_82AD4350;
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// lwz r3,12944(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12944);
	// lwz r29,28(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mulli r27,r11,12
	ctx.r27.s64 = ctx.r11.s64 * 12;
	// bl 0x82aea80c
	ctx.lr = 0x82AD4340;
	__imp__KeTlsGetValue(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x828280f8
	ctx.lr = 0x82AD4350;
	sub_828280F8(ctx, base);
loc_82AD4350:
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm. r11,r29,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ad4378
	if (!ctx.cr0.eq) goto loc_82AD4378;
	// lwz r3,12944(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12944);
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82aea80c
	ctx.lr = 0x82AD4368;
	__imp__KeTlsGetValue(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r5,r29,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x828280f8
	ctx.lr = 0x82AD4378;
	sub_828280F8(ctx, base);
loc_82AD4378:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,25780
	ctx.r11.s64 = ctx.r11.s64 + 25780;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD4390"))) PPC_WEAK_FUNC(sub_82AD4390);
PPC_FUNC_IMPL(__imp__sub_82AD4390) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,5324
	ctx.r11.s64 = ctx.r11.s64 + 5324;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD43B0"))) PPC_WEAK_FUNC(sub_82AD43B0);
PPC_FUNC_IMPL(__imp__sub_82AD43B0) {
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
	// bl 0x82ad42e0
	ctx.lr = 0x82AD43D0;
	sub_82AD42E0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ad43fc
	if (ctx.cr0.eq) goto loc_82AD43FC;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// li r6,36
	ctx.r6.s64 = 36;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,12940(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12940);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD43FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD43FC:
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

__attribute__((alias("__imp__sub_82AD4418"))) PPC_WEAK_FUNC(sub_82AD4418);
PPC_FUNC_IMPL(__imp__sub_82AD4418) {
	PPC_FUNC_PROLOGUE();
	// li r3,23
	ctx.r3.s64 = 23;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD4420"))) PPC_WEAK_FUNC(sub_82AD4420);
PPC_FUNC_IMPL(__imp__sub_82AD4420) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,5376
	ctx.r4.s64 = ctx.r11.s64 + 5376;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD4458;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD446C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82AD4480"))) PPC_WEAK_FUNC(sub_82AD4480);
PPC_FUNC_IMPL(__imp__sub_82AD4480) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,5388
	ctx.r11.s64 = ctx.r11.s64 + 5388;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD44A0"))) PPC_WEAK_FUNC(sub_82AD44A0);
PPC_FUNC_IMPL(__imp__sub_82AD44A0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD44E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ad452c
	if (ctx.cr0.eq) goto loc_82AD452C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82580df8
	ctx.lr = 0x82AD4510;
	sub_82580DF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD452C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD452C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_82AD4548"))) PPC_WEAK_FUNC(sub_82AD4548);
PPC_FUNC_IMPL(__imp__sub_82AD4548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lvx128 v12,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v13,v0,v12
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32), 0xEF));
	// vspltw v0,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x0));
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// vaddfp v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvewx v0,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v13,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x0));
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lvx128 v11,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// vmsum3fp128 v0,v0,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32), 0xEF));
	// vaddfp v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvewx v0,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f12,3544(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3544);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82ad46f4
	if (!ctx.cr6.lt) goto loc_82AD46F4;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x82ad46f4
	if (ctx.cr6.lt) goto loc_82AD46F4;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82ad45e0
	if (!ctx.cr6.gt) goto loc_82AD45E0;
	// fdivs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
loc_82AD45E0:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r7,r11,48
	ctx.r7.s64 = ctx.r11.s64 + 48;
	// addi r10,r10,24608
	ctx.r10.s64 = ctx.r10.s64 + 24608;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lvx128 v7,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-13552
	ctx.r11.s64 = ctx.r11.s64 + -13552;
	// lvx128 v8,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,27980(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27980);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r11,r11,-6240
	ctx.r11.s64 = ctx.r11.s64 + -6240;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-13184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13184);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lvlx v13,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v13,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// lfs f0,5024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5024);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// vspltw v13,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// vsubfp v10,v10,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v10.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stfs f0,108(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v6,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// vmulfp128 v12,v10,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v13,v13,v11,v12
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vsubfp v13,v13,v8
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vand v13,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)));
	// vcmpgtfp v13,v13,v7
	simde_mm_store_ps(ctx.v13.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v7.f32)));
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// vand v13,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// vxor v0,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfsx v0,v0,0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v0,v0,v6
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// vctsxs v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v0.f32)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r11,r11,0,28,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x82ad46f4
	if (!ctx.cr6.eq) goto loc_82AD46F4;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f12,116(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD46F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD46F4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD4708"))) PPC_WEAK_FUNC(sub_82AD4708);
PPC_FUNC_IMPL(__imp__sub_82AD4708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ad4834
	if (ctx.cr0.lt) goto loc_82AD4834;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r6,r3,32
	ctx.r6.s64 = ctx.r3.s64 + 32;
	// addi r4,r3,48
	ctx.r4.s64 = ctx.r3.s64 + 48;
	// addi r10,r5,12
	ctx.r10.s64 = ctx.r5.s64 + 12;
	// lfs f0,27980(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27980);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,-32(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// lfs f0,-13184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13184);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,-28(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// lfs f0,5024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5024);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,-24(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stfs f0,-20(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// addi r8,r11,-6240
	ctx.r8.s64 = ctx.r11.s64 + -6240;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r7,r11,-13552
	ctx.r7.s64 = ctx.r11.s64 + -13552;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f0,5372(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5372);
	ctx.f0.f64 = double(temp.f32);
loc_82AD4774:
	// lvx128 v11,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,-48
	ctx.r11.s64 = ctx.r1.s64 + -48;
	// lvx128 v12,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v12,v11,v12
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v12.f32)));
	// lvx128 v13,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vand v13,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vcmpgtfp v13,v13,v11
	simde_mm_store_ps(ctx.v13.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v11.f32)));
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vand v13,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vxor v0,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r11,r1,-48
	ctx.r11.s64 = ctx.r1.s64 + -48;
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,-48
	ctx.r11.s64 = ctx.r1.s64 + -48;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfsx v0,v0,0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// addi r11,r1,-48
	ctx.r11.s64 = ctx.r1.s64 + -48;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,-32
	ctx.r11.s64 = ctx.r1.s64 + -32;
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v0,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32), 0xFF));
	// vctsxs v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v0.f32)));
	// addi r11,r1,-48
	ctx.r11.s64 = ctx.r1.s64 + -48;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,-48(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	// rlwinm r11,r11,0,28,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x82ad4820
	if (!ctx.cr6.eq) goto loc_82AD4820;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// addi r5,r10,-12
	ctx.r5.s64 = ctx.r10.s64 + -12;
	// addi r30,r1,-64
	ctx.r30.s64 = ctx.r1.s64 + -64;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v13,v0,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// vspltw v0,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x0));
	// vaddfp v0,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvewx v0,r0,r30
	ea = (ctx.r30.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f13,-64(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// b 0x82ad4824
	goto loc_82AD4824;
loc_82AD4820:
	// stfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_82AD4824:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bge 0x82ad4774
	if (!ctx.cr0.lt) goto loc_82AD4774;
loc_82AD4834:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD4840"))) PPC_WEAK_FUNC(sub_82AD4840);
PPC_FUNC_IMPL(__imp__sub_82AD4840) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// addi r5,r11,32
	ctx.r5.s64 = ctx.r11.s64 + 32;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// b 0x82abab20
	sub_82ABAB20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD4858"))) PPC_WEAK_FUNC(sub_82AD4858);
PPC_FUNC_IMPL(__imp__sub_82AD4858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x82AD4860;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r31,r11,12948
	ctx.r31.s64 = ctx.r11.s64 + 12948;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82aea80c
	ctx.lr = 0x82AD4884;
	__imp__KeTlsGetValue(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82aea80c
	ctx.lr = 0x82AD4890;
	__imp__KeTlsGetValue(ctx, base);
	// subfc r11,r3,r29
	ctx.xer.ca = ctx.r29.u32 >= ctx.r3.u32;
	ctx.r11.s64 = ctx.r29.s64 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ad48d8
	if (ctx.cr0.eq) goto loc_82AD48D8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82aea80c
	ctx.lr = 0x82AD48B8;
	__imp__KeTlsGetValue(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,5424
	ctx.r11.s64 = ctx.r11.s64 + 5424;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82aea81c
	ctx.lr = 0x82AD48D8;
	__imp__KeTlsSetValue(ctx, base);
loc_82AD48D8:
	// addi r10,r30,16
	ctx.r10.s64 = ctx.r30.s64 + 16;
	// lvx128 v9,r0,r28
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v13,v0,v9
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32), 0xEF));
	// vspltw v0,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x0));
	// vaddfp v0,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvewx v0,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x82ad4a24
	if (ctx.cr6.lt) goto loc_82AD4A24;
	// addi r11,r28,16
	ctx.r11.s64 = ctx.r28.s64 + 16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lvx128 v10,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v13,v0,v10
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32), 0xEF));
	// vspltw v0,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x0));
	// vaddfp v0,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvewx v0,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82ad4a24
	if (!ctx.cr6.lt) goto loc_82AD4A24;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r11,r11,24608
	ctx.r11.s64 = ctx.r11.s64 + 24608;
	// addi r8,r30,32
	ctx.r8.s64 = ctx.r30.s64 + 32;
	// addi r7,r30,48
	ctx.r7.s64 = ctx.r30.s64 + 48;
	// lvx128 v12,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lvx128 v8,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,-13552
	ctx.r11.s64 = ctx.r11.s64 + -13552;
	// lvx128 v7,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,27980(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27980);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r11,r11,-6240
	ctx.r11.s64 = ctx.r11.s64 + -6240;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-13184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13184);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,5024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5024);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fdivs f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v13,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// vspltw v13,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// vsubfp v12,v12,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v12,v12,v9
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v13,v13,v10,v12
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vsubfp v13,v13,v8
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v6,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// vand v13,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vcmpgtfp v13,v13,v7
	simde_mm_store_ps(ctx.v13.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v7.f32)));
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vand v13,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vxor v0,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfsx v0,v0,0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v0,v0,v6
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vctsxs v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v0.f32)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r11,r11,0,28,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x82ad4a88
	if (ctx.cr6.eq) goto loc_82AD4A88;
loc_82AD4A24:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82aea80c
	ctx.lr = 0x82AD4A2C;
	__imp__KeTlsGetValue(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82aea80c
	ctx.lr = 0x82AD4A38;
	__imp__KeTlsGetValue(ctx, base);
	// subfc r11,r3,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r3.u32;
	ctx.r11.s64 = ctx.r30.s64 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ad4a80
	if (ctx.cr0.eq) goto loc_82AD4A80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82aea80c
	ctx.lr = 0x82AD4A60;
	__imp__KeTlsGetValue(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-13756
	ctx.r11.s64 = ctx.r11.s64 + -13756;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82aea81c
	ctx.lr = 0x82AD4A80;
	__imp__KeTlsSetValue(ctx, base);
loc_82AD4A80:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82ad4afc
	goto loc_82AD4AFC;
loc_82AD4A88:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stfs f0,20(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 20, temp.u32);
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r27
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r11,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82aea80c
	ctx.lr = 0x82AD4AA4;
	__imp__KeTlsGetValue(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82aea80c
	ctx.lr = 0x82AD4AB0;
	__imp__KeTlsGetValue(ctx, base);
	// subfc r11,r3,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r3.u32;
	ctx.r11.s64 = ctx.r30.s64 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ad4af8
	if (ctx.cr0.eq) goto loc_82AD4AF8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82aea80c
	ctx.lr = 0x82AD4AD8;
	__imp__KeTlsGetValue(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-13756
	ctx.r11.s64 = ctx.r11.s64 + -13756;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82aea81c
	ctx.lr = 0x82AD4AF8;
	__imp__KeTlsSetValue(ctx, base);
loc_82AD4AF8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82AD4AFC:
	// stb r11,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r11.u8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD4B10"))) PPC_WEAK_FUNC(sub_82AD4B10);
PPC_FUNC_IMPL(__imp__sub_82AD4B10) {
	PPC_FUNC_PROLOGUE();
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD4B18"))) PPC_WEAK_FUNC(sub_82AD4B18);
PPC_FUNC_IMPL(__imp__sub_82AD4B18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stb r10,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD4B30"))) PPC_WEAK_FUNC(sub_82AD4B30);
PPC_FUNC_IMPL(__imp__sub_82AD4B30) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,5464
	ctx.r4.s64 = ctx.r11.s64 + 5464;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD4B68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD4B7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82AD4B90"))) PPC_WEAK_FUNC(sub_82AD4B90);
PPC_FUNC_IMPL(__imp__sub_82AD4B90) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,5476
	ctx.r11.s64 = ctx.r11.s64 + 5476;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD4BB0"))) PPC_WEAK_FUNC(sub_82AD4BB0);
PPC_FUNC_IMPL(__imp__sub_82AD4BB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// lvx128 v11,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r4,48
	ctx.r8.s64 = ctx.r4.s64 + 48;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lvx128 v10,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ble 0x82ad4c18
	if (!ctx.cr0.gt) goto loc_82AD4C18;
	// addi r8,r1,-128
	ctx.r8.s64 = ctx.r1.s64 + -128;
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82AD4BE4:
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// vspltw v13,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// vspltw v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v0,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// vmulfp128 v13,v11,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v10,v12,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v9,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vaddfp v0,v0,v8
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32)));
	// stvx v0,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// bne 0x82ad4be4
	if (!ctx.cr0.eq) goto loc_82AD4BE4;
loc_82AD4C18:
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f0,5460(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5460);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// addi r10,r1,-144
	ctx.r10.s64 = ctx.r1.s64 + -144;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// vspltw v12,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// lfs f0,-6904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -6904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// addi r10,r1,-144
	ctx.r10.s64 = ctx.r1.s64 + -144;
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v11,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// ble cr6,0x82ad4c84
	if (!ctx.cr6.gt) goto loc_82AD4C84;
	// addi r9,r1,-128
	ctx.r9.s64 = ctx.r1.s64 + -128;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
loc_82AD4C58:
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// vspltw v13,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x0));
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// vsubfp v10,v0,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v10.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vaddfp v0,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vminfp v12,v12,v10
	simde_mm_store_ps(ctx.v12.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v10.f32)));
	// vmaxfp v11,v11,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)));
	// bne 0x82ad4c58
	if (!ctx.cr0.eq) goto loc_82AD4C58;
loc_82AD4C84:
	// stfs f1,-144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r6,16
	ctx.r11.s64 = ctx.r6.s64 + 16;
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vaddfp v13,v11,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsubfp v0,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD4CB0"))) PPC_WEAK_FUNC(sub_82AD4CB0);
PPC_FUNC_IMPL(__imp__sub_82AD4CB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b8
	ctx.lr = 0x82AD4CB8;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r31,r11,12948
	ctx.r31.s64 = ctx.r11.s64 + 12948;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82aea80c
	ctx.lr = 0x82AD4CDC;
	__imp__KeTlsGetValue(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82aea80c
	ctx.lr = 0x82AD4CE8;
	__imp__KeTlsGetValue(ctx, base);
	// subfc r11,r3,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r3.u32;
	ctx.r11.s64 = ctx.r30.s64 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ad4d30
	if (ctx.cr0.eq) goto loc_82AD4D30;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82aea80c
	ctx.lr = 0x82AD4D10;
	__imp__KeTlsGetValue(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,5512
	ctx.r11.s64 = ctx.r11.s64 + 5512;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82aea81c
	ctx.lr = 0x82AD4D30;
	__imp__KeTlsSetValue(ctx, base);
loc_82AD4D30:
	// addi r26,r29,12
	ctx.r26.s64 = ctx.r29.s64 + 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stb r3,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r3.u8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82ad4ecc
	if (!ctx.cr6.gt) goto loc_82AD4ECC;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f7,14088(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 14088);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,3548(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 3548);
	ctx.f8.f64 = double(temp.f32);
	// addi r30,r27,16
	ctx.r30.s64 = ctx.r27.s64 + 16;
	// lfs f9,-13184(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -13184);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r29,28
	ctx.r11.s64 = ctx.r29.s64 + 28;
	// lfs f11,3544(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3544);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r10,24608
	ctx.r4.s64 = ctx.r10.s64 + 24608;
	// lfs f10,5024(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5024);
	ctx.f10.f64 = double(temp.f32);
loc_82AD4D80:
	// addi r8,r11,-12
	ctx.r8.s64 = ctx.r11.s64 + -12;
	// ld r29,8(r30)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// ld r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// ld r24,8(r27)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r27.u32 + 8);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r5,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r5.u64);
	// std r24,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r24.u64);
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// std r29,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r29.u64);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// vsubfp v11,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v12,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v0,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsubfp v13,v11,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v12,v0,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v10,v13,v0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v12,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// vor v12,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// stvewx v12,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82ad4eb8
	if (!ctx.cr6.lt) goto loc_82AD4EB8;
	// vmsum3fp128 v13,v13,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stvewx v13,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f12,88(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmsubs f13,f0,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// ble cr6,0x82ad4eb8
	if (!ctx.cr6.gt) goto loc_82AD4EB8;
	// fneg f6,f0
	ctx.f6.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsqrts f0,f13
	ctx.f0.f64 = double(float(sqrt(ctx.f13.f64)));
	// fsubs f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// fmuls f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82ad4eb8
	if (!ctx.cr6.lt) goto loc_82AD4EB8;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x82ad4eb8
	if (ctx.cr6.lt) goto loc_82AD4EB8;
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// lfs f13,20(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82ad4eb8
	if (!ctx.cr6.lt) goto loc_82AD4EB8;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// stfs f0,20(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 20, temp.u32);
	// lvx128 v12,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r8,1
	ctx.r8.s64 = 1;
	// lvlx v13,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v13,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// vspltw v13,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// vsubfp v12,v12,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v0,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v13,v11,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stvx v0,r0,r28
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 / ctx.f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stw r3,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r3.u32);
	// vspltw v13,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// stb r8,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r8.u8);
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx v0,r0,r28
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82AD4EB8:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82ad4d80
	if (ctx.cr6.lt) goto loc_82AD4D80;
loc_82AD4ECC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82aea80c
	ctx.lr = 0x82AD4ED4;
	__imp__KeTlsGetValue(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82aea80c
	ctx.lr = 0x82AD4EE0;
	__imp__KeTlsGetValue(ctx, base);
	// subfc r11,r3,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r3.u32;
	ctx.r11.s64 = ctx.r30.s64 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ad4f28
	if (ctx.cr0.eq) goto loc_82AD4F28;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82aea80c
	ctx.lr = 0x82AD4F08;
	__imp__KeTlsGetValue(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-13756
	ctx.r11.s64 = ctx.r11.s64 + -13756;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82aea81c
	ctx.lr = 0x82AD4F28;
	__imp__KeTlsSetValue(ctx, base);
loc_82AD4F28:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD4F38"))) PPC_WEAK_FUNC(sub_82AD4F38);
PPC_FUNC_IMPL(__imp__sub_82AD4F38) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD4F7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ad4ff4
	if (ctx.cr0.eq) goto loc_82AD4FF4;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// vspltw v13,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// vspltw v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v0,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// lvx128 v11,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// vmulfp128 v13,v11,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)));
	// lvx128 v10,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// vmaddfp v13,v10,v12,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v9,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD4FF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD4FF4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_82AD5010"))) PPC_WEAK_FUNC(sub_82AD5010);
PPC_FUNC_IMPL(__imp__sub_82AD5010) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,5568
	ctx.r4.s64 = ctx.r11.s64 + 5568;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD5050;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82ad508c
	if (!ctx.cr0.eq) goto loc_82AD508C;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r8,r11,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r4,r10,5560
	ctx.r4.s64 = ctx.r10.s64 + 5560;
	// rlwinm r7,r7,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD508C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD508C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD50A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82AD50B8"))) PPC_WEAK_FUNC(sub_82AD50B8);
PPC_FUNC_IMPL(__imp__sub_82AD50B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,17
	ctx.r3.s64 = 17;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD50C0"))) PPC_WEAK_FUNC(sub_82AD50C0);
PPC_FUNC_IMPL(__imp__sub_82AD50C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82AD50C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm. r11,r30,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ad5100
	if (!ctx.cr0.eq) goto loc_82AD5100;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// lwz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r28,20
	ctx.r28.s64 = 20;
	// lwz r3,12944(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12944);
	// bl 0x82aea80c
	ctx.lr = 0x82AD50F0;
	__imp__KeTlsGetValue(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r5,r30,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x828280f8
	ctx.lr = 0x82AD5100;
	sub_828280F8(ctx, base);
loc_82AD5100:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,25780
	ctx.r11.s64 = ctx.r11.s64 + 25780;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD5118"))) PPC_WEAK_FUNC(sub_82AD5118);
PPC_FUNC_IMPL(__imp__sub_82AD5118) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,5580
	ctx.r11.s64 = ctx.r11.s64 + 5580;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD5138"))) PPC_WEAK_FUNC(sub_82AD5138);
PPC_FUNC_IMPL(__imp__sub_82AD5138) {
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
	// bl 0x82ad50c0
	ctx.lr = 0x82AD5158;
	sub_82AD50C0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ad5184
	if (ctx.cr0.eq) goto loc_82AD5184;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// li r6,36
	ctx.r6.s64 = 36;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,12940(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12940);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD5184;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD5184:
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

__attribute__((alias("__imp__sub_82AD51A0"))) PPC_WEAK_FUNC(sub_82AD51A0);
PPC_FUNC_IMPL(__imp__sub_82AD51A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82AD51A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lwz r29,16(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 16, ctx.xer);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// ble cr6,0x82ad5200
	if (!ctx.cr6.gt) goto loc_82AD5200;
	// cmpwi cr6,r29,32
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 32, ctx.xer);
	// li r4,32
	ctx.r4.s64 = 32;
	// blt cr6,0x82ad51f0
	if (ctx.cr6.lt) goto loc_82AD51F0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82AD51F0:
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x828282d0
	ctx.lr = 0x82AD51FC;
	sub_828282D0(ctx, base);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82AD5200:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r8,r31,16
	ctx.r8.s64 = ctx.r31.s64 + 16;
	// addi r7,r31,32
	ctx.r7.s64 = ctx.r31.s64 + 32;
	// lvx128 v11,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r31,48
	ctx.r6.s64 = ctx.r31.s64 + 48;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// lvx128 v10,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm. r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82ad526c
	if (!ctx.cr0.gt) goto loc_82AD526C;
loc_82AD5230:
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// vspltw v13,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// vspltw v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v0,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// vmulfp128 v13,v11,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v10,v12,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v9,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vaddfp v0,v0,v8
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32)));
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bne 0x82ad5230
	if (!ctx.cr0.eq) goto loc_82AD5230;
	// lwz r29,116(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82AD526C:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lfs f0,5556(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5556);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// vspltw v12,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// lfs f0,-6904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stvx v12,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// vspltw v11,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// stvx v11,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ble cr6,0x82ad5300
	if (!ctx.cr6.gt) goto loc_82AD5300;
loc_82AD52B8:
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// vminfp v12,v12,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmaxfp v13,v11,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx v12,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// vminfp v12,v12,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaxfp v11,v13,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx v13,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stvx v12,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stvx v11,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne 0x82ad52b8
	if (!ctx.cr0.eq) goto loc_82AD52B8;
loc_82AD5300:
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r11,r28,16
	ctx.r11.s64 = ctx.r28.s64 + 16;
	// stvx v12,r0,r28
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v11,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm. r8,r10,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82ad5340
	if (!ctx.cr0.eq) goto loc_82AD5340;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// li r30,20
	ctx.r30.s64 = 20;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// lwz r3,12944(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12944);
	// bl 0x82aea80c
	ctx.lr = 0x82AD5330;
	__imp__KeTlsGetValue(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r5,r31,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828280f8
	ctx.lr = 0x82AD5340;
	sub_828280F8(ctx, base);
loc_82AD5340:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD5348"))) PPC_WEAK_FUNC(sub_82AD5348);
PPC_FUNC_IMPL(__imp__sub_82AD5348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x82AD5350;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD5380;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82ad53f8
	if (!ctx.cr6.gt) goto loc_82AD53F8;
	// addi r27,r30,16
	ctx.r27.s64 = ctx.r30.s64 + 16;
	// li r28,8
	ctx.r28.s64 = 8;
loc_82AD5398:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD53BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v12,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lvx128 v11,r0,r27
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// vminfp v0,v12,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaxfp v13,v11,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx v0,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v13,r0,r27
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82ad5398
	if (ctx.cr6.lt) goto loc_82AD5398;
loc_82AD53F8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD5408"))) PPC_WEAK_FUNC(sub_82AD5408);
PPC_FUNC_IMPL(__imp__sub_82AD5408) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD5428"))) PPC_WEAK_FUNC(sub_82AD5428);
PPC_FUNC_IMPL(__imp__sub_82AD5428) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD5438"))) PPC_WEAK_FUNC(sub_82AD5438);
PPC_FUNC_IMPL(__imp__sub_82AD5438) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD5450"))) PPC_WEAK_FUNC(sub_82AD5450);
PPC_FUNC_IMPL(__imp__sub_82AD5450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82AD5458;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,5620
	ctx.r4.s64 = ctx.r11.s64 + 5620;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD5488;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82ad54c4
	if (!ctx.cr0.eq) goto loc_82AD54C4;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r4,r10,5608
	ctx.r4.s64 = ctx.r10.s64 + 5608;
	// rlwinm r7,r7,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD54C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD54C4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82ad5518
	if (!ctx.cr0.gt) goto loc_82AD5518;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r11,-29492
	ctx.r27.s64 = ctx.r11.s64 + -29492;
loc_82AD54E0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r6,r10,r28
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD5504;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82ad54e0
	if (ctx.cr6.lt) goto loc_82AD54E0;
loc_82AD5518:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD552C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD5538"))) PPC_WEAK_FUNC(sub_82AD5538);
PPC_FUNC_IMPL(__imp__sub_82AD5538) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,5632
	ctx.r11.s64 = ctx.r11.s64 + 5632;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD5558"))) PPC_WEAK_FUNC(sub_82AD5558);
PPC_FUNC_IMPL(__imp__sub_82AD5558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82AD5560;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,5632
	ctx.r11.s64 = ctx.r11.s64 + 5632;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82ad55d8
	if (!ctx.cr0.gt) goto loc_82AD55D8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82AD5588:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ad55c4
	if (ctx.cr0.eq) goto loc_82AD55C4;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// bne 0x82ad55c4
	if (!ctx.cr0.eq) goto loc_82AD55C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD55C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD55C4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82ad5588
	if (ctx.cr6.lt) goto loc_82AD5588;
loc_82AD55D8:
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm. r11,r30,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ad5608
	if (!ctx.cr0.eq) goto loc_82AD5608;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// lwz r29,16(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r28,20
	ctx.r28.s64 = 20;
	// lwz r3,12944(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12944);
	// bl 0x82aea80c
	ctx.lr = 0x82AD55F8;
	__imp__KeTlsGetValue(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r5,r30,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x828280f8
	ctx.lr = 0x82AD5608;
	sub_828280F8(ctx, base);
loc_82AD5608:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,25780
	ctx.r11.s64 = ctx.r11.s64 + 25780;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD5620"))) PPC_WEAK_FUNC(sub_82AD5620);
PPC_FUNC_IMPL(__imp__sub_82AD5620) {
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
	// bl 0x82ad5558
	ctx.lr = 0x82AD5640;
	sub_82AD5558(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ad566c
	if (ctx.cr0.eq) goto loc_82AD566C;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// li r6,36
	ctx.r6.s64 = 36;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,12940(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12940);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD566C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD566C:
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

__attribute__((alias("__imp__sub_82AD5688"))) PPC_WEAK_FUNC(sub_82AD5688);
PPC_FUNC_IMPL(__imp__sub_82AD5688) {
	PPC_FUNC_PROLOGUE();
	// xor r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 ^ ctx.r6.u64;
	// rlwinm. r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ad56cc
	if (!ctx.cr0.eq) goto loc_82AD56CC;
	// rlwinm. r11,r5,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFF0000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ad56cc
	if (ctx.cr0.eq) goto loc_82AD56CC;
	// rlwinm r11,r6,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// xor r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r5.u64;
	// rlwinm. r11,r11,0,22,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3E0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ad56b4
	if (!ctx.cr0.eq) goto loc_82AD56B4;
loc_82AD56AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82ad56fc
	goto loc_82AD56FC;
loc_82AD56B4:
	// rlwinm r11,r5,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x7FFFFFF;
	// xor r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// rlwinm. r11,r11,0,22,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3E0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ad56ac
	if (ctx.cr0.eq) goto loc_82AD56AC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82ad56fc
	goto loc_82AD56FC;
loc_82AD56CC:
	// clrlwi r10,r6,27
	ctx.r10.u64 = ctx.r6.u32 & 0x1F;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r11,r5,27
	ctx.r11.u64 = ctx.r5.u32 & 0x1F;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
loc_82AD56FC:
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD5708"))) PPC_WEAK_FUNC(sub_82AD5708);
PPC_FUNC_IMPL(__imp__sub_82AD5708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82AD5710;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD5738;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// lwz r5,32(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ad5688
	ctx.lr = 0x82AD574C;
	sub_82AD5688(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD5758"))) PPC_WEAK_FUNC(sub_82AD5758);
PPC_FUNC_IMPL(__imp__sub_82AD5758) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82ad5940
	sub_82AD5940(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD5760"))) PPC_WEAK_FUNC(sub_82AD5760);
PPC_FUNC_IMPL(__imp__sub_82AD5760) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// b 0x82ad5940
	sub_82AD5940(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD5768"))) PPC_WEAK_FUNC(sub_82AD5768);
PPC_FUNC_IMPL(__imp__sub_82AD5768) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82ad5940
	sub_82AD5940(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD5770"))) PPC_WEAK_FUNC(sub_82AD5770);
PPC_FUNC_IMPL(__imp__sub_82AD5770) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-20
	ctx.r3.s64 = ctx.r3.s64 + -20;
	// b 0x82ad5940
	sub_82AD5940(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD5778"))) PPC_WEAK_FUNC(sub_82AD5778);
PPC_FUNC_IMPL(__imp__sub_82AD5778) {
	PPC_FUNC_PROLOGUE();
	// lwz r6,28(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// addi r4,r4,-8
	ctx.r4.s64 = ctx.r4.s64 + -8;
	// lwz r5,28(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// b 0x82ad5688
	sub_82AD5688(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD5788"))) PPC_WEAK_FUNC(sub_82AD5788);
PPC_FUNC_IMPL(__imp__sub_82AD5788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x82AD5790;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD57BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82ad586c
	if (ctx.cr6.eq) goto loc_82AD586C;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_82AD57D0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD57E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r10,r3,67
	ctx.r10.s64 = ctx.r3.s64 + 67;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82ad587c
	if (!ctx.cr0.eq) goto loc_82AD587C;
	// rlwinm r10,r11,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82ad5898
	if (!ctx.cr0.eq) goto loc_82AD5898;
	// rlwinm r11,r11,21,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82ad58a8
	if (!ctx.cr0.eq) goto loc_82AD58A8;
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne 0x82ad57d0
	if (!ctx.cr0.eq) goto loc_82AD57D0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AD584C:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r4,r27,-12
	ctx.r4.s64 = ctx.r27.s64 + -12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ad5688
	ctx.lr = 0x82AD5860;
	sub_82AD5688(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_82AD5868:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82AD586C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82ad5868
	if (!ctx.cr0.eq) goto loc_82AD5868;
	// b 0x82ad58b4
	goto loc_82AD58B4;
loc_82AD587C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82AD5880:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD5894;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82ad584c
	goto loc_82AD584C;
loc_82AD5898:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x82ad5880
	goto loc_82AD5880;
loc_82AD58A4:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82AD58A8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82ad58a4
	if (!ctx.cr0.eq) goto loc_82AD58A4;
loc_82AD58B4:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// b 0x82ad584c
	goto loc_82AD584C;
}

__attribute__((alias("__imp__sub_82AD58C0"))) PPC_WEAK_FUNC(sub_82AD58C0);
PPC_FUNC_IMPL(__imp__sub_82AD58C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r6,28(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// addi r4,r4,-20
	ctx.r4.s64 = ctx.r4.s64 + -20;
	// lwz r5,36(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// b 0x82ad5688
	sub_82AD5688(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD58D0"))) PPC_WEAK_FUNC(sub_82AD58D0);
PPC_FUNC_IMPL(__imp__sub_82AD58D0) {
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
	// bl 0x825bf940
	ctx.lr = 0x82AD58E8;
	sub_825BF940(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// addi r11,r11,5712
	ctx.r11.s64 = ctx.r11.s64 + 5712;
	// addi r10,r10,5704
	ctx.r10.s64 = ctx.r10.s64 + 5704;
	// addi r9,r9,5696
	ctx.r9.s64 = ctx.r9.s64 + 5696;
	// addi r8,r8,5688
	ctx.r8.s64 = ctx.r8.s64 + 5688;
	// addi r7,r7,5680
	ctx.r7.s64 = ctx.r7.s64 + 5680;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82AD5940"))) PPC_WEAK_FUNC(sub_82AD5940);
PPC_FUNC_IMPL(__imp__sub_82AD5940) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,5712
	ctx.r11.s64 = ctx.r11.s64 + 5712;
	// addi r10,r10,5704
	ctx.r10.s64 = ctx.r10.s64 + 5704;
	// addi r9,r9,5696
	ctx.r9.s64 = ctx.r9.s64 + 5696;
	// addi r8,r8,5688
	ctx.r8.s64 = ctx.r8.s64 + 5688;
	// addi r7,r7,5680
	ctx.r7.s64 = ctx.r7.s64 + 5680;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// bl 0x825bf8c0
	ctx.lr = 0x82AD599C;
	sub_825BF8C0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ad59c8
	if (ctx.cr0.eq) goto loc_82AD59C8;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// li r6,36
	ctx.r6.s64 = 36;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,12940(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12940);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD59C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD59C8:
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

__attribute__((alias("__imp__sub_82AD59E8"))) PPC_WEAK_FUNC(sub_82AD59E8);
PPC_FUNC_IMPL(__imp__sub_82AD59E8) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82ad58d0
	sub_82AD58D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD59F8"))) PPC_WEAK_FUNC(sub_82AD59F8);
PPC_FUNC_IMPL(__imp__sub_82AD59F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD5A00"))) PPC_WEAK_FUNC(sub_82AD5A00);
PPC_FUNC_IMPL(__imp__sub_82AD5A00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lwz r11,36(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mullw r9,r10,r4
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lhz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// lhz r6,2(r9)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// lhz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4);
	// mullw r7,r7,r10
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// mullw r9,r6,r10
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// mullw r10,r4,r10
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x82ad5a78
	if (ctx.cr6.eq) goto loc_82AD5A78;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f0,48(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f0,12(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// addi r11,r11,-29636
	ctx.r11.s64 = ctx.r11.s64 + -29636;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// sth r6,6(r5)
	PPC_STORE_U16(ctx.r5.u32 + 6, ctx.r6.u16);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r4,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r4.u32);
	// b 0x82ad5a7c
	goto loc_82AD5A7C;
loc_82AD5A78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AD5A7C:
	// addi r11,r8,16
	ctx.r11.s64 = ctx.r8.s64 + 16;
	// lvx128 v13,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r3,16
	ctx.r8.s64 = ctx.r3.s64 + 16;
	// addi r7,r3,32
	ctx.r7.s64 = ctx.r3.s64 + 32;
	// addi r6,r3,48
	ctx.r6.s64 = ctx.r3.s64 + 48;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v0,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx v0,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx v0,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx v0,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD5AC0"))) PPC_WEAK_FUNC(sub_82AD5AC0);
PPC_FUNC_IMPL(__imp__sub_82AD5AC0) {
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
	// beq cr6,0x82ad5af0
	if (ctx.cr6.eq) goto loc_82AD5AF0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82abc488
	ctx.lr = 0x82AD5AE4;
	sub_82ABC488(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,5724
	ctx.r11.s64 = ctx.r11.s64 + 5724;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82AD5AF0:
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

__attribute__((alias("__imp__sub_82AD5B08"))) PPC_WEAK_FUNC(sub_82AD5B08);
PPC_FUNC_IMPL(__imp__sub_82AD5B08) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,5776
	ctx.r4.s64 = ctx.r11.s64 + 5776;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD5B48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-29492
	ctx.r4.s64 = ctx.r11.s64 + -29492;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD5B6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD5B80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82AD5B98"))) PPC_WEAK_FUNC(sub_82AD5B98);
PPC_FUNC_IMPL(__imp__sub_82AD5B98) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,5792
	ctx.r11.s64 = ctx.r11.s64 + 5792;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD5BB8"))) PPC_WEAK_FUNC(sub_82AD5BB8);
PPC_FUNC_IMPL(__imp__sub_82AD5BB8) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,5792
	ctx.r11.s64 = ctx.r11.s64 + 5792;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ad5c10
	if (ctx.cr0.eq) goto loc_82AD5C10;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// bne 0x82ad5c10
	if (!ctx.cr0.eq) goto loc_82AD5C10;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD5C10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD5C10:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,25780
	ctx.r11.s64 = ctx.r11.s64 + 25780;
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

__attribute__((alias("__imp__sub_82AD5C30"))) PPC_WEAK_FUNC(sub_82AD5C30);
PPC_FUNC_IMPL(__imp__sub_82AD5C30) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD5C60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// lvx128 v0,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v0,v0,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// stvewx v0,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
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

__attribute__((alias("__imp__sub_82AD5C98"))) PPC_WEAK_FUNC(sub_82AD5C98);
PPC_FUNC_IMPL(__imp__sub_82AD5C98) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD5CC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// lvx128 v0,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp v0,v0,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx v0,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_82AD5CF8"))) PPC_WEAK_FUNC(sub_82AD5CF8);
PPC_FUNC_IMPL(__imp__sub_82AD5CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82AD5D00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD5D24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82ad5d50
	if (!ctx.cr6.gt) goto loc_82AD5D50;
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82AD5D34:
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp v0,v0,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x82ad5d34
	if (!ctx.cr0.eq) goto loc_82AD5D34;
loc_82AD5D50:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD5D58"))) PPC_WEAK_FUNC(sub_82AD5D58);
PPC_FUNC_IMPL(__imp__sub_82AD5D58) {
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
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD5D88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// lvx128 v0,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp v0,v0,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx v0,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_82AD5DB8"))) PPC_WEAK_FUNC(sub_82AD5DB8);
PPC_FUNC_IMPL(__imp__sub_82AD5DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82AD5DC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD5DE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD5E04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82ad5e34
	if (!ctx.cr6.gt) goto loc_82AD5E34;
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
loc_82AD5E14:
	// lvx128 v0,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// vaddfp v0,v0,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx v0,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// bne 0x82ad5e14
	if (!ctx.cr0.eq) goto loc_82AD5E14;
loc_82AD5E34:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD5E40"))) PPC_WEAK_FUNC(sub_82AD5E40);
PPC_FUNC_IMPL(__imp__sub_82AD5E40) {
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
	// bl 0x82ad5bb8
	ctx.lr = 0x82AD5E60;
	sub_82AD5BB8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ad5e8c
	if (ctx.cr0.eq) goto loc_82AD5E8C;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// li r6,36
	ctx.r6.s64 = 36;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,12940(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12940);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD5E8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD5E8C:
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

__attribute__((alias("__imp__sub_82AD5EA8"))) PPC_WEAK_FUNC(sub_82AD5EA8);
PPC_FUNC_IMPL(__imp__sub_82AD5EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82AD5EB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD5ED4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r10,r29,32
	ctx.r10.s64 = ctx.r29.s64 + 32;
	// lvx128 v11,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r31,16
	ctx.r9.s64 = ctx.r31.s64 + 16;
	// addi r8,r31,32
	ctx.r8.s64 = ctx.r31.s64 + 32;
	// lvx128 v10,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v13,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v9,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// lvx128 v8,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v0,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// vmulfp128 v13,v11,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v9,v12,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v8,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vaddfp v13,v10,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx v13,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD5F30"))) PPC_WEAK_FUNC(sub_82AD5F30);
PPC_FUNC_IMPL(__imp__sub_82AD5F30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x82AD5F38;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r31,r11,12948
	ctx.r31.s64 = ctx.r11.s64 + 12948;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82aea80c
	ctx.lr = 0x82AD5F5C;
	__imp__KeTlsGetValue(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82aea80c
	ctx.lr = 0x82AD5F68;
	__imp__KeTlsGetValue(ctx, base);
	// subfc r11,r3,r29
	ctx.xer.ca = ctx.r29.u32 >= ctx.r3.u32;
	ctx.r11.s64 = ctx.r29.s64 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ad5fb0
	if (ctx.cr0.eq) goto loc_82AD5FB0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82aea80c
	ctx.lr = 0x82AD5F90;
	__imp__KeTlsGetValue(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,5844
	ctx.r11.s64 = ctx.r11.s64 + 5844;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82aea81c
	ctx.lr = 0x82AD5FB0;
	__imp__KeTlsSetValue(ctx, base);
loc_82AD5FB0:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82AD5FC0:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82ad5fc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AD5FC0;
	// addi r11,r28,32
	ctx.r11.s64 = ctx.r28.s64 + 32;
	// lvx128 v13,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r30,16
	ctx.r10.s64 = ctx.r30.s64 + 16;
	// lwz r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vsubfp v13,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v12,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v0,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD6020;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82aea80c
	ctx.lr = 0x82AD6028;
	__imp__KeTlsGetValue(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82aea80c
	ctx.lr = 0x82AD6034;
	__imp__KeTlsGetValue(ctx, base);
	// subfc r11,r3,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r3.u32;
	ctx.r11.s64 = ctx.r30.s64 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ad607c
	if (ctx.cr0.eq) goto loc_82AD607C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82aea80c
	ctx.lr = 0x82AD605C;
	__imp__KeTlsGetValue(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-13756
	ctx.r11.s64 = ctx.r11.s64 + -13756;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82aea81c
	ctx.lr = 0x82AD607C;
	__imp__KeTlsSetValue(ctx, base);
loc_82AD607C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD6088"))) PPC_WEAK_FUNC(sub_82AD6088);
PPC_FUNC_IMPL(__imp__sub_82AD6088) {
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
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD60B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82AD60D0"))) PPC_WEAK_FUNC(sub_82AD60D0);
PPC_FUNC_IMPL(__imp__sub_82AD60D0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,5892
	ctx.r4.s64 = ctx.r11.s64 + 5892;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD6110;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-29492
	ctx.r4.s64 = ctx.r11.s64 + -29492;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD6134;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD6148;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82AD6160"))) PPC_WEAK_FUNC(sub_82AD6160);
PPC_FUNC_IMPL(__imp__sub_82AD6160) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,5908
	ctx.r11.s64 = ctx.r11.s64 + 5908;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ad61b8
	if (ctx.cr0.eq) goto loc_82AD61B8;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// bne 0x82ad61b8
	if (!ctx.cr0.eq) goto loc_82AD61B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD61B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD61B8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,25780
	ctx.r11.s64 = ctx.r11.s64 + 25780;
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

__attribute__((alias("__imp__sub_82AD61D8"))) PPC_WEAK_FUNC(sub_82AD61D8);
PPC_FUNC_IMPL(__imp__sub_82AD61D8) {
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
	// bl 0x82ad6160
	ctx.lr = 0x82AD61F8;
	sub_82AD6160(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ad6224
	if (ctx.cr0.eq) goto loc_82AD6224;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// li r6,36
	ctx.r6.s64 = 36;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,12940(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12940);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD6224;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD6224:
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

__attribute__((alias("__imp__sub_82AD6240"))) PPC_WEAK_FUNC(sub_82AD6240);
PPC_FUNC_IMPL(__imp__sub_82AD6240) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,5908
	ctx.r11.s64 = ctx.r11.s64 + 5908;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD6260"))) PPC_WEAK_FUNC(sub_82AD6260);
PPC_FUNC_IMPL(__imp__sub_82AD6260) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r5,r31,32
	ctx.r5.s64 = ctx.r31.s64 + 32;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x8282cbf8
	ctx.lr = 0x82AD6290;
	sub_8282CBF8(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD62B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_82AD62D0"))) PPC_WEAK_FUNC(sub_82AD62D0);
PPC_FUNC_IMPL(__imp__sub_82AD62D0) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,24592
	ctx.r11.s64 = ctx.r11.s64 + 24592;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lvx128 v12,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// lvx128 v0,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v12,v12,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// lvx128 v11,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// vmsum3fp128 v11,v11,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v0,v10,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// vmrghw v13,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v0,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghw v0,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD6348;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvx128 v10,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r31,48
	ctx.r9.s64 = ctx.r31.s64 + 48;
	// lvx128 v11,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// lvx128 v7,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v0,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v9,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v8,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v13,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v0,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// vmulfp128 v13,v10,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v9,v12,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v8,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vaddfp v0,v0,v7
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v7.f32)));
	// vmsum3fp128 v0,v0,v11
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32), 0xEF));
	// stvewx v0,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
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

__attribute__((alias("__imp__sub_82AD63C8"))) PPC_WEAK_FUNC(sub_82AD63C8);
PPC_FUNC_IMPL(__imp__sub_82AD63C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x82AD63D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r30,r11,12948
	ctx.r30.s64 = ctx.r11.s64 + 12948;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82aea80c
	ctx.lr = 0x82AD63F4;
	__imp__KeTlsGetValue(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82aea80c
	ctx.lr = 0x82AD6400;
	__imp__KeTlsGetValue(ctx, base);
	// subfc r11,r3,r31
	ctx.xer.ca = ctx.r31.u32 >= ctx.r3.u32;
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ad6448
	if (ctx.cr0.eq) goto loc_82AD6448;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82aea80c
	ctx.lr = 0x82AD6428;
	__imp__KeTlsGetValue(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,5844
	ctx.r11.s64 = ctx.r11.s64 + 5844;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82aea81c
	ctx.lr = 0x82AD6448;
	__imp__KeTlsSetValue(ctx, base);
loc_82AD6448:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82AD6458:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82ad6458
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AD6458;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lvx128 v0,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r29,16
	ctx.r10.s64 = ctx.r29.s64 + 16;
	// lwz r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r11,r11,24592
	ctx.r11.s64 = ctx.r11.s64 + 24592;
	// addi r31,r28,32
	ctx.r31.s64 = ctx.r28.s64 + 32;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r9,r31,48
	ctx.r9.s64 = ctx.r31.s64 + 48;
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// lvx128 v12,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// lvx128 v11,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// vor v9,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lvx128 v5,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v6,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v13,v13,v5
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v5.f32)));
	// lvx128 v10,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// vsubfp v0,v0,v6
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v6.f32)));
	// lvx128 v8,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// lvx128 v7,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// vmsum3fp128 v9,v9,v13
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// vmsum3fp128 v10,v10,v0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v11,v11,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v0,v8,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// lvx128 v6,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v8,v7,v13
	simde_mm_store_ps(ctx.v8.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// vmsum3fp128 v13,v6,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// vmrghw v10,v10,v12
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrghw v0,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v12,v8,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vmrghw v13,v9,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrghw v0,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vmrghw v13,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD6528;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ad6568
	if (ctx.cr0.eq) goto loc_82AD6568;
	// ld r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// ld r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r27.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// bl 0x82580df8
	ctx.lr = 0x82AD6568;
	sub_82580DF8(ctx, base);
loc_82AD6568:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82aea80c
	ctx.lr = 0x82AD6570;
	__imp__KeTlsGetValue(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82aea80c
	ctx.lr = 0x82AD657C;
	__imp__KeTlsGetValue(ctx, base);
	// subfc r11,r3,r31
	ctx.xer.ca = ctx.r31.u32 >= ctx.r3.u32;
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ad65c4
	if (ctx.cr0.eq) goto loc_82AD65C4;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82aea80c
	ctx.lr = 0x82AD65A4;
	__imp__KeTlsGetValue(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-13756
	ctx.r11.s64 = ctx.r11.s64 + -13756;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82aea81c
	ctx.lr = 0x82AD65C4;
	__imp__KeTlsSetValue(ctx, base);
loc_82AD65C4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD65D0"))) PPC_WEAK_FUNC(sub_82AD65D0);
PPC_FUNC_IMPL(__imp__sub_82AD65D0) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,24592
	ctx.r11.s64 = ctx.r11.s64 + 24592;
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lvx128 v12,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// lvx128 v10,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v12,v12,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// lvx128 v11,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vmsum3fp128 v11,v11,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v0,v10,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// vmrghw v13,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v0,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghw v0,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD664C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v10,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// addi r9,r31,48
	ctx.r9.s64 = ctx.r31.s64 + 48;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// vspltw v13,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v8,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v11,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// vmulfp128 v13,v10,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32)));
	// lvx128 v9,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v13,v9,v12,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v8,v11,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// stvx v13,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp v13,v13,v12
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vrlimi128 v13,v0,1,0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v0.f32), 228), 1));
	// stvx v13,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_82AD66B0"))) PPC_WEAK_FUNC(sub_82AD66B0);
PPC_FUNC_IMPL(__imp__sub_82AD66B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82AD66B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD66DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// lvx128 v11,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// lvx128 v10,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ble cr6,0x82ad673c
	if (!ctx.cr6.gt) goto loc_82AD673C;
loc_82AD6704:
	// lvx128 v0,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// vspltw v13,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vor v7,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vspltw v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v0,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// vmulfp128 v13,v11,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v10,v12,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v9,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vaddfp v0,v0,v8
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vrlimi128 v0,v7,1,0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v7.f32), 228), 1));
	// stvx v0,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// bne 0x82ad6704
	if (!ctx.cr0.eq) goto loc_82AD6704;
loc_82AD673C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD6748"))) PPC_WEAK_FUNC(sub_82AD6748);
PPC_FUNC_IMPL(__imp__sub_82AD6748) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD677C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// vspltw v13,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// vspltw v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// vspltw v0,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// lvx128 v11,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// vmulfp128 v13,v11,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)));
	// lvx128 v10,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v13,v10,v12,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v9,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// stvx v0,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp v0,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx v0,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_82AD67E0"))) PPC_WEAK_FUNC(sub_82AD67E0);
PPC_FUNC_IMPL(__imp__sub_82AD67E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82AD67E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD6808;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD6828;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lvx128 v10,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// lvx128 v9,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ble cr6,0x82ad6890
	if (!ctx.cr6.gt) goto loc_82AD6890;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// subf r9,r30,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r30.s64;
loc_82AD685C:
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// vspltw v13,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v11,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// vmulfp128 v13,v10,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v9,v12,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v8,v11,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vaddfp v13,v13,v7
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v7.f32)));
	// vrlimi128 v13,v0,1,0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v0.f32), 228), 1));
	// stvx128 v13,r9,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x82ad685c
	if (!ctx.cr0.eq) goto loc_82AD685C;
loc_82AD6890:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD68A0"))) PPC_WEAK_FUNC(sub_82AD68A0);
PPC_FUNC_IMPL(__imp__sub_82AD68A0) {
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
	// beq cr6,0x82ad68cc
	if (ctx.cr6.eq) goto loc_82AD68CC;
	// bl 0x82abd090
	ctx.lr = 0x82AD68C0;
	sub_82ABD090(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,5964
	ctx.r11.s64 = ctx.r11.s64 + 5964;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82AD68CC:
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

__attribute__((alias("__imp__sub_82AD68E0"))) PPC_WEAK_FUNC(sub_82AD68E0);
PPC_FUNC_IMPL(__imp__sub_82AD68E0) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,5964
	ctx.r11.s64 = ctx.r11.s64 + 5964;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ad6938
	if (ctx.cr0.eq) goto loc_82AD6938;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// bne 0x82ad6938
	if (!ctx.cr0.eq) goto loc_82AD6938;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD6938;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD6938:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ad6970
	if (ctx.cr0.eq) goto loc_82AD6970;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// bne 0x82ad6970
	if (!ctx.cr0.eq) goto loc_82AD6970;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD6970;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD6970:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,25780
	ctx.r11.s64 = ctx.r11.s64 + 25780;
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

__attribute__((alias("__imp__sub_82AD6990"))) PPC_WEAK_FUNC(sub_82AD6990);
PPC_FUNC_IMPL(__imp__sub_82AD6990) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 1;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD69B8"))) PPC_WEAK_FUNC(sub_82AD69B8);
PPC_FUNC_IMPL(__imp__sub_82AD69B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b8
	ctx.lr = 0x82AD69C0;
	__savegprlr_24(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ad69f0
	if (ctx.cr6.eq) goto loc_82AD69F0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,24(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82ad96e8
	ctx.lr = 0x82AD69E8;
	sub_82AD96E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82ad69f4
	goto loc_82AD69F4;
loc_82AD69F0:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82AD69F4:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r10,r30,51
	ctx.r10.s64 = ctx.r30.s64 + 51;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ad6b24
	if (!ctx.cr6.lt) goto loc_82AD6B24;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r10,0,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82ad6b9c
	if (!ctx.cr6.gt) goto loc_82AD6B9C;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// li r24,31
	ctx.r24.s64 = 31;
loc_82AD6A60:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwzx r4,r11,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD6A80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r8,r3,16
	ctx.r8.s64 = ctx.r3.s64 + 16;
loc_82AD6A8C:
	// divwu r10,r11,r24
	ctx.r10.u32 = ctx.r11.u32 / ctx.r24.u32;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mulli r10,r10,31
	ctx.r10.s64 = ctx.r10.s64 * 31;
	// subf r6,r10,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divwu r10,r11,r24
	ctx.r10.u32 = ctx.r11.u32 / ctx.r24.u32;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// slw r9,r9,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r6.u8 & 0x3F));
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82ad6af8
	if (ctx.cr0.eq) goto loc_82AD6AF8;
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r26
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r26.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
loc_82AD6AF8:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// bne 0x82ad6a8c
	if (!ctx.cr0.eq) goto loc_82AD6A8C;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmpw cr6,r25,r10
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82ad6a60
	if (ctx.cr6.lt) goto loc_82AD6A60;
	// b 0x82ad6b9c
	goto loc_82AD6B9C;
loc_82AD6B24:
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r30,r10,0,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// subf r11,r9,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r9.s64;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD6B78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
loc_82AD6B80:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne 0x82ad6b80
	if (!ctx.cr0.eq) goto loc_82AD6B80;
loc_82AD6B9C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD6BA8"))) PPC_WEAK_FUNC(sub_82AD6BA8);
PPC_FUNC_IMPL(__imp__sub_82AD6BA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bge cr6,0x82ad6bdc
	if (!ctx.cr6.lt) goto loc_82AD6BDC;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// b 0x82ad6bf0
	goto loc_82AD6BF0;
loc_82AD6BDC:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_82AD6BF0:
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82AD6C08"))) PPC_WEAK_FUNC(sub_82AD6C08);
PPC_FUNC_IMPL(__imp__sub_82AD6C08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82AD6C10;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r29,16
	ctx.r28.s64 = ctx.r29.s64 + 16;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lfs f0,5960(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5960);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f13,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,-6904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stvx v0,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v13,r0,r28
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD6C8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82ad6d08
	goto loc_82AD6D08;
loc_82AD6C90:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD6CAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD6CC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v12,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lvx128 v11,r0,r28
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// vminfp v0,v12,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaxfp v13,v11,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx v0,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v13,r0,r28
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD6D08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD6D08:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x82ad6c90
	if (!ctx.cr6.eq) goto loc_82AD6C90;
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD6D20"))) PPC_WEAK_FUNC(sub_82AD6D20);
PPC_FUNC_IMPL(__imp__sub_82AD6D20) {
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
	// bl 0x82ad68e0
	ctx.lr = 0x82AD6D40;
	sub_82AD68E0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ad6d6c
	if (ctx.cr0.eq) goto loc_82AD6D6C;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// li r6,36
	ctx.r6.s64 = 36;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,12940(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12940);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD6D6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD6D6C:
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

__attribute__((alias("__imp__sub_82AD6D88"))) PPC_WEAK_FUNC(sub_82AD6D88);
PPC_FUNC_IMPL(__imp__sub_82AD6D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82AD6D90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,6032
	ctx.r4.s64 = ctx.r11.s64 + 6032;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD6DC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm. r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// addi r29,r9,6024
	ctx.r29.s64 = ctx.r9.s64 + 6024;
	// bne 0x82ad6e04
	if (!ctx.cr0.eq) goto loc_82AD6E04;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD6E04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD6E04:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm. r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82ad6e40
	if (!ctx.cr0.eq) goto loc_82AD6E40;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,36(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,32(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD6E40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD6E40:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm. r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82ad6e7c
	if (!ctx.cr0.eq) goto loc_82AD6E7C;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD6E7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD6E7C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6012
	ctx.r4.s64 = ctx.r11.s64 + 6012;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD6EA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD6EB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD6EC0"))) PPC_WEAK_FUNC(sub_82AD6EC0);
PPC_FUNC_IMPL(__imp__sub_82AD6EC0) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,6048
	ctx.r11.s64 = ctx.r11.s64 + 6048;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82ad5558
	ctx.lr = 0x82AD6EEC;
	sub_82AD5558(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ad6f18
	if (ctx.cr0.eq) goto loc_82AD6F18;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// li r6,36
	ctx.r6.s64 = 36;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,12940(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12940);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD6F18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD6F18:
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

__attribute__((alias("__imp__sub_82AD6F38"))) PPC_WEAK_FUNC(sub_82AD6F38);
PPC_FUNC_IMPL(__imp__sub_82AD6F38) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,6048
	ctx.r11.s64 = ctx.r11.s64 + 6048;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD6F58"))) PPC_WEAK_FUNC(sub_82AD6F58);
PPC_FUNC_IMPL(__imp__sub_82AD6F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x82AD6F60;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82ad6fd4
	if (ctx.cr0.lt) goto loc_82AD6FD4;
	// rlwinm r29,r30,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_82AD6F84:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD6FAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ad6fe8
	if (ctx.cr0.eq) goto loc_82AD6FE8;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// bge 0x82ad6f84
	if (!ctx.cr0.lt) goto loc_82AD6F84;
loc_82AD6FD4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82AD6FD8:
	// stb r11,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r11.u8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_82AD6FE8:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82ad6fd8
	goto loc_82AD6FD8;
}

__attribute__((alias("__imp__sub_82AD6FF0"))) PPC_WEAK_FUNC(sub_82AD6FF0);
PPC_FUNC_IMPL(__imp__sub_82AD6FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b4
	ctx.lr = 0x82AD6FF8;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82ad7084
	if (ctx.cr0.lt) goto loc_82AD7084;
	// rlwinm r29,r30,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_82AD7028:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD705C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ad7098
	if (ctx.cr0.eq) goto loc_82AD7098;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// bge 0x82ad7028
	if (!ctx.cr0.lt) goto loc_82AD7028;
loc_82AD7084:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82AD7088:
	// stb r11,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r11.u8);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de904
	__restgprlr_23(ctx, base);
	return;
loc_82AD7098:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82ad7088
	goto loc_82AD7088;
}

__attribute__((alias("__imp__sub_82AD70A0"))) PPC_WEAK_FUNC(sub_82AD70A0);
PPC_FUNC_IMPL(__imp__sub_82AD70A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x82AD70A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82ad7124
	if (ctx.cr0.lt) goto loc_82AD7124;
	// rlwinm r29,r30,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_82AD70D0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD70FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ad7138
	if (ctx.cr0.eq) goto loc_82AD7138;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// bge 0x82ad70d0
	if (!ctx.cr0.lt) goto loc_82AD70D0;
loc_82AD7124:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82AD7128:
	// stb r11,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r11.u8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
loc_82AD7138:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82ad7128
	goto loc_82AD7128;
}

__attribute__((alias("__imp__sub_82AD7140"))) PPC_WEAK_FUNC(sub_82AD7140);
PPC_FUNC_IMPL(__imp__sub_82AD7140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x82AD7148;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82ad71bc
	if (ctx.cr0.lt) goto loc_82AD71BC;
	// rlwinm r29,r30,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_82AD716C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD7194;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ad71d0
	if (ctx.cr0.eq) goto loc_82AD71D0;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// bge 0x82ad716c
	if (!ctx.cr0.lt) goto loc_82AD716C;
loc_82AD71BC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82AD71C0:
	// stb r11,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r11.u8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_82AD71D0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82ad71c0
	goto loc_82AD71C0;
}

__attribute__((alias("__imp__sub_82AD71D8"))) PPC_WEAK_FUNC(sub_82AD71D8);
PPC_FUNC_IMPL(__imp__sub_82AD71D8) {
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
	// bl 0x825bf940
	ctx.lr = 0x82AD71F0;
	sub_825BF940(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// addi r11,r11,6128
	ctx.r11.s64 = ctx.r11.s64 + 6128;
	// addi r10,r10,6120
	ctx.r10.s64 = ctx.r10.s64 + 6120;
	// addi r9,r9,6112
	ctx.r9.s64 = ctx.r9.s64 + 6112;
	// addi r8,r8,6104
	ctx.r8.s64 = ctx.r8.s64 + 6104;
	// addi r7,r7,6096
	ctx.r7.s64 = ctx.r7.s64 + 6096;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82AD7248"))) PPC_WEAK_FUNC(sub_82AD7248);
PPC_FUNC_IMPL(__imp__sub_82AD7248) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82ad7370
	sub_82AD7370(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD7250"))) PPC_WEAK_FUNC(sub_82AD7250);
PPC_FUNC_IMPL(__imp__sub_82AD7250) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-20
	ctx.r3.s64 = ctx.r3.s64 + -20;
	// b 0x82ad7370
	sub_82AD7370(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD7258"))) PPC_WEAK_FUNC(sub_82AD7258);
PPC_FUNC_IMPL(__imp__sub_82AD7258) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82ad7370
	sub_82AD7370(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD7260"))) PPC_WEAK_FUNC(sub_82AD7260);
PPC_FUNC_IMPL(__imp__sub_82AD7260) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// b 0x82ad7370
	sub_82AD7370(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD7268"))) PPC_WEAK_FUNC(sub_82AD7268);
PPC_FUNC_IMPL(__imp__sub_82AD7268) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82ad71d8
	sub_82AD71D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD7278"))) PPC_WEAK_FUNC(sub_82AD7278);
PPC_FUNC_IMPL(__imp__sub_82AD7278) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD7280"))) PPC_WEAK_FUNC(sub_82AD7280);
PPC_FUNC_IMPL(__imp__sub_82AD7280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82AD7288;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,6128
	ctx.r11.s64 = ctx.r11.s64 + 6128;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// addi r10,r10,6120
	ctx.r10.s64 = ctx.r10.s64 + 6120;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r9,r9,6112
	ctx.r9.s64 = ctx.r9.s64 + 6112;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r8,r8,6104
	ctx.r8.s64 = ctx.r8.s64 + 6104;
	// addi r7,r7,6096
	ctx.r7.s64 = ctx.r7.s64 + 6096;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// ble 0x82ad7330
	if (!ctx.cr0.gt) goto loc_82AD7330;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82AD72E0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ad731c
	if (ctx.cr0.eq) goto loc_82AD731C;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// bne 0x82ad731c
	if (!ctx.cr0.eq) goto loc_82AD731C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD731C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD731C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82ad72e0
	if (ctx.cr6.lt) goto loc_82AD72E0;
loc_82AD7330:
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm. r11,r30,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ad7360
	if (!ctx.cr0.eq) goto loc_82AD7360;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r28,20
	ctx.r28.s64 = 20;
	// lwz r3,12944(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12944);
	// bl 0x82aea80c
	ctx.lr = 0x82AD7350;
	__imp__KeTlsGetValue(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x828280f8
	ctx.lr = 0x82AD7360;
	sub_828280F8(ctx, base);
loc_82AD7360:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825bf8c0
	ctx.lr = 0x82AD7368;
	sub_825BF8C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD7370"))) PPC_WEAK_FUNC(sub_82AD7370);
PPC_FUNC_IMPL(__imp__sub_82AD7370) {
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
	// bl 0x82ad7280
	ctx.lr = 0x82AD7390;
	sub_82AD7280(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ad73bc
	if (ctx.cr0.eq) goto loc_82AD73BC;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// li r6,36
	ctx.r6.s64 = 36;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,12940(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12940);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD73BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD73BC:
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

__attribute__((alias("__imp__sub_82AD73D8"))) PPC_WEAK_FUNC(sub_82AD73D8);
PPC_FUNC_IMPL(__imp__sub_82AD73D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,19
	ctx.r3.s64 = 19;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD73E0"))) PPC_WEAK_FUNC(sub_82AD73E0);
PPC_FUNC_IMPL(__imp__sub_82AD73E0) {
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
	// lfs f0,20(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,6168
	ctx.r11.s64 = ctx.r11.s64 + 6168;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD7434;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82AD7458"))) PPC_WEAK_FUNC(sub_82AD7458);
PPC_FUNC_IMPL(__imp__sub_82AD7458) {
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
	// addi r11,r11,7000
	ctx.r11.s64 = ctx.r11.s64 + 7000;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82ad7484
	if (ctx.cr0.eq) goto loc_82AD7484;
	// bl 0x82186190
	ctx.lr = 0x82AD7484;
	sub_82186190(ctx, base);
loc_82AD7484:
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

__attribute__((alias("__imp__sub_82AD74A0"))) PPC_WEAK_FUNC(sub_82AD74A0);
PPC_FUNC_IMPL(__imp__sub_82AD74A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82AD74A8;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826dfb88
	ctx.lr = 0x82AD74B0;
	__savefpr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD74DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f13,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// lfs f29,3548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f29.f64 = double(temp.f32);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// bge cr6,0x82ad759c
	if (!ctx.cr6.lt) goto loc_82AD759C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82ad756c
	if (!ctx.cr6.gt) goto loc_82AD756C;
loc_82AD7510:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82ad755c
	if (!ctx.cr6.gt) goto loc_82AD755C;
loc_82AD7520:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD753C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fsubs f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// fsubs f13,f30,f1
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f1.f64));
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// fsel f31,f0,f1,f31
	ctx.f31.f64 = ctx.f0.f64 >= 0.0 ? ctx.f1.f64 : ctx.f31.f64;
	// fsel f30,f13,f30,f1
	ctx.f30.f64 = ctx.f13.f64 >= 0.0 ? ctx.f30.f64 : ctx.f1.f64;
	// blt cr6,0x82ad7520
	if (ctx.cr6.lt) goto loc_82AD7520;
loc_82AD755C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82ad7510
	if (ctx.cr6.lt) goto loc_82AD7510;
loc_82AD756C:
	// lfs f13,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsel f0,f12,f13,f0
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// fsel f13,f12,f11,f13
	ctx.f13.f64 = ctx.f12.f64 >= 0.0 ? ctx.f11.f64 : ctx.f13.f64;
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmuls f13,f12,f29
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
loc_82AD759C:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stfs f29,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r8,r31,80
	ctx.r8.s64 = ctx.r31.s64 + 80;
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lvlx v0,0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v13,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// vmulfp128 v0,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// stfs f0,100(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82abab20
	ctx.lr = 0x82AD75F8;
	sub_82ABAB20(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826dfbd4
	ctx.lr = 0x82AD7604;
	__restfpr_28(ctx, base);
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD7608"))) PPC_WEAK_FUNC(sub_82AD7608);
PPC_FUNC_IMPL(__imp__sub_82AD7608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,20(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,1
	ctx.r10.s64 = 1;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,16(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// lfs f0,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stb r10,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD7648"))) PPC_WEAK_FUNC(sub_82AD7648);
PPC_FUNC_IMPL(__imp__sub_82AD7648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de894
	ctx.lr = 0x82AD7650;
	__savegprlr_15(ctx, base);
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x826dfb68
	ctx.lr = 0x82AD7658;
	__savefpr_20(ctx, base);
	// li r12,-272
	ctx.r12.s64 = -272;
	// stvx128 v126,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,-256
	ctx.r12.s64 = -256;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,12948
	ctx.r30.s64 = ctx.r11.s64 + 12948;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// mr r17,r6
	ctx.r17.u64 = ctx.r6.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82aea80c
	ctx.lr = 0x82AD768C;
	__imp__KeTlsGetValue(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82aea80c
	ctx.lr = 0x82AD7698;
	__imp__KeTlsGetValue(ctx, base);
	// subfc r11,r3,r31
	ctx.xer.ca = ctx.r31.u32 >= ctx.r3.u32;
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ad76e0
	if (ctx.cr0.eq) goto loc_82AD76E0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82aea80c
	ctx.lr = 0x82AD76C0;
	__imp__KeTlsGetValue(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,6176
	ctx.r11.s64 = ctx.r11.s64 + 6176;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82aea81c
	ctx.lr = 0x82AD76E0;
	__imp__KeTlsSetValue(ctx, base);
loc_82AD76E0:
	// addi r10,r29,64
	ctx.r10.s64 = ctx.r29.s64 + 64;
	// lvx128 v13,r0,r28
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r16,r29,48
	ctx.r16.s64 = ctx.r29.s64 + 48;
	// addi r11,r11,5056
	ctx.r11.s64 = ctx.r11.s64 + 5056;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lvx128 v11,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// vaddfp v11,v13,v11
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v11.f32)));
	// lwz r9,40(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// lvx128 v0,r0,r16
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r16.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r28,16
	ctx.r11.s64 = ctx.r28.s64 + 16;
	// vmulfp128 v13,v13,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v10,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// vmulfp128 v10,v10,v0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v11,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stvx v10,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// vaddfp v0,v0,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r10,200(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r10,r10,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFF;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AD776C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lfs f20,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f20.f64 = double(temp.f32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lfs f24,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f24.f64 = double(temp.f32);
	// lfs f30,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f30.f64 = double(temp.f32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lfs f29,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f29.f64 = double(temp.f32);
	// lfs f10,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lfs f28,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f28.f64 = double(temp.f32);
	// stfs f20,124(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stfs f24,156(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82ad77b4
	if (!ctx.cr0.eq) goto loc_82AD77B4;
	// fadds f25,f30,f29
	ctx.f25.f64 = double(float(ctx.f30.f64 + ctx.f29.f64));
	// fadds f0,f10,f28
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f28.f64));
	// b 0x82ad77bc
	goto loc_82AD77BC;
loc_82AD77B4:
	// fsubs f25,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = double(float(ctx.f29.f64 - ctx.f30.f64));
	// fsubs f0,f10,f28
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f28.f64));
loc_82AD77BC:
	// lis r26,-32244
	ctx.r26.s64 = -2113142784;
	// stfs f0,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// stfs f25,116(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f27,6164(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 6164);
	ctx.f27.f64 = double(temp.f32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lfs f21,14088(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 14088);
	ctx.f21.f64 = double(temp.f32);
	// lfs f23,3544(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3544);
	ctx.f23.f64 = double(temp.f32);
	// lfs f11,23664(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23664);
	ctx.f11.f64 = double(temp.f32);
loc_82AD77EC:
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// lfsx f12,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f0,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// stfsx f13,r11,r8
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x82ad7830
	if (!ctx.cr6.lt) goto loc_82AD7830;
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// addi r9,r1,280
	ctx.r9.s64 = ctx.r1.s64 + 280;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stfsx f23,r11,r10
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// stwx r7,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u32);
	// stfsx f27,r11,r8
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// b 0x82ad78a8
	goto loc_82AD78A8;
loc_82AD7830:
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// fdivs f13,f21,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f21.f64 / ctx.f0.f64));
	// fcmpu cr6,f0,f23
	ctx.cr6.compare(ctx.f0.f64, ctx.f23.f64);
	// stfsx f13,r11,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// bge cr6,0x82ad785c
	if (!ctx.cr6.lt) goto loc_82AD785C;
	// addi r10,r1,280
	ctx.r10.s64 = ctx.r1.s64 + 280;
	// fneg f0,f13
	ctx.f0.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// addi r9,r1,304
	ctx.r9.s64 = ctx.r1.s64 + 304;
	// stwx r7,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u32);
	// stfsx f0,r11,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// b 0x82ad7880
	goto loc_82AD7880;
loc_82AD785C:
	// addi r9,r1,280
	ctx.r9.s64 = ctx.r1.s64 + 280;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,304
	ctx.r8.s64 = ctx.r1.s64 + 304;
	// stwx r6,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r6.u32);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stfsx f13,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_82AD7880:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lwax r10,r11,r10
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32));
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfsx f0,r11,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
loc_82AD78A8:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// blt cr6,0x82ad77ec
	if (ctx.cr6.lt) goto loc_82AD77EC;
	// lfs f13,304(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// lfs f31,312(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	ctx.f31.f64 = double(temp.f32);
	// fadds f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// fcmpu cr6,f0,f23
	ctx.cr6.compare(ctx.f0.f64, ctx.f23.f64);
	// beq cr6,0x82ad82d0
	if (ctx.cr6.eq) goto loc_82AD82D0;
	// lfs f26,308(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	ctx.f26.f64 = double(temp.f32);
	// fadds f0,f26,f13
	ctx.f0.f64 = double(float(ctx.f26.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f23
	ctx.cr6.compare(ctx.f0.f64, ctx.f23.f64);
	// beq cr6,0x82ad82d0
	if (ctx.cr6.eq) goto loc_82AD82D0;
	// fadds f0,f26,f31
	ctx.f0.f64 = double(float(ctx.f26.f64 + ctx.f31.f64));
	// fcmpu cr6,f0,f23
	ctx.cr6.compare(ctx.f0.f64, ctx.f23.f64);
	// beq cr6,0x82ad82d0
	if (ctx.cr6.eq) goto loc_82AD82D0;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// lwz r20,280(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// lfs f22,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f22.f64 = double(temp.f32);
	// lwz r19,288(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r18,r11,24608
	ctx.r18.s64 = ctx.r11.s64 + 24608;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v127,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v126,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ble cr6,0x82ad7950
	if (!ctx.cr6.gt) goto loc_82AD7950;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt cr6,0x82ad7a50
	if (ctx.cr6.gt) goto loc_82AD7A50;
	// fcmpu cr6,f10,f23
	ctx.cr6.compare(ctx.f10.f64, ctx.f23.f64);
	// blt cr6,0x82ad85a4
	if (ctx.cr6.lt) goto loc_82AD85A4;
	// fmuls f0,f13,f29
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// li r31,1
	ctx.r31.s64 = 1;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x82ad798c
	goto loc_82AD798C;
loc_82AD7950:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82ad7a50
	if (!ctx.cr6.gt) goto loc_82AD7A50;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bgt cr6,0x82ad85a4
	if (ctx.cr6.gt) goto loc_82AD85A4;
	// fsubs f0,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_82AD798C:
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// fadds f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,272(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f1,f0,f22
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f22.f64));
	// lvx128 v13,r0,r18
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r18.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vsubfp v13,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v13,v13,v127
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v127.f32)));
	// vmaddfp128 v13,v0,v126,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v126.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8282cd90
	ctx.lr = 0x82AD79CC;
	sub_8282CD90(ctx, base);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mullw r11,r3,r19
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r19.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,264(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82ad7a10
	goto loc_82AD7A10;
loc_82AD79F8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
loc_82AD7A10:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82ad79f8
	if (!ctx.cr6.lt) goto loc_82AD79F8;
	// srawi r10,r19,1
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r19.s32 >> 1;
	// lfs f13,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f13.f64 = double(temp.f32);
	// lfs f27,6164(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 6164);
	ctx.f27.f64 = double(temp.f32);
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// b 0x82ad7a54
	goto loc_82AD7A54;
loc_82AD7A50:
	// lwz r28,104(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_82AD7A54:
	// lfs f24,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f24.f64 = double(temp.f32);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x82ad7a80
	if (!ctx.cr6.gt) goto loc_82AD7A80;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bgt cr6,0x82ad7b78
	if (ctx.cr6.gt) goto loc_82AD7B78;
	// fcmpu cr6,f28,f23
	ctx.cr6.compare(ctx.f28.f64, ctx.f23.f64);
	// blt cr6,0x82ad85a4
	if (ctx.cr6.lt) goto loc_82AD85A4;
	// fmuls f0,f31,f30
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f30.f64));
	// li r28,1
	ctx.r28.s64 = 1;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x82ad7abc
	goto loc_82AD7ABC;
loc_82AD7A80:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82ad7b78
	if (!ctx.cr6.gt) goto loc_82AD7B78;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f28,f0
	ctx.cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// bgt cr6,0x82ad85a4
	if (ctx.cr6.gt) goto loc_82AD85A4;
	// fsubs f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
loc_82AD7ABC:
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// fadds f13,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,240(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f1,f0,f24
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f24.f64));
	// lvx128 v13,r0,r18
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r18.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vsubfp v13,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v13,v13,v127
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v127.f32)));
	// vmaddfp128 v13,v0,v126,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v126.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8282cd90
	ctx.lr = 0x82AD7AFC;
	sub_8282CD90(ctx, base);
	// mullw r11,r3,r20
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r20.s32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82ad7b3c
	goto loc_82AD7B3C;
loc_82AD7B24:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
loc_82AD7B3C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82ad7b24
	if (!ctx.cr6.lt) goto loc_82AD7B24;
	// srawi r10,r20,1
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r20.s32 >> 1;
	// lfs f13,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// lfs f27,6164(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 6164);
	ctx.f27.f64 = double(temp.f32);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
loc_82AD7B78:
	// lwz r6,12(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplw cr6,r31,r6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82ad85a4
	if (!ctx.cr6.lt) goto loc_82AD85A4;
	// subf r11,r20,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r20.s64;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82ad85a4
	if (!ctx.cr6.lt) goto loc_82AD85A4;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// xor r10,r19,r20
	ctx.r10.u64 = ctx.r19.u64 ^ ctx.r20.u64;
	// fcmpu cr6,f26,f23
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f26.f64, ctx.f23.f64);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// bne cr6,0x82ad7bd0
	if (!ctx.cr6.eq) goto loc_82AD7BD0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82AD7BD0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r21,2
	ctx.r21.s64 = 2;
	// add r11,r28,r31
	ctx.r11.u64 = ctx.r28.u64 + ctx.r31.u64;
	// beq 0x82ad7be4
	if (ctx.cr0.eq) goto loc_82AD7BE4;
	// subf r11,r28,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r28.s64;
loc_82AD7BE4:
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lfs f13,260(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r22,r10,1
	ctx.r22.u64 = ctx.r10.u64 ^ 1;
	// lwz r10,284(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// cmplwi r22,0
	ctx.cr0.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// beq 0x82ad7c3c
	if (ctx.cr0.eq) goto loc_82AD7C3C;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f21
	ctx.cr6.compare(ctx.f0.f64, ctx.f21.f64);
	// ble cr6,0x82ad7c34
	if (!ctx.cr6.gt) goto loc_82AD7C34;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x82ad7c64
	goto loc_82AD7C64;
loc_82AD7C34:
	// li r21,0
	ctx.r21.s64 = 0;
	// b 0x82ad7c68
	goto loc_82AD7C68;
loc_82AD7C3C:
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f23
	ctx.cr6.compare(ctx.f0.f64, ctx.f23.f64);
	// ble cr6,0x82ad7c68
	if (!ctx.cr6.gt) goto loc_82AD7C68;
	// li r21,0
	ctx.r21.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82AD7C64:
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_82AD7C68:
	// fcmpu cr6,f26,f23
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f26.f64, ctx.f23.f64);
	// beq cr6,0x82ad7cac
	if (ctx.cr6.eq) goto loc_82AD7CAC;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// std r10,352(r1)
	PPC_STORE_U64(ctx.r1.u32 + 352, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,352(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 352);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f25.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// b 0x82ad7cb0
	goto loc_82AD7CB0;
loc_82AD7CAC:
	// stfs f27,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
loc_82AD7CB0:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,-6904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -6904);
	ctx.f13.f64 = double(temp.f32);
loc_82AD7CBC:
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f23
	ctx.cr6.compare(ctx.f0.f64, ctx.f23.f64);
	// bne cr6,0x82ad7cd8
	if (!ctx.cr6.eq) goto loc_82AD7CD8;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stfsx f13,r11,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// b 0x82ad7cec
	goto loc_82AD7CEC;
loc_82AD7CD8:
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lfsx f12,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfsx f0,r11,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
loc_82AD7CEC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// blt cr6,0x82ad7cbc
	if (ctx.cr6.lt) goto loc_82AD7CBC;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82ad7d1c
	if (ctx.cr6.eq) goto loc_82AD7D1C;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x82ad7d3c
	if (ctx.cr6.eq) goto loc_82AD7D3C;
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82ad7d68
	if (!ctx.cr6.gt) goto loc_82AD7D68;
	// b 0x82ad7d4c
	goto loc_82AD7D4C;
loc_82AD7D1C:
	// fcmpu cr6,f24,f22
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f24.f64, ctx.f22.f64);
	// bge cr6,0x82ad7d44
	if (!ctx.cr6.lt) goto loc_82AD7D44;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne cr6,0x82ad7d68
	if (!ctx.cr6.eq) goto loc_82AD7D68;
	// lfs f0,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82ad7d4c
	if (ctx.cr6.gt) goto loc_82AD7D4C;
loc_82AD7D3C:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82ad7d6c
	goto loc_82AD7D6C;
loc_82AD7D44:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x82ad7d54
	if (ctx.cr6.eq) goto loc_82AD7D54;
loc_82AD7D4C:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82ad7d6c
	goto loc_82AD7D6C;
loc_82AD7D54:
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82ad7d6c
	if (ctx.cr6.gt) goto loc_82AD7D6C;
loc_82AD7D68:
	// li r10,2
	ctx.r10.s64 = 2;
loc_82AD7D6C:
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f26,f23
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f23.f64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lfs f28,5424(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5424);
	ctx.f28.f64 = double(temp.f32);
	// addi r7,r1,280
	ctx.r7.s64 = ctx.r1.s64 + 280;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// lfsx f13,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// lwzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lfsx f0,r11,r5
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfsx f0,r11,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// subf r10,r10,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r10.s64;
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// lwz r27,96(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r27,r6
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82ad85a4
	if (!ctx.cr6.lt) goto loc_82AD85A4;
loc_82AD7DBC:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r31,104(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ad85a4
	if (!ctx.cr6.lt) goto loc_82AD85A4;
	// lfs f0,4(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f28,f0
	ctx.cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// bgt cr6,0x82ad85a4
	if (ctx.cr6.gt) goto loc_82AD85A4;
	// rlwinm r24,r26,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v13,r0,r18
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r18.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r23,r1,128
	ctx.r23.s64 = ctx.r1.s64 + 128;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// subf r25,r20,r27
	ctx.r25.s64 = ctx.r27.s64 - ctx.r20.s64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lfsx f25,r24,r23
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r23.u32);
	ctx.f25.f64 = double(temp.f32);
	// stfs f25,176(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,368
	ctx.r11.s64 = ctx.r1.s64 + 368;
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vsubfp v13,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v13,v13,v127
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v127.f32)));
	// vmaddfp128 v13,v0,v126,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v126.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne cr6,0x82ad7e70
	if (!ctx.cr6.eq) goto loc_82AD7E70;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r5,r19,r31
	ctx.r5.s64 = ctx.r31.s64 - ctx.r19.s64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD7E3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD7E5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// lfs f12,376(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	ctx.f12.f64 = double(temp.f32);
	// std r11,352(r1)
	PPC_STORE_U64(ctx.r1.u32 + 352, ctx.r11.u64);
	// lfd f0,352(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 352);
	// b 0x82ad7ec4
	goto loc_82AD7EC4;
loc_82AD7E70:
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// bne cr6,0x82ad7ee0
	if (!ctx.cr6.eq) goto loc_82AD7EE0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD7E94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD7EB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r11,r27
	ctx.r11.s64 = ctx.r27.s32;
	// lfs f12,368(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	ctx.f12.f64 = double(temp.f32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
loc_82AD7EC4:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// fsubs f13,f31,f1
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fmadds f12,f13,f0,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f1.f64));
	// b 0x82ad7f58
	goto loc_82AD7F58;
loc_82AD7EE0:
	// extsw r11,r27
	ctx.r11.s64 = ctx.r27.s32;
	// lfs f13,368(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	ctx.f13.f64 = double(temp.f32);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// std r11,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r11.u64);
	// lfd f0,256(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fabs f30,f0
	ctx.f30.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// beq cr6,0x82ad7f14
	if (ctx.cr6.eq) goto loc_82AD7F14;
	// subf r28,r19,r31
	ctx.r28.s64 = ctx.r31.s64 - ctx.r19.s64;
	// b 0x82ad7f18
	goto loc_82AD7F18;
loc_82AD7F14:
	// subf r5,r19,r31
	ctx.r5.s64 = ctx.r31.s64 - ctx.r19.s64;
loc_82AD7F18:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD7F30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD7F50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fsubs f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// fmadds f12,f0,f30,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f1.f64));
loc_82AD7F58:
	// lfs f10,380(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f10,f12
	ctx.cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// bge cr6,0x82ad8210
	if (!ctx.cr6.lt) goto loc_82AD8210;
	// fcmpu cr6,f26,f27
	ctx.cr6.compare(ctx.f26.f64, ctx.f27.f64);
	// blt cr6,0x82ad8210
	if (ctx.cr6.lt) goto loc_82AD8210;
	// fsubs f11,f10,f12
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fcmpu cr6,f28,f23
	ctx.cr6.compare(ctx.f28.f64, ctx.f23.f64);
	// blt cr6,0x82ad7f94
	if (ctx.cr6.lt) goto loc_82AD7F94;
	// fsubs f13,f26,f27
	ctx.f13.f64 = double(float(ctx.f26.f64 - ctx.f27.f64));
	// fsubs f9,f0,f28
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// fsubs f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fdivs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// fmadds f29,f9,f13,f28
	ctx.f29.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f28.f64));
	// b 0x82ad7fc0
	goto loc_82AD7FC0;
loc_82AD7F94:
	// fsubs f13,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fsubs f9,f21,f13
	ctx.f9.f64 = double(float(ctx.f21.f64 - ctx.f13.f64));
	// fmuls f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// fmadds f13,f9,f12,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fsubs f13,f20,f13
	ctx.f13.f64 = double(float(ctx.f20.f64 - ctx.f13.f64));
	// fcmpu cr6,f13,f23
	ctx.cr6.compare(ctx.f13.f64, ctx.f23.f64);
	// blt cr6,0x82ad8210
	if (ctx.cr6.lt) goto loc_82AD8210;
	// fsubs f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fdivs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// fmuls f29,f13,f0
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82AD7FC0:
	// lfs f13,4(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmr f27,f12
	ctx.f27.f64 = ctx.f12.f64;
	// fmr f26,f10
	ctx.f26.f64 = ctx.f10.f64;
	// fmr f28,f0
	ctx.f28.f64 = ctx.f0.f64;
	// fcmpu cr6,f29,f13
	ctx.cr6.compare(ctx.f29.f64, ctx.f13.f64);
	// bgt cr6,0x82ad85a4
	if (ctx.cr6.gt) goto loc_82AD85A4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r28,r19,r31
	ctx.r28.s64 = ctx.r31.s64 - ctx.r19.s64;
	// stfs f21,340(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// stfs f23,332(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stfs f21,324(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// beq cr6,0x82ad807c
	if (ctx.cr6.eq) goto loc_82AD807C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD800C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD802C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// bne cr6,0x82ad805c
	if (!ctx.cr6.eq) goto loc_82AD805C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD8054;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fsubs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// b 0x82ad8108
	goto loc_82AD8108;
loc_82AD805C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD806C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fsubs f0,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f1.f64));
loc_82AD8070:
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// fsubs f13,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// b 0x82ad8110
	goto loc_82AD8110;
loc_82AD807C:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD8088;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD80A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82ad80e8
	if (ctx.cr6.eq) goto loc_82AD80E8;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// bne cr6,0x82ad80c4
	if (!ctx.cr6.eq) goto loc_82AD80C4;
	// fcmpu cr6,f24,f22
	ctx.cr6.compare(ctx.f24.f64, ctx.f22.f64);
	// blt cr6,0x82ad80e8
	if (ctx.cr6.lt) goto loc_82AD80E8;
loc_82AD80C4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD80E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fsubs f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f30.f64));
	// b 0x82ad8070
	goto loc_82AD8070;
loc_82AD80E8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD8104;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fsubs f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
loc_82AD8108:
	// fsubs f13,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f30.f64));
	// cmpw cr6,r28,r31
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r31.s32, ctx.xer);
loc_82AD8110:
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82ad811c
	if (ctx.cr6.gt) goto loc_82AD811C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AD811C:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// srawi r7,r20,1
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r20.s32 >> 1;
	// srawi r6,r19,1
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r19.s32 >> 1;
	// stfs f29,340(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lvx128 v0,r0,r16
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r16.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r8,0(r17)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// extsw r11,r20
	ctx.r11.s64 = ctx.r20.s32;
	// extsw r10,r19
	ctx.r10.s64 = ctx.r19.s32;
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lfd f12,144(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f11,112(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// subf r10,r6,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r6.s64;
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// subf r11,r7,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r7.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r10,15,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFFFF8000;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// stw r11,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r11.u32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,320(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f0,328(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// vmulfp128 v0,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v13,v0,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f0,f21,f0
	ctx.f0.f64 = double(float(ctx.f21.f64 / ctx.f0.f64));
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// vspltw v13,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AD820C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82ad821c
	goto loc_82AD821C;
loc_82AD8210:
	// fmr f27,f12
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f12.f64;
	// fmr f26,f10
	ctx.f26.f64 = ctx.f10.f64;
	// fmr f28,f0
	ctx.f28.f64 = ctx.f0.f64;
loc_82AD821C:
	// addi r9,r1,304
	ctx.r9.s64 = ctx.r1.s64 + 304;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,280
	ctx.r10.s64 = ctx.r1.s64 + 280;
	// xori r21,r21,2
	ctx.r21.u64 = ctx.r21.u64 ^ 2;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// lfsx f0,r24,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// lwzx r9,r24,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// fadds f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f25.f64));
	// lwzx r10,r24,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	// stfsx f0,r24,r23
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + ctx.r23.u32, temp.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r10,r24,r11
	PPC_STORE_U32(ctx.r24.u32 + ctx.r11.u32, ctx.r10.u32);
	// beq cr6,0x82ad826c
	if (ctx.cr6.eq) goto loc_82AD826C;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x82ad828c
	if (ctx.cr6.eq) goto loc_82AD828C;
	// lfs f0,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82ad82b8
	if (!ctx.cr6.lt) goto loc_82AD82B8;
	// b 0x82ad829c
	goto loc_82AD829C;
loc_82AD826C:
	// fcmpu cr6,f24,f22
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f24.f64, ctx.f22.f64);
	// bge cr6,0x82ad8294
	if (!ctx.cr6.lt) goto loc_82AD8294;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne cr6,0x82ad82b8
	if (!ctx.cr6.eq) goto loc_82AD82B8;
	// lfs f0,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82ad829c
	if (ctx.cr6.lt) goto loc_82AD829C;
loc_82AD828C:
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x82ad82bc
	goto loc_82AD82BC;
loc_82AD8294:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x82ad82a4
	if (ctx.cr6.eq) goto loc_82AD82A4;
loc_82AD829C:
	// li r26,0
	ctx.r26.s64 = 0;
	// b 0x82ad82bc
	goto loc_82AD82BC;
loc_82AD82A4:
	// lfs f0,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// li r26,1
	ctx.r26.s64 = 1;
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82ad82bc
	if (ctx.cr6.lt) goto loc_82AD82BC;
loc_82AD82B8:
	// li r26,2
	ctx.r26.s64 = 2;
loc_82AD82BC:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r27,96(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ad7dbc
	if (ctx.cr6.lt) goto loc_82AD7DBC;
	// b 0x82ad85a4
	goto loc_82AD85A4;
loc_82AD82D0:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ad85a4
	if (!ctx.cr6.lt) goto loc_82AD85A4;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r31,104(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ad85a4
	if (!ctx.cr6.lt) goto loc_82AD85A4;
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// stfs f21,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// extsw r10,r28
	ctx.r10.s64 = ctx.r28.s32;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfd f13,144(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// stfs f21,228(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// lwz r11,40(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f31,f30,f0
	ctx.f31.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// fsubs f30,f29,f13
	ctx.f30.f64 = double(float(ctx.f29.f64 - ctx.f13.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD835C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// beq 0x82ad8430
	if (ctx.cr0.eq) goto loc_82AD8430;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD8394;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 1;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// addi r26,r28,1
	ctx.r26.s64 = ctx.r28.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD83BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// ble cr6,0x82ad8404
	if (!ctx.cr6.gt) goto loc_82AD8404;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD83E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fsubs f13,f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f28.f64 - ctx.f1.f64));
	// fsubs f0,f1,f29
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f29.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fmuls f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fmadds f0,f0,f30,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f12.f64));
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// b 0x82ad84e4
	goto loc_82AD84E4;
loc_82AD8404:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD8414;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fsubs f13,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f29.f64));
	// fsubs f0,f28,f1
	ctx.f0.f64 = double(float(ctx.f28.f64 - ctx.f1.f64));
	// fmuls f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fmadds f0,f0,f30,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f12.f64));
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// b 0x82ad84e0
	goto loc_82AD84E0;
loc_82AD8430:
	// addi r27,r28,1
	ctx.r27.s64 = ctx.r28.s64 + 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD8440;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r26,r31,1
	ctx.r26.s64 = ctx.r31.s64 + 1;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD8464;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fadds f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// fmr f28,f1
	ctx.f28.f64 = ctx.f1.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// fcmpu cr6,f0,f21
	ctx.cr6.compare(ctx.f0.f64, ctx.f21.f64);
	// ble cr6,0x82ad84b8
	if (!ctx.cr6.gt) goto loc_82AD84B8;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD8490;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fsubs f13,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f29.f64));
	// fsubs f0,f1,f28
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f28.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fsubs f12,f30,f21
	ctx.f12.f64 = double(float(ctx.f30.f64 - ctx.f21.f64));
	// fmuls f11,f13,f31
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fneg f10,f0
	ctx.f10.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f10,208(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// fmadds f0,f12,f0,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// b 0x82ad84e8
	goto loc_82AD84E8;
loc_82AD84B8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD84C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fsubs f13,f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f28.f64 - ctx.f1.f64));
	// fsubs f0,f29,f1
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f1.f64));
	// fmuls f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fmadds f0,f0,f30,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f12.f64));
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
loc_82AD84E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AD84E4:
	// stfs f11,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
loc_82AD84E8:
	// fneg f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f13,216(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// fsubs f13,f20,f0
	ctx.f13.f64 = double(float(ctx.f20.f64 - ctx.f0.f64));
	// fsubs f0,f24,f0
	ctx.f0.f64 = double(float(ctx.f24.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82ad85a4
	if (ctx.cr6.gt) goto loc_82AD85A4;
	// fcmpu cr6,f13,f23
	ctx.cr6.compare(ctx.f13.f64, ctx.f23.f64);
	// blt cr6,0x82ad85a4
	if (ctx.cr6.lt) goto loc_82AD85A4;
	// fcmpu cr6,f0,f23
	ctx.cr6.compare(ctx.f0.f64, ctx.f23.f64);
	// bge cr6,0x82ad85a4
	if (!ctx.cr6.lt) goto loc_82AD85A4;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,4(r17)
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82ad85a4
	if (!ctx.cr6.lt) goto loc_82AD85A4;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lvx128 v13,r0,r16
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r16.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,0(r17)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r10,r31,15,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 15) & 0xFFFF8000;
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stfs f0,228(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f0,f21,f0
	ctx.f0.f64 = double(float(ctx.f21.f64 / ctx.f0.f64));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// vspltw v13,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AD85A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD85A4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82aea80c
	ctx.lr = 0x82AD85AC;
	__imp__KeTlsGetValue(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82aea80c
	ctx.lr = 0x82AD85B8;
	__imp__KeTlsGetValue(ctx, base);
	// subfc r11,r3,r31
	ctx.xer.ca = ctx.r31.u32 >= ctx.r3.u32;
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ad8600
	if (ctx.cr0.eq) goto loc_82AD8600;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82aea80c
	ctx.lr = 0x82AD85E0;
	__imp__KeTlsGetValue(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-13756
	ctx.r11.s64 = ctx.r11.s64 + -13756;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82aea81c
	ctx.lr = 0x82AD8600;
	__imp__KeTlsSetValue(ctx, base);
loc_82AD8600:
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// li r0,-272
	ctx.r0.s64 = -272;
	// lvx128 v126,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r0,-256
	ctx.r0.s64 = -256;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x826dfbb4
	ctx.lr = 0x82AD861C;
	__restfpr_20(ctx, base);
	// b 0x826de8e4
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD8620"))) PPC_WEAK_FUNC(sub_82AD8620);
PPC_FUNC_IMPL(__imp__sub_82AD8620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de890
	ctx.lr = 0x82AD8628;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826dfb60
	ctx.lr = 0x82AD8630;
	__savefpr_18(ctx, base);
	// li r12,-304
	ctx.r12.s64 = -304;
	// stvx128 v126,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,-288
	ctx.r12.s64 = -288;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-736(r1)
	ea = -736 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r14,r6
	ctx.r14.u64 = ctx.r6.u64;
	// addi r9,r1,384
	ctx.r9.s64 = ctx.r1.s64 + 384;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r25,772(r1)
	PPC_STORE_U32(ctx.r1.u32 + 772, ctx.r25.u32);
	// li r11,6
	ctx.r11.s64 = 6;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82AD8664:
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x82ad8664
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AD8664;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,36(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f21,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f21.f64 = double(temp.f32);
	// fcmpu cr6,f13,f21
	ctx.cr6.compare(ctx.f13.f64, ctx.f21.f64);
	// ble cr6,0x82ad8694
	if (!ctx.cr6.gt) goto loc_82AD8694;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82AD8694:
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// lfs f13,388(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f13,388(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 388, temp.u32);
	// addi r31,r11,12948
	ctx.r31.s64 = ctx.r11.s64 + 12948;
	// lfs f13,404(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f18,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f18.f64 = double(temp.f32);
	// stfs f0,404(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 404, temp.u32);
	// li r15,1
	ctx.r15.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82aea80c
	ctx.lr = 0x82AD86C4;
	__imp__KeTlsGetValue(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82aea80c
	ctx.lr = 0x82AD86D0;
	__imp__KeTlsGetValue(ctx, base);
	// subfc r11,r3,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r3.u32;
	ctx.r11.s64 = ctx.r30.s64 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ad8718
	if (ctx.cr0.eq) goto loc_82AD8718;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82aea80c
	ctx.lr = 0x82AD86F8;
	__imp__KeTlsGetValue(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,6176
	ctx.r11.s64 = ctx.r11.s64 + 6176;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82aea81c
	ctx.lr = 0x82AD8718;
	__imp__KeTlsSetValue(ctx, base);
loc_82AD8718:
	// addi r11,r1,384
	ctx.r11.s64 = ctx.r1.s64 + 384;
	// addi r10,r27,64
	ctx.r10.s64 = ctx.r27.s64 + 64;
	// addi r16,r27,48
	ctx.r16.s64 = ctx.r27.s64 + 48;
	// addi r9,r1,400
	ctx.r9.s64 = ctx.r1.s64 + 400;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,5056
	ctx.r11.s64 = ctx.r11.s64 + 5056;
	// vaddfp v11,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v0,r0,r16
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r16.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v13,v13,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v10,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// vmulfp128 v11,v11,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v10,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp v0,v11,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v12.f32)));
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r10,200(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r10,r10,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFF;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AD87A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lfs f19,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f19.f64 = double(temp.f32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lfs f24,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f24.f64 = double(temp.f32);
	// lfs f30,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f30.f64 = double(temp.f32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lfs f29,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f28.f64 = double(temp.f32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lfs f10,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// stfs f19,124(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stfs f24,156(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82ad87f0
	if (!ctx.cr0.eq) goto loc_82AD87F0;
	// fadds f25,f30,f29
	ctx.f25.f64 = double(float(ctx.f30.f64 + ctx.f29.f64));
	// fadds f0,f28,f10
	ctx.f0.f64 = double(float(ctx.f28.f64 + ctx.f10.f64));
	// b 0x82ad87f8
	goto loc_82AD87F8;
loc_82AD87F0:
	// fsubs f25,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = double(float(ctx.f29.f64 - ctx.f30.f64));
	// fsubs f0,f10,f28
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f28.f64));
loc_82AD87F8:
	// lis r26,-32244
	ctx.r26.s64 = -2113142784;
	// stfs f0,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stfs f25,116(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// lfs f27,6164(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 6164);
	ctx.f27.f64 = double(temp.f32);
	// lfs f20,14088(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14088);
	ctx.f20.f64 = double(temp.f32);
	// lfs f11,23664(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23664);
	ctx.f11.f64 = double(temp.f32);
loc_82AD8820:
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// lfsx f12,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f0,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// stfsx f13,r11,r7
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, temp.u32);
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x82ad8864
	if (!ctx.cr6.lt) goto loc_82AD8864;
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// addi r9,r1,280
	ctx.r9.s64 = ctx.r1.s64 + 280;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// stfsx f21,r11,r10
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// stwx r8,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u32);
	// stfsx f27,r11,r7
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, temp.u32);
	// b 0x82ad88d8
	goto loc_82AD88D8;
loc_82AD8864:
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// fdivs f13,f20,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f20.f64 / ctx.f0.f64));
	// fcmpu cr6,f0,f21
	ctx.cr6.compare(ctx.f0.f64, ctx.f21.f64);
	// stfsx f13,r11,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// bge cr6,0x82ad8890
	if (!ctx.cr6.lt) goto loc_82AD8890;
	// addi r10,r1,280
	ctx.r10.s64 = ctx.r1.s64 + 280;
	// fneg f0,f13
	ctx.f0.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// addi r9,r1,304
	ctx.r9.s64 = ctx.r1.s64 + 304;
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// stfsx f0,r11,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// b 0x82ad88b0
	goto loc_82AD88B0;
loc_82AD8890:
	// addi r9,r1,280
	ctx.r9.s64 = ctx.r1.s64 + 280;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,304
	ctx.r7.s64 = ctx.r1.s64 + 304;
	// stwx r15,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r15.u32);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stfsx f13,r11,r7
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, temp.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_82AD88B0:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lwax r10,r11,r10
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32));
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfsx f0,r11,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
loc_82AD88D8:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// blt cr6,0x82ad8820
	if (ctx.cr6.lt) goto loc_82AD8820;
	// lfs f31,312(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	ctx.f31.f64 = double(temp.f32);
	// lfs f13,304(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f31,f13
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f21
	ctx.cr6.compare(ctx.f0.f64, ctx.f21.f64);
	// beq cr6,0x82ad9364
	if (ctx.cr6.eq) goto loc_82AD9364;
	// lfs f26,308(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	ctx.f26.f64 = double(temp.f32);
	// fadds f0,f26,f13
	ctx.f0.f64 = double(float(ctx.f26.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f21
	ctx.cr6.compare(ctx.f0.f64, ctx.f21.f64);
	// beq cr6,0x82ad9364
	if (ctx.cr6.eq) goto loc_82AD9364;
	// fadds f0,f26,f31
	ctx.f0.f64 = double(float(ctx.f26.f64 + ctx.f31.f64));
	// fcmpu cr6,f0,f21
	ctx.cr6.compare(ctx.f0.f64, ctx.f21.f64);
	// beq cr6,0x82ad9364
	if (ctx.cr6.eq) goto loc_82AD9364;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// lwz r19,280(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// lfs f22,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f22.f64 = double(temp.f32);
	// lwz r18,288(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r17,r11,24608
	ctx.r17.s64 = ctx.r11.s64 + 24608;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v127,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v126,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ble cr6,0x82ad8980
	if (!ctx.cr6.gt) goto loc_82AD8980;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bgt cr6,0x82ad8a80
	if (ctx.cr6.gt) goto loc_82AD8A80;
	// fcmpu cr6,f10,f21
	ctx.cr6.compare(ctx.f10.f64, ctx.f21.f64);
	// blt cr6,0x82ad9654
	if (ctx.cr6.lt) goto loc_82AD9654;
	// fmuls f0,f13,f29
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x82ad89bc
	goto loc_82AD89BC;
loc_82AD8980:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82ad8a80
	if (!ctx.cr6.gt) goto loc_82AD8A80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bgt cr6,0x82ad9654
	if (ctx.cr6.gt) goto loc_82AD9654;
	// fsubs f0,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_82AD89BC:
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// fadds f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,272(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f1,f0,f22
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f22.f64));
	// lvx128 v13,r0,r17
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r17.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vsubfp v13,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v13,v13,v127
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v127.f32)));
	// vmaddfp128 v13,v0,v126,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v126.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8282cd90
	ctx.lr = 0x82AD89FC;
	sub_8282CD90(ctx, base);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mullw r11,r3,r18
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r18.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,264(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82ad8a40
	goto loc_82AD8A40;
loc_82AD8A28:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
loc_82AD8A40:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82ad8a28
	if (!ctx.cr6.lt) goto loc_82AD8A28;
	// srawi r10,r18,1
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r18.s32 >> 1;
	// lfs f13,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f13.f64 = double(temp.f32);
	// lfs f27,6164(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 6164);
	ctx.f27.f64 = double(temp.f32);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// b 0x82ad8a84
	goto loc_82AD8A84;
loc_82AD8A80:
	// lwz r29,104(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_82AD8A84:
	// lfs f23,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f23.f64 = double(temp.f32);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// ble cr6,0x82ad8ab0
	if (!ctx.cr6.gt) goto loc_82AD8AB0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bgt cr6,0x82ad8ba8
	if (ctx.cr6.gt) goto loc_82AD8BA8;
	// fcmpu cr6,f28,f21
	ctx.cr6.compare(ctx.f28.f64, ctx.f21.f64);
	// blt cr6,0x82ad9654
	if (ctx.cr6.lt) goto loc_82AD9654;
	// fmuls f0,f31,f30
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f30.f64));
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x82ad8aec
	goto loc_82AD8AEC;
loc_82AD8AB0:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82ad8ba8
	if (!ctx.cr6.gt) goto loc_82AD8BA8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f28,f0
	ctx.cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// bgt cr6,0x82ad9654
	if (ctx.cr6.gt) goto loc_82AD9654;
	// fsubs f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
loc_82AD8AEC:
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// fadds f13,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,240(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f1,f0,f23
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f23.f64));
	// lvx128 v13,r0,r17
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r17.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vsubfp v13,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v13,v13,v127
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v127.f32)));
	// vmaddfp128 v13,v0,v126,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v126.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8282cd90
	ctx.lr = 0x82AD8B2C;
	sub_8282CD90(ctx, base);
	// mullw r11,r3,r19
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r19.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82ad8b6c
	goto loc_82AD8B6C;
loc_82AD8B54:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
loc_82AD8B6C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82ad8b54
	if (!ctx.cr6.lt) goto loc_82AD8B54;
	// srawi r10,r19,1
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r19.s32 >> 1;
	// lfs f13,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// lfs f27,6164(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 6164);
	ctx.f27.f64 = double(temp.f32);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
loc_82AD8BA8:
	// lwz r6,12(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82ad9654
	if (!ctx.cr6.lt) goto loc_82AD9654;
	// subf r11,r19,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r19.s64;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82ad9654
	if (!ctx.cr6.lt) goto loc_82AD9654;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// xor r10,r18,r19
	ctx.r10.u64 = ctx.r18.u64 ^ ctx.r19.u64;
	// fcmpu cr6,f26,f21
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f26.f64, ctx.f21.f64);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// bne cr6,0x82ad8c00
	if (!ctx.cr6.eq) goto loc_82AD8C00;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82AD8C00:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r20,2
	ctx.r20.s64 = 2;
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// beq 0x82ad8c14
	if (ctx.cr0.eq) goto loc_82AD8C14;
	// subf r11,r29,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r29.s64;
loc_82AD8C14:
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lfs f13,260(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r21,r10,1
	ctx.r21.u64 = ctx.r10.u64 ^ 1;
	// lwz r10,284(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// cmplwi r21,0
	ctx.cr0.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// beq 0x82ad8c6c
	if (ctx.cr0.eq) goto loc_82AD8C6C;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f20
	ctx.cr6.compare(ctx.f0.f64, ctx.f20.f64);
	// ble cr6,0x82ad8c64
	if (!ctx.cr6.gt) goto loc_82AD8C64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x82ad8c94
	goto loc_82AD8C94;
loc_82AD8C64:
	// li r20,0
	ctx.r20.s64 = 0;
	// b 0x82ad8c98
	goto loc_82AD8C98;
loc_82AD8C6C:
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f21
	ctx.cr6.compare(ctx.f0.f64, ctx.f21.f64);
	// ble cr6,0x82ad8c98
	if (!ctx.cr6.gt) goto loc_82AD8C98;
	// li r20,0
	ctx.r20.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82AD8C94:
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_82AD8C98:
	// fcmpu cr6,f26,f21
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f26.f64, ctx.f21.f64);
	// beq cr6,0x82ad8cdc
	if (ctx.cr6.eq) goto loc_82AD8CDC;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// std r10,368(r1)
	PPC_STORE_U64(ctx.r1.u32 + 368, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,368(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 368);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f25.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// b 0x82ad8ce0
	goto loc_82AD8CE0;
loc_82AD8CDC:
	// stfs f27,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
loc_82AD8CE0:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,-6904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -6904);
	ctx.f13.f64 = double(temp.f32);
loc_82AD8CEC:
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f21
	ctx.cr6.compare(ctx.f0.f64, ctx.f21.f64);
	// bne cr6,0x82ad8d08
	if (!ctx.cr6.eq) goto loc_82AD8D08;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stfsx f13,r11,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// b 0x82ad8d1c
	goto loc_82AD8D1C;
loc_82AD8D08:
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lfsx f12,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfsx f0,r11,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
loc_82AD8D1C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// blt cr6,0x82ad8cec
	if (ctx.cr6.lt) goto loc_82AD8CEC;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82ad8d4c
	if (ctx.cr6.eq) goto loc_82AD8D4C;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x82ad8d6c
	if (ctx.cr6.eq) goto loc_82AD8D6C;
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82ad8d98
	if (!ctx.cr6.gt) goto loc_82AD8D98;
	// b 0x82ad8d7c
	goto loc_82AD8D7C;
loc_82AD8D4C:
	// fcmpu cr6,f23,f22
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f23.f64, ctx.f22.f64);
	// bge cr6,0x82ad8d74
	if (!ctx.cr6.lt) goto loc_82AD8D74;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x82ad8d98
	if (!ctx.cr6.eq) goto loc_82AD8D98;
	// lfs f0,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82ad8d7c
	if (ctx.cr6.gt) goto loc_82AD8D7C;
loc_82AD8D6C:
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
	// b 0x82ad8d9c
	goto loc_82AD8D9C;
loc_82AD8D74:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x82ad8d84
	if (ctx.cr6.eq) goto loc_82AD8D84;
loc_82AD8D7C:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82ad8d9c
	goto loc_82AD8D9C;
loc_82AD8D84:
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82ad8d9c
	if (ctx.cr6.gt) goto loc_82AD8D9C;
loc_82AD8D98:
	// li r10,2
	ctx.r10.s64 = 2;
loc_82AD8D9C:
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f26,f21
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f21.f64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lfs f29,5424(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5424);
	ctx.f29.f64 = double(temp.f32);
	// addi r7,r1,280
	ctx.r7.s64 = ctx.r1.s64 + 280;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// lfsx f13,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// lwzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lfsx f0,r11,r5
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfsx f0,r11,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// subf r10,r10,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r10.s64;
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// lwz r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r28,r6
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82ad9654
	if (!ctx.cr6.lt) goto loc_82AD9654;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f24,13960(r11)
	ctx.f24.u64 = PPC_LOAD_U64(ctx.r11.u32 + 13960);
loc_82AD8DF4:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r30,104(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ad9654
	if (!ctx.cr6.lt) goto loc_82AD9654;
	// lfs f0,4(r14)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// bgt cr6,0x82ad9654
	if (ctx.cr6.gt) goto loc_82AD9654;
	// rlwinm r23,r26,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v13,r0,r17
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r17.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r22,r1,128
	ctx.r22.s64 = ctx.r1.s64 + 128;
	// addi r11,r1,276
	ctx.r11.s64 = ctx.r1.s64 + 276;
	// subf r25,r19,r28
	ctx.r25.s64 = ctx.r28.s64 - ctx.r19.s64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lfsx f25,r23,r22
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r22.u32);
	ctx.f25.f64 = double(temp.f32);
	// stfs f25,276(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,352
	ctx.r11.s64 = ctx.r1.s64 + 352;
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vsubfp v13,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v13,v13,v127
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v127.f32)));
	// vmaddfp128 v13,v0,v126,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v126.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne cr6,0x82ad8ea8
	if (!ctx.cr6.eq) goto loc_82AD8EA8;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// subf r5,r18,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r18.s64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD8E74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD8E94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// lfs f12,360(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	ctx.f12.f64 = double(temp.f32);
	// std r11,368(r1)
	PPC_STORE_U64(ctx.r1.u32 + 368, ctx.r11.u64);
	// lfd f0,368(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 368);
	// b 0x82ad8efc
	goto loc_82AD8EFC;
loc_82AD8EA8:
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// bne cr6,0x82ad8f18
	if (!ctx.cr6.eq) goto loc_82AD8F18;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD8ECC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD8EEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// lfs f12,352(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	ctx.f12.f64 = double(temp.f32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
loc_82AD8EFC:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// fsubs f13,f31,f1
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fmadds f12,f13,f0,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f1.f64));
	// b 0x82ad8f90
	goto loc_82AD8F90;
loc_82AD8F18:
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// lfs f13,352(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	ctx.f13.f64 = double(temp.f32);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// std r11,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r11.u64);
	// lfd f0,256(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fabs f30,f0
	ctx.f30.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// beq cr6,0x82ad8f4c
	if (ctx.cr6.eq) goto loc_82AD8F4C;
	// subf r29,r18,r30
	ctx.r29.s64 = ctx.r30.s64 - ctx.r18.s64;
	// b 0x82ad8f50
	goto loc_82AD8F50;
loc_82AD8F4C:
	// subf r5,r18,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r18.s64;
loc_82AD8F50:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD8F68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD8F88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fsubs f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// fmadds f12,f0,f30,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f1.f64));
loc_82AD8F90:
	// extsb r11,r15
	ctx.r11.s64 = ctx.r15.s8;
	// lfs f9,364(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,276(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f9,f12
	ctx.cr6.compare(ctx.f9.f64, ctx.f12.f64);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r24,r11,1
	ctx.r24.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r24,0
	ctx.cr0.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bge cr6,0x82ad92a4
	if (!ctx.cr6.lt) goto loc_82AD92A4;
	// beq 0x82ad8fe4
	if (ctx.cr0.eq) goto loc_82AD8FE4;
	// fsubs f11,f0,f29
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// fsubs f13,f26,f27
	ctx.f13.f64 = double(float(ctx.f26.f64 - ctx.f27.f64));
	// fsubs f10,f9,f12
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fnmsubs f11,f11,f18,f13
	ctx.f11.f64 = double(float(-(ctx.f11.f64 * ctx.f18.f64 - ctx.f13.f64)));
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x82ad92a4
	if (!ctx.cr6.lt) goto loc_82AD92A4;
	// fcmpu cr6,f13,f21
	ctx.cr6.compare(ctx.f13.f64, ctx.f21.f64);
	// bgt cr6,0x82ad8fec
	if (ctx.cr6.gt) goto loc_82AD8FEC;
	// fneg f13,f29
	ctx.f13.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// fsel f28,f13,f24,f29
	ctx.f28.f64 = ctx.f13.f64 >= 0.0 ? ctx.f24.f64 : ctx.f29.f64;
	// b 0x82ad9048
	goto loc_82AD9048;
loc_82AD8FE4:
	// fcmpu cr6,f26,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f26.f64, ctx.f27.f64);
	// blt cr6,0x82ad92a4
	if (ctx.cr6.lt) goto loc_82AD92A4;
loc_82AD8FEC:
	// fsubs f11,f9,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fcmpu cr6,f29,f21
	ctx.cr6.compare(ctx.f29.f64, ctx.f21.f64);
	// blt cr6,0x82ad9010
	if (ctx.cr6.lt) goto loc_82AD9010;
	// fsubs f13,f26,f27
	ctx.f13.f64 = double(float(ctx.f26.f64 - ctx.f27.f64));
	// fsubs f10,f0,f29
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// fsubs f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fdivs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// fmadds f28,f10,f13,f29
	ctx.f28.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f29.f64));
	// b 0x82ad9048
	goto loc_82AD9048;
loc_82AD9010:
	// fsubs f13,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fsubs f10,f20,f13
	ctx.f10.f64 = double(float(ctx.f20.f64 - ctx.f13.f64));
	// fmuls f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// fmadds f13,f10,f12,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fsubs f13,f19,f13
	ctx.f13.f64 = double(float(ctx.f19.f64 - ctx.f13.f64));
	// fcmpu cr6,f13,f21
	ctx.cr6.compare(ctx.f13.f64, ctx.f21.f64);
	// bge cr6,0x82ad903c
	if (!ctx.cr6.lt) goto loc_82AD903C;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82ad92a4
	if (ctx.cr6.eq) goto loc_82AD92A4;
	// fmr f13,f21
	ctx.f13.f64 = ctx.f21.f64;
loc_82AD903C:
	// fsubs f11,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fdivs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// fmuls f28,f13,f0
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82AD9048:
	// lfs f13,4(r14)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmr f27,f12
	ctx.f27.f64 = ctx.f12.f64;
	// fmr f26,f9
	ctx.f26.f64 = ctx.f9.f64;
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
	// fcmpu cr6,f28,f13
	ctx.cr6.compare(ctx.f28.f64, ctx.f13.f64);
	// bgt cr6,0x82ad9654
	if (ctx.cr6.gt) goto loc_82AD9654;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// subf r29,r18,r30
	ctx.r29.s64 = ctx.r30.s64 - ctx.r18.s64;
	// stfs f20,340(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// stfs f21,332(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stfs f20,324(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// beq cr6,0x82ad9104
	if (ctx.cr6.eq) goto loc_82AD9104;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD9094;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD90B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// bne cr6,0x82ad90e4
	if (!ctx.cr6.eq) goto loc_82AD90E4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD90DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fsubs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// b 0x82ad9190
	goto loc_82AD9190;
loc_82AD90E4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD90F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fsubs f0,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f1.f64));
loc_82AD90F8:
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// fsubs f13,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// b 0x82ad9198
	goto loc_82AD9198;
loc_82AD9104:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD9110;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD9130;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82ad9170
	if (ctx.cr6.eq) goto loc_82AD9170;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// bne cr6,0x82ad914c
	if (!ctx.cr6.eq) goto loc_82AD914C;
	// fcmpu cr6,f23,f22
	ctx.cr6.compare(ctx.f23.f64, ctx.f22.f64);
	// blt cr6,0x82ad9170
	if (ctx.cr6.lt) goto loc_82AD9170;
loc_82AD914C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD9168;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fsubs f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f30.f64));
	// b 0x82ad90f8
	goto loc_82AD90F8;
loc_82AD9170:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD918C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fsubs f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
loc_82AD9190:
	// fsubs f13,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f30.f64));
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
loc_82AD9198:
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82ad91a4
	if (ctx.cr6.gt) goto loc_82AD91A4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AD91A4:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// srawi r7,r19,1
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r19.s32 >> 1;
	// srawi r6,r18,1
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r18.s32 >> 1;
	// stfs f28,340(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lvx128 v0,r0,r16
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r16.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r8,0(r14)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r4,772(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 772);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// extsw r11,r19
	ctx.r11.s64 = ctx.r19.s32;
	// extsw r10,r18
	ctx.r10.s64 = ctx.r18.s32;
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lfd f12,144(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f11,112(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// subf r10,r6,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r6.s64;
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// subf r11,r7,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r7.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r10,15,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFFFF8000;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// stw r11,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r11.u32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,320(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f0,328(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// vmulfp128 v0,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v13,v0,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f0,f20,f0
	ctx.f0.f64 = double(float(ctx.f20.f64 / ctx.f0.f64));
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// vspltw v13,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AD9294;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82ad92b0
	if (ctx.cr6.eq) goto loc_82AD92B0;
	// li r15,0
	ctx.r15.s64 = 0;
	// b 0x82ad92b0
	goto loc_82AD92B0;
loc_82AD92A4:
	// fmr f27,f12
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f12.f64;
	// fmr f26,f9
	ctx.f26.f64 = ctx.f9.f64;
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
loc_82AD92B0:
	// addi r9,r1,304
	ctx.r9.s64 = ctx.r1.s64 + 304;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,280
	ctx.r10.s64 = ctx.r1.s64 + 280;
	// xori r20,r20,2
	ctx.r20.u64 = ctx.r20.u64 ^ 2;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// lfsx f0,r23,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// lwzx r9,r23,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	// fadds f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f25.f64));
	// lwzx r10,r23,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r10.u32);
	// stfsx f0,r23,r22
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r23.u32 + ctx.r22.u32, temp.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r10,r23,r11
	PPC_STORE_U32(ctx.r23.u32 + ctx.r11.u32, ctx.r10.u32);
	// beq cr6,0x82ad9300
	if (ctx.cr6.eq) goto loc_82AD9300;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x82ad9320
	if (ctx.cr6.eq) goto loc_82AD9320;
	// lfs f0,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82ad934c
	if (!ctx.cr6.lt) goto loc_82AD934C;
	// b 0x82ad9330
	goto loc_82AD9330;
loc_82AD9300:
	// fcmpu cr6,f23,f22
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f23.f64, ctx.f22.f64);
	// bge cr6,0x82ad9328
	if (!ctx.cr6.lt) goto loc_82AD9328;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x82ad934c
	if (!ctx.cr6.eq) goto loc_82AD934C;
	// lfs f0,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82ad9330
	if (ctx.cr6.lt) goto loc_82AD9330;
loc_82AD9320:
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x82ad9350
	goto loc_82AD9350;
loc_82AD9328:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x82ad9338
	if (ctx.cr6.eq) goto loc_82AD9338;
loc_82AD9330:
	// li r26,0
	ctx.r26.s64 = 0;
	// b 0x82ad9350
	goto loc_82AD9350;
loc_82AD9338:
	// lfs f0,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// li r26,1
	ctx.r26.s64 = 1;
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82ad9350
	if (ctx.cr6.lt) goto loc_82AD9350;
loc_82AD934C:
	// li r26,2
	ctx.r26.s64 = 2;
loc_82AD9350:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ad8df4
	if (ctx.cr6.lt) goto loc_82AD8DF4;
	// b 0x82ad9654
	goto loc_82AD9654;
loc_82AD9364:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ad9654
	if (!ctx.cr6.lt) goto loc_82AD9654;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r30,104(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ad9654
	if (!ctx.cr6.lt) goto loc_82AD9654;
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// stfs f20,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// extsw r10,r29
	ctx.r10.s64 = ctx.r29.s32;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfd f13,144(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// stfs f20,228(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// lwz r11,40(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f31,f30,f0
	ctx.f31.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// fsubs f30,f29,f13
	ctx.f30.f64 = double(float(ctx.f29.f64 - ctx.f13.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD93F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// beq 0x82ad94c4
	if (ctx.cr0.eq) goto loc_82AD94C4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD9428;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r28,r30,1
	ctx.r28.s64 = ctx.r30.s64 + 1;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// addi r26,r29,1
	ctx.r26.s64 = ctx.r29.s64 + 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD9450;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// ble cr6,0x82ad9498
	if (!ctx.cr6.gt) goto loc_82AD9498;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD9478;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fsubs f13,f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f28.f64 - ctx.f1.f64));
	// fsubs f0,f1,f29
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f29.f64));
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// fmuls f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fmadds f0,f0,f30,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f12.f64));
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// b 0x82ad9578
	goto loc_82AD9578;
loc_82AD9498:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD94A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fsubs f13,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f29.f64));
	// fsubs f0,f28,f1
	ctx.f0.f64 = double(float(ctx.f28.f64 - ctx.f1.f64));
	// fmuls f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fmadds f0,f0,f30,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f12.f64));
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// b 0x82ad9574
	goto loc_82AD9574;
loc_82AD94C4:
	// addi r28,r29,1
	ctx.r28.s64 = ctx.r29.s64 + 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD94D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r26,r30,1
	ctx.r26.s64 = ctx.r30.s64 + 1;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD94F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fadds f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// fmr f28,f1
	ctx.f28.f64 = ctx.f1.f64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// fcmpu cr6,f0,f20
	ctx.cr6.compare(ctx.f0.f64, ctx.f20.f64);
	// ble cr6,0x82ad954c
	if (!ctx.cr6.gt) goto loc_82AD954C;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD9524;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fsubs f13,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f29.f64));
	// fsubs f0,f1,f28
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f28.f64));
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// fsubs f12,f30,f20
	ctx.f12.f64 = double(float(ctx.f30.f64 - ctx.f20.f64));
	// fmuls f11,f13,f31
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fneg f10,f0
	ctx.f10.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f10,208(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// fmadds f0,f12,f0,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// b 0x82ad957c
	goto loc_82AD957C;
loc_82AD954C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD955C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fsubs f13,f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f28.f64 - ctx.f1.f64));
	// fsubs f0,f29,f1
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f1.f64));
	// fmuls f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fmadds f0,f0,f30,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f12.f64));
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
loc_82AD9574:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AD9578:
	// stfs f11,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
loc_82AD957C:
	// fneg f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f13,216(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// fsubs f13,f19,f0
	ctx.f13.f64 = double(float(ctx.f19.f64 - ctx.f0.f64));
	// fsubs f0,f24,f0
	ctx.f0.f64 = double(float(ctx.f24.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82ad9654
	if (ctx.cr6.gt) goto loc_82AD9654;
	// fcmpu cr6,f13,f21
	ctx.cr6.compare(ctx.f13.f64, ctx.f21.f64);
	// bge cr6,0x82ad95b0
	if (!ctx.cr6.lt) goto loc_82AD95B0;
	// fsubs f13,f13,f18
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f18.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82ad9654
	if (ctx.cr6.gt) goto loc_82AD9654;
	// fmr f0,f21
	ctx.f0.f64 = ctx.f21.f64;
	// b 0x82ad95c8
	goto loc_82AD95C8;
loc_82AD95B0:
	// fcmpu cr6,f13,f21
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f21.f64);
	// blt cr6,0x82ad9654
	if (ctx.cr6.lt) goto loc_82AD9654;
	// fcmpu cr6,f0,f21
	ctx.cr6.compare(ctx.f0.f64, ctx.f21.f64);
	// bge cr6,0x82ad9654
	if (!ctx.cr6.lt) goto loc_82AD9654;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
loc_82AD95C8:
	// lfs f13,4(r14)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82ad9654
	if (!ctx.cr6.lt) goto loc_82AD9654;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lvx128 v13,r0,r16
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r16.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,0(r14)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r10,r30,15,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 15) & 0xFFFF8000;
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stfs f0,228(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f0,f20,f0
	ctx.f0.f64 = double(float(ctx.f20.f64 / ctx.f0.f64));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// vspltw v13,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AD9654;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD9654:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82aea80c
	ctx.lr = 0x82AD965C;
	__imp__KeTlsGetValue(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82aea80c
	ctx.lr = 0x82AD9668;
	__imp__KeTlsGetValue(ctx, base);
	// subfc r11,r3,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r3.u32;
	ctx.r11.s64 = ctx.r30.s64 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ad96b0
	if (ctx.cr0.eq) goto loc_82AD96B0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82aea80c
	ctx.lr = 0x82AD9690;
	__imp__KeTlsGetValue(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-13756
	ctx.r11.s64 = ctx.r11.s64 + -13756;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82aea81c
	ctx.lr = 0x82AD96B0;
	__imp__KeTlsSetValue(ctx, base);
loc_82AD96B0:
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// li r0,-304
	ctx.r0.s64 = -304;
	// lvx128 v126,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r0,-288
	ctx.r0.s64 = -288;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826dfbac
	ctx.lr = 0x82AD96CC;
	__restfpr_18(ctx, base);
	// b 0x826de8e0
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD96D0"))) PPC_WEAK_FUNC(sub_82AD96D0);
PPC_FUNC_IMPL(__imp__sub_82AD96D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stb r10,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD96E8"))) PPC_WEAK_FUNC(sub_82AD96E8);
PPC_FUNC_IMPL(__imp__sub_82AD96E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,6196
	ctx.r11.s64 = ctx.r11.s64 + 6196;
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD9710"))) PPC_WEAK_FUNC(sub_82AD9710);
PPC_FUNC_IMPL(__imp__sub_82AD9710) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD9720"))) PPC_WEAK_FUNC(sub_82AD9720);
PPC_FUNC_IMPL(__imp__sub_82AD9720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82ad9768
	if (!ctx.cr6.gt) goto loc_82AD9768;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82AD973C:
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lvx128 v0,r8,r7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82ad973c
	if (ctx.cr6.lt) goto loc_82AD973C;
loc_82AD9768:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD9770"))) PPC_WEAK_FUNC(sub_82AD9770);
PPC_FUNC_IMPL(__imp__sub_82AD9770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x82AD9778;
	__savegprlr_26(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// addic. r29,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r29.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82ad97f8
	if (ctx.cr0.lt) goto loc_82AD97F8;
	// li r26,3
	ctx.r26.s64 = 3;
loc_82AD9794:
	// lhz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,24(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// divw r10,r31,r26
	ctx.r10.s32 = ctx.r31.s32 / ctx.r26.s32;
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r9,40(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AD97C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// divw r11,r31,r26
	ctx.r11.s32 = ctx.r31.s32 / ctx.r26.s32;
	// oris r10,r31,16128
	ctx.r10.u64 = ctx.r31.u64 | 1056964608;
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x82ad9794
	if (!ctx.cr0.lt) goto loc_82AD9794;
loc_82AD97F8:
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD9800"))) PPC_WEAK_FUNC(sub_82AD9800);
PPC_FUNC_IMPL(__imp__sub_82AD9800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r6,16
	ctx.r11.s64 = ctx.r6.s64 + 16;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,6192(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6192);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lvx128 v0,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// lfs f0,-6904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -6904);
	ctx.f0.f64 = double(temp.f32);
	// stvx v0,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82ad98bc
	if (!ctx.cr6.gt) goto loc_82AD98BC;
	// addi r7,r4,16
	ctx.r7.s64 = ctx.r4.s64 + 16;
	// addi r5,r4,32
	ctx.r5.s64 = ctx.r4.s64 + 32;
	// addi r31,r4,48
	ctx.r31.s64 = ctx.r4.s64 + 48;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82AD9858:
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lvx128 v11,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lvx128 v9,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lvx128 v7,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v6,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v13,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v0,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// vmulfp128 v13,v11,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v10,v12,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v9,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vaddfp v0,v0,v8
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vminfp v13,v7,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaxfp v0,v6,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx v13,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82ad9858
	if (ctx.cr6.lt) goto loc_82AD9858;
loc_82AD98BC:
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,-32(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// lvx128 v13,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vsubfp v13,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx v13,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD98F8"))) PPC_WEAK_FUNC(sub_82AD98F8);
PPC_FUNC_IMPL(__imp__sub_82AD98F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b4
	ctx.lr = 0x82AD9900;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r25,r3,32
	ctx.r25.s64 = ctx.r3.s64 + 32;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// lfs f31,-6904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6904);
	ctx.f31.f64 = double(temp.f32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82ad99d0
	if (!ctx.cr6.gt) goto loc_82AD99D0;
	// addi r27,r3,28
	ctx.r27.s64 = ctx.r3.s64 + 28;
	// addi r26,r3,24
	ctx.r26.s64 = ctx.r3.s64 + 24;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82AD9940:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD9960;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD9978;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vmsum3fp128 v0,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v0,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82ad99b8
	if (!ctx.cr6.gt) goto loc_82AD99B8;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// stvx v13,r0,r23
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r23.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r11,r11,0,8,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFC0FFFFFF;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// add r24,r11,r30
	ctx.r24.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82AD99B8:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,3
	ctx.r30.s64 = ctx.r30.s64 + 3;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82ad9940
	if (ctx.cr6.lt) goto loc_82AD9940;
loc_82AD99D0:
	// oris r11,r24,16128
	ctx.r11.u64 = ctx.r24.u64 | 1056964608;
	// stw r11,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r11.u32);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x826de904
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD99E8"))) PPC_WEAK_FUNC(sub_82AD99E8);
PPC_FUNC_IMPL(__imp__sub_82AD99E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b8
	ctx.lr = 0x82AD99F0;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r31,r11,12948
	ctx.r31.s64 = ctx.r11.s64 + 12948;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82aea80c
	ctx.lr = 0x82AD9A18;
	__imp__KeTlsGetValue(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82aea80c
	ctx.lr = 0x82AD9A24;
	__imp__KeTlsGetValue(ctx, base);
	// subfc r11,r3,r29
	ctx.xer.ca = ctx.r29.u32 >= ctx.r3.u32;
	ctx.r11.s64 = ctx.r29.s64 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ad9a6c
	if (ctx.cr0.eq) goto loc_82AD9A6C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82aea80c
	ctx.lr = 0x82AD9A4C;
	__imp__KeTlsGetValue(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,6248
	ctx.r11.s64 = ctx.r11.s64 + 6248;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82aea81c
	ctx.lr = 0x82AD9A6C;
	__imp__KeTlsSetValue(ctx, base);
loc_82AD9A6C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r25,-1
	ctx.r25.s64 = -1;
	// li r27,0
	ctx.r27.s64 = 0;
	// lfs f0,14088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f31,6192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6192);
	ctx.f31.f64 = double(temp.f32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82ad9b84
	if (!ctx.cr6.gt) goto loc_82AD9B84;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82AD9A98:
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad9ae8
	if (ctx.cr6.eq) goto loc_82AD9AE8;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r6,24(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// lwzx r7,r29,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD9ACC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ad9b70
	if (ctx.cr0.eq) goto loc_82AD9B70;
loc_82AD9AE8:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwzx r4,r29,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD9B08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD9B28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ad9b70
	if (ctx.cr0.eq) goto loc_82AD9B70;
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ad9b70
	if (!ctx.cr6.lt) goto loc_82AD9B70;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stfs f0,20(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 20, temp.u32);
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r11,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r11.u32);
	// stvx v0,r0,r26
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r26.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82AD9B70:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82ad9a98
	if (ctx.cr6.lt) goto loc_82AD9A98;
loc_82AD9B84:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82aea80c
	ctx.lr = 0x82AD9B8C;
	__imp__KeTlsGetValue(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82aea80c
	ctx.lr = 0x82AD9B98;
	__imp__KeTlsGetValue(ctx, base);
	// subfc r11,r3,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r3.u32;
	ctx.r11.s64 = ctx.r30.s64 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ad9be0
	if (ctx.cr0.eq) goto loc_82AD9BE0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82aea80c
	ctx.lr = 0x82AD9BC0;
	__imp__KeTlsGetValue(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-13756
	ctx.r11.s64 = ctx.r11.s64 + -13756;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82aea81c
	ctx.lr = 0x82AD9BE0;
	__imp__KeTlsSetValue(ctx, base);
loc_82AD9BE0:
	// addi r11,r25,1
	ctx.r11.s64 = ctx.r25.s64 + 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stb r11,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r11.u8);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD9C08"))) PPC_WEAK_FUNC(sub_82AD9C08);
PPC_FUNC_IMPL(__imp__sub_82AD9C08) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,72
	ctx.r10.s64 = 72;
	// li r9,96
	ctx.r9.s64 = 96;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// stw r8,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD9C30"))) PPC_WEAK_FUNC(sub_82AD9C30);
PPC_FUNC_IMPL(__imp__sub_82AD9C30) {
	PPC_FUNC_PROLOGUE();
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD9C48"))) PPC_WEAK_FUNC(sub_82AD9C48);
PPC_FUNC_IMPL(__imp__sub_82AD9C48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x82AD9C50;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x826dfb84
	ctx.lr = 0x82AD9C58;
	__savefpr_27(ctx, base);
	// li r12,-128
	ctx.r12.s64 = -128;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lvx128 v13,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v11,v13,135
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x78));
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// vpermwi128 v9,v13,99
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x9C));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r28,r31,104
	ctx.r28.s64 = ctx.r31.s64 + 104;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lvx128 v0,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// vpermwi128 v12,v0,99
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x9C));
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// vpermwi128 v10,v0,135
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x78));
	// fneg f29,f0
	ctx.f29.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f28,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// vmulfp128 v12,v12,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v11,v10,v9
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vsubfp128 v127,v12,v11
	simde_mm_store_ps(ctx.v127.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vmsum3fp128 v12,v127,v127
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v127.f32), simde_mm_load_ps(ctx.v127.f32), 0xEF));
	// stvewx v12,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r11,7680
	ctx.r30.s64 = ctx.r11.s64 + 7680;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82ad9d4c
	if (ctx.cr6.lt) goto loc_82AD9D4C;
	// vmsum3fp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// fsqrts f31,f13
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f31.f64 = double(float(sqrt(ctx.f13.f64)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stvewx v0,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f2,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x8282ce20
	ctx.lr = 0x82AD9CF4;
	sub_8282CE20(ctx, base);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// lfs f0,56(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f30,f31
	ctx.f13.f64 = double(float(ctx.f30.f64 / ctx.f31.f64));
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fneg f0,f1
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stfs f29,112(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// vmulfp128 v0,v127,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v127.f32), simde_mm_load_ps(ctx.v0.f32)));
	// lfs f0,14096(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14096);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82890cb0
	ctx.lr = 0x82AD9D48;
	sub_82890CB0(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
loc_82AD9D4C:
	// lvx128 v0,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r0,r25
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r25.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v12,v0,99
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x9C));
	// vpermwi128 v11,v13,135
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x78));
	// lfs f29,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// vpermwi128 v10,v0,135
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x78));
	// lfs f28,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f28.f64 = double(temp.f32);
	// vpermwi128 v9,v13,99
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x9C));
	// lfs f27,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f27.f64 = double(temp.f32);
	// vmulfp128 v12,v12,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v11,v10,v9
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vsubfp128 v127,v12,v11
	simde_mm_store_ps(ctx.v127.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vmsum3fp128 v12,v127,v127
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v127.f32), simde_mm_load_ps(ctx.v127.f32), 0xEF));
	// stvewx v12,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82ad9df8
	if (ctx.cr6.lt) goto loc_82AD9DF8;
	// vmsum3fp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// fsqrts f31,f13
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f31.f64 = double(float(sqrt(ctx.f13.f64)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stvewx v0,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8282ce20
	ctx.lr = 0x82AD9DB0;
	sub_8282CE20(ctx, base);
	// lfs f0,56(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fdivs f0,f30,f31
	ctx.f0.f64 = double(float(ctx.f30.f64 / ctx.f31.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// stfs f1,152(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f27,144(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f28,148(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// vmulfp128 v0,v127,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v127.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82890cb0
	ctx.lr = 0x82AD9DF8;
	sub_82890CB0(ctx, base);
loc_82AD9DF8:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// li r0,-128
	ctx.r0.s64 = -128;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x826dfbd0
	ctx.lr = 0x82AD9E0C;
	__restfpr_27(ctx, base);
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD9E10"))) PPC_WEAK_FUNC(sub_82AD9E10);
PPC_FUNC_IMPL(__imp__sub_82AD9E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// vmsum3fp128 v0,v0,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v0,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,14088(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f13,-840(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -840);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x82ad9e54
	if (ctx.cr6.lt) goto loc_82AD9E54;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82AD9E54:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82ad9e74
	if (!ctx.cr0.eq) goto loc_82AD9E74;
loc_82AD9E6C:
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// blr 
	return;
loc_82AD9E74:
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,1
	ctx.r11.s64 = 1;
	// vmsum3fp128 v0,v0,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v0,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f12,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x82ad9ea4
	if (ctx.cr6.lt) goto loc_82AD9EA4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82AD9EA4:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ad9e6c
	if (ctx.cr0.eq) goto loc_82AD9E6C;
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,1
	ctx.r11.s64 = 1;
	// vmsum3fp128 v0,v0,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v0,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f12,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x82ad9eec
	if (ctx.cr6.lt) goto loc_82AD9EEC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82AD9EEC:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ad9e6c
	if (ctx.cr0.eq) goto loc_82AD9E6C;
	// addi r11,r4,64
	ctx.r11.s64 = ctx.r4.s64 + 64;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,1
	ctx.r11.s64 = 1;
	// vmsum3fp128 v0,v0,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v0,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f12,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x82ad9f34
	if (ctx.cr6.lt) goto loc_82AD9F34;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82AD9F34:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ad9e6c
	if (ctx.cr0.eq) goto loc_82AD9E6C;
	// lfs f13,80(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82ad9e6c
	if (ctx.cr6.gt) goto loc_82AD9E6C;
	// lfs f0,84(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82ad9e6c
	if (ctx.cr6.gt) goto loc_82AD9E6C;
	// lfs f0,92(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82ad9e6c
	if (ctx.cr6.gt) goto loc_82AD9E6C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD9F88"))) PPC_WEAK_FUNC(sub_82AD9F88);
PPC_FUNC_IMPL(__imp__sub_82AD9F88) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,7684
	ctx.r11.s64 = ctx.r11.s64 + 7684;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD9FA8"))) PPC_WEAK_FUNC(sub_82AD9FA8);
PPC_FUNC_IMPL(__imp__sub_82AD9FA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82AD9FB0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// li r12,-64
	ctx.r12.s64 = -64;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32043
	ctx.r29.s64 = -2099970048;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lbz r11,30004(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 30004);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82ada010
	if (!ctx.cr0.eq) goto loc_82ADA010;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82899de0
	ctx.lr = 0x82AD9FF4;
	sub_82899DE0(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// stb r3,30004(r29)
	PPC_STORE_U8(ctx.r29.u32 + 30004, ctx.r3.u8);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ada220
	if (ctx.cr0.eq) goto loc_82ADA220;
loc_82ADA010:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// addi r9,r30,16
	ctx.r9.s64 = ctx.r30.s64 + 16;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// li r10,2
	ctx.r10.s64 = 2;
	// lvx128 v11,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lvx128 v10,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82ADA034:
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// vspltw v13,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// vspltw v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v0,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// vmulfp128 v13,v11,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v10,v12,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v9,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// stvx v0,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// bne 0x82ada034
	if (!ctx.cr0.eq) goto loc_82ADA034;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// li r10,2
	ctx.r10.s64 = 2;
	// lvx128 v11,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lvx128 v10,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82ADA088:
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// vspltw v13,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// vspltw v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v0,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// vmulfp128 v13,v11,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v10,v12,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v9,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// stvx v0,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// bne 0x82ada088
	if (!ctx.cr0.eq) goto loc_82ADA088;
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r5,68(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8288ffb0
	ctx.lr = 0x82ADA0CC;
	sub_8288FFB0(ctx, base);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lfs f0,92(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lfs f0,96(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lvx128 v127,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// vaddfp128 v0,v127,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v127.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v13,v0,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// stvx v13,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvlx v13,0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// vspltw v13,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// stvewx v13,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-8576(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8576);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82ada168
	if (!ctx.cr6.gt) goto loc_82ADA168;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// lfs f13,3548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmuls f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvlx v13,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v13,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v127,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v127.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// b 0x82ada170
	goto loc_82ADA170;
loc_82ADA168:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
loc_82ADA170:
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// vpermwi128 v13,v127,99
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v127.u32), 0x9C));
	// vpermwi128 v12,v127,135
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v127.u32), 0x78));
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// vpermwi128 v10,v0,135
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x78));
	// vpermwi128 v0,v0,99
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x9C));
	// vmulfp128 v10,v13,v10
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v10.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32)));
	// lvx128 v11,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v0,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsubfp v0,v10,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vpermwi128 v10,v0,99
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x9C));
	// vpermwi128 v9,v0,135
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x78));
	// vmsum3fp128 v0,v0,v11
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32), 0xEF));
	// vmulfp128 v12,v10,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v13,v9,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvewx v0,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// vsubfp v0,v12,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmsum3fp128 v0,v0,v11
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32), 0xEF));
	// stvewx v0,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f2,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8282ce20
	ctx.lr = 0x82ADA1D4;
	sub_8282CE20(ctx, base);
	// fsqrts f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f31.f64)));
	// lfs f13,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stvx128 v127,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f1,136(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x82890cb0
	ctx.lr = 0x82ADA204;
	sub_82890CB0(ctx, base);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ad9c48
	ctx.lr = 0x82ADA220;
	sub_82AD9C48(ctx, base);
loc_82ADA220:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// li r0,-64
	ctx.r0.s64 = -64;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ADA238"))) PPC_WEAK_FUNC(sub_82ADA238);
PPC_FUNC_IMPL(__imp__sub_82ADA238) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,2104
	ctx.r11.s64 = ctx.r11.s64 + 2104;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADA258"))) PPC_WEAK_FUNC(sub_82ADA258);
PPC_FUNC_IMPL(__imp__sub_82ADA258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82ADA260;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,20
	ctx.r28.s64 = 20;
	// lis r30,-32043
	ctx.r30.s64 = -2099970048;
	// lwz r29,40(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm. r11,r29,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ada298
	if (!ctx.cr0.eq) goto loc_82ADA298;
	// lwz r3,12944(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12944);
	// lwz r27,32(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82aea80c
	ctx.lr = 0x82ADA288;
	__imp__KeTlsGetValue(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x828280f8
	ctx.lr = 0x82ADA298;
	sub_828280F8(ctx, base);
loc_82ADA298:
	// lwz r29,28(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm. r11,r29,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ada2c0
	if (!ctx.cr0.eq) goto loc_82ADA2C0;
	// lwz r3,12944(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12944);
	// lwz r27,20(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82aea80c
	ctx.lr = 0x82ADA2B0;
	__imp__KeTlsGetValue(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x828280f8
	ctx.lr = 0x82ADA2C0;
	sub_828280F8(ctx, base);
loc_82ADA2C0:
	// lwz r29,16(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm. r11,r29,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ada2e8
	if (!ctx.cr0.eq) goto loc_82ADA2E8;
	// lwz r3,12944(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12944);
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82aea80c
	ctx.lr = 0x82ADA2D8;
	__imp__KeTlsGetValue(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x828280f8
	ctx.lr = 0x82ADA2E8;
	sub_828280F8(ctx, base);
loc_82ADA2E8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,25780
	ctx.r11.s64 = ctx.r11.s64 + 25780;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ADA300"))) PPC_WEAK_FUNC(sub_82ADA300);
PPC_FUNC_IMPL(__imp__sub_82ADA300) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,7720
	ctx.r11.s64 = ctx.r11.s64 + 7720;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADA320"))) PPC_WEAK_FUNC(sub_82ADA320);
PPC_FUNC_IMPL(__imp__sub_82ADA320) {
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
	// bl 0x82ada258
	ctx.lr = 0x82ADA340;
	sub_82ADA258(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ada36c
	if (ctx.cr0.eq) goto loc_82ADA36C;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// li r6,36
	ctx.r6.s64 = 36;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,12940(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12940);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82ADA36C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82ADA36C:
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

__attribute__((alias("__imp__sub_82ADA388"))) PPC_WEAK_FUNC(sub_82ADA388);
PPC_FUNC_IMPL(__imp__sub_82ADA388) {
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
	// lis r31,-32045
	ctx.r31.s64 = -2100101120;
	// lwz r3,24144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ada3b4
	if (!ctx.cr6.eq) goto loc_82ADA3B4;
	// bl 0x82161250
	ctx.lr = 0x82ADA3B0;
	sub_82161250(ctx, base);
	// stw r3,24144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24144, ctx.r3.u32);
loc_82ADA3B4:
	// lis r10,-32079
	ctx.r10.s64 = -2102329344;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r31,r10,2624
	ctx.r31.s64 = ctx.r10.s64 + 2624;
	// lis r30,-32045
	ctx.r30.s64 = -2100101120;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lwz r3,24148(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24148);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ada3e4
	if (!ctx.cr6.eq) goto loc_82ADA3E4;
	// bl 0x821612d0
	ctx.lr = 0x82ADA3E0;
	sub_821612D0(ctx, base);
	// stw r3,24148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24148, ctx.r3.u32);
loc_82ADA3E4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lis r30,-32045
	ctx.r30.s64 = -2100101120;
	// addi r11,r11,2992
	ctx.r11.s64 = ctx.r11.s64 + 2992;
	// lwz r3,24136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24136);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ada40c
	if (!ctx.cr6.eq) goto loc_82ADA40C;
	// bl 0x82161150
	ctx.lr = 0x82ADA408;
	sub_82161150(ctx, base);
	// stw r3,24136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24136, ctx.r3.u32);
loc_82ADA40C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lis r30,-32045
	ctx.r30.s64 = -2100101120;
	// addi r11,r11,2984
	ctx.r11.s64 = ctx.r11.s64 + 2984;
	// lwz r3,24152(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24152);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ada434
	if (!ctx.cr6.eq) goto loc_82ADA434;
	// bl 0x82161350
	ctx.lr = 0x82ADA430;
	sub_82161350(ctx, base);
	// stw r3,24152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24152, ctx.r3.u32);
loc_82ADA434:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// lis r30,-32045
	ctx.r30.s64 = -2100101120;
	// addi r11,r11,2968
	ctx.r11.s64 = ctx.r11.s64 + 2968;
	// lwz r3,24156(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24156);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ada45c
	if (!ctx.cr6.eq) goto loc_82ADA45C;
	// bl 0x821613d0
	ctx.lr = 0x82ADA458;
	sub_821613D0(ctx, base);
	// stw r3,24156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24156, ctx.r3.u32);
loc_82ADA45C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// lis r30,-32045
	ctx.r30.s64 = -2100101120;
	// addi r11,r11,2956
	ctx.r11.s64 = ctx.r11.s64 + 2956;
	// lwz r3,24160(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24160);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ada484
	if (!ctx.cr6.eq) goto loc_82ADA484;
	// bl 0x82161450
	ctx.lr = 0x82ADA480;
	sub_82161450(ctx, base);
	// stw r3,24160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24160, ctx.r3.u32);
loc_82ADA484:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82ADA4B0"))) PPC_WEAK_FUNC(sub_82ADA4B0);
PPC_FUNC_IMPL(__imp__sub_82ADA4B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,-29804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29804);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8100);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,27124(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 27124, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADA4D0"))) PPC_WEAK_FUNC(sub_82ADA4D0);
PPC_FUNC_IMPL(__imp__sub_82ADA4D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,-29804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29804);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8104);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,27128(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 27128, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADA4F0"))) PPC_WEAK_FUNC(sub_82ADA4F0);
PPC_FUNC_IMPL(__imp__sub_82ADA4F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,-29804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29804);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8100);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,27132(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 27132, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADA510"))) PPC_WEAK_FUNC(sub_82ADA510);
PPC_FUNC_IMPL(__imp__sub_82ADA510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,-29804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29804);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8104);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,27136(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 27136, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADA530"))) PPC_WEAK_FUNC(sub_82ADA530);
PPC_FUNC_IMPL(__imp__sub_82ADA530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,-29804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29804);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8100);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,27140(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 27140, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADA550"))) PPC_WEAK_FUNC(sub_82ADA550);
PPC_FUNC_IMPL(__imp__sub_82ADA550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,-29804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29804);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8104);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,27144(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 27144, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADA570"))) PPC_WEAK_FUNC(sub_82ADA570);
PPC_FUNC_IMPL(__imp__sub_82ADA570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,-29804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29804);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8100);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,27148(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 27148, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADA590"))) PPC_WEAK_FUNC(sub_82ADA590);
PPC_FUNC_IMPL(__imp__sub_82ADA590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,-29804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29804);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8104);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,27152(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 27152, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADA5B0"))) PPC_WEAK_FUNC(sub_82ADA5B0);
PPC_FUNC_IMPL(__imp__sub_82ADA5B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r11,r11,-4576
	ctx.r11.s64 = ctx.r11.s64 + -4576;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r11,r11,27184
	ctx.r11.s64 = ctx.r11.s64 + 27184;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADA5D0"))) PPC_WEAK_FUNC(sub_82ADA5D0);
PPC_FUNC_IMPL(__imp__sub_82ADA5D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,-29808(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29808);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// stfs f0,27212(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 27212, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADA5E8"))) PPC_WEAK_FUNC(sub_82ADA5E8);
PPC_FUNC_IMPL(__imp__sub_82ADA5E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,-29804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29804);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,5024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5024);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,27216(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 27216, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADA608"))) PPC_WEAK_FUNC(sub_82ADA608);
PPC_FUNC_IMPL(__imp__sub_82ADA608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,27232
	ctx.r3.s64 = ctx.r11.s64 + 27232;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f1,-29804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29804);
	ctx.f1.f64 = double(temp.f32);
	// b 0x825d35a0
	sub_825D35A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ADA620"))) PPC_WEAK_FUNC(sub_82ADA620);
PPC_FUNC_IMPL(__imp__sub_82ADA620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// addi r4,r11,6240
	ctx.r4.s64 = ctx.r11.s64 + 6240;
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// addi r3,r11,27424
	ctx.r3.s64 = ctx.r11.s64 + 27424;
	// b 0x825d1eb8
	sub_825D1EB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ADA638"))) PPC_WEAK_FUNC(sub_82ADA638);
PPC_FUNC_IMPL(__imp__sub_82ADA638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,27472
	ctx.r3.s64 = ctx.r11.s64 + 27472;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f13,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f1,-29804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29804);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825d20b0
	ctx.lr = 0x82ADA67C;
	sub_825D20B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADA690"))) PPC_WEAK_FUNC(sub_82ADA690);
PPC_FUNC_IMPL(__imp__sub_82ADA690) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r11,2600
	ctx.r4.s64 = ctx.r11.s64 + 2600;
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// addi r3,r11,32292
	ctx.r3.s64 = ctx.r11.s64 + 32292;
	// bl 0x82161e08
	ctx.lr = 0x82ADA6B4;
	sub_82161E08(ctx, base);
	// lis r11,-32082
	ctx.r11.s64 = -2102525952;
	// addi r3,r11,32208
	ctx.r3.s64 = ctx.r11.s64 + 32208;
	// bl 0x826ded00
	ctx.lr = 0x82ADA6C0;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADA6D0"))) PPC_WEAK_FUNC(sub_82ADA6D0);
PPC_FUNC_IMPL(__imp__sub_82ADA6D0) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r11,2608
	ctx.r4.s64 = ctx.r11.s64 + 2608;
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// addi r3,r11,32320
	ctx.r3.s64 = ctx.r11.s64 + 32320;
	// bl 0x82161e08
	ctx.lr = 0x82ADA6F4;
	sub_82161E08(ctx, base);
	// lis r11,-32082
	ctx.r11.s64 = -2102525952;
	// addi r3,r11,32296
	ctx.r3.s64 = ctx.r11.s64 + 32296;
	// bl 0x826ded00
	ctx.lr = 0x82ADA700;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADA710"))) PPC_WEAK_FUNC(sub_82ADA710);
PPC_FUNC_IMPL(__imp__sub_82ADA710) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,11568
	ctx.r4.s64 = ctx.r11.s64 + 11568;
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// addi r31,r11,-21496
	ctx.r31.s64 = ctx.r11.s64 + -21496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82161e08
	ctx.lr = 0x82ADA73C;
	sub_82161E08(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,30
	ctx.r5.s64 = 30;
	// addi r4,r11,11536
	ctx.r4.s64 = ctx.r11.s64 + 11536;
	// li r11,15
	ctx.r11.s64 = 15;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
	// bl 0x82161e08
	ctx.lr = 0x82ADA764;
	sub_82161E08(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,30
	ctx.r5.s64 = 30;
	// addi r4,r11,11504
	ctx.r4.s64 = ctx.r11.s64 + 11504;
	// li r11,15
	ctx.r11.s64 = 15;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stb r11,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r11.u8);
	// bl 0x82161e08
	ctx.lr = 0x82ADA78C;
	sub_82161E08(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,31
	ctx.r5.s64 = 31;
	// addi r4,r11,11472
	ctx.r4.s64 = ctx.r11.s64 + 11472;
	// li r11,15
	ctx.r11.s64 = 15;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stb r11,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r11.u8);
	// bl 0x82161e08
	ctx.lr = 0x82ADA7B4;
	sub_82161E08(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r11,11436
	ctx.r4.s64 = ctx.r11.s64 + 11436;
	// li r11,15
	ctx.r11.s64 = 15;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stb r11,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r11.u8);
	// bl 0x82161e08
	ctx.lr = 0x82ADA7DC;
	sub_82161E08(ctx, base);
	// lis r11,-32082
	ctx.r11.s64 = -2102525952;
	// addi r3,r11,32464
	ctx.r3.s64 = ctx.r11.s64 + 32464;
	// bl 0x826ded00
	ctx.lr = 0x82ADA7E8;
	sub_826DED00(ctx, base);
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

__attribute__((alias("__imp__sub_82ADA800"))) PPC_WEAK_FUNC(sub_82ADA800);
PPC_FUNC_IMPL(__imp__sub_82ADA800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,-29804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29804);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// stfs f0,28644(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28644, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADA818"))) PPC_WEAK_FUNC(sub_82ADA818);
PPC_FUNC_IMPL(__imp__sub_82ADA818) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,27
	ctx.r5.s64 = 27;
	// addi r4,r11,-28996
	ctx.r4.s64 = ctx.r11.s64 + -28996;
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// addi r3,r11,-2472
	ctx.r3.s64 = ctx.r11.s64 + -2472;
	// bl 0x82161e08
	ctx.lr = 0x82ADA83C;
	sub_82161E08(ctx, base);
	// lis r11,-32082
	ctx.r11.s64 = -2102525952;
	// addi r3,r11,32632
	ctx.r3.s64 = ctx.r11.s64 + 32632;
	// bl 0x826ded00
	ctx.lr = 0x82ADA848;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADA858"))) PPC_WEAK_FUNC(sub_82ADA858);
PPC_FUNC_IMPL(__imp__sub_82ADA858) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,11568
	ctx.r4.s64 = ctx.r11.s64 + 11568;
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// addi r31,r11,-2056
	ctx.r31.s64 = ctx.r11.s64 + -2056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82161e08
	ctx.lr = 0x82ADA884;
	sub_82161E08(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r4,r11,-27420
	ctx.r4.s64 = ctx.r11.s64 + -27420;
	// li r11,15
	ctx.r11.s64 = 15;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
	// bl 0x82161e08
	ctx.lr = 0x82ADA8AC;
	sub_82161E08(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,30
	ctx.r5.s64 = 30;
	// addi r4,r11,-27452
	ctx.r4.s64 = ctx.r11.s64 + -27452;
	// li r11,15
	ctx.r11.s64 = 15;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stb r11,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r11.u8);
	// bl 0x82161e08
	ctx.lr = 0x82ADA8D4;
	sub_82161E08(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r4,r11,-27484
	ctx.r4.s64 = ctx.r11.s64 + -27484;
	// li r11,15
	ctx.r11.s64 = 15;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stb r11,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r11.u8);
	// bl 0x82161e08
	ctx.lr = 0x82ADA8FC;
	sub_82161E08(ctx, base);
	// lis r11,-32082
	ctx.r11.s64 = -2102525952;
	// addi r3,r11,32720
	ctx.r3.s64 = ctx.r11.s64 + 32720;
	// bl 0x826ded00
	ctx.lr = 0x82ADA908;
	sub_826DED00(ctx, base);
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

__attribute__((alias("__imp__sub_82ADA920"))) PPC_WEAK_FUNC(sub_82ADA920);
PPC_FUNC_IMPL(__imp__sub_82ADA920) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,27
	ctx.r5.s64 = 27;
	// addi r4,r11,-26696
	ctx.r4.s64 = ctx.r11.s64 + -26696;
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// addi r3,r11,-1164
	ctx.r3.s64 = ctx.r11.s64 + -1164;
	// bl 0x82161e08
	ctx.lr = 0x82ADA944;
	sub_82161E08(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-32720
	ctx.r3.s64 = ctx.r11.s64 + -32720;
	// bl 0x826ded00
	ctx.lr = 0x82ADA950;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADA960"))) PPC_WEAK_FUNC(sub_82ADA960);
PPC_FUNC_IMPL(__imp__sub_82ADA960) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,23
	ctx.r5.s64 = 23;
	// addi r4,r11,-26524
	ctx.r4.s64 = ctx.r11.s64 + -26524;
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// addi r3,r11,-1052
	ctx.r3.s64 = ctx.r11.s64 + -1052;
	// bl 0x82161e08
	ctx.lr = 0x82ADA984;
	sub_82161E08(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-32632
	ctx.r3.s64 = ctx.r11.s64 + -32632;
	// bl 0x826ded00
	ctx.lr = 0x82ADA990;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADA9A0"))) PPC_WEAK_FUNC(sub_82ADA9A0);
PPC_FUNC_IMPL(__imp__sub_82ADA9A0) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,30
	ctx.r5.s64 = 30;
	// addi r4,r11,-26332
	ctx.r4.s64 = ctx.r11.s64 + -26332;
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// addi r3,r11,-924
	ctx.r3.s64 = ctx.r11.s64 + -924;
	// bl 0x82161e08
	ctx.lr = 0x82ADA9C4;
	sub_82161E08(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-32544
	ctx.r3.s64 = ctx.r11.s64 + -32544;
	// bl 0x826ded00
	ctx.lr = 0x82ADA9D0;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADA9E0"))) PPC_WEAK_FUNC(sub_82ADA9E0);
PPC_FUNC_IMPL(__imp__sub_82ADA9E0) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,30
	ctx.r5.s64 = 30;
	// addi r4,r11,-25800
	ctx.r4.s64 = ctx.r11.s64 + -25800;
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// addi r3,r11,-612
	ctx.r3.s64 = ctx.r11.s64 + -612;
	// bl 0x82161e08
	ctx.lr = 0x82ADAA04;
	sub_82161E08(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-32456
	ctx.r3.s64 = ctx.r11.s64 + -32456;
	// bl 0x826ded00
	ctx.lr = 0x82ADAA10;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADAA20"))) PPC_WEAK_FUNC(sub_82ADAA20);
PPC_FUNC_IMPL(__imp__sub_82ADAA20) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,27
	ctx.r5.s64 = 27;
	// addi r4,r11,-25616
	ctx.r4.s64 = ctx.r11.s64 + -25616;
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// addi r3,r11,-492
	ctx.r3.s64 = ctx.r11.s64 + -492;
	// bl 0x82161e08
	ctx.lr = 0x82ADAA44;
	sub_82161E08(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-32368
	ctx.r3.s64 = ctx.r11.s64 + -32368;
	// bl 0x826ded00
	ctx.lr = 0x82ADAA50;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADAA60"))) PPC_WEAK_FUNC(sub_82ADAA60);
PPC_FUNC_IMPL(__imp__sub_82ADAA60) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,22
	ctx.r5.s64 = 22;
	// addi r4,r11,-25192
	ctx.r4.s64 = ctx.r11.s64 + -25192;
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// addi r3,r11,-256
	ctx.r3.s64 = ctx.r11.s64 + -256;
	// bl 0x82161e08
	ctx.lr = 0x82ADAA84;
	sub_82161E08(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-32280
	ctx.r3.s64 = ctx.r11.s64 + -32280;
	// bl 0x826ded00
	ctx.lr = 0x82ADAA90;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADAAA0"))) PPC_WEAK_FUNC(sub_82ADAAA0);
PPC_FUNC_IMPL(__imp__sub_82ADAAA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,-29804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29804);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,6448(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6448);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,29836(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 29836, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADAAC0"))) PPC_WEAK_FUNC(sub_82ADAAC0);
PPC_FUNC_IMPL(__imp__sub_82ADAAC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,-29804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29804);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,26540(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26540);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,29840(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 29840, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADAAE0"))) PPC_WEAK_FUNC(sub_82ADAAE0);
PPC_FUNC_IMPL(__imp__sub_82ADAAE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,-29804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29804);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,-9944(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9944);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,29876(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 29876, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADAB00"))) PPC_WEAK_FUNC(sub_82ADAB00);
PPC_FUNC_IMPL(__imp__sub_82ADAB00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,-29804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29804);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,-9944(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9944);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,29892(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 29892, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADAB20"))) PPC_WEAK_FUNC(sub_82ADAB20);
PPC_FUNC_IMPL(__imp__sub_82ADAB20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,-29804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29804);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,-3876(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3876);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,29964(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 29964, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADAB40"))) PPC_WEAK_FUNC(sub_82ADAB40);
PPC_FUNC_IMPL(__imp__sub_82ADAB40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,-29804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29804);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-7568(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -7568);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,29968(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 29968, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADAB60"))) PPC_WEAK_FUNC(sub_82ADAB60);
PPC_FUNC_IMPL(__imp__sub_82ADAB60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,-29804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29804);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-13184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13184);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,30516(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 30516, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADAB80"))) PPC_WEAK_FUNC(sub_82ADAB80);
PPC_FUNC_IMPL(__imp__sub_82ADAB80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,-29804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29804);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,2120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2120);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,30520(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 30520, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADABA0"))) PPC_WEAK_FUNC(sub_82ADABA0);
PPC_FUNC_IMPL(__imp__sub_82ADABA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,-29804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29804);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,5024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5024);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,30556(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 30556, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADABC0"))) PPC_WEAK_FUNC(sub_82ADABC0);
PPC_FUNC_IMPL(__imp__sub_82ADABC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,-29804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29804);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-13184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13184);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,30560(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 30560, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADABE0"))) PPC_WEAK_FUNC(sub_82ADABE0);
PPC_FUNC_IMPL(__imp__sub_82ADABE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,-29804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29804);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,5524(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5524);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,30632(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 30632, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADAC00"))) PPC_WEAK_FUNC(sub_82ADAC00);
PPC_FUNC_IMPL(__imp__sub_82ADAC00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,-29804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29804);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,2124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,30932(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 30932, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADAC20"))) PPC_WEAK_FUNC(sub_82ADAC20);
PPC_FUNC_IMPL(__imp__sub_82ADAC20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-31952
	ctx.r3.s64 = ctx.r11.s64 + -31952;
	// b 0x826ded00
	sub_826DED00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ADAC30"))) PPC_WEAK_FUNC(sub_82ADAC30);
PPC_FUNC_IMPL(__imp__sub_82ADAC30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32073
	ctx.r11.s64 = -2101936128;
	// lfs f0,8580(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8580);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8100);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,31460(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 31460, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADAC50"))) PPC_WEAK_FUNC(sub_82ADAC50);
PPC_FUNC_IMPL(__imp__sub_82ADAC50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32073
	ctx.r11.s64 = -2101936128;
	// lfs f0,8580(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8580);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8252);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,31464(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 31464, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADAC70"))) PPC_WEAK_FUNC(sub_82ADAC70);
PPC_FUNC_IMPL(__imp__sub_82ADAC70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32073
	ctx.r11.s64 = -2101936128;
	// addi r4,r11,28480
	ctx.r4.s64 = ctx.r11.s64 + 28480;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,27872(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27872);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,31872
	ctx.r3.s64 = ctx.r11.s64 + 31872;
	// b 0x825d20b0
	sub_825D20B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ADAC90"))) PPC_WEAK_FUNC(sub_82ADAC90);
PPC_FUNC_IMPL(__imp__sub_82ADAC90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32073
	ctx.r11.s64 = -2101936128;
	// addi r4,r11,28496
	ctx.r4.s64 = ctx.r11.s64 + 28496;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,31888
	ctx.r3.s64 = ctx.r11.s64 + 31888;
	// b 0x825d20b0
	sub_825D20B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ADACB0"))) PPC_WEAK_FUNC(sub_82ADACB0);
PPC_FUNC_IMPL(__imp__sub_82ADACB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32073
	ctx.r11.s64 = -2101936128;
	// addi r4,r11,28496
	ctx.r4.s64 = ctx.r11.s64 + 28496;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,31904
	ctx.r3.s64 = ctx.r11.s64 + 31904;
	// b 0x825d20b0
	sub_825D20B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ADACD0"))) PPC_WEAK_FUNC(sub_82ADACD0);
PPC_FUNC_IMPL(__imp__sub_82ADACD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32073
	ctx.r11.s64 = -2101936128;
	// addi r4,r11,28496
	ctx.r4.s64 = ctx.r11.s64 + 28496;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f1,-29072(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29072);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,31920
	ctx.r3.s64 = ctx.r11.s64 + 31920;
	// b 0x825d20b0
	sub_825D20B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ADACF0"))) PPC_WEAK_FUNC(sub_82ADACF0);
PPC_FUNC_IMPL(__imp__sub_82ADACF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r5,r11,31872
	ctx.r5.s64 = ctx.r11.s64 + 31872;
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r4,r11,31888
	ctx.r4.s64 = ctx.r11.s64 + 31888;
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,31936
	ctx.r3.s64 = ctx.r11.s64 + 31936;
	// b 0x825d1d68
	sub_825D1D68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ADAD10"))) PPC_WEAK_FUNC(sub_82ADAD10);
PPC_FUNC_IMPL(__imp__sub_82ADAD10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r5,r11,31872
	ctx.r5.s64 = ctx.r11.s64 + 31872;
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r4,r11,31904
	ctx.r4.s64 = ctx.r11.s64 + 31904;
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,31952
	ctx.r3.s64 = ctx.r11.s64 + 31952;
	// b 0x825d1d68
	sub_825D1D68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ADAD30"))) PPC_WEAK_FUNC(sub_82ADAD30);
PPC_FUNC_IMPL(__imp__sub_82ADAD30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r5,r11,31872
	ctx.r5.s64 = ctx.r11.s64 + 31872;
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r4,r11,31920
	ctx.r4.s64 = ctx.r11.s64 + 31920;
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,31968
	ctx.r3.s64 = ctx.r11.s64 + 31968;
	// b 0x825d1d68
	sub_825D1D68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ADAD50"))) PPC_WEAK_FUNC(sub_82ADAD50);
PPC_FUNC_IMPL(__imp__sub_82ADAD50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,31984
	ctx.r3.s64 = ctx.r11.s64 + 31984;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f13,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f1,27872(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27872);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825d20b0
	ctx.lr = 0x82ADAD94;
	sub_825D20B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADADA8"))) PPC_WEAK_FUNC(sub_82ADADA8);
PPC_FUNC_IMPL(__imp__sub_82ADADA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,31936
	ctx.r5.s64 = ctx.r11.s64 + 31936;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,-24580(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24580);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r11,31984
	ctx.r4.s64 = ctx.r11.s64 + 31984;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,13932(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13932);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,-24584(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24584);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x825d1d68
	ctx.lr = 0x82ADADFC;
	sub_825D1D68(ctx, base);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r11,r11,32000
	ctx.r11.s64 = ctx.r11.s64 + 32000;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,16
	ctx.r12.s64 = 16;
	// stvx v0,r11,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADAE30"))) PPC_WEAK_FUNC(sub_82ADAE30);
PPC_FUNC_IMPL(__imp__sub_82ADAE30) {
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
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,31952
	ctx.r5.s64 = ctx.r11.s64 + 31952;
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r4,r11,31984
	ctx.r4.s64 = ctx.r11.s64 + 31984;
	// bl 0x825d1d68
	ctx.lr = 0x82ADAE54;
	sub_825D1D68(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r11,r11,32032
	ctx.r11.s64 = ctx.r11.s64 + 32032;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-32073
	ctx.r10.s64 = -2101936128;
	// addi r10,r10,28512
	ctx.r10.s64 = ctx.r10.s64 + 28512;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,16
	ctx.r12.s64 = 16;
	// stvx v0,r11,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADAE90"))) PPC_WEAK_FUNC(sub_82ADAE90);
PPC_FUNC_IMPL(__imp__sub_82ADAE90) {
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
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,31968
	ctx.r5.s64 = ctx.r11.s64 + 31968;
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r4,r11,31984
	ctx.r4.s64 = ctx.r11.s64 + 31984;
	// bl 0x825d1d68
	ctx.lr = 0x82ADAEB4;
	sub_825D1D68(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r11,r11,32064
	ctx.r11.s64 = ctx.r11.s64 + 32064;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-32073
	ctx.r10.s64 = -2101936128;
	// addi r10,r10,28512
	ctx.r10.s64 = ctx.r10.s64 + 28512;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,16
	ctx.r12.s64 = 16;
	// stvx v0,r11,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADAEF0"))) PPC_WEAK_FUNC(sub_82ADAEF0);
PPC_FUNC_IMPL(__imp__sub_82ADAEF0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,31936
	ctx.r5.s64 = ctx.r11.s64 + 31936;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-14604(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14604);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r30,r11,31984
	ctx.r30.s64 = ctx.r11.s64 + 31984;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f0,-24560(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24560);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,-24564(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24564);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f31,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x825d1d68
	ctx.lr = 0x82ADAF58;
	sub_825D1D68(ctx, base);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,31952
	ctx.r5.s64 = ctx.r11.s64 + 31952;
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r11,32096
	ctx.r31.s64 = ctx.r11.s64 + 32096;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stvx v0,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f31,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// li r12,16
	ctx.r12.s64 = 16;
	// stvx v0,r31,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,-24568(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24568);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f30,-24572(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24572);
	ctx.f30.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,1060(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1060);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x825d1d68
	ctx.lr = 0x82ADAFB8;
	sub_825D1D68(ctx, base);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,31968
	ctx.r5.s64 = ctx.r11.s64 + 31968;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r12,32
	ctx.r12.s64 = 32;
	// stvx v0,r31,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f30,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// li r12,48
	ctx.r12.s64 = 48;
	// stvx v0,r31,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,4048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4048);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,-24576(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24576);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x825d1d68
	ctx.lr = 0x82ADB00C;
	sub_825D1D68(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r12,64
	ctx.r12.s64 = 64;
	// stvx v0,r31,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,80
	ctx.r12.s64 = 80;
	// stvx v0,r31,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_82ADB050"))) PPC_WEAK_FUNC(sub_82ADB050);
PPC_FUNC_IMPL(__imp__sub_82ADB050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f0,-24552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24552);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lfs f0,-24556(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24556);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,31936
	ctx.r11.s64 = ctx.r11.s64 + 31936;
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lfs f0,-24584(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24584);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// addi r11,r11,32192
	ctx.r11.s64 = ctx.r11.s64 + 32192;
	// lfs f0,14088(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,16
	ctx.r12.s64 = 16;
	// stvx v0,r11,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADB0B0"))) PPC_WEAK_FUNC(sub_82ADB0B0);
PPC_FUNC_IMPL(__imp__sub_82ADB0B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f0,-27844(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27844);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lfs f0,-24548(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24548);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,31952
	ctx.r11.s64 = ctx.r11.s64 + 31952;
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lfs f0,-24564(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24564);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// addi r11,r11,32224
	ctx.r11.s64 = ctx.r11.s64 + 32224;
	// lfs f0,14088(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,16
	ctx.r12.s64 = 16;
	// stvx v0,r11,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADB110"))) PPC_WEAK_FUNC(sub_82ADB110);
PPC_FUNC_IMPL(__imp__sub_82ADB110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f0,4020(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4020);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lfs f0,-24548(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24548);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,31968
	ctx.r11.s64 = ctx.r11.s64 + 31968;
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lfs f0,-24564(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24564);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// addi r11,r11,32256
	ctx.r11.s64 = ctx.r11.s64 + 32256;
	// lfs f0,14088(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,16
	ctx.r12.s64 = 16;
	// stvx v0,r11,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADB170"))) PPC_WEAK_FUNC(sub_82ADB170);
PPC_FUNC_IMPL(__imp__sub_82ADB170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f0,5524(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5524);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r11,r11,31936
	ctx.r11.s64 = ctx.r11.s64 + 31936;
	// lfs f0,-24548(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24548);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r10,r10,31952
	ctx.r10.s64 = ctx.r10.s64 + 31952;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r11,r11,32288
	ctx.r11.s64 = ctx.r11.s64 + 32288;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r12,32
	ctx.r12.s64 = 32;
	// stvx v0,r11,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,-24564(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24564);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// addi r10,r10,31968
	ctx.r10.s64 = ctx.r10.s64 + 31968;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r12,64
	ctx.r12.s64 = 64;
	// stvx v0,r11,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,14088(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// li r12,16
	ctx.r12.s64 = 16;
	// stvx v0,r11,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,4304(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4304);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lfs f13,30416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30416);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lfs f12,1060(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1060);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,-8(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// li r12,48
	ctx.r12.s64 = 48;
	// stvx v0,r11,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f12,-24544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24544);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stfs f12,-16(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lfs f13,-24576(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24576);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-8(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,80
	ctx.r12.s64 = 80;
	// stvx v0,r11,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADB260"))) PPC_WEAK_FUNC(sub_82ADB260);
PPC_FUNC_IMPL(__imp__sub_82ADB260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82ADB268;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32073
	ctx.r11.s64 = -2101936128;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r30,r11,28496
	ctx.r30.s64 = ctx.r11.s64 + 28496;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f0,-24528(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24528);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f31,-24532(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24532);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f30,-24536(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24536);
	ctx.f30.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f29,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f29.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f29,92(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f1,27872(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27872);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825d20b0
	ctx.lr = 0x82ADB2C4;
	sub_825D20B0(ctx, base);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r29,r11,31872
	ctx.r29.s64 = ctx.r11.s64 + 31872;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x825d1d68
	ctx.lr = 0x82ADB2DC;
	sub_825D1D68(ctx, base);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r31,r11,32384
	ctx.r31.s64 = ctx.r11.s64 + 32384;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stvx v0,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f29,92(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// li r12,16
	ctx.r12.s64 = 16;
	// stvx v0,r31,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,-24540(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24540);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f1,12304(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12304);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825d20b0
	ctx.lr = 0x82ADB32C;
	sub_825D20B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x825d1d68
	ctx.lr = 0x82ADB33C;
	sub_825D1D68(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r12,32
	ctx.r12.s64 = 32;
	// stvx v0,r31,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,48
	ctx.r12.s64 = 48;
	// stvx v0,r31,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ADB370"))) PPC_WEAK_FUNC(sub_82ADB370);
PPC_FUNC_IMPL(__imp__sub_82ADB370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r11,r11,-4608
	ctx.r11.s64 = ctx.r11.s64 + -4608;
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lfs f0,2372(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2372);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// lfs f0,14088(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// addi r11,r11,32448
	ctx.r11.s64 = ctx.r11.s64 + 32448;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,16
	ctx.r12.s64 = 16;
	// stvx v0,r11,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADB3C8"))) PPC_WEAK_FUNC(sub_82ADB3C8);
PPC_FUNC_IMPL(__imp__sub_82ADB3C8) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r4,r10,-17040
	ctx.r4.s64 = ctx.r10.s64 + -17040;
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,32504
	ctx.r3.s64 = ctx.r10.s64 + 32504;
	// addi r5,r11,-13432
	ctx.r5.s64 = ctx.r11.s64 + -13432;
	// bl 0x82697f10
	ctx.lr = 0x82ADB3F4;
	sub_82697F10(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-31816
	ctx.r3.s64 = ctx.r11.s64 + -31816;
	// bl 0x826ded00
	ctx.lr = 0x82ADB400;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADB410"))) PPC_WEAK_FUNC(sub_82ADB410);
PPC_FUNC_IMPL(__imp__sub_82ADB410) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r4,r10,-16364
	ctx.r4.s64 = ctx.r10.s64 + -16364;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-32696
	ctx.r3.s64 = ctx.r10.s64 + -32696;
	// addi r5,r11,11504
	ctx.r5.s64 = ctx.r11.s64 + 11504;
	// bl 0x8268ab90
	ctx.lr = 0x82ADB43C;
	sub_8268AB90(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-31776
	ctx.r3.s64 = ctx.r11.s64 + -31776;
	// bl 0x826ded00
	ctx.lr = 0x82ADB448;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADB458"))) PPC_WEAK_FUNC(sub_82ADB458);
PPC_FUNC_IMPL(__imp__sub_82ADB458) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r4,r10,-16316
	ctx.r4.s64 = ctx.r10.s64 + -16316;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r5,r11,12032
	ctx.r5.s64 = ctx.r11.s64 + 12032;
	// addi r3,r10,-32420
	ctx.r3.s64 = ctx.r10.s64 + -32420;
	// bl 0x82691ff8
	ctx.lr = 0x82ADB480;
	sub_82691FF8(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-31752
	ctx.r3.s64 = ctx.r11.s64 + -31752;
	// bl 0x826ded00
	ctx.lr = 0x82ADB48C;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADB4A0"))) PPC_WEAK_FUNC(sub_82ADB4A0);
PPC_FUNC_IMPL(__imp__sub_82ADB4A0) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r4,r10,-16172
	ctx.r4.s64 = ctx.r10.s64 + -16172;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-32144
	ctx.r3.s64 = ctx.r10.s64 + -32144;
	// addi r5,r11,13208
	ctx.r5.s64 = ctx.r11.s64 + 13208;
	// bl 0x8268ab90
	ctx.lr = 0x82ADB4CC;
	sub_8268AB90(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-31728
	ctx.r3.s64 = ctx.r11.s64 + -31728;
	// bl 0x826ded00
	ctx.lr = 0x82ADB4D8;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADB4E8"))) PPC_WEAK_FUNC(sub_82ADB4E8);
PPC_FUNC_IMPL(__imp__sub_82ADB4E8) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r4,r10,-16128
	ctx.r4.s64 = ctx.r10.s64 + -16128;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r5,r11,13912
	ctx.r5.s64 = ctx.r11.s64 + 13912;
	// addi r3,r10,-31868
	ctx.r3.s64 = ctx.r10.s64 + -31868;
	// bl 0x82691ff8
	ctx.lr = 0x82ADB510;
	sub_82691FF8(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-31704
	ctx.r3.s64 = ctx.r11.s64 + -31704;
	// bl 0x826ded00
	ctx.lr = 0x82ADB51C;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADB530"))) PPC_WEAK_FUNC(sub_82ADB530);
PPC_FUNC_IMPL(__imp__sub_82ADB530) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r4,r10,-16076
	ctx.r4.s64 = ctx.r10.s64 + -16076;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-31592
	ctx.r3.s64 = ctx.r10.s64 + -31592;
	// addi r5,r11,15072
	ctx.r5.s64 = ctx.r11.s64 + 15072;
	// bl 0x8268ab90
	ctx.lr = 0x82ADB55C;
	sub_8268AB90(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-31680
	ctx.r3.s64 = ctx.r11.s64 + -31680;
	// bl 0x826ded00
	ctx.lr = 0x82ADB568;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADB578"))) PPC_WEAK_FUNC(sub_82ADB578);
PPC_FUNC_IMPL(__imp__sub_82ADB578) {
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
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r11,-22548
	ctx.r6.s64 = ctx.r11.s64 + -22548;
	// addi r4,r10,-15896
	ctx.r4.s64 = ctx.r10.s64 + -15896;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r3,r10,-31316
	ctx.r3.s64 = ctx.r10.s64 + -31316;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r11,15464
	ctx.r5.s64 = ctx.r11.s64 + 15464;
	// bl 0x82692ca0
	ctx.lr = 0x82ADB5B0;
	sub_82692CA0(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-31656
	ctx.r3.s64 = ctx.r11.s64 + -31656;
	// bl 0x826ded00
	ctx.lr = 0x82ADB5BC;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADB5D0"))) PPC_WEAK_FUNC(sub_82ADB5D0);
PPC_FUNC_IMPL(__imp__sub_82ADB5D0) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r4,r10,-15856
	ctx.r4.s64 = ctx.r10.s64 + -15856;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r5,r11,15864
	ctx.r5.s64 = ctx.r11.s64 + 15864;
	// addi r3,r10,-31040
	ctx.r3.s64 = ctx.r10.s64 + -31040;
	// bl 0x82691ff8
	ctx.lr = 0x82ADB5F8;
	sub_82691FF8(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-31632
	ctx.r3.s64 = ctx.r11.s64 + -31632;
	// bl 0x826ded00
	ctx.lr = 0x82ADB604;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADB618"))) PPC_WEAK_FUNC(sub_82ADB618);
PPC_FUNC_IMPL(__imp__sub_82ADB618) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r4,r10,-15804
	ctx.r4.s64 = ctx.r10.s64 + -15804;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-30764
	ctx.r3.s64 = ctx.r10.s64 + -30764;
	// addi r5,r11,16560
	ctx.r5.s64 = ctx.r11.s64 + 16560;
	// bl 0x8268ab90
	ctx.lr = 0x82ADB644;
	sub_8268AB90(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-31608
	ctx.r3.s64 = ctx.r11.s64 + -31608;
	// bl 0x826ded00
	ctx.lr = 0x82ADB650;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADB660"))) PPC_WEAK_FUNC(sub_82ADB660);
PPC_FUNC_IMPL(__imp__sub_82ADB660) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r4,r10,-15764
	ctx.r4.s64 = ctx.r10.s64 + -15764;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r5,r11,17176
	ctx.r5.s64 = ctx.r11.s64 + 17176;
	// addi r3,r10,-30488
	ctx.r3.s64 = ctx.r10.s64 + -30488;
	// bl 0x82691ff8
	ctx.lr = 0x82ADB688;
	sub_82691FF8(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-31584
	ctx.r3.s64 = ctx.r11.s64 + -31584;
	// bl 0x826ded00
	ctx.lr = 0x82ADB694;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADB6A8"))) PPC_WEAK_FUNC(sub_82ADB6A8);
PPC_FUNC_IMPL(__imp__sub_82ADB6A8) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r4,r10,-15684
	ctx.r4.s64 = ctx.r10.s64 + -15684;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-30212
	ctx.r3.s64 = ctx.r10.s64 + -30212;
	// addi r5,r11,19864
	ctx.r5.s64 = ctx.r11.s64 + 19864;
	// bl 0x8268ab90
	ctx.lr = 0x82ADB6D4;
	sub_8268AB90(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-31560
	ctx.r3.s64 = ctx.r11.s64 + -31560;
	// bl 0x826ded00
	ctx.lr = 0x82ADB6E0;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADB6F0"))) PPC_WEAK_FUNC(sub_82ADB6F0);
PPC_FUNC_IMPL(__imp__sub_82ADB6F0) {
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r11,-14108
	ctx.r6.s64 = ctx.r11.s64 + -14108;
	// addi r4,r10,-15556
	ctx.r4.s64 = ctx.r10.s64 + -15556;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-29936
	ctx.r3.s64 = ctx.r10.s64 + -29936;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,21608
	ctx.r5.s64 = ctx.r11.s64 + 21608;
	// bl 0x82693250
	ctx.lr = 0x82ADB728;
	sub_82693250(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-31536
	ctx.r3.s64 = ctx.r11.s64 + -31536;
	// bl 0x826ded00
	ctx.lr = 0x82ADB734;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADB748"))) PPC_WEAK_FUNC(sub_82ADB748);
PPC_FUNC_IMPL(__imp__sub_82ADB748) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r4,r10,-15496
	ctx.r4.s64 = ctx.r10.s64 + -15496;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-29660
	ctx.r3.s64 = ctx.r10.s64 + -29660;
	// addi r5,r11,23776
	ctx.r5.s64 = ctx.r11.s64 + 23776;
	// bl 0x8268ab90
	ctx.lr = 0x82ADB774;
	sub_8268AB90(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-31512
	ctx.r3.s64 = ctx.r11.s64 + -31512;
	// bl 0x826ded00
	ctx.lr = 0x82ADB780;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADB790"))) PPC_WEAK_FUNC(sub_82ADB790);
PPC_FUNC_IMPL(__imp__sub_82ADB790) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r4,r10,-15440
	ctx.r4.s64 = ctx.r10.s64 + -15440;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-29384
	ctx.r3.s64 = ctx.r10.s64 + -29384;
	// addi r5,r11,25200
	ctx.r5.s64 = ctx.r11.s64 + 25200;
	// bl 0x8268ab90
	ctx.lr = 0x82ADB7BC;
	sub_8268AB90(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-31488
	ctx.r3.s64 = ctx.r11.s64 + -31488;
	// bl 0x826ded00
	ctx.lr = 0x82ADB7C8;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADB7D8"))) PPC_WEAK_FUNC(sub_82ADB7D8);
PPC_FUNC_IMPL(__imp__sub_82ADB7D8) {
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r11,-29108
	ctx.r6.s64 = ctx.r11.s64 + -29108;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r4,r10,-15376
	ctx.r4.s64 = ctx.r10.s64 + -15376;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,25808
	ctx.r5.s64 = ctx.r11.s64 + 25808;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82693250
	ctx.lr = 0x82ADB80C;
	sub_82693250(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-31464
	ctx.r3.s64 = ctx.r11.s64 + -31464;
	// bl 0x826ded00
	ctx.lr = 0x82ADB818;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADB828"))) PPC_WEAK_FUNC(sub_82ADB828);
PPC_FUNC_IMPL(__imp__sub_82ADB828) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r4,r10,-15324
	ctx.r4.s64 = ctx.r10.s64 + -15324;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-28832
	ctx.r3.s64 = ctx.r10.s64 + -28832;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,27072
	ctx.r5.s64 = ctx.r11.s64 + 27072;
	// bl 0x82692d28
	ctx.lr = 0x82ADB85C;
	sub_82692D28(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-31440
	ctx.r3.s64 = ctx.r11.s64 + -31440;
	// bl 0x826ded00
	ctx.lr = 0x82ADB868;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADB878"))) PPC_WEAK_FUNC(sub_82ADB878);
PPC_FUNC_IMPL(__imp__sub_82ADB878) {
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r11,-32696
	ctx.r6.s64 = ctx.r11.s64 + -32696;
	// addi r4,r10,-15272
	ctx.r4.s64 = ctx.r10.s64 + -15272;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r5,r11,29152
	ctx.r5.s64 = ctx.r11.s64 + 29152;
	// addi r3,r10,-28556
	ctx.r3.s64 = ctx.r10.s64 + -28556;
	// bl 0x8268ab90
	ctx.lr = 0x82ADB8A8;
	sub_8268AB90(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-31416
	ctx.r3.s64 = ctx.r11.s64 + -31416;
	// bl 0x826ded00
	ctx.lr = 0x82ADB8B4;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADB8C8"))) PPC_WEAK_FUNC(sub_82ADB8C8);
PPC_FUNC_IMPL(__imp__sub_82ADB8C8) {
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r11,-14108
	ctx.r6.s64 = ctx.r11.s64 + -14108;
	// addi r4,r10,-15184
	ctx.r4.s64 = ctx.r10.s64 + -15184;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-28280
	ctx.r3.s64 = ctx.r10.s64 + -28280;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,29344
	ctx.r5.s64 = ctx.r11.s64 + 29344;
	// bl 0x82693250
	ctx.lr = 0x82ADB900;
	sub_82693250(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-31392
	ctx.r3.s64 = ctx.r11.s64 + -31392;
	// bl 0x826ded00
	ctx.lr = 0x82ADB90C;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADB920"))) PPC_WEAK_FUNC(sub_82ADB920);
PPC_FUNC_IMPL(__imp__sub_82ADB920) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r4,r10,-15092
	ctx.r4.s64 = ctx.r10.s64 + -15092;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-28004
	ctx.r3.s64 = ctx.r10.s64 + -28004;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,31920
	ctx.r5.s64 = ctx.r11.s64 + 31920;
	// bl 0x8268b928
	ctx.lr = 0x82ADB954;
	sub_8268B928(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-31368
	ctx.r3.s64 = ctx.r11.s64 + -31368;
	// bl 0x826ded00
	ctx.lr = 0x82ADB960;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADB970"))) PPC_WEAK_FUNC(sub_82ADB970);
PPC_FUNC_IMPL(__imp__sub_82ADB970) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r4,r10,-15012
	ctx.r4.s64 = ctx.r10.s64 + -15012;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-27716
	ctx.r3.s64 = ctx.r10.s64 + -27716;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-31920
	ctx.r5.s64 = ctx.r11.s64 + -31920;
	// bl 0x8268b928
	ctx.lr = 0x82ADB9A4;
	sub_8268B928(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-31344
	ctx.r3.s64 = ctx.r11.s64 + -31344;
	// bl 0x826ded00
	ctx.lr = 0x82ADB9B0;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADB9C0"))) PPC_WEAK_FUNC(sub_82ADB9C0);
PPC_FUNC_IMPL(__imp__sub_82ADB9C0) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r4,r10,-14936
	ctx.r4.s64 = ctx.r10.s64 + -14936;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-27428
	ctx.r3.s64 = ctx.r10.s64 + -27428;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-30008
	ctx.r5.s64 = ctx.r11.s64 + -30008;
	// bl 0x8268b928
	ctx.lr = 0x82ADB9F4;
	sub_8268B928(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-31320
	ctx.r3.s64 = ctx.r11.s64 + -31320;
	// bl 0x826ded00
	ctx.lr = 0x82ADBA00;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADBA10"))) PPC_WEAK_FUNC(sub_82ADBA10);
PPC_FUNC_IMPL(__imp__sub_82ADBA10) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r4,r10,-14868
	ctx.r4.s64 = ctx.r10.s64 + -14868;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-27152
	ctx.r3.s64 = ctx.r10.s64 + -27152;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-29240
	ctx.r5.s64 = ctx.r11.s64 + -29240;
	// bl 0x8268b928
	ctx.lr = 0x82ADBA44;
	sub_8268B928(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-31296
	ctx.r3.s64 = ctx.r11.s64 + -31296;
	// bl 0x826ded00
	ctx.lr = 0x82ADBA50;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADBA60"))) PPC_WEAK_FUNC(sub_82ADBA60);
PPC_FUNC_IMPL(__imp__sub_82ADBA60) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r4,r10,-14596
	ctx.r4.s64 = ctx.r10.s64 + -14596;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-26864
	ctx.r3.s64 = ctx.r10.s64 + -26864;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26576
	ctx.r5.s64 = ctx.r11.s64 + -26576;
	// bl 0x8268b928
	ctx.lr = 0x82ADBA94;
	sub_8268B928(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-31272
	ctx.r3.s64 = ctx.r11.s64 + -31272;
	// bl 0x826ded00
	ctx.lr = 0x82ADBAA0;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADBAB0"))) PPC_WEAK_FUNC(sub_82ADBAB0);
PPC_FUNC_IMPL(__imp__sub_82ADBAB0) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r4,r10,-14388
	ctx.r4.s64 = ctx.r10.s64 + -14388;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-26588
	ctx.r3.s64 = ctx.r10.s64 + -26588;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-19800
	ctx.r5.s64 = ctx.r11.s64 + -19800;
	// bl 0x8268b928
	ctx.lr = 0x82ADBAE4;
	sub_8268B928(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-31248
	ctx.r3.s64 = ctx.r11.s64 + -31248;
	// bl 0x826ded00
	ctx.lr = 0x82ADBAF0;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADBB00"))) PPC_WEAK_FUNC(sub_82ADBB00);
PPC_FUNC_IMPL(__imp__sub_82ADBB00) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r4,r10,-14284
	ctx.r4.s64 = ctx.r10.s64 + -14284;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-26312
	ctx.r3.s64 = ctx.r10.s64 + -26312;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-16840
	ctx.r5.s64 = ctx.r11.s64 + -16840;
	// bl 0x8268b928
	ctx.lr = 0x82ADBB34;
	sub_8268B928(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-31224
	ctx.r3.s64 = ctx.r11.s64 + -31224;
	// bl 0x826ded00
	ctx.lr = 0x82ADBB40;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADBB50"))) PPC_WEAK_FUNC(sub_82ADBB50);
PPC_FUNC_IMPL(__imp__sub_82ADBB50) {
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r11,-28004
	ctx.r6.s64 = ctx.r11.s64 + -28004;
	// addi r4,r10,-14180
	ctx.r4.s64 = ctx.r10.s64 + -14180;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-26036
	ctx.r3.s64 = ctx.r10.s64 + -26036;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-15696
	ctx.r5.s64 = ctx.r11.s64 + -15696;
	// bl 0x8268b928
	ctx.lr = 0x82ADBB88;
	sub_8268B928(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-31200
	ctx.r3.s64 = ctx.r11.s64 + -31200;
	// bl 0x826ded00
	ctx.lr = 0x82ADBB94;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADBBA8"))) PPC_WEAK_FUNC(sub_82ADBBA8);
PPC_FUNC_IMPL(__imp__sub_82ADBBA8) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r4,r10,-14096
	ctx.r4.s64 = ctx.r10.s64 + -14096;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-25760
	ctx.r3.s64 = ctx.r10.s64 + -25760;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-9888
	ctx.r5.s64 = ctx.r11.s64 + -9888;
	// bl 0x8268b928
	ctx.lr = 0x82ADBBDC;
	sub_8268B928(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-31176
	ctx.r3.s64 = ctx.r11.s64 + -31176;
	// bl 0x826ded00
	ctx.lr = 0x82ADBBE8;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADBBF8"))) PPC_WEAK_FUNC(sub_82ADBBF8);
PPC_FUNC_IMPL(__imp__sub_82ADBBF8) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r4,r10,-14036
	ctx.r4.s64 = ctx.r10.s64 + -14036;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-25484
	ctx.r3.s64 = ctx.r10.s64 + -25484;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-8784
	ctx.r5.s64 = ctx.r11.s64 + -8784;
	// bl 0x8268b928
	ctx.lr = 0x82ADBC2C;
	sub_8268B928(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-31152
	ctx.r3.s64 = ctx.r11.s64 + -31152;
	// bl 0x826ded00
	ctx.lr = 0x82ADBC38;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADBC48"))) PPC_WEAK_FUNC(sub_82ADBC48);
PPC_FUNC_IMPL(__imp__sub_82ADBC48) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r4,r10,-13980
	ctx.r4.s64 = ctx.r10.s64 + -13980;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-25208
	ctx.r3.s64 = ctx.r10.s64 + -25208;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-5680
	ctx.r5.s64 = ctx.r11.s64 + -5680;
	// bl 0x8268b928
	ctx.lr = 0x82ADBC7C;
	sub_8268B928(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-31128
	ctx.r3.s64 = ctx.r11.s64 + -31128;
	// bl 0x826ded00
	ctx.lr = 0x82ADBC88;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADBC98"))) PPC_WEAK_FUNC(sub_82ADBC98);
PPC_FUNC_IMPL(__imp__sub_82ADBC98) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r4,r10,-13920
	ctx.r4.s64 = ctx.r10.s64 + -13920;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-24932
	ctx.r3.s64 = ctx.r10.s64 + -24932;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-2808
	ctx.r5.s64 = ctx.r11.s64 + -2808;
	// bl 0x8268b928
	ctx.lr = 0x82ADBCCC;
	sub_8268B928(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-31104
	ctx.r3.s64 = ctx.r11.s64 + -31104;
	// bl 0x826ded00
	ctx.lr = 0x82ADBCD8;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADBCE8"))) PPC_WEAK_FUNC(sub_82ADBCE8);
PPC_FUNC_IMPL(__imp__sub_82ADBCE8) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r4,r10,-13844
	ctx.r4.s64 = ctx.r10.s64 + -13844;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-24644
	ctx.r3.s64 = ctx.r10.s64 + -24644;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,432
	ctx.r5.s64 = ctx.r11.s64 + 432;
	// bl 0x8268b928
	ctx.lr = 0x82ADBD1C;
	sub_8268B928(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-31080
	ctx.r3.s64 = ctx.r11.s64 + -31080;
	// bl 0x826ded00
	ctx.lr = 0x82ADBD28;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADBD38"))) PPC_WEAK_FUNC(sub_82ADBD38);
PPC_FUNC_IMPL(__imp__sub_82ADBD38) {
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r11,-28004
	ctx.r6.s64 = ctx.r11.s64 + -28004;
	// addi r4,r10,-13764
	ctx.r4.s64 = ctx.r10.s64 + -13764;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-24368
	ctx.r3.s64 = ctx.r10.s64 + -24368;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,1336
	ctx.r5.s64 = ctx.r11.s64 + 1336;
	// bl 0x8268b928
	ctx.lr = 0x82ADBD70;
	sub_8268B928(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-31056
	ctx.r3.s64 = ctx.r11.s64 + -31056;
	// bl 0x826ded00
	ctx.lr = 0x82ADBD7C;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADBD90"))) PPC_WEAK_FUNC(sub_82ADBD90);
PPC_FUNC_IMPL(__imp__sub_82ADBD90) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r4,r10,-13696
	ctx.r4.s64 = ctx.r10.s64 + -13696;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-24092
	ctx.r3.s64 = ctx.r10.s64 + -24092;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,4240
	ctx.r5.s64 = ctx.r11.s64 + 4240;
	// bl 0x8268b928
	ctx.lr = 0x82ADBDC4;
	sub_8268B928(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-31032
	ctx.r3.s64 = ctx.r11.s64 + -31032;
	// bl 0x826ded00
	ctx.lr = 0x82ADBDD0;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADBDE0"))) PPC_WEAK_FUNC(sub_82ADBDE0);
PPC_FUNC_IMPL(__imp__sub_82ADBDE0) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r4,r10,-13648
	ctx.r4.s64 = ctx.r10.s64 + -13648;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r5,r11,4344
	ctx.r5.s64 = ctx.r11.s64 + 4344;
	// addi r3,r10,-23816
	ctx.r3.s64 = ctx.r10.s64 + -23816;
	// bl 0x82692088
	ctx.lr = 0x82ADBE08;
	sub_82692088(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-31008
	ctx.r3.s64 = ctx.r11.s64 + -31008;
	// bl 0x826ded00
	ctx.lr = 0x82ADBE14;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADBE28"))) PPC_WEAK_FUNC(sub_82ADBE28);
PPC_FUNC_IMPL(__imp__sub_82ADBE28) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r4,r10,-13612
	ctx.r4.s64 = ctx.r10.s64 + -13612;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r5,r11,4520
	ctx.r5.s64 = ctx.r11.s64 + 4520;
	// addi r3,r10,-23540
	ctx.r3.s64 = ctx.r10.s64 + -23540;
	// bl 0x82692088
	ctx.lr = 0x82ADBE50;
	sub_82692088(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-30984
	ctx.r3.s64 = ctx.r11.s64 + -30984;
	// bl 0x826ded00
	ctx.lr = 0x82ADBE5C;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADBE70"))) PPC_WEAK_FUNC(sub_82ADBE70);
PPC_FUNC_IMPL(__imp__sub_82ADBE70) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r4,r10,-13576
	ctx.r4.s64 = ctx.r10.s64 + -13576;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r5,r11,4640
	ctx.r5.s64 = ctx.r11.s64 + 4640;
	// addi r3,r10,-23264
	ctx.r3.s64 = ctx.r10.s64 + -23264;
	// bl 0x82692088
	ctx.lr = 0x82ADBE98;
	sub_82692088(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-30960
	ctx.r3.s64 = ctx.r11.s64 + -30960;
	// bl 0x826ded00
	ctx.lr = 0x82ADBEA4;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADBEB8"))) PPC_WEAK_FUNC(sub_82ADBEB8);
PPC_FUNC_IMPL(__imp__sub_82ADBEB8) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r4,r10,-13540
	ctx.r4.s64 = ctx.r10.s64 + -13540;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r5,r11,5104
	ctx.r5.s64 = ctx.r11.s64 + 5104;
	// addi r3,r10,-22988
	ctx.r3.s64 = ctx.r10.s64 + -22988;
	// bl 0x82692088
	ctx.lr = 0x82ADBEE0;
	sub_82692088(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-30936
	ctx.r3.s64 = ctx.r11.s64 + -30936;
	// bl 0x826ded00
	ctx.lr = 0x82ADBEEC;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADBF00"))) PPC_WEAK_FUNC(sub_82ADBF00);
PPC_FUNC_IMPL(__imp__sub_82ADBF00) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r4,r10,-13504
	ctx.r4.s64 = ctx.r10.s64 + -13504;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r5,r11,5336
	ctx.r5.s64 = ctx.r11.s64 + 5336;
	// addi r3,r10,-22712
	ctx.r3.s64 = ctx.r10.s64 + -22712;
	// bl 0x82692088
	ctx.lr = 0x82ADBF28;
	sub_82692088(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-30912
	ctx.r3.s64 = ctx.r11.s64 + -30912;
	// bl 0x826ded00
	ctx.lr = 0x82ADBF34;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADBF48"))) PPC_WEAK_FUNC(sub_82ADBF48);
PPC_FUNC_IMPL(__imp__sub_82ADBF48) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r4,r10,-13468
	ctx.r4.s64 = ctx.r10.s64 + -13468;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r5,r11,5752
	ctx.r5.s64 = ctx.r11.s64 + 5752;
	// addi r3,r10,-22436
	ctx.r3.s64 = ctx.r10.s64 + -22436;
	// bl 0x82692088
	ctx.lr = 0x82ADBF70;
	sub_82692088(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-30888
	ctx.r3.s64 = ctx.r11.s64 + -30888;
	// bl 0x826ded00
	ctx.lr = 0x82ADBF7C;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADBF90"))) PPC_WEAK_FUNC(sub_82ADBF90);
PPC_FUNC_IMPL(__imp__sub_82ADBF90) {
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
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r11,r11,-20640
	ctx.r11.s64 = ctx.r11.s64 + -20640;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82aea1fc
	ctx.lr = 0x82ADBFAC;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-30864
	ctx.r3.s64 = ctx.r11.s64 + -30864;
	// bl 0x826ded00
	ctx.lr = 0x82ADBFB8;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADBFC8"))) PPC_WEAK_FUNC(sub_82ADBFC8);
PPC_FUNC_IMPL(__imp__sub_82ADBFC8) {
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
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r11,r11,-20608
	ctx.r11.s64 = ctx.r11.s64 + -20608;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82aea1fc
	ctx.lr = 0x82ADBFE4;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-30840
	ctx.r3.s64 = ctx.r11.s64 + -30840;
	// bl 0x826ded00
	ctx.lr = 0x82ADBFF0;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADC000"))) PPC_WEAK_FUNC(sub_82ADC000);
PPC_FUNC_IMPL(__imp__sub_82ADC000) {
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,-20208
	ctx.r3.s64 = ctx.r11.s64 + -20208;
	// bl 0x8257fe70
	ctx.lr = 0x82ADC018;
	sub_8257FE70(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-30816
	ctx.r3.s64 = ctx.r11.s64 + -30816;
	// bl 0x826ded00
	ctx.lr = 0x82ADC024;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADC038"))) PPC_WEAK_FUNC(sub_82ADC038);
PPC_FUNC_IMPL(__imp__sub_82ADC038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-30800
	ctx.r3.s64 = ctx.r11.s64 + -30800;
	// b 0x826ded00
	sub_826DED00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ADC048"))) PPC_WEAK_FUNC(sub_82ADC048);
PPC_FUNC_IMPL(__imp__sub_82ADC048) {
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,-20024
	ctx.r3.s64 = ctx.r11.s64 + -20024;
	// bl 0x8257fe70
	ctx.lr = 0x82ADC060;
	sub_8257FE70(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-30720
	ctx.r3.s64 = ctx.r11.s64 + -30720;
	// bl 0x826ded00
	ctx.lr = 0x82ADC06C;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADC080"))) PPC_WEAK_FUNC(sub_82ADC080);
PPC_FUNC_IMPL(__imp__sub_82ADC080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-30704
	ctx.r3.s64 = ctx.r11.s64 + -30704;
	// b 0x826ded00
	sub_826DED00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ADC090"))) PPC_WEAK_FUNC(sub_82ADC090);
PPC_FUNC_IMPL(__imp__sub_82ADC090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// addi r11,r11,-20016
	ctx.r11.s64 = ctx.r11.s64 + -20016;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADC0C8"))) PPC_WEAK_FUNC(sub_82ADC0C8);
PPC_FUNC_IMPL(__imp__sub_82ADC0C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r11,r11,-20000
	ctx.r11.s64 = ctx.r11.s64 + -20000;
	// addi r10,r10,-19984
	ctx.r10.s64 = ctx.r10.s64 + -19984;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADC0F0"))) PPC_WEAK_FUNC(sub_82ADC0F0);
PPC_FUNC_IMPL(__imp__sub_82ADC0F0) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,22
	ctx.r5.s64 = 22;
	// addi r4,r11,25084
	ctx.r4.s64 = ctx.r11.s64 + 25084;
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r3,r11,-19952
	ctx.r3.s64 = ctx.r11.s64 + -19952;
	// bl 0x82161e08
	ctx.lr = 0x82ADC114;
	sub_82161E08(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-30640
	ctx.r3.s64 = ctx.r11.s64 + -30640;
	// bl 0x826ded00
	ctx.lr = 0x82ADC120;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADC130"))) PPC_WEAK_FUNC(sub_82ADC130);
PPC_FUNC_IMPL(__imp__sub_82ADC130) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,5020
	ctx.r4.s64 = ctx.r11.s64 + 5020;
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r3,r11,-19924
	ctx.r3.s64 = ctx.r11.s64 + -19924;
	// bl 0x82161e08
	ctx.lr = 0x82ADC154;
	sub_82161E08(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-30552
	ctx.r3.s64 = ctx.r11.s64 + -30552;
	// bl 0x826ded00
	ctx.lr = 0x82ADC160;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADC170"))) PPC_WEAK_FUNC(sub_82ADC170);
PPC_FUNC_IMPL(__imp__sub_82ADC170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lfs f13,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stfs f13,-4(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,-19744
	ctx.r11.s64 = ctx.r11.s64 + -19744;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// stfs f13,-4(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// li r12,16
	ctx.r12.s64 = 16;
	// stvx v0,r11,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADC1C8"))) PPC_WEAK_FUNC(sub_82ADC1C8);
PPC_FUNC_IMPL(__imp__sub_82ADC1C8) {
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
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r10,r10,3368
	ctx.r10.s64 = ctx.r10.s64 + 3368;
	// addi r11,r11,10192
	ctx.r11.s64 = ctx.r11.s64 + 10192;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r31,r10,-19616
	ctx.r31.s64 = ctx.r10.s64 + -19616;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82ad0700
	ctx.lr = 0x82ADC238;
	sub_82AD0700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82adc288
	if (!ctx.cr6.eq) goto loc_82ADC288;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r11,r11,25736
	ctx.r11.s64 = ctx.r11.s64 + 25736;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r11,r10,-7880
	ctx.r11.s64 = ctx.r10.s64 + -7880;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x82ADC264;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82adc284
	if (ctx.cr6.eq) goto loc_82ADC284;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
loc_82ADC284:
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_82ADC288:
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r10,r10,3368
	ctx.r10.s64 = ctx.r10.s64 + 3368;
	// addi r11,r11,6136
	ctx.r11.s64 = ctx.r11.s64 + 6136;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82ad0700
	ctx.lr = 0x82ADC2D8;
	sub_82AD0700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82adc328
	if (!ctx.cr6.eq) goto loc_82ADC328;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r11,r11,25736
	ctx.r11.s64 = ctx.r11.s64 + 25736;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r11,r10,-7880
	ctx.r11.s64 = ctx.r10.s64 + -7880;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x82ADC304;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82adc324
	if (ctx.cr6.eq) goto loc_82ADC324;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
loc_82ADC324:
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
loc_82ADC328:
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r10,r10,3424
	ctx.r10.s64 = ctx.r10.s64 + 3424;
	// addi r11,r11,10192
	ctx.r11.s64 = ctx.r11.s64 + 10192;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82ad0700
	ctx.lr = 0x82ADC378;
	sub_82AD0700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82adc3c8
	if (!ctx.cr6.eq) goto loc_82ADC3C8;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r11,r11,25736
	ctx.r11.s64 = ctx.r11.s64 + 25736;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// addi r11,r10,-7880
	ctx.r11.s64 = ctx.r10.s64 + -7880;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x82ADC3A4;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82adc3c4
	if (ctx.cr6.eq) goto loc_82ADC3C4;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
loc_82ADC3C4:
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_82ADC3C8:
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r10,r10,3424
	ctx.r10.s64 = ctx.r10.s64 + 3424;
	// addi r11,r11,6136
	ctx.r11.s64 = ctx.r11.s64 + 6136;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82ad0700
	ctx.lr = 0x82ADC418;
	sub_82AD0700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82adc468
	if (!ctx.cr6.eq) goto loc_82ADC468;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r11,r11,25736
	ctx.r11.s64 = ctx.r11.s64 + 25736;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r11,r10,-7880
	ctx.r11.s64 = ctx.r10.s64 + -7880;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x82ADC444;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82adc464
	if (ctx.cr6.eq) goto loc_82ADC464;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
loc_82ADC464:
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
loc_82ADC468:
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r10,r10,3480
	ctx.r10.s64 = ctx.r10.s64 + 3480;
	// addi r11,r11,10192
	ctx.r11.s64 = ctx.r11.s64 + 10192;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82ad0700
	ctx.lr = 0x82ADC4B8;
	sub_82AD0700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82adc508
	if (!ctx.cr6.eq) goto loc_82ADC508;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r11,r11,25736
	ctx.r11.s64 = ctx.r11.s64 + 25736;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// addi r11,r10,-7880
	ctx.r11.s64 = ctx.r10.s64 + -7880;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x82ADC4E4;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82adc504
	if (ctx.cr6.eq) goto loc_82ADC504;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
loc_82ADC504:
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
loc_82ADC508:
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r10,r10,3480
	ctx.r10.s64 = ctx.r10.s64 + 3480;
	// addi r11,r11,6136
	ctx.r11.s64 = ctx.r11.s64 + 6136;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82ad0700
	ctx.lr = 0x82ADC558;
	sub_82AD0700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82adc5a8
	if (!ctx.cr6.eq) goto loc_82ADC5A8;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r11,r11,25736
	ctx.r11.s64 = ctx.r11.s64 + 25736;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// addi r11,r10,-7880
	ctx.r11.s64 = ctx.r10.s64 + -7880;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x82ADC584;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82adc5a4
	if (ctx.cr6.eq) goto loc_82ADC5A4;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
loc_82ADC5A4:
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
loc_82ADC5A8:
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r10,r10,3080
	ctx.r10.s64 = ctx.r10.s64 + 3080;
	// addi r11,r11,8576
	ctx.r11.s64 = ctx.r11.s64 + 8576;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82ad0700
	ctx.lr = 0x82ADC5F8;
	sub_82AD0700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82adc648
	if (!ctx.cr6.eq) goto loc_82ADC648;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r11,r11,25736
	ctx.r11.s64 = ctx.r11.s64 + 25736;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,-7880
	ctx.r11.s64 = ctx.r10.s64 + -7880;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x82ADC624;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82adc644
	if (ctx.cr6.eq) goto loc_82ADC644;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
loc_82ADC644:
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
loc_82ADC648:
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r10,r10,3080
	ctx.r10.s64 = ctx.r10.s64 + 3080;
	// addi r11,r11,6136
	ctx.r11.s64 = ctx.r11.s64 + 6136;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82ad0700
	ctx.lr = 0x82ADC698;
	sub_82AD0700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82adc6e8
	if (!ctx.cr6.eq) goto loc_82ADC6E8;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r11,r11,25736
	ctx.r11.s64 = ctx.r11.s64 + 25736;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// addi r11,r10,-7880
	ctx.r11.s64 = ctx.r10.s64 + -7880;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x82ADC6C4;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82adc6e4
	if (ctx.cr6.eq) goto loc_82ADC6E4;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
loc_82ADC6E4:
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
loc_82ADC6E8:
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r10,r10,3200
	ctx.r10.s64 = ctx.r10.s64 + 3200;
	// addi r11,r11,8280
	ctx.r11.s64 = ctx.r11.s64 + 8280;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82ad0700
	ctx.lr = 0x82ADC738;
	sub_82AD0700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82adc788
	if (!ctx.cr6.eq) goto loc_82ADC788;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r11,r11,25736
	ctx.r11.s64 = ctx.r11.s64 + 25736;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// addi r11,r10,-7880
	ctx.r11.s64 = ctx.r10.s64 + -7880;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x82ADC764;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82adc784
	if (ctx.cr6.eq) goto loc_82ADC784;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
loc_82ADC784:
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
loc_82ADC788:
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r10,r10,3200
	ctx.r10.s64 = ctx.r10.s64 + 3200;
	// addi r11,r11,6136
	ctx.r11.s64 = ctx.r11.s64 + 6136;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82ad0700
	ctx.lr = 0x82ADC7D8;
	sub_82AD0700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82adc828
	if (!ctx.cr6.eq) goto loc_82ADC828;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r11,r11,25736
	ctx.r11.s64 = ctx.r11.s64 + 25736;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// addi r11,r10,-7880
	ctx.r11.s64 = ctx.r10.s64 + -7880;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x82ADC804;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82adc824
	if (ctx.cr6.eq) goto loc_82ADC824;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
loc_82ADC824:
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
loc_82ADC828:
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// addi r11,r11,8280
	ctx.r11.s64 = ctx.r11.s64 + 8280;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82ad0700
	ctx.lr = 0x82ADC878;
	sub_82AD0700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82adc8c8
	if (!ctx.cr6.eq) goto loc_82ADC8C8;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r11,r11,25736
	ctx.r11.s64 = ctx.r11.s64 + 25736;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// addi r11,r10,-7880
	ctx.r11.s64 = ctx.r10.s64 + -7880;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x82ADC8A4;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82adc8c4
	if (ctx.cr6.eq) goto loc_82ADC8C4;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
loc_82ADC8C4:
	// stw r3,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
loc_82ADC8C8:
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// addi r11,r11,6136
	ctx.r11.s64 = ctx.r11.s64 + 6136;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// stw r10,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82ad0700
	ctx.lr = 0x82ADC918;
	sub_82AD0700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82adc968
	if (!ctx.cr6.eq) goto loc_82ADC968;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r11,r11,25736
	ctx.r11.s64 = ctx.r11.s64 + 25736;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// addi r11,r10,-7880
	ctx.r11.s64 = ctx.r10.s64 + -7880;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x82ADC944;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82adc964
	if (ctx.cr6.eq) goto loc_82ADC964;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
loc_82ADC964:
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
loc_82ADC968:
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r10,r10,3312
	ctx.r10.s64 = ctx.r10.s64 + 3312;
	// addi r11,r11,8280
	ctx.r11.s64 = ctx.r11.s64 + 8280;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r10.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// stw r10,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82ad0700
	ctx.lr = 0x82ADC9B8;
	sub_82AD0700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82adca08
	if (!ctx.cr6.eq) goto loc_82ADCA08;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r11,r11,25736
	ctx.r11.s64 = ctx.r11.s64 + 25736;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// addi r11,r10,-7880
	ctx.r11.s64 = ctx.r10.s64 + -7880;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x82ADC9E4;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82adca04
	if (ctx.cr6.eq) goto loc_82ADCA04;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
loc_82ADCA04:
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
loc_82ADCA08:
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r10,r10,3312
	ctx.r10.s64 = ctx.r10.s64 + 3312;
	// addi r11,r11,6136
	ctx.r11.s64 = ctx.r11.s64 + 6136;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r10.u32);
	// stw r10,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
	// stw r10,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r10.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82ad0700
	ctx.lr = 0x82ADCA58;
	sub_82AD0700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82adcaa8
	if (!ctx.cr6.eq) goto loc_82ADCAA8;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r11,r11,25736
	ctx.r11.s64 = ctx.r11.s64 + 25736;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// addi r11,r10,-7880
	ctx.r11.s64 = ctx.r10.s64 + -7880;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x82ADCA84;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82adcaa4
	if (ctx.cr6.eq) goto loc_82ADCAA4;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
loc_82ADCAA4:
	// stw r3,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r3.u32);
loc_82ADCAA8:
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r10,r10,5800
	ctx.r10.s64 = ctx.r10.s64 + 5800;
	// addi r11,r11,11024
	ctx.r11.s64 = ctx.r11.s64 + 11024;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// stw r10,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r10.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82ad0700
	ctx.lr = 0x82ADCAF8;
	sub_82AD0700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82adcb48
	if (!ctx.cr6.eq) goto loc_82ADCB48;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r11,r11,25736
	ctx.r11.s64 = ctx.r11.s64 + 25736;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// addi r11,r10,-7880
	ctx.r11.s64 = ctx.r10.s64 + -7880;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x82ADCB24;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82adcb44
	if (ctx.cr6.eq) goto loc_82ADCB44;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
loc_82ADCB44:
	// stw r3,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r3.u32);
loc_82ADCB48:
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r10,r10,5800
	ctx.r10.s64 = ctx.r10.s64 + 5800;
	// addi r11,r11,6136
	ctx.r11.s64 = ctx.r11.s64 + 6136;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r10.u32);
	// stw r10,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r10.u32);
	// stw r10,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r10.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82ad0700
	ctx.lr = 0x82ADCB98;
	sub_82AD0700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82adcbe8
	if (!ctx.cr6.eq) goto loc_82ADCBE8;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r11,r11,25736
	ctx.r11.s64 = ctx.r11.s64 + 25736;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// addi r11,r10,-7880
	ctx.r11.s64 = ctx.r10.s64 + -7880;
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x82ADCBC4;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82adcbe4
	if (ctx.cr6.eq) goto loc_82ADCBE4;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
loc_82ADCBE4:
	// stw r3,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r3.u32);
loc_82ADCBE8:
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r10,r10,3008
	ctx.r10.s64 = ctx.r10.s64 + 3008;
	// addi r11,r11,10488
	ctx.r11.s64 = ctx.r11.s64 + 10488;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r10.u32);
	// stw r10,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r10.u32);
	// stw r10,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r10.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82ad0700
	ctx.lr = 0x82ADCC38;
	sub_82AD0700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82adcc88
	if (!ctx.cr6.eq) goto loc_82ADCC88;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r11,r11,25736
	ctx.r11.s64 = ctx.r11.s64 + 25736;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// addi r11,r10,-7880
	ctx.r11.s64 = ctx.r10.s64 + -7880;
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x82ADCC64;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82adcc84
	if (ctx.cr6.eq) goto loc_82ADCC84;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
loc_82ADCC84:
	// stw r3,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r3.u32);
loc_82ADCC88:
	// lis r9,-32164
	ctx.r9.s64 = -2107899904;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r9,r9,3008
	ctx.r9.s64 = ctx.r9.s64 + 3008;
	// addi r10,r10,6136
	ctx.r10.s64 = ctx.r10.s64 + 6136;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,204
	ctx.r3.s64 = ctx.r31.s64 + 204;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// rldicl r8,r9,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r10,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r10.u32);
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
	// stw r10,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r10.u32);
	// bl 0x825b6538
	ctx.lr = 0x82ADCCE0;
	sub_825B6538(ctx, base);
	// lis r9,-32164
	ctx.r9.s64 = -2107899904;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r9,r9,3032
	ctx.r9.s64 = ctx.r9.s64 + 3032;
	// addi r10,r10,10488
	ctx.r10.s64 = ctx.r10.s64 + 10488;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,216
	ctx.r3.s64 = ctx.r31.s64 + 216;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// rldicl r8,r9,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r10,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r10.u32);
	// stw r10,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r10.u32);
	// stw r10,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r10.u32);
	// bl 0x825b6538
	ctx.lr = 0x82ADCD38;
	sub_825B6538(ctx, base);
	// lis r9,-32164
	ctx.r9.s64 = -2107899904;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r9,r9,3032
	ctx.r9.s64 = ctx.r9.s64 + 3032;
	// addi r10,r10,6136
	ctx.r10.s64 = ctx.r10.s64 + 6136;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,228
	ctx.r3.s64 = ctx.r31.s64 + 228;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// rldicl r8,r9,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r10,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r10.u32);
	// stw r10,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r10.u32);
	// stw r10,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r10.u32);
	// bl 0x825b6538
	ctx.lr = 0x82ADCD90;
	sub_825B6538(ctx, base);
	// lis r9,-32164
	ctx.r9.s64 = -2107899904;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r9,r9,3056
	ctx.r9.s64 = ctx.r9.s64 + 3056;
	// addi r10,r10,10488
	ctx.r10.s64 = ctx.r10.s64 + 10488;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// rldicl r8,r9,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r10,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r10.u32);
	// stw r10,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r10.u32);
	// stw r10,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r10.u32);
	// bl 0x825b6538
	ctx.lr = 0x82ADCDE8;
	sub_825B6538(ctx, base);
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r10,r10,3056
	ctx.r10.s64 = ctx.r10.s64 + 3056;
	// addi r11,r11,6136
	ctx.r11.s64 = ctx.r11.s64 + 6136;
	// addi r3,r31,252
	ctx.r3.s64 = ctx.r31.s64 + 252;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicl r10,r11,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r10,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r10.u32);
	// stw r10,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r10.u32);
	// stw r10,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r10.u32);
	// bl 0x825b6538
	ctx.lr = 0x82ADCE40;
	sub_825B6538(ctx, base);
	// lis r9,-32164
	ctx.r9.s64 = -2107899904;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r9,r9,5824
	ctx.r9.s64 = ctx.r9.s64 + 5824;
	// addi r10,r10,11024
	ctx.r10.s64 = ctx.r10.s64 + 11024;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,264
	ctx.r3.s64 = ctx.r31.s64 + 264;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// rldicl r8,r9,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r10,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r10.u32);
	// stw r10,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r10.u32);
	// stw r10,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r10.u32);
	// bl 0x825b6538
	ctx.lr = 0x82ADCE98;
	sub_825B6538(ctx, base);
	// lis r9,-32164
	ctx.r9.s64 = -2107899904;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r9,r9,5824
	ctx.r9.s64 = ctx.r9.s64 + 5824;
	// addi r10,r10,6136
	ctx.r10.s64 = ctx.r10.s64 + 6136;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,276
	ctx.r3.s64 = ctx.r31.s64 + 276;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// rldicl r8,r9,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r10,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r10.u32);
	// stw r10,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r10.u32);
	// stw r10,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r10.u32);
	// bl 0x825b6538
	ctx.lr = 0x82ADCEF0;
	sub_825B6538(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r9,-32164
	ctx.r9.s64 = -2107899904;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r9,r9,3536
	ctx.r9.s64 = ctx.r9.s64 + 3536;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r10,r10,10488
	ctx.r10.s64 = ctx.r10.s64 + 10488;
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rldicl r8,r9,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// stw r10,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r10.u32);
	// stw r10,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r10.u32);
	// bl 0x825b6538
	ctx.lr = 0x82ADCF48;
	sub_825B6538(ctx, base);
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r10,r10,3536
	ctx.r10.s64 = ctx.r10.s64 + 3536;
	// addi r11,r11,6136
	ctx.r11.s64 = ctx.r11.s64 + 6136;
	// addi r3,r31,300
	ctx.r3.s64 = ctx.r31.s64 + 300;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicl r10,r11,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x825b6538
	ctx.lr = 0x82ADCFA0;
	sub_825B6538(ctx, base);
	// lis r9,-32164
	ctx.r9.s64 = -2107899904;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r9,r9,3560
	ctx.r9.s64 = ctx.r9.s64 + 3560;
	// addi r10,r10,10488
	ctx.r10.s64 = ctx.r10.s64 + 10488;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,312
	ctx.r3.s64 = ctx.r31.s64 + 312;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// rldicl r8,r9,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// stw r10,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r10.u32);
	// stw r10,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r10.u32);
	// bl 0x825b6538
	ctx.lr = 0x82ADCFF8;
	sub_825B6538(ctx, base);
	// lis r9,-32164
	ctx.r9.s64 = -2107899904;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r9,r9,3560
	ctx.r9.s64 = ctx.r9.s64 + 3560;
	// addi r10,r10,6136
	ctx.r10.s64 = ctx.r10.s64 + 6136;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// rldicl r8,r9,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r3,r31,324
	ctx.r3.s64 = ctx.r31.s64 + 324;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r10,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r10.u32);
	// stw r10,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r10.u32);
	// stw r10,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r10.u32);
	// bl 0x825b6538
	ctx.lr = 0x82ADD050;
	sub_825B6538(ctx, base);
	// lis r9,-32164
	ctx.r9.s64 = -2107899904;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r9,r9,3584
	ctx.r9.s64 = ctx.r9.s64 + 3584;
	// addi r10,r10,10488
	ctx.r10.s64 = ctx.r10.s64 + 10488;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// rldicl r8,r9,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r10,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r10.u32);
	// stw r10,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r10.u32);
	// stw r10,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r10.u32);
	// bl 0x825b6538
	ctx.lr = 0x82ADD0A8;
	sub_825B6538(ctx, base);
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lis r9,-32164
	ctx.r9.s64 = -2107899904;
	// addi r10,r10,6136
	ctx.r10.s64 = ctx.r10.s64 + 6136;
	// addi r9,r9,3584
	ctx.r9.s64 = ctx.r9.s64 + 3584;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,348
	ctx.r3.s64 = ctx.r31.s64 + 348;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// rldicl r8,r9,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r10,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r10.u32);
	// stw r10,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r10.u32);
	// stw r10,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r10.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x825b6538
	ctx.lr = 0x82ADD100;
	sub_825B6538(ctx, base);
	// lis r9,-32164
	ctx.r9.s64 = -2107899904;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r9,r9,3632
	ctx.r9.s64 = ctx.r9.s64 + 3632;
	// addi r10,r10,11024
	ctx.r10.s64 = ctx.r10.s64 + 11024;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,360
	ctx.r3.s64 = ctx.r31.s64 + 360;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// rldicl r8,r9,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r10,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r10.u32);
	// stw r10,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r10.u32);
	// stw r10,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r10.u32);
	// bl 0x825b6538
	ctx.lr = 0x82ADD158;
	sub_825B6538(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r9,-32164
	ctx.r9.s64 = -2107899904;
	// addi r9,r9,3632
	ctx.r9.s64 = ctx.r9.s64 + 3632;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r3,r31,372
	ctx.r3.s64 = ctx.r31.s64 + 372;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r10,r10,6136
	ctx.r10.s64 = ctx.r10.s64 + 6136;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rldicl r8,r9,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r10,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r10.u32);
	// stw r10,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r10.u32);
	// stw r10,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r10.u32);
	// bl 0x825b6538
	ctx.lr = 0x82ADD1B0;
	sub_825B6538(ctx, base);
	// lis r9,-32164
	ctx.r9.s64 = -2107899904;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r9,r9,3728
	ctx.r9.s64 = ctx.r9.s64 + 3728;
	// addi r10,r10,10488
	ctx.r10.s64 = ctx.r10.s64 + 10488;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,384
	ctx.r3.s64 = ctx.r31.s64 + 384;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// rldicl r8,r9,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r10,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r10.u32);
	// stw r10,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r10.u32);
	// stw r10,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r10.u32);
	// bl 0x825b6538
	ctx.lr = 0x82ADD208;
	sub_825B6538(ctx, base);
	// lis r9,-32164
	ctx.r9.s64 = -2107899904;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r9,r9,3728
	ctx.r9.s64 = ctx.r9.s64 + 3728;
	// addi r10,r10,6136
	ctx.r10.s64 = ctx.r10.s64 + 6136;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,396
	ctx.r3.s64 = ctx.r31.s64 + 396;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// rldicl r8,r9,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r10,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r10.u32);
	// stw r10,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r10.u32);
	// stw r10,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r10.u32);
	// bl 0x825b6538
	ctx.lr = 0x82ADD260;
	sub_825B6538(ctx, base);
	// lis r9,-32164
	ctx.r9.s64 = -2107899904;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r9,r9,3752
	ctx.r9.s64 = ctx.r9.s64 + 3752;
	// addi r10,r10,10488
	ctx.r10.s64 = ctx.r10.s64 + 10488;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// rldicl r8,r9,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// addi r3,r31,408
	ctx.r3.s64 = ctx.r31.s64 + 408;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r10,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r10.u32);
	// stw r10,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r10.u32);
	// stw r10,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r10.u32);
	// bl 0x825b6538
	ctx.lr = 0x82ADD2B8;
	sub_825B6538(ctx, base);
	// lis r9,-32164
	ctx.r9.s64 = -2107899904;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r9,r9,3752
	ctx.r9.s64 = ctx.r9.s64 + 3752;
	// addi r10,r10,6136
	ctx.r10.s64 = ctx.r10.s64 + 6136;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,420
	ctx.r3.s64 = ctx.r31.s64 + 420;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// rldicl r8,r9,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r10,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r10.u32);
	// stw r10,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r10.u32);
	// stw r10,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r10.u32);
	// bl 0x825b6538
	ctx.lr = 0x82ADD310;
	sub_825B6538(ctx, base);
	// lis r9,-32164
	ctx.r9.s64 = -2107899904;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r9,r9,3776
	ctx.r9.s64 = ctx.r9.s64 + 3776;
	// addi r10,r10,10488
	ctx.r10.s64 = ctx.r10.s64 + 10488;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,432
	ctx.r3.s64 = ctx.r31.s64 + 432;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// rldicl r8,r9,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r10,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r10.u32);
	// stw r10,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r10.u32);
	// stw r10,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r10.u32);
	// bl 0x825b6538
	ctx.lr = 0x82ADD368;
	sub_825B6538(ctx, base);
	// lis r9,-32164
	ctx.r9.s64 = -2107899904;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r9,r9,3776
	ctx.r9.s64 = ctx.r9.s64 + 3776;
	// addi r10,r10,6136
	ctx.r10.s64 = ctx.r10.s64 + 6136;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,444
	ctx.r3.s64 = ctx.r31.s64 + 444;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// rldicl r8,r9,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r10,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r10.u32);
	// stw r10,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r10.u32);
	// stw r10,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r10.u32);
	// bl 0x825b6538
	ctx.lr = 0x82ADD3C0;
	sub_825B6538(ctx, base);
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r10,r10,3824
	ctx.r10.s64 = ctx.r10.s64 + 3824;
	// addi r11,r11,11024
	ctx.r11.s64 = ctx.r11.s64 + 11024;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r3,r31,456
	ctx.r3.s64 = ctx.r31.s64 + 456;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicl r10,r11,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r11,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r11.u32);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// stw r10,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r10.u32);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r10,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r10.u32);
	// bl 0x825b6538
	ctx.lr = 0x82ADD41C;
	sub_825B6538(ctx, base);
	// lis r9,-32164
	ctx.r9.s64 = -2107899904;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r9,r9,3824
	ctx.r9.s64 = ctx.r9.s64 + 3824;
	// addi r10,r10,6136
	ctx.r10.s64 = ctx.r10.s64 + 6136;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,468
	ctx.r3.s64 = ctx.r31.s64 + 468;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// rldicl r8,r9,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r10,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r10.u32);
	// stw r10,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r10.u32);
	// stw r10,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r10.u32);
	// bl 0x825b6538
	ctx.lr = 0x82ADD474;
	sub_825B6538(ctx, base);
	// lis r9,-32164
	ctx.r9.s64 = -2107899904;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r9,r9,3920
	ctx.r9.s64 = ctx.r9.s64 + 3920;
	// addi r10,r10,10488
	ctx.r10.s64 = ctx.r10.s64 + 10488;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,480
	ctx.r3.s64 = ctx.r31.s64 + 480;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// rldicl r8,r9,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r10,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r10.u32);
	// stw r10,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r10.u32);
	// stw r10,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r10.u32);
	// bl 0x825b6538
	ctx.lr = 0x82ADD4CC;
	sub_825B6538(ctx, base);
	// lis r9,-32164
	ctx.r9.s64 = -2107899904;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r9,r9,3920
	ctx.r9.s64 = ctx.r9.s64 + 3920;
	// addi r10,r10,6136
	ctx.r10.s64 = ctx.r10.s64 + 6136;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// rldicl r8,r9,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// addi r3,r31,492
	ctx.r3.s64 = ctx.r31.s64 + 492;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r10,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r10.u32);
	// stw r10,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r10.u32);
	// stw r10,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r10.u32);
	// bl 0x825b6538
	ctx.lr = 0x82ADD524;
	sub_825B6538(ctx, base);
	// lis r9,-32164
	ctx.r9.s64 = -2107899904;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r9,r9,3944
	ctx.r9.s64 = ctx.r9.s64 + 3944;
	// addi r10,r10,10488
	ctx.r10.s64 = ctx.r10.s64 + 10488;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,504
	ctx.r3.s64 = ctx.r31.s64 + 504;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r10,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r10.u32);
	// stw r10,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
	// stw r10,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r10.u32);
	// bl 0x825b6538
	ctx.lr = 0x82ADD57C;
	sub_825B6538(ctx, base);
	// lis r9,-32164
	ctx.r9.s64 = -2107899904;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r9,r9,3944
	ctx.r9.s64 = ctx.r9.s64 + 3944;
	// addi r10,r10,6136
	ctx.r10.s64 = ctx.r10.s64 + 6136;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,516
	ctx.r3.s64 = ctx.r31.s64 + 516;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// rldicl r8,r9,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r10,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r10.u32);
	// stw r10,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r10.u32);
	// stw r10,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r10.u32);
	// bl 0x825b6538
	ctx.lr = 0x82ADD5D4;
	sub_825B6538(ctx, base);
	// lis r9,-32164
	ctx.r9.s64 = -2107899904;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r9,r9,3968
	ctx.r9.s64 = ctx.r9.s64 + 3968;
	// addi r10,r10,10488
	ctx.r10.s64 = ctx.r10.s64 + 10488;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// rldicl r8,r9,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r10,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r10.u32);
	// stw r10,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r10.u32);
	// stw r10,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r10.u32);
	// bl 0x825b6538
	ctx.lr = 0x82ADD62C;
	sub_825B6538(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r9,-32164
	ctx.r9.s64 = -2107899904;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r9,r9,3968
	ctx.r9.s64 = ctx.r9.s64 + 3968;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// addi r10,r10,6136
	ctx.r10.s64 = ctx.r10.s64 + 6136;
	// addi r3,r31,540
	ctx.r3.s64 = ctx.r31.s64 + 540;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rldicl r8,r9,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r10,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r10.u32);
	// stw r10,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r10.u32);
	// stw r10,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r10.u32);
	// bl 0x825b6538
	ctx.lr = 0x82ADD684;
	sub_825B6538(ctx, base);
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lis r9,-32164
	ctx.r9.s64 = -2107899904;
	// addi r10,r10,11024
	ctx.r10.s64 = ctx.r10.s64 + 11024;
	// addi r9,r9,4016
	ctx.r9.s64 = ctx.r9.s64 + 4016;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,552
	ctx.r3.s64 = ctx.r31.s64 + 552;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// rldicl r8,r9,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r10,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r10.u32);
	// stw r10,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r10.u32);
	// stw r10,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r10.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x825b6538
	ctx.lr = 0x82ADD6DC;
	sub_825B6538(ctx, base);
	// lis r9,-32164
	ctx.r9.s64 = -2107899904;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r9,r9,4016
	ctx.r9.s64 = ctx.r9.s64 + 4016;
	// addi r10,r10,6136
	ctx.r10.s64 = ctx.r10.s64 + 6136;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,564
	ctx.r3.s64 = ctx.r31.s64 + 564;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// rldicl r8,r9,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r10,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r10.u32);
	// stw r10,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r10.u32);
	// stw r10,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r10.u32);
	// bl 0x825b6538
	ctx.lr = 0x82ADD734;
	sub_825B6538(ctx, base);
	// lis r9,-32164
	ctx.r9.s64 = -2107899904;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r9,r9,4112
	ctx.r9.s64 = ctx.r9.s64 + 4112;
	// addi r10,r10,10488
	ctx.r10.s64 = ctx.r10.s64 + 10488;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,576
	ctx.r3.s64 = ctx.r31.s64 + 576;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// rldicl r8,r9,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r10,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r10.u32);
	// stw r10,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r10.u32);
	// stw r10,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r10.u32);
	// bl 0x825b6538
	ctx.lr = 0x82ADD78C;
	sub_825B6538(ctx, base);
	// lis r9,-32164
	ctx.r9.s64 = -2107899904;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r9,r9,4112
	ctx.r9.s64 = ctx.r9.s64 + 4112;
	// addi r10,r10,6136
	ctx.r10.s64 = ctx.r10.s64 + 6136;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,588
	ctx.r3.s64 = ctx.r31.s64 + 588;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// rldicl r8,r9,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r10,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r10.u32);
	// stw r10,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r10.u32);
	// stw r10,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r10.u32);
	// bl 0x825b6538
	ctx.lr = 0x82ADD7E4;
	sub_825B6538(ctx, base);
	// lis r9,-32164
	ctx.r9.s64 = -2107899904;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r9,r9,4136
	ctx.r9.s64 = ctx.r9.s64 + 4136;
	// addi r10,r10,10488
	ctx.r10.s64 = ctx.r10.s64 + 10488;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// rldicl r7,r9,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r10,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r10.u32);
	// stw r10,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r10.u32);
	// stw r30,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r30.u32);
	// bl 0x825b6538
	ctx.lr = 0x82ADD840;
	sub_825B6538(ctx, base);
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// addi r11,r11,4136
	ctx.r11.s64 = ctx.r11.s64 + 4136;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,612
	ctx.r3.s64 = ctx.r31.s64 + 612;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r11,r11,6136
	ctx.r11.s64 = ctx.r11.s64 + 6136;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicl r9,r11,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x825b6760
	ctx.lr = 0x82ADD884;
	sub_825B6760(ctx, base);
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r10,r10,4160
	ctx.r10.s64 = ctx.r10.s64 + 4160;
	// addi r11,r11,10488
	ctx.r11.s64 = ctx.r11.s64 + 10488;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicl r10,r11,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r3,r31,624
	ctx.r3.s64 = ctx.r31.s64 + 624;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x825b6760
	ctx.lr = 0x82ADD8C8;
	sub_825B6760(ctx, base);
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r10,r10,4160
	ctx.r10.s64 = ctx.r10.s64 + 4160;
	// addi r11,r11,6136
	ctx.r11.s64 = ctx.r11.s64 + 6136;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,636
	ctx.r3.s64 = ctx.r31.s64 + 636;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicl r10,r11,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x825b6760
	ctx.lr = 0x82ADD90C;
	sub_825B6760(ctx, base);
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r10,r10,4472
	ctx.r10.s64 = ctx.r10.s64 + 4472;
	// addi r11,r11,10488
	ctx.r11.s64 = ctx.r11.s64 + 10488;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,648
	ctx.r3.s64 = ctx.r31.s64 + 648;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicl r10,r11,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x825b6760
	ctx.lr = 0x82ADD950;
	sub_825B6760(ctx, base);
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r10,r10,4472
	ctx.r10.s64 = ctx.r10.s64 + 4472;
	// addi r11,r11,6136
	ctx.r11.s64 = ctx.r11.s64 + 6136;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,660
	ctx.r3.s64 = ctx.r31.s64 + 660;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicl r10,r11,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x825b6760
	ctx.lr = 0x82ADD994;
	sub_825B6760(ctx, base);
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r10,r10,4776
	ctx.r10.s64 = ctx.r10.s64 + 4776;
	// addi r11,r11,11024
	ctx.r11.s64 = ctx.r11.s64 + 11024;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,672
	ctx.r3.s64 = ctx.r31.s64 + 672;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicl r10,r11,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x825b6760
	ctx.lr = 0x82ADD9D8;
	sub_825B6760(ctx, base);
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// addi r10,r10,4776
	ctx.r10.s64 = ctx.r10.s64 + 4776;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r11,r11,6136
	ctx.r11.s64 = ctx.r11.s64 + 6136;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,684
	ctx.r3.s64 = ctx.r31.s64 + 684;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicl r10,r11,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x825b6760
	ctx.lr = 0x82ADDA1C;
	sub_825B6760(ctx, base);
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r10,r10,5392
	ctx.r10.s64 = ctx.r10.s64 + 5392;
	// addi r11,r11,10488
	ctx.r11.s64 = ctx.r11.s64 + 10488;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,696
	ctx.r3.s64 = ctx.r31.s64 + 696;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicl r10,r11,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x825b6760
	ctx.lr = 0x82ADDA60;
	sub_825B6760(ctx, base);
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r10,r10,5392
	ctx.r10.s64 = ctx.r10.s64 + 5392;
	// addi r11,r11,6136
	ctx.r11.s64 = ctx.r11.s64 + 6136;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,708
	ctx.r3.s64 = ctx.r31.s64 + 708;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicl r10,r11,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x825b6760
	ctx.lr = 0x82ADDAA4;
	sub_825B6760(ctx, base);
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r10,r10,5408
	ctx.r10.s64 = ctx.r10.s64 + 5408;
	// addi r11,r11,10488
	ctx.r11.s64 = ctx.r11.s64 + 10488;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,720
	ctx.r3.s64 = ctx.r31.s64 + 720;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicl r10,r11,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x825b6760
	ctx.lr = 0x82ADDAE8;
	sub_825B6760(ctx, base);
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r10,r10,5408
	ctx.r10.s64 = ctx.r10.s64 + 5408;
	// addi r11,r11,6136
	ctx.r11.s64 = ctx.r11.s64 + 6136;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,732
	ctx.r3.s64 = ctx.r31.s64 + 732;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicl r10,r11,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x825b6760
	ctx.lr = 0x82ADDB2C;
	sub_825B6760(ctx, base);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r10,r10,5424
	ctx.r10.s64 = ctx.r10.s64 + 5424;
	// addi r11,r11,10488
	ctx.r11.s64 = ctx.r11.s64 + 10488;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,744
	ctx.r3.s64 = ctx.r31.s64 + 744;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicl r10,r11,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x825b6760
	ctx.lr = 0x82ADDB70;
	sub_825B6760(ctx, base);
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r10,r10,5424
	ctx.r10.s64 = ctx.r10.s64 + 5424;
	// addi r11,r11,6136
	ctx.r11.s64 = ctx.r11.s64 + 6136;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,756
	ctx.r3.s64 = ctx.r31.s64 + 756;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicl r10,r11,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x825b6760
	ctx.lr = 0x82ADDBB4;
	sub_825B6760(ctx, base);
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r10,r10,4864
	ctx.r10.s64 = ctx.r10.s64 + 4864;
	// addi r11,r11,10488
	ctx.r11.s64 = ctx.r11.s64 + 10488;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,768
	ctx.r3.s64 = ctx.r31.s64 + 768;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicl r10,r11,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x825b6760
	ctx.lr = 0x82ADDBF8;
	sub_825B6760(ctx, base);
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r10,r10,4864
	ctx.r10.s64 = ctx.r10.s64 + 4864;
	// addi r11,r11,6136
	ctx.r11.s64 = ctx.r11.s64 + 6136;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,780
	ctx.r3.s64 = ctx.r31.s64 + 780;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicl r10,r11,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x825b6760
	ctx.lr = 0x82ADDC3C;
	sub_825B6760(ctx, base);
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r10,r10,5856
	ctx.r10.s64 = ctx.r10.s64 + 5856;
	// addi r11,r11,11024
	ctx.r11.s64 = ctx.r11.s64 + 11024;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicl r10,r11,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// addi r3,r31,792
	ctx.r3.s64 = ctx.r31.s64 + 792;
	// bl 0x825b6760
	ctx.lr = 0x82ADDC80;
	sub_825B6760(ctx, base);
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r10,r10,5856
	ctx.r10.s64 = ctx.r10.s64 + 5856;
	// addi r11,r11,6136
	ctx.r11.s64 = ctx.r11.s64 + 6136;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,804
	ctx.r3.s64 = ctx.r31.s64 + 804;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicl r10,r11,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x825b6760
	ctx.lr = 0x82ADDCC4;
	sub_825B6760(ctx, base);
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r10,r10,4880
	ctx.r10.s64 = ctx.r10.s64 + 4880;
	// addi r11,r11,10488
	ctx.r11.s64 = ctx.r11.s64 + 10488;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,816
	ctx.r3.s64 = ctx.r31.s64 + 816;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicl r10,r11,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x825b6760
	ctx.lr = 0x82ADDD08;
	sub_825B6760(ctx, base);
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r10,r10,4880
	ctx.r10.s64 = ctx.r10.s64 + 4880;
	// addi r11,r11,6136
	ctx.r11.s64 = ctx.r11.s64 + 6136;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,828
	ctx.r3.s64 = ctx.r31.s64 + 828;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicl r10,r11,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x825b6760
	ctx.lr = 0x82ADDD4C;
	sub_825B6760(ctx, base);
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r10,r10,4896
	ctx.r10.s64 = ctx.r10.s64 + 4896;
	// addi r11,r11,10488
	ctx.r11.s64 = ctx.r11.s64 + 10488;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,840
	ctx.r3.s64 = ctx.r31.s64 + 840;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicl r10,r11,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x825b6760
	ctx.lr = 0x82ADDD90;
	sub_825B6760(ctx, base);
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r10,r10,4896
	ctx.r10.s64 = ctx.r10.s64 + 4896;
	// addi r11,r11,6136
	ctx.r11.s64 = ctx.r11.s64 + 6136;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicl r10,r11,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r3,r31,852
	ctx.r3.s64 = ctx.r31.s64 + 852;
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x825b6760
	ctx.lr = 0x82ADDDD4;
	sub_825B6760(ctx, base);
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r10,r10,4912
	ctx.r10.s64 = ctx.r10.s64 + 4912;
	// addi r11,r11,10488
	ctx.r11.s64 = ctx.r11.s64 + 10488;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,864
	ctx.r3.s64 = ctx.r31.s64 + 864;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicl r10,r11,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x825b6760
	ctx.lr = 0x82ADDE18;
	sub_825B6760(ctx, base);
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r10,r10,4912
	ctx.r10.s64 = ctx.r10.s64 + 4912;
	// addi r11,r11,6136
	ctx.r11.s64 = ctx.r11.s64 + 6136;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,876
	ctx.r3.s64 = ctx.r31.s64 + 876;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicl r10,r11,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x825b6760
	ctx.lr = 0x82ADDE5C;
	sub_825B6760(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-30464
	ctx.r3.s64 = ctx.r11.s64 + -30464;
	// bl 0x826ded00
	ctx.lr = 0x82ADDE68;
	sub_826DED00(ctx, base);
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

__attribute__((alias("__imp__sub_82ADDE80"))) PPC_WEAK_FUNC(sub_82ADDE80);
PPC_FUNC_IMPL(__imp__sub_82ADDE80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// lfs f0,-7280(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -7280);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r11,r11,-7264
	ctx.r11.s64 = ctx.r11.s64 + -7264;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADDEA0"))) PPC_WEAK_FUNC(sub_82ADDEA0);
PPC_FUNC_IMPL(__imp__sub_82ADDEA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,-18576
	ctx.r3.s64 = ctx.r11.s64 + -18576;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// fmr f9,f12
	ctx.f9.f64 = ctx.f12.f64;
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// fmr f7,f12
	ctx.f7.f64 = ctx.f12.f64;
	// lfs f11,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f11.f64 = double(temp.f32);
	// fmr f5,f12
	ctx.f5.f64 = ctx.f12.f64;
	// fmr f6,f11
	ctx.f6.f64 = ctx.f11.f64;
	// fmr f4,f12
	ctx.f4.f64 = ctx.f12.f64;
	// fmr f3,f12
	ctx.f3.f64 = ctx.f12.f64;
	// fmr f2,f12
	ctx.f2.f64 = ctx.f12.f64;
	// fmr f1,f11
	ctx.f1.f64 = ctx.f11.f64;
	// bl 0x8218c3c0
	ctx.lr = 0x82ADDEF0;
	sub_8218C3C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADDF00"))) PPC_WEAK_FUNC(sub_82ADDF00);
PPC_FUNC_IMPL(__imp__sub_82ADDF00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,-18512
	ctx.r3.s64 = ctx.r11.s64 + -18512;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f12.f64 = double(temp.f32);
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// fmr f9,f12
	ctx.f9.f64 = ctx.f12.f64;
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// fmr f7,f12
	ctx.f7.f64 = ctx.f12.f64;
	// fmr f6,f12
	ctx.f6.f64 = ctx.f12.f64;
	// fmr f5,f12
	ctx.f5.f64 = ctx.f12.f64;
	// fmr f4,f12
	ctx.f4.f64 = ctx.f12.f64;
	// fmr f3,f12
	ctx.f3.f64 = ctx.f12.f64;
	// fmr f2,f12
	ctx.f2.f64 = ctx.f12.f64;
	// fmr f1,f12
	ctx.f1.f64 = ctx.f12.f64;
	// bl 0x8218c3c0
	ctx.lr = 0x82ADDF4C;
	sub_8218C3C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADDF60"))) PPC_WEAK_FUNC(sub_82ADDF60);
PPC_FUNC_IMPL(__imp__sub_82ADDF60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,-18400
	ctx.r3.s64 = ctx.r11.s64 + -18400;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f11,14088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f11,148(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmr f6,f11
	ctx.f6.f64 = ctx.f11.f64;
	// fmr f1,f11
	ctx.f1.f64 = ctx.f11.f64;
	// lfs f13,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// fmr f9,f13
	ctx.f9.f64 = ctx.f13.f64;
	// fmr f8,f13
	ctx.f8.f64 = ctx.f13.f64;
	// fmr f7,f13
	ctx.f7.f64 = ctx.f13.f64;
	// fmr f5,f13
	ctx.f5.f64 = ctx.f13.f64;
	// fmr f4,f13
	ctx.f4.f64 = ctx.f13.f64;
	// fmr f3,f13
	ctx.f3.f64 = ctx.f13.f64;
	// fmr f2,f13
	ctx.f2.f64 = ctx.f13.f64;
	// bl 0x825b4358
	ctx.lr = 0x82ADDFC0;
	sub_825B4358(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADDFD0"))) PPC_WEAK_FUNC(sub_82ADDFD0);
PPC_FUNC_IMPL(__imp__sub_82ADDFD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,-18336
	ctx.r3.s64 = ctx.r11.s64 + -18336;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// fmr f9,f13
	ctx.f9.f64 = ctx.f13.f64;
	// fmr f8,f13
	ctx.f8.f64 = ctx.f13.f64;
	// fmr f7,f13
	ctx.f7.f64 = ctx.f13.f64;
	// fmr f6,f13
	ctx.f6.f64 = ctx.f13.f64;
	// fmr f5,f13
	ctx.f5.f64 = ctx.f13.f64;
	// fmr f4,f13
	ctx.f4.f64 = ctx.f13.f64;
	// fmr f3,f13
	ctx.f3.f64 = ctx.f13.f64;
	// fmr f2,f13
	ctx.f2.f64 = ctx.f13.f64;
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
	// bl 0x825b4358
	ctx.lr = 0x82ADE02C;
	sub_825B4358(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADE040"))) PPC_WEAK_FUNC(sub_82ADE040);
PPC_FUNC_IMPL(__imp__sub_82ADE040) {
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
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r31,r11,4088
	ctx.r31.s64 = ctx.r11.s64 + 4088;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r4,r11,-12488
	ctx.r4.s64 = ctx.r11.s64 + -12488;
	// bl 0x82161e08
	ctx.lr = 0x82ADE06C;
	sub_82161E08(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,-12496
	ctx.r4.s64 = ctx.r11.s64 + -12496;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stb r11,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r11.u8);
	// bl 0x82161e08
	ctx.lr = 0x82ADE09C;
	sub_82161E08(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r11,-12504
	ctx.r4.s64 = ctx.r11.s64 + -12504;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stb r11,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r11.u8);
	// bl 0x82161e08
	ctx.lr = 0x82ADE0CC;
	sub_82161E08(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r11,-12516
	ctx.r4.s64 = ctx.r11.s64 + -12516;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stb r11,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r11.u8);
	// bl 0x82161e08
	ctx.lr = 0x82ADE0FC;
	sub_82161E08(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r11,-12524
	ctx.r4.s64 = ctx.r11.s64 + -12524;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stb r11,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r11.u8);
	// bl 0x82161e08
	ctx.lr = 0x82ADE12C;
	sub_82161E08(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r11,-12536
	ctx.r4.s64 = ctx.r11.s64 + -12536;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r3,r31,164
	ctx.r3.s64 = ctx.r31.s64 + 164;
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stb r11,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r11.u8);
	// bl 0x82161e08
	ctx.lr = 0x82ADE15C;
	sub_82161E08(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r11,-12552
	ctx.r4.s64 = ctx.r11.s64 + -12552;
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r3,r31,196
	ctx.r3.s64 = ctx.r31.s64 + 196;
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// stb r11,200(r31)
	PPC_STORE_U8(ctx.r31.u32 + 200, ctx.r11.u8);
	// bl 0x82161e08
	ctx.lr = 0x82ADE18C;
	sub_82161E08(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-12560
	ctx.r4.s64 = ctx.r11.s64 + -12560;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r3,r31,228
	ctx.r3.s64 = ctx.r31.s64 + 228;
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// stb r11,232(r31)
	PPC_STORE_U8(ctx.r31.u32 + 232, ctx.r11.u8);
	// bl 0x82161e08
	ctx.lr = 0x82ADE1BC;
	sub_82161E08(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-29888
	ctx.r3.s64 = ctx.r11.s64 + -29888;
	// bl 0x826ded00
	ctx.lr = 0x82ADE1C8;
	sub_826DED00(ctx, base);
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

__attribute__((alias("__imp__sub_82ADE1E0"))) PPC_WEAK_FUNC(sub_82ADE1E0);
PPC_FUNC_IMPL(__imp__sub_82ADE1E0) {
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
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r31,r11,4344
	ctx.r31.s64 = ctx.r11.s64 + 4344;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r4,r11,-12424
	ctx.r4.s64 = ctx.r11.s64 + -12424;
	// bl 0x82161e08
	ctx.lr = 0x82ADE20C;
	sub_82161E08(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r11,-12440
	ctx.r4.s64 = ctx.r11.s64 + -12440;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stb r11,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r11.u8);
	// bl 0x82161e08
	ctx.lr = 0x82ADE23C;
	sub_82161E08(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r11,-12448
	ctx.r4.s64 = ctx.r11.s64 + -12448;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stb r11,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r11.u8);
	// bl 0x82161e08
	ctx.lr = 0x82ADE26C;
	sub_82161E08(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r11,-12456
	ctx.r4.s64 = ctx.r11.s64 + -12456;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stb r11,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r11.u8);
	// bl 0x82161e08
	ctx.lr = 0x82ADE29C;
	sub_82161E08(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r11,-12468
	ctx.r4.s64 = ctx.r11.s64 + -12468;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stb r11,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r11.u8);
	// bl 0x82161e08
	ctx.lr = 0x82ADE2CC;
	sub_82161E08(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r11,-12480
	ctx.r4.s64 = ctx.r11.s64 + -12480;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r3,r31,164
	ctx.r3.s64 = ctx.r31.s64 + 164;
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stb r11,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r11.u8);
	// bl 0x82161e08
	ctx.lr = 0x82ADE2FC;
	sub_82161E08(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-29792
	ctx.r3.s64 = ctx.r11.s64 + -29792;
	// bl 0x826ded00
	ctx.lr = 0x82ADE308;
	sub_826DED00(ctx, base);
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

__attribute__((alias("__imp__sub_82ADE320"))) PPC_WEAK_FUNC(sub_82ADE320);
PPC_FUNC_IMPL(__imp__sub_82ADE320) {
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
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r31,r11,4536
	ctx.r31.s64 = ctx.r11.s64 + 4536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r4,r11,-12356
	ctx.r4.s64 = ctx.r11.s64 + -12356;
	// bl 0x82161e08
	ctx.lr = 0x82ADE34C;
	sub_82161E08(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,-12364
	ctx.r4.s64 = ctx.r11.s64 + -12364;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stb r11,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r11.u8);
	// bl 0x82161e08
	ctx.lr = 0x82ADE37C;
	sub_82161E08(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r11,-12372
	ctx.r4.s64 = ctx.r11.s64 + -12372;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stb r11,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r11.u8);
	// bl 0x82161e08
	ctx.lr = 0x82ADE3AC;
	sub_82161E08(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r11,-12380
	ctx.r4.s64 = ctx.r11.s64 + -12380;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stb r11,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r11.u8);
	// bl 0x82161e08
	ctx.lr = 0x82ADE3DC;
	sub_82161E08(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r11,-12388
	ctx.r4.s64 = ctx.r11.s64 + -12388;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stb r11,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r11.u8);
	// bl 0x82161e08
	ctx.lr = 0x82ADE40C;
	sub_82161E08(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r11,-12396
	ctx.r4.s64 = ctx.r11.s64 + -12396;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r3,r31,164
	ctx.r3.s64 = ctx.r31.s64 + 164;
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stb r11,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r11.u8);
	// bl 0x82161e08
	ctx.lr = 0x82ADE43C;
	sub_82161E08(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,-12404
	ctx.r4.s64 = ctx.r11.s64 + -12404;
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r3,r31,196
	ctx.r3.s64 = ctx.r31.s64 + 196;
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// stb r11,200(r31)
	PPC_STORE_U8(ctx.r31.u32 + 200, ctx.r11.u8);
	// bl 0x82161e08
	ctx.lr = 0x82ADE46C;
	sub_82161E08(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-12412
	ctx.r4.s64 = ctx.r11.s64 + -12412;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r31,228
	ctx.r3.s64 = ctx.r31.s64 + 228;
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// stb r11,232(r31)
	PPC_STORE_U8(ctx.r31.u32 + 232, ctx.r11.u8);
	// bl 0x82161e08
	ctx.lr = 0x82ADE49C;
	sub_82161E08(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-29696
	ctx.r3.s64 = ctx.r11.s64 + -29696;
	// bl 0x826ded00
	ctx.lr = 0x82ADE4A8;
	sub_826DED00(ctx, base);
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

__attribute__((alias("__imp__sub_82ADE4C0"))) PPC_WEAK_FUNC(sub_82ADE4C0);
PPC_FUNC_IMPL(__imp__sub_82ADE4C0) {
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
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r31,r11,4792
	ctx.r31.s64 = ctx.r11.s64 + 4792;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r4,r11,-12288
	ctx.r4.s64 = ctx.r11.s64 + -12288;
	// bl 0x82161e08
	ctx.lr = 0x82ADE4EC;
	sub_82161E08(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r4,r11,-12304
	ctx.r4.s64 = ctx.r11.s64 + -12304;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stb r11,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r11.u8);
	// bl 0x82161e08
	ctx.lr = 0x82ADE51C;
	sub_82161E08(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r4,r11,-12320
	ctx.r4.s64 = ctx.r11.s64 + -12320;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stb r11,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r11.u8);
	// bl 0x82161e08
	ctx.lr = 0x82ADE54C;
	sub_82161E08(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,-12324
	ctx.r4.s64 = ctx.r11.s64 + -12324;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stb r11,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r11.u8);
	// bl 0x82161e08
	ctx.lr = 0x82ADE57C;
	sub_82161E08(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,-12332
	ctx.r4.s64 = ctx.r11.s64 + -12332;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stb r11,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r11.u8);
	// bl 0x82161e08
	ctx.lr = 0x82ADE5AC;
	sub_82161E08(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r11,-12340
	ctx.r4.s64 = ctx.r11.s64 + -12340;
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r3,r31,164
	ctx.r3.s64 = ctx.r31.s64 + 164;
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stb r11,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r11.u8);
	// bl 0x82161e08
	ctx.lr = 0x82ADE5DC;
	sub_82161E08(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r11,-12348
	ctx.r4.s64 = ctx.r11.s64 + -12348;
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r3,r31,196
	ctx.r3.s64 = ctx.r31.s64 + 196;
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// stb r11,200(r31)
	PPC_STORE_U8(ctx.r31.u32 + 200, ctx.r11.u8);
	// bl 0x82161e08
	ctx.lr = 0x82ADE60C;
	sub_82161E08(ctx, base);
	// lis r10,-32081
	ctx.r10.s64 = -2102460416;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r10,-29600
	ctx.r3.s64 = ctx.r10.s64 + -29600;
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// stb r11,232(r31)
	PPC_STORE_U8(ctx.r31.u32 + 232, ctx.r11.u8);
	// bl 0x826ded00
	ctx.lr = 0x82ADE62C;
	sub_826DED00(ctx, base);
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

__attribute__((alias("__imp__sub_82ADE640"))) PPC_WEAK_FUNC(sub_82ADE640);
PPC_FUNC_IMPL(__imp__sub_82ADE640) {
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
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r31,r11,5048
	ctx.r31.s64 = ctx.r11.s64 + 5048;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r4,r11,-28832
	ctx.r4.s64 = ctx.r11.s64 + -28832;
	// bl 0x82161e08
	ctx.lr = 0x82ADE66C;
	sub_82161E08(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r11,-12268
	ctx.r4.s64 = ctx.r11.s64 + -12268;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stb r11,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r11.u8);
	// bl 0x82161e08
	ctx.lr = 0x82ADE69C;
	sub_82161E08(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r11,-12276
	ctx.r4.s64 = ctx.r11.s64 + -12276;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stb r11,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r11.u8);
	// bl 0x82161e08
	ctx.lr = 0x82ADE6CC;
	sub_82161E08(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r11,27288
	ctx.r4.s64 = ctx.r11.s64 + 27288;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stb r11,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r11.u8);
	// bl 0x82161e08
	ctx.lr = 0x82ADE6FC;
	sub_82161E08(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-29504
	ctx.r3.s64 = ctx.r11.s64 + -29504;
	// bl 0x826ded00
	ctx.lr = 0x82ADE708;
	sub_826DED00(ctx, base);
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

__attribute__((alias("__imp__sub_82ADE720"))) PPC_WEAK_FUNC(sub_82ADE720);
PPC_FUNC_IMPL(__imp__sub_82ADE720) {
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
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r31,r11,5176
	ctx.r31.s64 = ctx.r11.s64 + 5176;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r4,r11,-12200
	ctx.r4.s64 = ctx.r11.s64 + -12200;
	// bl 0x82161e08
	ctx.lr = 0x82ADE74C;
	sub_82161E08(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r11,-12208
	ctx.r4.s64 = ctx.r11.s64 + -12208;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stb r11,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r11.u8);
	// bl 0x82161e08
	ctx.lr = 0x82ADE77C;
	sub_82161E08(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r11,-12224
	ctx.r4.s64 = ctx.r11.s64 + -12224;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stb r11,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r11.u8);
	// bl 0x82161e08
	ctx.lr = 0x82ADE7AC;
	sub_82161E08(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r11,-12236
	ctx.r4.s64 = ctx.r11.s64 + -12236;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stb r11,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r11.u8);
	// bl 0x82161e08
	ctx.lr = 0x82ADE7DC;
	sub_82161E08(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r4,r11,-12248
	ctx.r4.s64 = ctx.r11.s64 + -12248;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stb r11,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r11.u8);
	// bl 0x82161e08
	ctx.lr = 0x82ADE80C;
	sub_82161E08(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r11,-12260
	ctx.r4.s64 = ctx.r11.s64 + -12260;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r3,r31,164
	ctx.r3.s64 = ctx.r31.s64 + 164;
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stb r11,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r11.u8);
	// bl 0x82161e08
	ctx.lr = 0x82ADE83C;
	sub_82161E08(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-29408
	ctx.r3.s64 = ctx.r11.s64 + -29408;
	// bl 0x826ded00
	ctx.lr = 0x82ADE848;
	sub_826DED00(ctx, base);
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

__attribute__((alias("__imp__sub_82ADE860"))) PPC_WEAK_FUNC(sub_82ADE860);
PPC_FUNC_IMPL(__imp__sub_82ADE860) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,5020
	ctx.r4.s64 = ctx.r11.s64 + 5020;
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r3,r11,5368
	ctx.r3.s64 = ctx.r11.s64 + 5368;
	// bl 0x82161e08
	ctx.lr = 0x82ADE884;
	sub_82161E08(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-29976
	ctx.r3.s64 = ctx.r11.s64 + -29976;
	// bl 0x826ded00
	ctx.lr = 0x82ADE890;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADE8A0"))) PPC_WEAK_FUNC(sub_82ADE8A0);
PPC_FUNC_IMPL(__imp__sub_82ADE8A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-16256
	ctx.r3.s64 = ctx.r11.s64 + -16256;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,5424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5424);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x825d2260
	ctx.lr = 0x82ADE8E4;
	sub_825D2260(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADE8F8"))) PPC_WEAK_FUNC(sub_82ADE8F8);
PPC_FUNC_IMPL(__imp__sub_82ADE8F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-15940
	ctx.r3.s64 = ctx.r11.s64 + -15940;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x825d3b60
	sub_825D3B60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ADE910"))) PPC_WEAK_FUNC(sub_82ADE910);
PPC_FUNC_IMPL(__imp__sub_82ADE910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-29088
	ctx.r3.s64 = ctx.r11.s64 + -29088;
	// b 0x826ded00
	sub_826DED00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ADE920"))) PPC_WEAK_FUNC(sub_82ADE920);
PPC_FUNC_IMPL(__imp__sub_82ADE920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-29056
	ctx.r3.s64 = ctx.r11.s64 + -29056;
	// b 0x826ded00
	sub_826DED00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ADE930"))) PPC_WEAK_FUNC(sub_82ADE930);
PPC_FUNC_IMPL(__imp__sub_82ADE930) {
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
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r4,r10,-9300
	ctx.r4.s64 = ctx.r10.s64 + -9300;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r5,r11,-4784
	ctx.r5.s64 = ctx.r11.s64 + -4784;
	// addi r3,r10,-15880
	ctx.r3.s64 = ctx.r10.s64 + -15880;
	// bl 0x8268ac20
	ctx.lr = 0x82ADE958;
	sub_8268AC20(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-29032
	ctx.r3.s64 = ctx.r11.s64 + -29032;
	// bl 0x826ded00
	ctx.lr = 0x82ADE964;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADE978"))) PPC_WEAK_FUNC(sub_82ADE978);
PPC_FUNC_IMPL(__imp__sub_82ADE978) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82186158
	ctx.lr = 0x82ADE98C;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ade998
	if (ctx.cr6.eq) goto loc_82ADE998;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
loc_82ADE998:
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ade9a8
	if (ctx.cr6.eq) goto loc_82ADE9A8;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
loc_82ADE9A8:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r10,-32081
	ctx.r10.s64 = -2102460416;
	// addi r11,r11,-15000
	ctx.r11.s64 = ctx.r11.s64 + -15000;
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// addi r3,r10,-28864
	ctx.r3.s64 = ctx.r10.s64 + -28864;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// bl 0x826ded00
	ctx.lr = 0x82ADE9C8;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADE9D8"))) PPC_WEAK_FUNC(sub_82ADE9D8);
PPC_FUNC_IMPL(__imp__sub_82ADE9D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-28712
	ctx.r3.s64 = ctx.r11.s64 + -28712;
	// b 0x826ded00
	sub_826DED00(ctx, base);
	return;
}

