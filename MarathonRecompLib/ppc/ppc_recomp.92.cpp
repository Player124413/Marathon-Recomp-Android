#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82681398"))) PPC_WEAK_FUNC(sub_82681398);
PPC_FUNC_IMPL(__imp__sub_82681398) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,16(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// lwz r7,48(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmplwi r7,0
	ctx.cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268140c
	if (!ctx.cr0.eq) goto loc_8268140C;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi r7,0
	ctx.cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r8,52(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// li r11,0
	ctx.r11.s64 = 0;
loc_826813D0:
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x826813f8
	if (ctx.cr6.eq) goto loc_826813F8;
	// lwz r5,56(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwzx r5,r5,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x826813f8
	if (!ctx.cr6.eq) goto loc_826813F8;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_826813F8:
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x826813d0
	if (ctx.cr6.lt) goto loc_826813D0;
	// blr 
	return;
loc_8268140C:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,68(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
loc_82681428:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82681428
	if (!ctx.cr6.eq) goto loc_82681428;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82681440"))) PPC_WEAK_FUNC(sub_82681440);
PPC_FUNC_IMPL(__imp__sub_82681440) {
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
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x8251c658
	ctx.lr = 0x82681454;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82681464
	if (ctx.cr0.eq) goto loc_82681464;
	// bl 0x82680f20
	ctx.lr = 0x82681460;
	sub_82680F20(ctx, base);
	// b 0x82681468
	goto loc_82681468;
loc_82681464:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82681468:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82681478"))) PPC_WEAK_FUNC(sub_82681478);
PPC_FUNC_IMPL(__imp__sub_82681478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82681480;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fmuls f30,f0,f0
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// beq 0x82681530
	if (ctx.cr0.eq) goto loc_82681530;
loc_826814C4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8267c3d0
	ctx.lr = 0x826814D0;
	sub_8267C3D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8268151c
	if (!ctx.cr6.eq) goto loc_8268151C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f10,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f11,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x8268151c
	if (!ctx.cr6.lt) goto loc_8268151C;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_8268151C:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826814c4
	if (ctx.cr6.lt) goto loc_826814C4;
loc_82681530:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826815d0
	if (ctx.cr0.eq) goto loc_826815D0;
loc_82681558:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8267d348
	ctx.lr = 0x82681568;
	sub_8267D348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x826815bc
	if (!ctx.cr6.eq) goto loc_826815BC;
	// lfs f12,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f12,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x826815bc
	if (!ctx.cr6.lt) goto loc_826815BC;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x826815bc
	if (!ctx.cr6.lt) goto loc_826815BC;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_826815BC:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82681558
	if (ctx.cr6.lt) goto loc_82681558;
loc_826815D0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// lfs f10,14088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f10.f64 = double(temp.f32);
	// bne cr6,0x826815e8
	if (!ctx.cr6.eq) goto loc_826815E8;
	// fmr f31,f10
	ctx.f31.f64 = ctx.f10.f64;
	// b 0x826815f0
	goto loc_826815F0;
loc_826815E8:
	// fsubs f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// fdivs f31,f0,f30
	ctx.f31.f64 = double(float(ctx.f0.f64 / ctx.f30.f64));
loc_826815F0:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lfs f11,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f9,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// lfs f8,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// lfs f9,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82681648
	if (!ctx.cr6.gt) goto loc_82681648;
	// fdivs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fadds f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
loc_82681648:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r10,92
	ctx.r4.s64 = ctx.r10.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826811d8
	ctx.lr = 0x82681658;
	sub_826811D8(ctx, base);
	// fmuls f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82681670"))) PPC_WEAK_FUNC(sub_82681670);
PPC_FUNC_IMPL(__imp__sub_82681670) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82681398
	ctx.lr = 0x82681694;
	sub_82681398(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82681478
	ctx.lr = 0x826816A4;
	sub_82681478(ctx, base);
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

__attribute__((alias("__imp__sub_826816C0"))) PPC_WEAK_FUNC(sub_826816C0);
PPC_FUNC_IMPL(__imp__sub_826816C0) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x826816e8
	if (!ctx.cr0.eq) goto loc_826816E8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826816E8:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826816f8
	if (!ctx.cr6.eq) goto loc_826816F8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826816F8:
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82681708
	if (!ctx.cr6.eq) goto loc_82681708;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82681708:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x82681718
	if (!ctx.cr6.eq) goto loc_82681718;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82681718:
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82681728
	if (!ctx.cr6.eq) goto loc_82681728;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82681728:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82681738
	if (!ctx.cr0.eq) goto loc_82681738;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82681774
	goto loc_82681774;
loc_82681738:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,92
	ctx.r4.s64 = ctx.r10.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,-16480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16480);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stb r11,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r11.u8);
	// bl 0x82681478
	ctx.lr = 0x8268175C;
	sub_82681478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stfs f1,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// bl 0x82681670
	ctx.lr = 0x8268176C;
	sub_82681670(ctx, base);
	// stfs f1,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82681774:
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

__attribute__((alias("__imp__sub_82681788"))) PPC_WEAK_FUNC(sub_82681788);
PPC_FUNC_IMPL(__imp__sub_82681788) {
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
	// bl 0x82681670
	ctx.lr = 0x826817A8;
	sub_82681670(ctx, base);
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x826817bc
	if (!ctx.cr6.lt) goto loc_826817BC;
	// stfs f1,64(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
loc_826817BC:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_826817D8"))) PPC_WEAK_FUNC(sub_826817D8);
PPC_FUNC_IMPL(__imp__sub_826817D8) {
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
	// bl 0x82692db0
	ctx.lr = 0x826817F0;
	sub_82692DB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,20
	ctx.r8.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// addi r10,r11,5384
	ctx.r10.s64 = ctx.r11.s64 + 5384;
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f12,3548(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3548);
	ctx.f12.f64 = double(temp.f32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r10,r10,9108
	ctx.r10.s64 = ctx.r10.s64 + 9108;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,52(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,56(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,60(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stfs f12,172(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stfs f0,188(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stb r8,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r8.u8);
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// stb r8,184(r31)
	PPC_STORE_U8(ctx.r31.u32 + 184, ctx.r8.u8);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// stfs f0,200(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// stfs f0,204(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 204, temp.u32);
	// stfs f0,208(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
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

__attribute__((alias("__imp__sub_826818B8"))) PPC_WEAK_FUNC(sub_826818B8);
PPC_FUNC_IMPL(__imp__sub_826818B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,-12176
	ctx.r3.s64 = ctx.r11.s64 + -12176;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826818C8"))) PPC_WEAK_FUNC(sub_826818C8);
PPC_FUNC_IMPL(__imp__sub_826818C8) {
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
	// addi r11,r11,5384
	ctx.r11.s64 = ctx.r11.s64 + 5384;
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x8268191c
	if (ctx.cr0.eq) goto loc_8268191C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8268191c
	if (ctx.cr6.eq) goto loc_8268191C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82681918;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
loc_8268191C:
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82681948
	if (ctx.cr0.eq) goto loc_82681948;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82681948
	if (ctx.cr6.eq) goto loc_82681948;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82681944;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
loc_82681948:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82692dd0
	ctx.lr = 0x82681950;
	sub_82692DD0(ctx, base);
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

__attribute__((alias("__imp__sub_82681968"))) PPC_WEAK_FUNC(sub_82681968);
PPC_FUNC_IMPL(__imp__sub_82681968) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8268197c
	if (!ctx.cr6.eq) goto loc_8268197C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8268197C:
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8268198c
	if (!ctx.cr6.eq) goto loc_8268198C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8268198C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82681998"))) PPC_WEAK_FUNC(sub_82681998);
PPC_FUNC_IMPL(__imp__sub_82681998) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,116(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826819b8
	if (!ctx.cr6.eq) goto loc_826819B8;
	// lwz r10,120(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826819b8
	if (!ctx.cr6.eq) goto loc_826819B8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826819B8:
	// lwz r10,124(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826819c8
	if (!ctx.cr6.eq) goto loc_826819C8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826819C8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826819D0"))) PPC_WEAK_FUNC(sub_826819D0);
PPC_FUNC_IMPL(__imp__sub_826819D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,140(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x826819e4
	if (!ctx.cr6.eq) goto loc_826819E4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826819E4:
	// lwz r10,144(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x826819f4
	if (!ctx.cr6.eq) goto loc_826819F4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826819F4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82681A00"))) PPC_WEAK_FUNC(sub_82681A00);
PPC_FUNC_IMPL(__imp__sub_82681A00) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lfs f0,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f12,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x826922f0
	ctx.lr = 0x82681A54;
	sub_826922F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,7856(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7856);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82681a78
	if (!ctx.cr6.gt) goto loc_82681A78;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,2128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2128);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// b 0x82681a94
	goto loc_82681A94;
loc_82681A78:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,-12556(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12556);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82681a94
	if (!ctx.cr6.lt) goto loc_82681A94;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,2128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2128);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_82681A94:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82692178
	ctx.lr = 0x82681AA4;
	sub_82692178(ctx, base);
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

__attribute__((alias("__imp__sub_82681AD0"))) PPC_WEAK_FUNC(sub_82681AD0);
PPC_FUNC_IMPL(__imp__sub_82681AD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// lfs f0,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f12,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f11,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f10,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x826922f0
	ctx.lr = 0x82681B24;
	sub_826922F0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82692178
	ctx.lr = 0x82681B30;
	sub_82692178(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82681B48"))) PPC_WEAK_FUNC(sub_82681B48);
PPC_FUNC_IMPL(__imp__sub_82681B48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,152(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lfs f0,5160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5160);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,164(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82681B68"))) PPC_WEAK_FUNC(sub_82681B68);
PPC_FUNC_IMPL(__imp__sub_82681B68) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r31,64
	ctx.r30.s64 = ctx.r31.s64 + 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// stb r11,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
	// bl 0x826922f0
	ctx.lr = 0x82681BA4;
	sub_826922F0(ctx, base);
	// bl 0x826e0d50
	ctx.lr = 0x82681BA8;
	sub_826E0D50(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,5456(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5456);
	ctx.f31.f64 = double(temp.f32);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,5024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5024);
	ctx.f30.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fmsubs f0,f13,f31,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 - ctx.f0.f64));
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x826e0d50
	ctx.lr = 0x82681BEC;
	sub_826E0D50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fmsubs f0,f13,f31,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 - ctx.f0.f64));
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x82692178
	ctx.lr = 0x82681C2C;
	sub_82692178(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lfs f0,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// stb r9,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r9.u8);
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_82681CB8"))) PPC_WEAK_FUNC(sub_82681CB8);
PPC_FUNC_IMPL(__imp__sub_82681CB8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82681d18
	if (!ctx.cr6.gt) goto loc_82681D18;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r4,r11,-11348
	ctx.r4.s64 = ctx.r11.s64 + -11348;
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x82689fd0
	ctx.lr = 0x82681CF8;
	sub_82689FD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82681d08
	if (!ctx.cr0.eq) goto loc_82681D08;
	// stfs f31,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// b 0x82681d18
	goto loc_82681D18;
loc_82681D08:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82681d18
	if (!ctx.cr6.gt) goto loc_82681D18;
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
loc_82681D18:
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

__attribute__((alias("__imp__sub_82681D30"))) PPC_WEAK_FUNC(sub_82681D30);
PPC_FUNC_IMPL(__imp__sub_82681D30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82681d64
	if (!ctx.cr0.eq) goto loc_82681D64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-16868
	ctx.r11.s64 = ctx.r11.s64 + -16868;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-16924
	ctx.r10.s64 = ctx.r10.s64 + -16924;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82681D64:
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r9.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r9.u32);
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stb r8,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r8.u8);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82681de0
	if (!ctx.cr6.eq) goto loc_82681DE0;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82681dc4
	if (!ctx.cr0.eq) goto loc_82681DC4;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// b 0x82681e04
	goto loc_82681E04;
loc_82681DC4:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// b 0x82681e04
	goto loc_82681E04;
loc_82681DE0:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// beq 0x82681e00
	if (ctx.cr0.eq) goto loc_82681E00;
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// b 0x82681e04
	goto loc_82681E04;
loc_82681E00:
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
loc_82681E04:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r10,r10,-16868
	ctx.r10.s64 = ctx.r10.s64 + -16868;
	// addi r9,r9,-16924
	ctx.r9.s64 = ctx.r9.s64 + -16924;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82681E28"))) PPC_WEAK_FUNC(sub_82681E28);
PPC_FUNC_IMPL(__imp__sub_82681E28) {
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
	// li r3,216
	ctx.r3.s64 = 216;
	// bl 0x8251c658
	ctx.lr = 0x82681E44;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82681e58
	if (ctx.cr0.eq) goto loc_82681E58;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826817d8
	ctx.lr = 0x82681E54;
	sub_826817D8(ctx, base);
	// b 0x82681e5c
	goto loc_82681E5C;
loc_82681E58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82681E5C:
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

__attribute__((alias("__imp__sub_82681E70"))) PPC_WEAK_FUNC(sub_82681E70);
PPC_FUNC_IMPL(__imp__sub_82681E70) {
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
	// bl 0x826818c8
	ctx.lr = 0x82681E90;
	sub_826818C8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82681eac
	if (ctx.cr0.eq) goto loc_82681EAC;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-11212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82681EAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82681EAC:
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

__attribute__((alias("__imp__sub_82681EC8"))) PPC_WEAK_FUNC(sub_82681EC8);
PPC_FUNC_IMPL(__imp__sub_82681EC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82681ED0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82681eec
	if (!ctx.cr6.eq) goto loc_82681EEC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826821f0
	goto loc_826821F0;
loc_82681EEC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a947a0
	ctx.lr = 0x82681EF4;
	sub_82A947A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,5604
	ctx.r4.s64 = ctx.r11.s64 + 5604;
	// bl 0x826e6bb0
	ctx.lr = 0x82681F04;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82681f30
	if (!ctx.cr0.eq) goto loc_82681F30;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a94798
	ctx.lr = 0x82681F14;
	sub_82A94798(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826821e4
	if (ctx.cr0.eq) goto loc_826821E4;
	// bl 0x826e2438
	ctx.lr = 0x82681F20;
	sub_826E2438(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,40(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 40, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826821f0
	goto loc_826821F0;
loc_82681F30:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4572
	ctx.r4.s64 = ctx.r11.s64 + 4572;
	// bl 0x826e6bb0
	ctx.lr = 0x82681F40;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82681f78
	if (!ctx.cr0.eq) goto loc_82681F78;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a94798
	ctx.lr = 0x82681F50;
	sub_82A94798(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x826821e4
	if (ctx.cr0.eq) goto loc_826821E4;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,-3384(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3384);
	// bl 0x82689588
	ctx.lr = 0x82681F64;
	sub_82689588(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// stw r3,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// b 0x826821f0
	goto loc_826821F0;
loc_82681F78:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5592
	ctx.r4.s64 = ctx.r11.s64 + 5592;
	// bl 0x826e6bb0
	ctx.lr = 0x82681F88;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82681fd8
	if (!ctx.cr0.eq) goto loc_82681FD8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a94798
	ctx.lr = 0x82681F98;
	sub_82A94798(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826821e4
	if (ctx.cr0.eq) goto loc_826821E4;
	// bl 0x826e2438
	ctx.lr = 0x82681FA4;
	sub_826E2438(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r11,-3384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82681fbc
	if (ctx.cr6.eq) goto loc_82681FBC;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82681fc4
	goto loc_82681FC4;
loc_82681FBC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
loc_82681FC4:
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,36(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 36, temp.u32);
	// b 0x826821f0
	goto loc_826821F0;
loc_82681FD8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5576
	ctx.r4.s64 = ctx.r11.s64 + 5576;
	// bl 0x826e6bb0
	ctx.lr = 0x82681FE8;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82682014
	if (!ctx.cr0.eq) goto loc_82682014;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a94798
	ctx.lr = 0x82681FF8;
	sub_82A94798(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826821e4
	if (ctx.cr0.eq) goto loc_826821E4;
	// bl 0x826e2438
	ctx.lr = 0x82682004;
	sub_826E2438(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,44(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 44, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826821f0
	goto loc_826821F0;
loc_82682014:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5552
	ctx.r4.s64 = ctx.r11.s64 + 5552;
	// bl 0x826e6bb0
	ctx.lr = 0x82682024;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82682050
	if (!ctx.cr0.eq) goto loc_82682050;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a94798
	ctx.lr = 0x82682034;
	sub_82A94798(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826821e4
	if (ctx.cr0.eq) goto loc_826821E4;
	// bl 0x826e2438
	ctx.lr = 0x82682040;
	sub_826E2438(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,148(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 148, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826821f0
	goto loc_826821F0;
loc_82682050:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5536
	ctx.r4.s64 = ctx.r11.s64 + 5536;
	// bl 0x826e6bb0
	ctx.lr = 0x82682060;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826820b0
	if (!ctx.cr0.eq) goto loc_826820B0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a94798
	ctx.lr = 0x82682070;
	sub_82A94798(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826821e4
	if (ctx.cr0.eq) goto loc_826821E4;
	// bl 0x826e2438
	ctx.lr = 0x8268207C;
	sub_826E2438(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r11,-3384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82682094
	if (ctx.cr6.eq) goto loc_82682094;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8268209c
	goto loc_8268209C;
loc_82682094:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
loc_8268209C:
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,188(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 188, temp.u32);
	// b 0x826821f0
	goto loc_826821F0;
loc_826820B0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5516
	ctx.r4.s64 = ctx.r11.s64 + 5516;
	// bl 0x826e6bb0
	ctx.lr = 0x826820C0;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826820ec
	if (!ctx.cr0.eq) goto loc_826820EC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a94798
	ctx.lr = 0x826820D0;
	sub_82A94798(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826821e4
	if (ctx.cr0.eq) goto loc_826821E4;
	// bl 0x826e2440
	ctx.lr = 0x826820DC;
	sub_826E2440(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,184(r29)
	PPC_STORE_U8(ctx.r29.u32 + 184, ctx.r11.u8);
	// b 0x826821f0
	goto loc_826821F0;
loc_826820EC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5496
	ctx.r4.s64 = ctx.r11.s64 + 5496;
	// bl 0x826e6bb0
	ctx.lr = 0x826820FC;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82682128
	if (!ctx.cr0.eq) goto loc_82682128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a94798
	ctx.lr = 0x8268210C;
	sub_82A94798(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826821e4
	if (ctx.cr0.eq) goto loc_826821E4;
	// bl 0x826e2440
	ctx.lr = 0x82682118;
	sub_826E2440(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,176(r29)
	PPC_STORE_U8(ctx.r29.u32 + 176, ctx.r11.u8);
	// b 0x826821f0
	goto loc_826821F0;
loc_82682128:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4252
	ctx.r4.s64 = ctx.r11.s64 + 4252;
	// bl 0x826e6bb0
	ctx.lr = 0x82682138;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8268218c
	if (!ctx.cr0.eq) goto loc_8268218C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a94798
	ctx.lr = 0x82682148;
	sub_82A94798(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82682184
	if (ctx.cr0.eq) goto loc_82682184;
	// bl 0x826e2438
	ctx.lr = 0x82682154;
	sub_826E2438(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r11,-3384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268216c
	if (ctx.cr6.eq) goto loc_8268216C;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82682174
	goto loc_82682174;
loc_8268216C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
loc_82682174:
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82681cb8
	ctx.lr = 0x82682184;
	sub_82681CB8(ctx, base);
loc_82682184:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826821f0
	goto loc_826821F0;
loc_8268218C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5464
	ctx.r4.s64 = ctx.r11.s64 + 5464;
	// bl 0x826e6bb0
	ctx.lr = 0x8268219C;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826821e4
	if (!ctx.cr0.eq) goto loc_826821E4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a94798
	ctx.lr = 0x826821AC;
	sub_82A94798(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82682184
	if (ctx.cr0.eq) goto loc_82682184;
	// bl 0x826e2438
	ctx.lr = 0x826821B8;
	sub_826E2438(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82682184
	if (ctx.cr6.lt) goto loc_82682184;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82682184
	if (ctx.cr6.gt) goto loc_82682184;
	// stfs f0,24(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 24, temp.u32);
	// b 0x82682184
	goto loc_82682184;
loc_826821E4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82526588
	ctx.lr = 0x826821F0;
	sub_82526588(ctx, base);
loc_826821F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826821F8"))) PPC_WEAK_FUNC(sub_826821F8);
PPC_FUNC_IMPL(__imp__sub_826821F8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f12,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// lfs f13,5160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5160);
	ctx.f13.f64 = double(temp.f32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lwz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f13,164(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8268224C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r30,196(r31)
	PPC_STORE_U8(ctx.r31.u32 + 196, ctx.r30.u8);
	// lfs f0,5424(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5424);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,164(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
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

__attribute__((alias("__imp__sub_82682280"))) PPC_WEAK_FUNC(sub_82682280);
PPC_FUNC_IMPL(__imp__sub_82682280) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x826822b0
	goto loc_826822B0;
loc_8268228C:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r10,16(r9)
	PPC_STORE_U8(ctx.r9.u32 + 16, ctx.r10.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r7,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r7.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
loc_826822B0:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8268228c
	if (!ctx.cr6.eq) goto loc_8268228C;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// b 0x826822f0
	goto loc_826822F0;
loc_826822CC:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r10,24(r9)
	PPC_STORE_U8(ctx.r9.u32 + 24, ctx.r10.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// stw r7,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r7.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
loc_826822F0:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826822cc
	if (!ctx.cr6.eq) goto loc_826822CC;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stb r10,196(r3)
	PPC_STORE_U8(ctx.r3.u32 + 196, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82682310"))) PPC_WEAK_FUNC(sub_82682310);
PPC_FUNC_IMPL(__imp__sub_82682310) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8268239c
	if (ctx.cr6.eq) goto loc_8268239C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8268239c
	if (ctx.cr6.eq) goto loc_8268239C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82682514
	if (!ctx.cr6.eq) goto loc_82682514;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lfs f0,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f0,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f0,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stb r30,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r30.u8);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lfs f0,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// stb r9,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r9.u8);
	// b 0x82682460
	goto loc_82682460;
loc_8268239C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lfs f0,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lfs f13,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,9108
	ctx.r11.s64 = ctx.r11.s64 + 9108;
	// lfs f10,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f0,f12,f10
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f12,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bne cr6,0x8268240c
	if (!ctx.cr6.eq) goto loc_8268240C;
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bne cr6,0x8268240c
	if (!ctx.cr6.eq) goto loc_8268240C;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82682410
	if (ctx.cr6.eq) goto loc_82682410;
loc_8268240C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82682410:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82682514
	if (ctx.cr0.eq) goto loc_82682514;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x826923e0
	ctx.lr = 0x82682438;
	sub_826923E0(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82682468
	if (ctx.cr6.eq) goto loc_82682468;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stb r30,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r30.u8);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
loc_82682460:
	// stb r30,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r30.u8);
	// b 0x82682514
	goto loc_82682514;
loc_82682468:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82682480
	if (!ctx.cr0.eq) goto loc_82682480;
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82682514
	if (ctx.cr6.eq) goto loc_82682514;
loc_82682480:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82682514
	if (!ctx.cr6.eq) goto loc_82682514;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826824ac
	if (ctx.cr6.eq) goto loc_826824AC;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stb r30,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r30.u8);
	// addi r4,r10,-9692
	ctx.r4.s64 = ctx.r10.s64 + -9692;
	// b 0x82682504
	goto loc_82682504;
loc_826824AC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-24552(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24552);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x826824d4
	if (!ctx.cr6.lt) goto loc_826824D4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lfs f0,5424(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5424);
	ctx.f0.f64 = double(temp.f32);
loc_826824CC:
	// stfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// b 0x826824f8
	goto loc_826824F8;
loc_826824D4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5524(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5524);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x826824f4
	if (!ctx.cr6.gt) goto loc_826824F4;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f0,14088(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// b 0x826824cc
	goto loc_826824CC;
loc_826824F4:
	// stfs f31,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_826824F8:
	// stb r30,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r30.u8);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r4,r11,-9692
	ctx.r4.s64 = ctx.r11.s64 + -9692;
loc_82682504:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82691a40
	ctx.lr = 0x8268250C;
	sub_82691A40(ctx, base);
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// stfs f31,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
loc_82682514:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_82682530"))) PPC_WEAK_FUNC(sub_82682530);
PPC_FUNC_IMPL(__imp__sub_82682530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82682538;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,9600
	ctx.r11.s64 = ctx.r11.s64 + 9600;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// beq cr6,0x82682674
	if (ctx.cr6.eq) goto loc_82682674;
	// lis r11,2340
	ctx.r11.s64 = 153354240;
	// li r3,-1
	ctx.r3.s64 = -1;
	// ori r11,r11,37449
	ctx.r11.u64 = ctx.r11.u64 | 37449;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// mulli r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 * 28;
	// ble cr6,0x82682590
	if (!ctx.cr6.gt) goto loc_82682590;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82682590:
	// li r10,-5
	ctx.r10.s64 = -5;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x826825a0
	if (ctx.cr6.gt) goto loc_826825A0;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_826825A0:
	// bl 0x8251c658
	ctx.lr = 0x826825A4;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82682608
	if (ctx.cr0.eq) goto loc_82682608;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addic. r10,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r10.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// blt 0x82682600
	if (ctx.cr0.lt) goto loc_82682600;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r11,r9,12
	ctx.r11.s64 = ctx.r9.s64 + 12;
	// addi r8,r8,5460
	ctx.r8.s64 = ctx.r8.s64 + 5460;
	// lfs f0,3544(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
loc_826825D4:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// addi r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 + 28;
	// stb r29,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r29.u8);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// bge 0x826825d4
	if (!ctx.cr0.lt) goto loc_826825D4;
loc_82682600:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x8268260c
	goto loc_8268260C;
loc_82682608:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8268260C:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r29,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r29.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82682660
	if (!ctx.cr6.gt) goto loc_82682660;
	// li r11,28
	ctx.r11.s64 = 28;
loc_8268262C:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r8,r9,-28
	ctx.r8.s64 = ctx.r9.s64 + -28;
	// stw r8,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r8.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// stw r9,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r9.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8268262c
	if (ctx.cr6.lt) goto loc_8268262C;
loc_82682660:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r29,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r29.u32);
loc_82682674:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82682680"))) PPC_WEAK_FUNC(sub_82682680);
PPC_FUNC_IMPL(__imp__sub_82682680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x826826b4
	if (!ctx.cr0.eq) goto loc_826826B4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,13856
	ctx.r11.s64 = ctx.r11.s64 + 13856;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-16924
	ctx.r10.s64 = ctx.r10.s64 + -16924;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_826826B4:
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r9.u32);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r9,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r9.u32);
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stb r8,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r8.u8);
	// bne cr6,0x82682740
	if (!ctx.cr6.eq) goto loc_82682740;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82682724
	if (!ctx.cr0.eq) goto loc_82682724;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r10.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r10.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r10.u32);
	// b 0x82682764
	goto loc_82682764;
loc_82682724:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// b 0x82682764
	goto loc_82682764;
loc_82682740:
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// beq 0x82682760
	if (ctx.cr0.eq) goto loc_82682760;
	// stw r11,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r11.u32);
	// b 0x82682764
	goto loc_82682764;
loc_82682760:
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
loc_82682764:
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r10,r10,13856
	ctx.r10.s64 = ctx.r10.s64 + 13856;
	// addi r9,r9,-16924
	ctx.r9.s64 = ctx.r9.s64 + -16924;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82682788"))) PPC_WEAK_FUNC(sub_82682788);
PPC_FUNC_IMPL(__imp__sub_82682788) {
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
	// rlwinm. r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826827fc
	if (ctx.cr0.eq) goto loc_826827FC;
	// addi r30,r31,-4
	ctx.r30.s64 = ctx.r31.s64 + -4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mulli r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 * 28;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// blt 0x826827d8
	if (ctx.cr0.lt) goto loc_826827D8;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r9,r9,-16924
	ctx.r9.s64 = ctx.r9.s64 + -16924;
loc_826827C8:
	// addi r10,r10,-28
	ctx.r10.s64 = ctx.r10.s64 + -28;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// bge 0x826827c8
	if (!ctx.cr0.lt) goto loc_826827C8;
loc_826827D8:
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826827f4
	if (ctx.cr0.eq) goto loc_826827F4;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,-11212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826827F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826827F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82682828
	goto loc_82682828;
loc_826827FC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-16924
	ctx.r11.s64 = ctx.r11.s64 + -16924;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82682824
	if (ctx.cr0.eq) goto loc_82682824;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-11212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82682824;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82682824:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82682828:
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

__attribute__((alias("__imp__sub_82682840"))) PPC_WEAK_FUNC(sub_82682840);
PPC_FUNC_IMPL(__imp__sub_82682840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82682848;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r4,r11,8832
	ctx.r4.s64 = ctx.r11.s64 + 8832;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8268b0b8
	ctx.lr = 0x8268286C;
	sub_8268B0B8(ctx, base);
	// lis r28,-32044
	ctx.r28.s64 = -2100035584;
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// addi r4,r11,-816
	ctx.r4.s64 = ctx.r11.s64 + -816;
	// lwz r3,-3384(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3384);
	// bl 0x82688fa8
	ctx.lr = 0x82682884;
	sub_82688FA8(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// lwz r3,-3384(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3384);
	// addi r4,r11,4880
	ctx.r4.s64 = ctx.r11.s64 + 4880;
	// bl 0x82688fa8
	ctx.lr = 0x82682898;
	sub_82688FA8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826828f8
	if (ctx.cr0.eq) goto loc_826828F8;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// addi r4,r11,-1092
	ctx.r4.s64 = ctx.r11.s64 + -1092;
	// bl 0x8268c388
	ctx.lr = 0x826828BC;
	sub_8268C388(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// addi r4,r11,-264
	ctx.r4.s64 = ctx.r11.s64 + -264;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x8268c388
	ctx.lr = 0x826828D8;
	sub_8268C388(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// addi r4,r11,-540
	ctx.r4.s64 = ctx.r11.s64 + -540;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x8268c388
	ctx.lr = 0x826828F4;
	sub_8268C388(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
loc_826828F8:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r4,r11,-7208
	ctx.r4.s64 = ctx.r11.s64 + -7208;
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x82689fd0
	ctx.lr = 0x8268290C;
	sub_82689FD0(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// addi r4,r11,-7484
	ctx.r4.s64 = ctx.r11.s64 + -7484;
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x82689fd0
	ctx.lr = 0x82682924;
	sub_82689FD0(ctx, base);
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// bl 0x8268f898
	ctx.lr = 0x8268292C;
	sub_8268F898(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,5656
	ctx.r4.s64 = ctx.r11.s64 + 5656;
	// bl 0x8268e318
	ctx.lr = 0x8268293C;
	sub_8268E318(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,5624
	ctx.r4.s64 = ctx.r10.s64 + 5624;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// bl 0x8268e318
	ctx.lr = 0x82682954;
	sub_8268E318(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r3.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// addi r11,r11,-10920
	ctx.r11.s64 = ctx.r11.s64 + -10920;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// addi r11,r11,9108
	ctx.r11.s64 = ctx.r11.s64 + 9108;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stfs f31,76(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// beq cr6,0x82682c0c
	if (ctx.cr6.eq) goto loc_82682C0C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f31,40(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r11,-3384(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826829cc
	if (ctx.cr6.eq) goto loc_826829CC;
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// b 0x826829d0
	goto loc_826829D0;
loc_826829CC:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f31.f64;
loc_826829D0:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f31,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// addi r4,r11,-9968
	ctx.r4.s64 = ctx.r11.s64 + -9968;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-30764(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30764);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f0,6100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6100);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// lfs f13,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f13,152(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// lfs f30,3548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f30.f64 = double(temp.f32);
	// stfs f30,156(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x82689fd0
	ctx.lr = 0x82682A1C;
	sub_82689FD0(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r11,-10244
	ctx.r4.s64 = ctx.r11.s64 + -10244;
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x82689fd0
	ctx.lr = 0x82682A34;
	sub_82689FD0(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,-11348
	ctx.r4.s64 = ctx.r11.s64 + -11348;
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x82689fd0
	ctx.lr = 0x82682A4C;
	sub_82689FD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82682a5c
	if (ctx.cr0.eq) goto loc_82682A5C;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82682a74
	goto loc_82682A74;
loc_82682A5C:
	// lwz r11,-3384(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82682a70
	if (ctx.cr6.eq) goto loc_82682A70;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82682a74
	goto loc_82682A74;
loc_82682A70:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_82682A74:
	// stfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stfs f31,172(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// bne cr6,0x82682aa0
	if (!ctx.cr6.eq) goto loc_82682AA0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82682a98
	if (!ctx.cr6.eq) goto loc_82682A98;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-13180(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13180);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82682aa8
	goto loc_82682AA8;
loc_82682A98:
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82682aa4
	goto loc_82682AA4;
loc_82682AA0:
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
loc_82682AA4:
	// fmuls f0,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
loc_82682AA8:
	// stfs f0,172(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// lwz r11,-3384(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82682abc
	if (ctx.cr6.eq) goto loc_82682ABC;
	// lfs f31,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
loc_82682ABC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,28580(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28580);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmuls f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// stfs f13,188(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// lfs f0,23012(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23012);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// bl 0x82692ef0
	ctx.lr = 0x82682AE4;
	sub_82692EF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82682c0c
	if (ctx.cr0.eq) goto loc_82682C0C;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,-9416
	ctx.r4.s64 = ctx.r11.s64 + -9416;
	// bl 0x82691a40
	ctx.lr = 0x82682AFC;
	sub_82691A40(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r10,-10796
	ctx.r4.s64 = ctx.r10.s64 + -10796;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// bl 0x82691a40
	ctx.lr = 0x82682B14;
	sub_82691A40(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r4,r10,-7760
	ctx.r4.s64 = ctx.r10.s64 + -7760;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// bl 0x82691a40
	ctx.lr = 0x82682B2C;
	sub_82691A40(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r4,r10,-8036
	ctx.r4.s64 = ctx.r10.s64 + -8036;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// bl 0x82691a40
	ctx.lr = 0x82682B44;
	sub_82691A40(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82682B60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82682c0c
	if (ctx.cr0.eq) goto loc_82682C0C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82682B7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82682c0c
	if (ctx.cr0.eq) goto loc_82682C0C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82682B98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82682c0c
	if (ctx.cr0.eq) goto loc_82682C0C;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8251c658
	ctx.lr = 0x82682BA8;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82682bc0
	if (ctx.cr0.eq) goto loc_82682BC0;
	// lbz r4,184(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 184);
	// bl 0x82682530
	ctx.lr = 0x82682BB8;
	sub_82682530(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82682bc4
	goto loc_82682BC4;
loc_82682BC0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82682BC4:
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// bl 0x8251c658
	ctx.lr = 0x82682BD0;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82682be8
	if (ctx.cr0.eq) goto loc_82682BE8;
	// lbz r4,176(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 176);
	// bl 0x8269d0b8
	ctx.lr = 0x82682BE0;
	sub_8269D0B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82682bec
	goto loc_82682BEC;
loc_82682BE8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82682BEC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82682C04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82682c10
	goto loc_82682C10;
loc_82682C0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82682C10:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82682C20"))) PPC_WEAK_FUNC(sub_82682C20);
PPC_FUNC_IMPL(__imp__sub_82682C20) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82682eec
	if (ctx.cr6.lt) goto loc_82682EEC;
	// beq cr6,0x82682e80
	if (ctx.cr6.eq) goto loc_82682E80;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82682dec
	if (ctx.cr6.lt) goto loc_82682DEC;
	// beq cr6,0x82682ce4
	if (ctx.cr6.eq) goto loc_82682CE4;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x82682ef4
	if (!ctx.cr6.lt) goto loc_82682EF4;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r30,r31,80
	ctx.r30.s64 = ctx.r31.s64 + 80;
	// lfs f0,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lfs f1,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82682CA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82682CB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82682ef4
	if (!ctx.cr6.eq) goto loc_82682EF4;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82682CE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82682ef4
	goto loc_82682EF4;
loc_82682CE4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f29,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f29.f64 = double(temp.f32);
	// beq 0x82682d0c
	if (ctx.cr0.eq) goto loc_82682D0C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r31,200
	ctx.r5.s64 = ctx.r31.s64 + 200;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x826d87d0
	ctx.lr = 0x82682D0C;
	sub_826D87D0(ctx, base);
loc_82682D0C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lfs f0,172(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-13184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13184);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f31,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f30.f64 = double(temp.f32);
	// lfs f13,5024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5024);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82682D44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82682D5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r4,r31,200
	ctx.r4.s64 = ctx.r31.s64 + 200;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82682D74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82682da4
	if (!ctx.cr6.eq) goto loc_82682DA4;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82682D9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82682310
	ctx.lr = 0x82682DA4;
	sub_82682310(ctx, base);
loc_82682DA4:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82682DB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82682dcc
	if (ctx.cr0.eq) goto loc_82682DCC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,160(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82682DCC:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82682DE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82682ef4
	goto loc_82682EF4;
loc_82682DEC:
	// lbz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 196);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82682e48
	if (!ctx.cr0.eq) goto loc_82682E48;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82682E0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82682e30
	if (ctx.cr0.eq) goto loc_82682E30;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82682E28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82682e48
	if (!ctx.cr0.eq) goto loc_82682E48;
loc_82682E30:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82682E44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82682ef4
	goto loc_82682EF4;
loc_82682E48:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82682E5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82682ef4
	if (!ctx.cr6.eq) goto loc_82682EF4;
	// lbz r11,197(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 197);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82682e30
	if (ctx.cr0.eq) goto loc_82682E30;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x82682ef4
	goto loc_82682EF4;
loc_82682E80:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82682eb8
	if (ctx.cr0.eq) goto loc_82682EB8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r31,200
	ctx.r5.s64 = ctx.r31.s64 + 200;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x826d7ad0
	ctx.lr = 0x82682E9C;
	sub_826D7AD0(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r4,20(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lfs f1,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r4,48
	ctx.r5.s64 = ctx.r4.s64 + 48;
	// bl 0x826d87d0
	ctx.lr = 0x82682EB8;
	sub_826D87D0(ctx, base);
loc_82682EB8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// bl 0x82682310
	ctx.lr = 0x82682EE0;
	sub_82682310(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82681b68
	ctx.lr = 0x82682EE8;
	sub_82681B68(ctx, base);
	// b 0x82682ef4
	goto loc_82682EF4;
loc_82682EEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82682310
	ctx.lr = 0x82682EF4;
	sub_82682310(ctx, base);
loc_82682EF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
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

__attribute__((alias("__imp__sub_82682F18"))) PPC_WEAK_FUNC(sub_82682F18);
PPC_FUNC_IMPL(__imp__sub_82682F18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82682F20;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826dfb88
	ctx.lr = 0x82682F28;
	__savefpr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// b 0x82682f60
	goto loc_82682F60;
loc_82682F3C:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r28,24(r10)
	PPC_STORE_U8(ctx.r10.u32 + 24, ctx.r28.u8);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r8,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r8.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_82682F60:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82682f3c
	if (!ctx.cr6.eq) goto loc_82682F3C;
	// stw r28,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
	// stw r28,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r28.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f13,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5160);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lfs f0,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82682fc8
	if (!ctx.cr6.eq) goto loc_82682FC8;
	// lfs f0,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82682fc8
	if (!ctx.cr6.eq) goto loc_82682FC8;
	// lfs f0,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f13,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82682fcc
	if (ctx.cr6.eq) goto loc_82682FCC;
loc_82682FC8:
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
loc_82682FCC:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82682fdc
	if (ctx.cr0.eq) goto loc_82682FDC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82683148
	goto loc_82683148;
loc_82682FDC:
	// lfs f10,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32071
	ctx.r9.s64 = -2101805056;
	// lfs f11,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fsubs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f9,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// addi r9,r9,-10896
	ctx.r9.s64 = ctx.r9.s64 + -10896;
	// fsubs f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// lfs f7,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f7.f64 = double(temp.f32);
	// lfs f9,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fsubs f9,f7,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// lfs f12,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f6,f13,f10
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f7,f9,f12
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmsubs f0,f0,f10,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 - ctx.f7.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmsubs f0,f9,f13,f8
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f8.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmsubs f0,f12,f11,f6
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 - ctx.f6.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x8267efb0
	ctx.lr = 0x82683044;
	sub_8267EFB0(ctx, base);
	// lbz r10,184(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 184);
	// lfs f31,188(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f31.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82683138
	if (ctx.cr0.eq) goto loc_82683138;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f30,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f29.f64 = double(temp.f32);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// addi r30,r10,-16924
	ctx.r30.s64 = ctx.r10.s64 + -16924;
	// lfs f28,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f28.f64 = double(temp.f32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r29,r10,13856
	ctx.r29.s64 = ctx.r10.s64 + 13856;
loc_82683078:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,192(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// fmuls f0,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f31.f64));
	// fmuls f13,f29,f31
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f31.f64));
	// fmuls f12,f30,f31
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f31.f64));
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f11,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// beq 0x826830e0
	if (ctx.cr0.eq) goto loc_826830E0;
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82682680
	ctx.lr = 0x826830D4;
	sub_82682680(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// b 0x82683124
	goto loc_82683124;
loc_826830E0:
	// fsubs f0,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// bl 0x82682680
	ctx.lr = 0x82683114;
	sub_82682680(ctx, base);
	// lfs f0,188(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
loc_82683124:
	// addi r10,r27,1
	ctx.r10.s64 = ctx.r27.s64 + 1;
	// lbz r9,184(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 184);
	// clrlwi r27,r10,24
	ctx.r27.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r27,r9
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82683078
	if (ctx.cr6.lt) goto loc_82683078;
loc_82683138:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r28,212(r31)
	PPC_STORE_U8(ctx.r31.u32 + 212, ctx.r28.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,196(r31)
	PPC_STORE_U8(ctx.r31.u32 + 196, ctx.r11.u8);
loc_82683148:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826dfbd4
	ctx.lr = 0x82683154;
	__restfpr_28(ctx, base);
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82683158"))) PPC_WEAK_FUNC(sub_82683158);
PPC_FUNC_IMPL(__imp__sub_82683158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82683160;
	__savegprlr_27(ctx, base);
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r28,197(r31)
	PPC_STORE_U8(ctx.r31.u32 + 197, ctx.r28.u8);
	// lfs f0,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f13,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// addi r11,r11,-10896
	ctx.r11.s64 = ctx.r11.s64 + -10896;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f29,f13,f0
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x8268f898
	ctx.lr = 0x826831B4;
	sub_8268F898(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8267b2a0
	ctx.lr = 0x826831C8;
	sub_8267B2A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826834b4
	if (ctx.cr0.eq) goto loc_826834B4;
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lbz r8,212(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 212);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// beq 0x82683200
	if (ctx.cr0.eq) goto loc_82683200;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_826831EC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x826831ec
	if (ctx.cr6.lt) goto loc_826831EC;
loc_82683200:
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82683228
	if (ctx.cr0.eq) goto loc_82683228;
loc_8268320C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8268f098
	ctx.lr = 0x82683220;
	sub_8268F098(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826834b8
	goto loc_826834B8;
loc_82683228:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// fadds f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stb r10,212(r31)
	PPC_STORE_U8(ctx.r31.u32 + 212, ctx.r10.u8);
	// bl 0x82681ad0
	ctx.lr = 0x82683264;
	sub_82681AD0(ctx, base);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82683294
	goto loc_82683294;
loc_82683270:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f2,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82680760
	ctx.lr = 0x82683288;
	sub_82680760(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82683394
	if (!ctx.cr0.eq) goto loc_82683394;
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
loc_82683294:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82683270
	if (!ctx.cr0.eq) goto loc_82683270;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,228(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// addi r29,r11,-9356
	ctx.r29.s64 = ctx.r11.s64 + -9356;
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,232(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// li r11,16
	ctx.r11.s64 = 16;
	// stfs f0,236(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stw r29,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r29.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_826832E0:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x826832e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826832E0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stb r28,312(r1)
	PPC_STORE_U8(ctx.r1.u32 + 312, ctx.r28.u8);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r30,r11,4868
	ctx.r30.s64 = ctx.r11.s64 + 4868;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x826947e0
	ctx.lr = 0x82683314;
	sub_826947E0(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82683344:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82683344
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82683344;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r28,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, ctx.r28.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x826947e0
	ctx.lr = 0x82683368;
	sub_826947E0(ctx, base);
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-11200
	ctx.r11.s64 = ctx.r11.s64 + -11200;
	// lwz r7,20(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x826833c4
	if (!ctx.cr6.eq) goto loc_826833C4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x826833e0
	goto loc_826833E0;
loc_82683394:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82683398:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r28,197(r31)
	PPC_STORE_U8(ctx.r31.u32 + 197, ctx.r28.u8);
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8268f098
	ctx.lr = 0x826833AC;
	sub_8268F098(ctx, base);
	// lbz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 184);
	// lbz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 212);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x826834b8
	goto loc_826834B8;
loc_826833C4:
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826833E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826833E0:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bne 0x82683398
	if (!ctx.cr0.eq) goto loc_82683398;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268340C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82683394
	if (ctx.cr0.eq) goto loc_82683394;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r5,r11,48
	ctx.r5.s64 = ctx.r11.s64 + 48;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82683438;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82683394
	if (ctx.cr0.eq) goto loc_82683394;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82683478
	if (ctx.cr0.eq) goto loc_82683478;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,172(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826d89f8
	ctx.lr = 0x82683458;
	sub_826D89F8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82683398
	if (!ctx.cr0.eq) goto loc_82683398;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x826d87d0
	ctx.lr = 0x82683478;
	sub_826D87D0(ctx, base);
loc_82683478:
	// addi r11,r31,200
	ctx.r11.s64 = ctx.r31.s64 + 200;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stb r10,197(r31)
	PPC_STORE_U8(ctx.r31.u32 + 197, ctx.r10.u8);
	// b 0x8268320c
	goto loc_8268320C;
loc_826834B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826834B8:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826834D0"))) PPC_WEAK_FUNC(sub_826834D0);
PPC_FUNC_IMPL(__imp__sub_826834D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x826834D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82683524
	if (ctx.cr0.eq) goto loc_82683524;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82522360
	ctx.lr = 0x82683514;
	sub_82522360(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82683524
	if (ctx.cr0.eq) goto loc_82683524;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// b 0x82683588
	goto loc_82683588;
loc_82683524:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r29,-1
	ctx.r29.s64 = -1;
	// addi r31,r11,-7208
	ctx.r31.s64 = ctx.r11.s64 + -7208;
	// li r30,-1
	ctx.r30.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x82689fd0
	ctx.lr = 0x82683544;
	sub_82689FD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82683550
	if (ctx.cr0.eq) goto loc_82683550;
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82683550:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82689fd0
	ctx.lr = 0x8268355C;
	sub_82689FD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82683568
	if (ctx.cr0.eq) goto loc_82683568;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82683568:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x82683584
	if (ctx.cr6.eq) goto loc_82683584;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82683584
	if (ctx.cr6.eq) goto loc_82683584;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x82683588
	if (!ctx.cr6.eq) goto loc_82683588;
loc_82683584:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82683588:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82683590"))) PPC_WEAK_FUNC(sub_82683590);
PPC_FUNC_IMPL(__imp__sub_82683590) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826835f0
	if (ctx.cr0.eq) goto loc_826835F0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lfs f0,-16480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16480);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r4,20(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x8267e368
	ctx.lr = 0x826835E0;
	sub_8267E368(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826835f0
	if (!ctx.cr0.eq) goto loc_826835F0;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8268362c
	goto loc_8268362C;
loc_826835F0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f11,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f10,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f11,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f1,f0
	ctx.f1.f64 = double(float(sqrt(ctx.f0.f64)));
loc_8268362C:
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

__attribute__((alias("__imp__sub_82683648"))) PPC_WEAK_FUNC(sub_82683648);
PPC_FUNC_IMPL(__imp__sub_82683648) {
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
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82683680
	if (ctx.cr0.eq) goto loc_82683680;
	// bl 0x82683590
	ctx.lr = 0x8268366C;
	sub_82683590(ctx, base);
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f1,48(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// blt cr6,0x82683684
	if (ctx.cr6.lt) goto loc_82683684;
loc_82683680:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82683684:
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

__attribute__((alias("__imp__sub_82683698"))) PPC_WEAK_FUNC(sub_82683698);
PPC_FUNC_IMPL(__imp__sub_82683698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x826836A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826836e8
	if (ctx.cr0.eq) goto loc_826836E8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82522360
	ctx.lr = 0x826836D8;
	sub_82522360(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826836e8
	if (ctx.cr0.eq) goto loc_826836E8;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// b 0x826837f8
	goto loc_826837F8;
loc_826836E8:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// addi r29,r11,-9356
	ctx.r29.s64 = ctx.r11.s64 + -9356;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r29,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,212(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,216(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,220(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82683724:
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x82683724
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82683724;
	// stb r28,296(r1)
	PPC_STORE_U8(ctx.r1.u32 + 296, ctx.r28.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r30,r10,4868
	ctx.r30.s64 = ctx.r10.s64 + 4868;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// bl 0x826947e0
	ctx.lr = 0x82683754;
	sub_826947E0(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82683784:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82683784
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82683784;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stb r28,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r28.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x826947e0
	ctx.lr = 0x826837A8;
	sub_826947E0(ctx, base);
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-11200
	ctx.r11.s64 = ctx.r11.s64 + -11200;
	// lwz r7,20(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826837cc
	if (!ctx.cr6.eq) goto loc_826837CC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x826837ec
	goto loc_826837EC;
loc_826837CC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lfs f1,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826837EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826837EC:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_826837F8:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82683800"))) PPC_WEAK_FUNC(sub_82683800);
PPC_FUNC_IMPL(__imp__sub_82683800) {
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
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne 0x82683828
	if (!ctx.cr0.eq) goto loc_82683828;
loc_82683820:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826838a0
	goto loc_826838A0;
loc_82683828:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82683590
	ctx.lr = 0x82683830;
	sub_82683590(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stfs f1,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// bl 0x82683698
	ctx.lr = 0x82683840;
	sub_82683698(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stb r3,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r3.u8);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82683820
	if (!ctx.cr6.gt) goto loc_82683820;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f0,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268389c
	if (ctx.cr0.eq) goto loc_8268389C;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f13,56(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f12,60(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
loc_8268389C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_826838A0:
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

__attribute__((alias("__imp__sub_826838B8"))) PPC_WEAK_FUNC(sub_826838B8);
PPC_FUNC_IMPL(__imp__sub_826838B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b4
	ctx.lr = 0x826838C0;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826dfb78
	ctx.lr = 0x826838C8;
	__savefpr_24(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r28,r31,52
	ctx.r28.s64 = ctx.r31.s64 + 52;
	// addi r11,r11,-9356
	ctx.r11.s64 = ctx.r11.s64 + -9356;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r9,r1,256
	ctx.r9.s64 = ctx.r1.s64 + 256;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stfs f0,244(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// lfs f0,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r10,16
	ctx.r10.s64 = 16;
	// stfs f0,248(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// lfs f0,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,252(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82683910:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82683910
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82683910;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stb r30,328(r1)
	PPC_STORE_U8(ctx.r1.u32 + 328, ctx.r30.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82683950:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82683950
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82683950;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stb r30,232(r1)
	PPC_STORE_U8(ctx.r1.u32 + 232, ctx.r30.u8);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r10,r10,4868
	ctx.r10.s64 = ctx.r10.s64 + 4868;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bl 0x826947e0
	ctx.lr = 0x8268397C;
	sub_826947E0(ctx, base);
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// addi r11,r11,-11200
	ctx.r11.s64 = ctx.r11.s64 + -11200;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f27,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f27.f64 = double(temp.f32);
	// bne cr6,0x826839a8
	if (!ctx.cr6.eq) goto loc_826839A8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x826839c4
	goto loc_826839C4;
loc_826839A8:
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f27.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826839C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826839C4:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82683c90
	if (ctx.cr6.eq) goto loc_82683C90;
	// lbz r11,17(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82683c90
	if (ctx.cr0.eq) goto loc_82683C90;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826839f0
	if (!ctx.cr6.eq) goto loc_826839F0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82683c94
	goto loc_82683C94;
loc_826839F0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8267efb0
	ctx.lr = 0x826839FC;
	sub_8267EFB0(ctx, base);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// fmr f29,f27
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f27.f64;
	// lwz r24,8(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cntlzw r11,r24
	ctx.r11.u64 = ctx.r24.u32 == 0 ? 32 : __builtin_clz(ctx.r24.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82683c80
	if (ctx.cr0.eq) goto loc_82683C80;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r27,r11,9108
	ctx.r27.s64 = ctx.r11.s64 + 9108;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f28,-8424(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -8424);
	ctx.f28.f64 = double(temp.f32);
	// addi r26,r11,-10244
	ctx.r26.s64 = ctx.r11.s64 + -10244;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lfs f24,3548(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3548);
	ctx.f24.f64 = double(temp.f32);
	// lis r23,-32251
	ctx.r23.s64 = -2113601536;
	// lfs f25,2844(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2844);
	ctx.f25.f64 = double(temp.f32);
	// addi r25,r11,-9968
	ctx.r25.s64 = ctx.r11.s64 + -9968;
	// lfs f26,23012(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23012);
	ctx.f26.f64 = double(temp.f32);
loc_82683A5C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r30,4(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// subf r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82683c58
	if (!ctx.cr0.eq) goto loc_82683C58;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// subf r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82683c58
	if (!ctx.cr0.eq) goto loc_82683C58;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,7116(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 7116);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82683c58
	if (ctx.cr0.eq) goto loc_82683C58;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lfs f2,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lfs f1,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82680760
	ctx.lr = 0x82683ABC;
	sub_82680760(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82683c58
	if (ctx.cr0.eq) goto loc_82683C58;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826834d0
	ctx.lr = 0x82683AD0;
	sub_826834D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82683c58
	if (ctx.cr6.eq) goto loc_82683C58;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82683698
	ctx.lr = 0x82683AE8;
	sub_82683698(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82683c58
	if (ctx.cr0.eq) goto loc_82683C58;
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// beq cr6,0x82683c78
	if (ctx.cr6.eq) goto loc_82683C78;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82689fd0
	ctx.lr = 0x82683B08;
	sub_82689FD0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82689fd0
	ctx.lr = 0x82683B18;
	sub_82689FD0(ctx, base);
	// fmr f0,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f26.f64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// fmr f13,f25
	ctx.f13.f64 = ctx.f25.f64;
	// beq cr6,0x82683b30
	if (ctx.cr6.eq) goto loc_82683B30;
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f24
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f24.f64));
loc_82683B30:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82683b40
	if (ctx.cr6.eq) goto loc_82683B40;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f24
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f24.f64));
loc_82683B40:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82683b50
	if (!ctx.cr6.gt) goto loc_82683B50;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
	// b 0x82683b54
	goto loc_82683B54;
loc_82683B50:
	// fmr f30,f13
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f13.f64;
loc_82683B54:
	// lfs f13,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f13,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r30,48
	ctx.r5.s64 = ctx.r30.s64 + 48;
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f13,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f8,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f11,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f27,80(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fadds f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x82680500
	ctx.lr = 0x82683BC8;
	sub_82680500(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82683c78
	if (ctx.cr0.eq) goto loc_82683C78;
	// lfs f1,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82692148
	ctx.lr = 0x82683BD8;
	sub_82692148(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f1,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82692118
	ctx.lr = 0x82683BE4;
	sub_82692118(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lfs f13,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// lfs f12,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// fdivs f11,f31,f0
	ctx.f11.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f12,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fmuls f31,f0,f11
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x826800f8
	ctx.lr = 0x82683C34;
	sub_826800F8(ctx, base);
	// fmuls f0,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fdivs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82683c58
	if (!ctx.cr6.gt) goto loc_82683C58;
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82683c80
	if (!ctx.cr6.lt) goto loc_82683C80;
loc_82683C58:
	// lwz r24,12(r24)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// cntlzw r11,r24
	ctx.r11.u64 = ctx.r24.u32 == 0 ? 32 : __builtin_clz(ctx.r24.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82683a5c
	if (!ctx.cr0.eq) goto loc_82683A5C;
	// b 0x82683c80
	goto loc_82683C80;
loc_82683C78:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f29,14088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f29.f64 = double(temp.f32);
loc_82683C80:
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// blt cr6,0x82683c94
	if (ctx.cr6.lt) goto loc_82683C94;
loc_82683C90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82683C94:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826dfbc4
	ctx.lr = 0x82683CA0;
	__restfpr_24(ctx, base);
	// b 0x826de904
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82683CA8"))) PPC_WEAK_FUNC(sub_82683CA8);
PPC_FUNC_IMPL(__imp__sub_82683CA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82683CB0;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// b 0x82683cf0
	goto loc_82683CF0;
loc_82683CCC:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r27,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, ctx.r27.u8);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_82683CF0:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82683ccc
	if (!ctx.cr6.eq) goto loc_82683CCC;
	// stw r27,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r27.u32);
	// stw r27,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r27.u32);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stb r27,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r27.u8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82683d1c
	if (ctx.cr0.eq) goto loc_82683D1C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82683d20
	goto loc_82683D20;
loc_82683D1C:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82683D20:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82683f7c
	if (ctx.cr6.eq) goto loc_82683F7C;
	// lbz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 184);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,3548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x826e22f8
	ctx.lr = 0x82683D4C;
	sub_826E22F8(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f0,188(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x82692148
	ctx.lr = 0x82683D60;
	sub_82692148(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lfs f1,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82692118
	ctx.lr = 0x82683D6C;
	sub_82692118(ctx, base);
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// ble cr6,0x82683d98
	if (!ctx.cr6.gt) goto loc_82683D98;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82683d90
	if (!ctx.cr6.gt) goto loc_82683D90;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
	// b 0x82683d9c
	goto loc_82683D9C;
loc_82683D90:
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
	// b 0x82683d9c
	goto loc_82683D9C;
loc_82683D98:
	// fmr f30,f13
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f13.f64;
loc_82683D9C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,172(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,-13184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13184);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f12,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lfs f31,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// lfs f12,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f10,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f12,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// bne cr6,0x82683e34
	if (!ctx.cr6.eq) goto loc_82683E34;
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lfs f11,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmr f13,f10
	ctx.f13.f64 = ctx.f10.f64;
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f12,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
loc_82683E34:
	// lfs f13,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f10,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f13,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// bl 0x8268c968
	ctx.lr = 0x82683E94;
	sub_8268C968(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// beq 0x82683f7c
	if (ctx.cr0.eq) goto loc_82683F7C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r29,r11,-16924
	ctx.r29.s64 = ctx.r11.s64 + -16924;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r28,r11,-16868
	ctx.r28.s64 = ctx.r11.s64 + -16868;
loc_82683EB0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82683f5c
	if (ctx.cr6.eq) goto loc_82683F5C;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82683f5c
	if (ctx.cr6.eq) goto loc_82683F5C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826834d0
	ctx.lr = 0x82683ED8;
	sub_826834D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82683f5c
	if (!ctx.cr0.eq) goto loc_82683F5C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82683698
	ctx.lr = 0x82683EEC;
	sub_82683698(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82683f5c
	if (!ctx.cr6.eq) goto loc_82683F5C;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r30,48
	ctx.r5.s64 = ctx.r30.s64 + 48;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82680500
	ctx.lr = 0x82683F14;
	sub_82680500(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82683f5c
	if (!ctx.cr6.eq) goto loc_82683F5C;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82683f5c
	if (!ctx.cr6.lt) goto loc_82683F5C;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r4,180(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// bl 0x82681d30
	ctx.lr = 0x82683F48;
	sub_82681D30(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82683f74
	if (!ctx.cr0.eq) goto loc_82683F74;
loc_82683F5C:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8268c428
	ctx.lr = 0x82683F64;
	sub_8268C428(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bne 0x82683eb0
	if (!ctx.cr0.eq) goto loc_82683EB0;
	// b 0x82683f7c
	goto loc_82683F7C;
loc_82683F74:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r11.u8);
loc_82683F7C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82683F90"))) PPC_WEAK_FUNC(sub_82683F90);
PPC_FUNC_IMPL(__imp__sub_82683F90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x82683F98;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82683648
	ctx.lr = 0x82683FA8;
	sub_82683648(ctx, base);
	// li r27,4
	ctx.r27.s64 = 4;
	// li r26,1
	ctx.r26.s64 = 1;
	// lis r28,-32044
	ctx.r28.s64 = -2100035584;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82683fec
	if (!ctx.cr0.eq) goto loc_82683FEC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x826840b8
	if (ctx.cr6.eq) goto loc_826840B8;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// b 0x826840b8
	goto loc_826840B8;
loc_82683FEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82681a00
	ctx.lr = 0x82683FF4;
	sub_82681A00(ctx, base);
	// lfs f31,5160(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 5160);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x826840b8
	if (!ctx.cr6.lt) goto loc_826840B8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// lfs f12,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f0,5024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5024);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82684028
	if (!ctx.cr6.gt) goto loc_82684028;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82684028:
	// bl 0x8268f898
	ctx.lr = 0x8268402C;
	sub_8268F898(ctx, base);
	// clrlwi r29,r30,24
	ctx.r29.u64 = ctx.r30.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// beq cr6,0x82684054
	if (ctx.cr6.eq) goto loc_82684054;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8267b2a0
	ctx.lr = 0x8268404C;
	sub_8267B2A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826840b8
	if (ctx.cr0.eq) goto loc_826840B8;
loc_82684054:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82684074;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82684094
	if (!ctx.cr6.eq) goto loc_82684094;
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826838b8
	ctx.lr = 0x8268408C;
	sub_826838B8(ctx, base);
	// stb r3,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r3.u8);
	// b 0x8268409c
	goto loc_8268409C;
loc_82684094:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
loc_8268409C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x826840b8
	if (!ctx.cr6.eq) goto loc_826840B8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8268f098
	ctx.lr = 0x826840B8;
	sub_8268F098(ctx, base);
loc_826840B8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82684158
	if (ctx.cr6.lt) goto loc_82684158;
	// beq cr6,0x8268413c
	if (ctx.cr6.eq) goto loc_8268413C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82684128
	if (ctx.cr6.lt) goto loc_82684128;
	// beq cr6,0x82684118
	if (ctx.cr6.eq) goto loc_82684118;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x82684184
	if (!ctx.cr6.lt) goto loc_82684184;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,27856(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27856);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82684184
	if (!ctx.cr6.lt) goto loc_82684184;
	// lbz r11,17(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82684168
	if (!ctx.cr0.eq) goto loc_82684168;
loc_82684104:
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82684184
	if (ctx.cr0.eq) goto loc_82684184;
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// b 0x82684184
	goto loc_82684184;
loc_82684118:
	// lfs f0,168(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5160(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 5160);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82684184
	if (ctx.cr6.gt) goto loc_82684184;
loc_82684128:
	// lbz r11,17(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82684104
	if (!ctx.cr0.eq) goto loc_82684104;
loc_82684134:
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// b 0x82684184
	goto loc_82684184;
loc_8268413C:
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82684184
	if (!ctx.cr0.eq) goto loc_82684184;
	// lbz r11,17(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82684168
	if (!ctx.cr0.eq) goto loc_82684168;
	// b 0x82684134
	goto loc_82684134;
loc_82684158:
	// lfs f0,164(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5160(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 5160);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82684184
	if (!ctx.cr6.lt) goto loc_82684184;
loc_82684168:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82684184;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82684184:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82684190"))) PPC_WEAK_FUNC(sub_82684190);
PPC_FUNC_IMPL(__imp__sub_82684190) {
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
	// bl 0x82692e58
	ctx.lr = 0x826841A8;
	sub_82692E58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82683f90
	ctx.lr = 0x826841B0;
	sub_82683F90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82682c20
	ctx.lr = 0x826841B8;
	sub_82682C20(ctx, base);
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

__attribute__((alias("__imp__sub_826841D0"))) PPC_WEAK_FUNC(sub_826841D0);
PPC_FUNC_IMPL(__imp__sub_826841D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,-11900
	ctx.r3.s64 = ctx.r11.s64 + -11900;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826841E0"))) PPC_WEAK_FUNC(sub_826841E0);
PPC_FUNC_IMPL(__imp__sub_826841E0) {
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8251c658
	ctx.lr = 0x826841F4;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82684220
	if (ctx.cr0.eq) goto loc_82684220;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,5696
	ctx.r11.s64 = ctx.r11.s64 + 5696;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// b 0x82684224
	goto loc_82684224;
loc_82684220:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82684224:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82684238"))) PPC_WEAK_FUNC(sub_82684238);
PPC_FUNC_IMPL(__imp__sub_82684238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,5732
	ctx.r11.s64 = ctx.r11.s64 + 5732;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r11,-3384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268425c
	if (ctx.cr6.eq) goto loc_8268425C;
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82684264
	goto loc_82684264;
loc_8268425C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
loc_82684264:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,14096(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14096);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,13948(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13948);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82684288"))) PPC_WEAK_FUNC(sub_82684288);
PPC_FUNC_IMPL(__imp__sub_82684288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,-11624
	ctx.r3.s64 = ctx.r11.s64 + -11624;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82684298"))) PPC_WEAK_FUNC(sub_82684298);
PPC_FUNC_IMPL(__imp__sub_82684298) {
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
	// bl 0x8251c658
	ctx.lr = 0x826842AC;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826842bc
	if (ctx.cr0.eq) goto loc_826842BC;
	// bl 0x82684238
	ctx.lr = 0x826842B8;
	sub_82684238(ctx, base);
	// b 0x826842c0
	goto loc_826842C0;
loc_826842BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826842C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826842D0"))) PPC_WEAK_FUNC(sub_826842D0);
PPC_FUNC_IMPL(__imp__sub_826842D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x826842f0
	if (ctx.cr6.lt) goto loc_826842F0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,2128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2128);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x826842f8
	if (!ctx.cr6.gt) goto loc_826842F8;
loc_826842F0:
	// stfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
loc_826842F8:
	// stfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82684300"))) PPC_WEAK_FUNC(sub_82684300);
PPC_FUNC_IMPL(__imp__sub_82684300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82684308;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82684328;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82684340;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8268438c
	if (!ctx.cr6.eq) goto loc_8268438C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82684360
	if (!ctx.cr6.lt) goto loc_82684360;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82684360:
	// stfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82684380
	if (ctx.cr6.lt) goto loc_82684380;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,2128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2128);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82684388
	if (!ctx.cr6.gt) goto loc_82684388;
loc_82684380:
	// stfs f13,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// b 0x8268438c
	goto loc_8268438C;
loc_82684388:
	// stfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_8268438C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82684398"))) PPC_WEAK_FUNC(sub_82684398);
PPC_FUNC_IMPL(__imp__sub_82684398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,-11348
	ctx.r3.s64 = ctx.r11.s64 + -11348;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826843A8"))) PPC_WEAK_FUNC(sub_826843A8);
PPC_FUNC_IMPL(__imp__sub_826843A8) {
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
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8251c658
	ctx.lr = 0x826843BC;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82684404
	if (ctx.cr0.eq) goto loc_82684404;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,5772
	ctx.r11.s64 = ctx.r11.s64 + 5772;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r11,-3384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826843e8
	if (ctx.cr6.eq) goto loc_826843E8;
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// b 0x826843f0
	goto loc_826843F0;
loc_826843E8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
loc_826843F0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// b 0x82684408
	goto loc_82684408;
loc_82684404:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82684408:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82684418"))) PPC_WEAK_FUNC(sub_82684418);
PPC_FUNC_IMPL(__imp__sub_82684418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,-11072
	ctx.r3.s64 = ctx.r11.s64 + -11072;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82684428"))) PPC_WEAK_FUNC(sub_82684428);
PPC_FUNC_IMPL(__imp__sub_82684428) {
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
	// bl 0x8251c658
	ctx.lr = 0x8268443C;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268445c
	if (ctx.cr0.eq) goto loc_8268445C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,5804
	ctx.r11.s64 = ctx.r11.s64 + 5804;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82684460
	goto loc_82684460;
loc_8268445C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82684460:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82684470"))) PPC_WEAK_FUNC(sub_82684470);
PPC_FUNC_IMPL(__imp__sub_82684470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82684478;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82684498;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826844B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x826844c8
	if (!ctx.cr6.eq) goto loc_826844C8;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
loc_826844C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826844D8"))) PPC_WEAK_FUNC(sub_826844D8);
PPC_FUNC_IMPL(__imp__sub_826844D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,-10796
	ctx.r3.s64 = ctx.r11.s64 + -10796;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826844E8"))) PPC_WEAK_FUNC(sub_826844E8);
PPC_FUNC_IMPL(__imp__sub_826844E8) {
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
	// bl 0x8251c658
	ctx.lr = 0x826844FC;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268451c
	if (ctx.cr0.eq) goto loc_8268451C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,5840
	ctx.r11.s64 = ctx.r11.s64 + 5840;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82684520
	goto loc_82684520;
loc_8268451C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82684520:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82684530"))) PPC_WEAK_FUNC(sub_82684530);
PPC_FUNC_IMPL(__imp__sub_82684530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,-10520
	ctx.r3.s64 = ctx.r11.s64 + -10520;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82684540"))) PPC_WEAK_FUNC(sub_82684540);
PPC_FUNC_IMPL(__imp__sub_82684540) {
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8251c658
	ctx.lr = 0x82684554;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82684580
	if (ctx.cr0.eq) goto loc_82684580;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,5872
	ctx.r11.s64 = ctx.r11.s64 + 5872;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// b 0x82684584
	goto loc_82684584;
loc_82684580:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82684584:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82684598"))) PPC_WEAK_FUNC(sub_82684598);
PPC_FUNC_IMPL(__imp__sub_82684598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x826845A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826845C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826845D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x826845f8
	if (!ctx.cr6.eq) goto loc_826845F8;
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
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
loc_826845F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82684608"))) PPC_WEAK_FUNC(sub_82684608);
PPC_FUNC_IMPL(__imp__sub_82684608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,-10244
	ctx.r3.s64 = ctx.r11.s64 + -10244;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82684618"))) PPC_WEAK_FUNC(sub_82684618);
PPC_FUNC_IMPL(__imp__sub_82684618) {
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
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8251c658
	ctx.lr = 0x8268462C;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82684674
	if (ctx.cr0.eq) goto loc_82684674;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,5912
	ctx.r11.s64 = ctx.r11.s64 + 5912;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r11,-3384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82684658
	if (ctx.cr6.eq) goto loc_82684658;
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82684660
	goto loc_82684660;
loc_82684658:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
loc_82684660:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16092(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16092);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// b 0x82684678
	goto loc_82684678;
loc_82684674:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82684678:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82684688"))) PPC_WEAK_FUNC(sub_82684688);
PPC_FUNC_IMPL(__imp__sub_82684688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,-9968
	ctx.r3.s64 = ctx.r11.s64 + -9968;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82684698"))) PPC_WEAK_FUNC(sub_82684698);
PPC_FUNC_IMPL(__imp__sub_82684698) {
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
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8251c658
	ctx.lr = 0x826846AC;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826846f4
	if (ctx.cr0.eq) goto loc_826846F4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,5948
	ctx.r11.s64 = ctx.r11.s64 + 5948;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r11,-3384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826846d8
	if (ctx.cr6.eq) goto loc_826846D8;
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// b 0x826846e0
	goto loc_826846E0;
loc_826846D8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
loc_826846E0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,5944(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5944);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// b 0x826846f8
	goto loc_826846F8;
loc_826846F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826846F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82684708"))) PPC_WEAK_FUNC(sub_82684708);
PPC_FUNC_IMPL(__imp__sub_82684708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82684710;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82684730;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82684748;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82684758
	if (!ctx.cr6.eq) goto loc_82684758;
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_82684758:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82684768"))) PPC_WEAK_FUNC(sub_82684768);
PPC_FUNC_IMPL(__imp__sub_82684768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,-9692
	ctx.r3.s64 = ctx.r11.s64 + -9692;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82684778"))) PPC_WEAK_FUNC(sub_82684778);
PPC_FUNC_IMPL(__imp__sub_82684778) {
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
	// bl 0x8251c658
	ctx.lr = 0x8268478C;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826847ac
	if (ctx.cr0.eq) goto loc_826847AC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,5980
	ctx.r11.s64 = ctx.r11.s64 + 5980;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x826847b0
	goto loc_826847B0;
loc_826847AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826847B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826847C0"))) PPC_WEAK_FUNC(sub_826847C0);
PPC_FUNC_IMPL(__imp__sub_826847C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,-9416
	ctx.r3.s64 = ctx.r11.s64 + -9416;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826847D0"))) PPC_WEAK_FUNC(sub_826847D0);
PPC_FUNC_IMPL(__imp__sub_826847D0) {
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
	// bl 0x8251c658
	ctx.lr = 0x826847E4;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82684804
	if (ctx.cr0.eq) goto loc_82684804;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,6012
	ctx.r11.s64 = ctx.r11.s64 + 6012;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82684808
	goto loc_82684808;
loc_82684804:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82684808:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82684818"))) PPC_WEAK_FUNC(sub_82684818);
PPC_FUNC_IMPL(__imp__sub_82684818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,-9140
	ctx.r3.s64 = ctx.r11.s64 + -9140;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82684828"))) PPC_WEAK_FUNC(sub_82684828);
PPC_FUNC_IMPL(__imp__sub_82684828) {
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8251c658
	ctx.lr = 0x8268483C;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268485c
	if (ctx.cr0.eq) goto loc_8268485C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,6044
	ctx.r11.s64 = ctx.r11.s64 + 6044;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82684860
	goto loc_82684860;
loc_8268485C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82684860:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82684870"))) PPC_WEAK_FUNC(sub_82684870);
PPC_FUNC_IMPL(__imp__sub_82684870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,-8864
	ctx.r3.s64 = ctx.r11.s64 + -8864;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82684880"))) PPC_WEAK_FUNC(sub_82684880);
PPC_FUNC_IMPL(__imp__sub_82684880) {
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
	// bl 0x8251c658
	ctx.lr = 0x82684894;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826848ac
	if (ctx.cr0.eq) goto loc_826848AC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,6080
	ctx.r11.s64 = ctx.r11.s64 + 6080;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x826848b0
	goto loc_826848B0;
loc_826848AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826848B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826848C0"))) PPC_WEAK_FUNC(sub_826848C0);
PPC_FUNC_IMPL(__imp__sub_826848C0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826848F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-8864
	ctx.r11.s64 = ctx.r11.s64 + -8864;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82684910
	if (!ctx.cr6.eq) goto loc_82684910;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_82684910:
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

__attribute__((alias("__imp__sub_82684930"))) PPC_WEAK_FUNC(sub_82684930);
PPC_FUNC_IMPL(__imp__sub_82684930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-11072
	ctx.r11.s64 = ctx.r11.s64 + -11072;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82684b00
	if (ctx.cr6.eq) goto loc_82684B00;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-5552
	ctx.r11.s64 = ctx.r11.s64 + -5552;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82684b00
	if (ctx.cr6.eq) goto loc_82684B00;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-8312
	ctx.r11.s64 = ctx.r11.s64 + -8312;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82684b00
	if (ctx.cr6.eq) goto loc_82684B00;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-9140
	ctx.r11.s64 = ctx.r11.s64 + -9140;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82684b00
	if (ctx.cr6.eq) goto loc_82684B00;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-8036
	ctx.r11.s64 = ctx.r11.s64 + -8036;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82684b00
	if (ctx.cr6.eq) goto loc_82684B00;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-8588
	ctx.r11.s64 = ctx.r11.s64 + -8588;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82684b00
	if (ctx.cr6.eq) goto loc_82684B00;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-9416
	ctx.r11.s64 = ctx.r11.s64 + -9416;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82684b00
	if (ctx.cr6.eq) goto loc_82684B00;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-7760
	ctx.r11.s64 = ctx.r11.s64 + -7760;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82684b00
	if (ctx.cr6.eq) goto loc_82684B00;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-9692
	ctx.r11.s64 = ctx.r11.s64 + -9692;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82684b00
	if (ctx.cr6.eq) goto loc_82684B00;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-10796
	ctx.r11.s64 = ctx.r11.s64 + -10796;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82684b00
	if (ctx.cr6.eq) goto loc_82684B00;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-5828
	ctx.r11.s64 = ctx.r11.s64 + -5828;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82684b00
	if (ctx.cr6.eq) goto loc_82684B00;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-11900
	ctx.r11.s64 = ctx.r11.s64 + -11900;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82684b00
	if (ctx.cr6.eq) goto loc_82684B00;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-10520
	ctx.r11.s64 = ctx.r11.s64 + -10520;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82684b00
	if (ctx.cr6.eq) goto loc_82684B00;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-7484
	ctx.r11.s64 = ctx.r11.s64 + -7484;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82684b00
	if (ctx.cr6.eq) goto loc_82684B00;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-6104
	ctx.r11.s64 = ctx.r11.s64 + -6104;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82684b00
	if (ctx.cr6.eq) goto loc_82684B00;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-9968
	ctx.r11.s64 = ctx.r11.s64 + -9968;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82684b00
	if (ctx.cr6.eq) goto loc_82684B00;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-6380
	ctx.r11.s64 = ctx.r11.s64 + -6380;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82684b00
	if (ctx.cr6.eq) goto loc_82684B00;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-11348
	ctx.r11.s64 = ctx.r11.s64 + -11348;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82684b00
	if (ctx.cr6.eq) goto loc_82684B00;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-7208
	ctx.r11.s64 = ctx.r11.s64 + -7208;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82684b00
	if (ctx.cr6.eq) goto loc_82684B00;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-11624
	ctx.r11.s64 = ctx.r11.s64 + -11624;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82684b00
	if (ctx.cr6.eq) goto loc_82684B00;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-6656
	ctx.r11.s64 = ctx.r11.s64 + -6656;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82684b00
	if (ctx.cr6.eq) goto loc_82684B00;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-10244
	ctx.r11.s64 = ctx.r11.s64 + -10244;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82684b00
	if (ctx.cr6.eq) goto loc_82684B00;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-6932
	ctx.r11.s64 = ctx.r11.s64 + -6932;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82684B00:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82684B08"))) PPC_WEAK_FUNC(sub_82684B08);
PPC_FUNC_IMPL(__imp__sub_82684B08) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82684b38
	if (!ctx.cr6.eq) goto loc_82684B38;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82684c08
	goto loc_82684C08;
loc_82684B38:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-11624
	ctx.r4.s64 = ctx.r11.s64 + -11624;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,7856(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7856);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82689fd0
	ctx.lr = 0x82684B50;
	sub_82689FD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82684b5c
	if (ctx.cr0.eq) goto loc_82684B5C;
	// lfs f31,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
loc_82684B5C:
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r11,-11900
	ctx.r4.s64 = ctx.r11.s64 + -11900;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f0,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82689fd0
	ctx.lr = 0x82684B9C;
	sub_82689FD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82684bbc
	if (ctx.cr0.eq) goto loc_82684BBC;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_82684BBC:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-10520
	ctx.r4.s64 = ctx.r11.s64 + -10520;
	// bl 0x82689fd0
	ctx.lr = 0x82684BCC;
	sub_82689FD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82684bec
	if (ctx.cr0.eq) goto loc_82684BEC;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_82684BEC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,5424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5424);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82689dc8
	ctx.lr = 0x82684C08;
	sub_82689DC8(ctx, base);
loc_82684C08:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_82684C28"))) PPC_WEAK_FUNC(sub_82684C28);
PPC_FUNC_IMPL(__imp__sub_82684C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,-8588
	ctx.r3.s64 = ctx.r11.s64 + -8588;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82684C38"))) PPC_WEAK_FUNC(sub_82684C38);
PPC_FUNC_IMPL(__imp__sub_82684C38) {
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
	// bl 0x8251c658
	ctx.lr = 0x82684C4C;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82684c6c
	if (ctx.cr0.eq) goto loc_82684C6C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,6116
	ctx.r11.s64 = ctx.r11.s64 + 6116;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82684c70
	goto loc_82684C70;
loc_82684C6C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82684C70:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82684C80"))) PPC_WEAK_FUNC(sub_82684C80);
PPC_FUNC_IMPL(__imp__sub_82684C80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82684C88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82684CA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82684CC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82684cd8
	if (!ctx.cr6.eq) goto loc_82684CD8;
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
loc_82684CD8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82684CE8"))) PPC_WEAK_FUNC(sub_82684CE8);
PPC_FUNC_IMPL(__imp__sub_82684CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,-8312
	ctx.r3.s64 = ctx.r11.s64 + -8312;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82684CF8"))) PPC_WEAK_FUNC(sub_82684CF8);
PPC_FUNC_IMPL(__imp__sub_82684CF8) {
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
	// bl 0x8251c658
	ctx.lr = 0x82684D0C;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82684d2c
	if (ctx.cr0.eq) goto loc_82684D2C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,6144
	ctx.r11.s64 = ctx.r11.s64 + 6144;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82684d30
	goto loc_82684D30;
loc_82684D2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82684D30:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82684D40"))) PPC_WEAK_FUNC(sub_82684D40);
PPC_FUNC_IMPL(__imp__sub_82684D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,-8036
	ctx.r3.s64 = ctx.r11.s64 + -8036;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82684D50"))) PPC_WEAK_FUNC(sub_82684D50);
PPC_FUNC_IMPL(__imp__sub_82684D50) {
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8251c658
	ctx.lr = 0x82684D64;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82684d84
	if (ctx.cr0.eq) goto loc_82684D84;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,6176
	ctx.r11.s64 = ctx.r11.s64 + 6176;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82684d88
	goto loc_82684D88;
loc_82684D84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82684D88:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82684D98"))) PPC_WEAK_FUNC(sub_82684D98);
PPC_FUNC_IMPL(__imp__sub_82684D98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82684DA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82684DC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82684DD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82684dfc
	if (!ctx.cr6.eq) goto loc_82684DFC;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
loc_82684DFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82684E08"))) PPC_WEAK_FUNC(sub_82684E08);
PPC_FUNC_IMPL(__imp__sub_82684E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,-7760
	ctx.r3.s64 = ctx.r11.s64 + -7760;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82684E18"))) PPC_WEAK_FUNC(sub_82684E18);
PPC_FUNC_IMPL(__imp__sub_82684E18) {
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
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x8251c658
	ctx.lr = 0x82684E2C;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82684e6c
	if (ctx.cr0.eq) goto loc_82684E6C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// addi r11,r11,6212
	ctx.r11.s64 = ctx.r11.s64 + 6212;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// b 0x82684e70
	goto loc_82684E70;
loc_82684E6C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82684E70:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82684E80"))) PPC_WEAK_FUNC(sub_82684E80);
PPC_FUNC_IMPL(__imp__sub_82684E80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82684E88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82684EA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82684EC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82684f0c
	if (!ctx.cr6.eq) goto loc_82684F0C;
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f0,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// lbz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 32);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// stb r10,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r10.u8);
	// lfs f0,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f0,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f0,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
loc_82684F0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82684F18"))) PPC_WEAK_FUNC(sub_82684F18);
PPC_FUNC_IMPL(__imp__sub_82684F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,-7484
	ctx.r3.s64 = ctx.r11.s64 + -7484;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82684F28"))) PPC_WEAK_FUNC(sub_82684F28);
PPC_FUNC_IMPL(__imp__sub_82684F28) {
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8251c658
	ctx.lr = 0x82684F3C;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82684f68
	if (ctx.cr0.eq) goto loc_82684F68;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,6244
	ctx.r11.s64 = ctx.r11.s64 + 6244;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// b 0x82684f6c
	goto loc_82684F6C;
loc_82684F68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82684F6C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82684F80"))) PPC_WEAK_FUNC(sub_82684F80);
PPC_FUNC_IMPL(__imp__sub_82684F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,-7208
	ctx.r3.s64 = ctx.r11.s64 + -7208;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82684F90"))) PPC_WEAK_FUNC(sub_82684F90);
PPC_FUNC_IMPL(__imp__sub_82684F90) {
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
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8251c658
	ctx.lr = 0x82684FA4;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82684fc4
	if (ctx.cr0.eq) goto loc_82684FC4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r11,r11,6280
	ctx.r11.s64 = ctx.r11.s64 + 6280;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82684fc8
	goto loc_82684FC8;
loc_82684FC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82684FC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82684FD8"))) PPC_WEAK_FUNC(sub_82684FD8);
PPC_FUNC_IMPL(__imp__sub_82684FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82684FE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82685000;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82685018;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82685028
	if (!ctx.cr6.eq) goto loc_82685028;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82685028:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82685038"))) PPC_WEAK_FUNC(sub_82685038);
PPC_FUNC_IMPL(__imp__sub_82685038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,-6932
	ctx.r3.s64 = ctx.r11.s64 + -6932;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82685048"))) PPC_WEAK_FUNC(sub_82685048);
PPC_FUNC_IMPL(__imp__sub_82685048) {
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
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8251c658
	ctx.lr = 0x8268505C;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268507c
	if (ctx.cr0.eq) goto loc_8268507C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,6312
	ctx.r11.s64 = ctx.r11.s64 + 6312;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82685080
	goto loc_82685080;
loc_8268507C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82685080:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82685090"))) PPC_WEAK_FUNC(sub_82685090);
PPC_FUNC_IMPL(__imp__sub_82685090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82685098;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826850B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826850D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x826850e0
	if (!ctx.cr6.eq) goto loc_826850E0;
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
loc_826850E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826850F0"))) PPC_WEAK_FUNC(sub_826850F0);
PPC_FUNC_IMPL(__imp__sub_826850F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,-6656
	ctx.r3.s64 = ctx.r11.s64 + -6656;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82685100"))) PPC_WEAK_FUNC(sub_82685100);
PPC_FUNC_IMPL(__imp__sub_82685100) {
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8251c658
	ctx.lr = 0x82685114;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82685140
	if (ctx.cr0.eq) goto loc_82685140;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,6344
	ctx.r11.s64 = ctx.r11.s64 + 6344;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// b 0x82685144
	goto loc_82685144;
loc_82685140:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82685144:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82685158"))) PPC_WEAK_FUNC(sub_82685158);
PPC_FUNC_IMPL(__imp__sub_82685158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,-6380
	ctx.r3.s64 = ctx.r11.s64 + -6380;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82685168"))) PPC_WEAK_FUNC(sub_82685168);
PPC_FUNC_IMPL(__imp__sub_82685168) {
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8251c658
	ctx.lr = 0x8268517C;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826851a8
	if (ctx.cr0.eq) goto loc_826851A8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,6384
	ctx.r11.s64 = ctx.r11.s64 + 6384;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// b 0x826851ac
	goto loc_826851AC;
loc_826851A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826851AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826851C0"))) PPC_WEAK_FUNC(sub_826851C0);
PPC_FUNC_IMPL(__imp__sub_826851C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,-6104
	ctx.r3.s64 = ctx.r11.s64 + -6104;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826851D0"))) PPC_WEAK_FUNC(sub_826851D0);
PPC_FUNC_IMPL(__imp__sub_826851D0) {
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
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8251c658
	ctx.lr = 0x826851E4;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826851fc
	if (ctx.cr0.eq) goto loc_826851FC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,6420
	ctx.r11.s64 = ctx.r11.s64 + 6420;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82685200
	goto loc_82685200;
loc_826851FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82685200:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82685210"))) PPC_WEAK_FUNC(sub_82685210);
PPC_FUNC_IMPL(__imp__sub_82685210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82685218;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82685238;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82685250;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82685274
	if (!ctx.cr6.eq) goto loc_82685274;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82685270
	if (!ctx.cr6.lt) goto loc_82685270;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82685270:
	// stfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
loc_82685274:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82685280"))) PPC_WEAK_FUNC(sub_82685280);
PPC_FUNC_IMPL(__imp__sub_82685280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,-5828
	ctx.r3.s64 = ctx.r11.s64 + -5828;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82685290"))) PPC_WEAK_FUNC(sub_82685290);
PPC_FUNC_IMPL(__imp__sub_82685290) {
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
	// bl 0x8251c658
	ctx.lr = 0x826852A4;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826852c4
	if (ctx.cr0.eq) goto loc_826852C4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,6456
	ctx.r11.s64 = ctx.r11.s64 + 6456;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x826852c8
	goto loc_826852C8;
loc_826852C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826852C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826852D8"))) PPC_WEAK_FUNC(sub_826852D8);
PPC_FUNC_IMPL(__imp__sub_826852D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,-5552
	ctx.r3.s64 = ctx.r11.s64 + -5552;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826852E8"))) PPC_WEAK_FUNC(sub_826852E8);
PPC_FUNC_IMPL(__imp__sub_826852E8) {
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
	// bl 0x8251c658
	ctx.lr = 0x826852FC;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268531c
	if (ctx.cr0.eq) goto loc_8268531C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,6496
	ctx.r11.s64 = ctx.r11.s64 + 6496;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82685320
	goto loc_82685320;
loc_8268531C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82685320:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82685330"))) PPC_WEAK_FUNC(sub_82685330);
PPC_FUNC_IMPL(__imp__sub_82685330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// addi r11,r11,6560
	ctx.r11.s64 = ctx.r11.s64 + 6560;
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,9108
	ctx.r11.s64 = ctx.r11.s64 + 9108;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lwz r11,-11312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11312);
loc_8268537C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x8268537c
	if (!ctx.cr0.eq) goto loc_8268537C;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// addi r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 + 24;
	// lwz r11,-11296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11296);
loc_826853A0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x826853a0
	if (!ctx.cr0.eq) goto loc_826853A0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826853C0"))) PPC_WEAK_FUNC(sub_826853C0);
PPC_FUNC_IMPL(__imp__sub_826853C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,6564
	ctx.r11.s64 = ctx.r11.s64 + 6564;
	// addi r10,r3,13
	ctx.r10.s64 = ctx.r3.s64 + 13;
	// stb r9,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r9.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// lwz r11,-11292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11292);
loc_826853E0:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x826853e0
	if (!ctx.cr0.eq) goto loc_826853E0;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r9,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r9.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82685408"))) PPC_WEAK_FUNC(sub_82685408);
PPC_FUNC_IMPL(__imp__sub_82685408) {
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
	// addi r11,r11,6564
	ctx.r11.s64 = ctx.r11.s64 + 6564;
	// addi r10,r31,13
	ctx.r10.s64 = ctx.r31.s64 + 13;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// lwz r11,-11292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11292);
loc_82685438:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x82685438
	if (!ctx.cr0.eq) goto loc_82685438;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r30,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r30.u8);
	// beq 0x826854a4
	if (ctx.cr0.eq) goto loc_826854A4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826854a0
	if (ctx.cr6.eq) goto loc_826854A0;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82685498
	if (ctx.cr6.eq) goto loc_82685498;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82685494;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8268549c
	goto loc_8268549C;
loc_82685498:
	// bl 0x82186190
	ctx.lr = 0x8268549C;
	sub_82186190(ctx, base);
loc_8268549C:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_826854A0:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_826854A4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-16924
	ctx.r11.s64 = ctx.r11.s64 + -16924;
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

__attribute__((alias("__imp__sub_826854C8"))) PPC_WEAK_FUNC(sub_826854C8);
PPC_FUNC_IMPL(__imp__sub_826854C8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826854D0"))) PPC_WEAK_FUNC(sub_826854D0);
PPC_FUNC_IMPL(__imp__sub_826854D0) {
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
	// bl 0x82685408
	ctx.lr = 0x826854F0;
	sub_82685408(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268550c
	if (ctx.cr0.eq) goto loc_8268550C;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-11212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268550C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268550C:
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

__attribute__((alias("__imp__sub_82685528"))) PPC_WEAK_FUNC(sub_82685528);
PPC_FUNC_IMPL(__imp__sub_82685528) {
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
	// rlwinm. r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268559c
	if (ctx.cr0.eq) goto loc_8268559C;
	// addi r30,r31,-4
	ctx.r30.s64 = ctx.r31.s64 + -4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mulli r10,r11,88
	ctx.r10.s64 = ctx.r11.s64 * 88;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// blt 0x82685578
	if (ctx.cr0.lt) goto loc_82685578;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r9,r9,-16924
	ctx.r9.s64 = ctx.r9.s64 + -16924;
loc_82685568:
	// addi r10,r10,-88
	ctx.r10.s64 = ctx.r10.s64 + -88;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// bge 0x82685568
	if (!ctx.cr0.lt) goto loc_82685568;
loc_82685578:
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82685594
	if (ctx.cr0.eq) goto loc_82685594;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,-11212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82685594;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82685594:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x826855c8
	goto loc_826855C8;
loc_8268559C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-16924
	ctx.r11.s64 = ctx.r11.s64 + -16924;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x826855c4
	if (ctx.cr0.eq) goto loc_826855C4;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-11212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826855C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826855C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_826855C8:
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

__attribute__((alias("__imp__sub_826855E0"))) PPC_WEAK_FUNC(sub_826855E0);
PPC_FUNC_IMPL(__imp__sub_826855E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
loc_82685604:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82685604
	if (!ctx.cr0.eq) goto loc_82685604;
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// li r10,64
	ctx.r10.s64 = 64;
loc_82685620:
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82685620
	if (!ctx.cr0.eq) goto loc_82685620;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82685638"))) PPC_WEAK_FUNC(sub_82685638);
PPC_FUNC_IMPL(__imp__sub_82685638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x82685640;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmpwi cr6,r27,-2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -2, ctx.xer);
	// bne cr6,0x8268565c
	if (!ctx.cr6.eq) goto loc_8268565C;
	// lwz r27,8(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_8268565C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82685670
	if (!ctx.cr6.gt) goto loc_82685670;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826857f8
	goto loc_826857F8;
loc_82685670:
	// lwz r10,272(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8268578c
	if (!ctx.cr6.eq) goto loc_8268578C;
	// addic. r30,r10,5
	ctx.xer.ca = ctx.r10.u32 > 4294967290;
	ctx.r30.s64 = ctx.r10.s64 + 5;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// bne 0x82685694
	if (!ctx.cr0.eq) goto loc_82685694;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82186158
	ctx.lr = 0x82685690;
	sub_82186158(ctx, base);
	// b 0x826856c4
	goto loc_826856C4;
loc_82685694:
	// lis r11,744
	ctx.r11.s64 = 48758784;
	// li r3,-1
	ctx.r3.s64 = -1;
	// ori r11,r11,47662
	ctx.r11.u64 = ctx.r11.u64 | 47662;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// mulli r11,r30,88
	ctx.r11.s64 = ctx.r30.s64 * 88;
	// ble cr6,0x826856b0
	if (!ctx.cr6.gt) goto loc_826856B0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_826856B0:
	// li r10,-5
	ctx.r10.s64 = -5;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x826856c0
	if (ctx.cr6.gt) goto loc_826856C0;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_826856C0:
	// bl 0x8251c658
	ctx.lr = 0x826856C4;
	sub_8251C658(ctx, base);
loc_826856C4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826856f4
	if (ctx.cr6.eq) goto loc_826856F4;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addic. r8,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r8.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// blt 0x826856f8
	if (ctx.cr0.lt) goto loc_826856F8;
loc_826856E0:
	// bl 0x82685330
	ctx.lr = 0x826856E4;
	sub_82685330(ctx, base);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r3,r3,88
	ctx.r3.s64 = ctx.r3.s64 + 88;
	// bge 0x826856e0
	if (!ctx.cr0.lt) goto loc_826856E0;
	// b 0x826856f8
	goto loc_826856F8;
loc_826856F4:
	// li r28,0
	ctx.r28.s64 = 0;
loc_826856F8:
	// mulli r30,r27,88
	ctx.r30.s64 = ctx.r27.s64 * 88;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826df680
	ctx.lr = 0x8268570C;
	sub_826DF680(ctx, base);
	// add r29,r30,r28
	ctx.r29.u64 = ctx.r30.u64 + ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826855e0
	ctx.lr = 0x8268571C;
	sub_826855E0(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r29,88
	ctx.r3.s64 = ctx.r29.s64 + 88;
	// subf r10,r27,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r27.s64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mulli r5,r10,88
	ctx.r5.s64 = ctx.r10.s64 * 88;
	// bl 0x826df680
	ctx.lr = 0x82685738;
	sub_826DF680(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82685784
	if (ctx.cr0.eq) goto loc_82685784;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82685784
	if (ctx.cr6.eq) goto loc_82685784;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82685778
	if (ctx.cr6.eq) goto loc_82685778;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82685774;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8268577c
	goto loc_8268577C;
loc_82685778:
	// bl 0x82186190
	ctx.lr = 0x8268577C;
	sub_82186190(ctx, base);
loc_8268577C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82685784:
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// b 0x826857b8
	goto loc_826857B8;
loc_8268578C:
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// mulli r30,r27,88
	ctx.r30.s64 = ctx.r27.s64 * 88;
	// mulli r5,r11,88
	ctx.r5.s64 = ctx.r11.s64 * 88;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r4,88
	ctx.r3.s64 = ctx.r4.s64 + 88;
	// bl 0x826de940
	ctx.lr = 0x826857A8;
	sub_826DE940(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x826855e0
	ctx.lr = 0x826857B8;
	sub_826855E0(ctx, base);
loc_826857B8:
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x826857e0
	goto loc_826857E0;
loc_826857C0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r5,-1
	ctx.r30.s64 = ctx.r5.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826857DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_826857E0:
	// cmplw cr6,r5,r27
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x826857c0
	if (ctx.cr6.gt) goto loc_826857C0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_826857F8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82685800"))) PPC_WEAK_FUNC(sub_82685800);
PPC_FUNC_IMPL(__imp__sub_82685800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de89c
	ctx.lr = 0x82685808;
	__savegprlr_17(ctx, base);
	// stfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f30.u64);
	// stfd f31,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// addi r30,r18,12
	ctx.r30.s64 = ctx.r18.s64 + 12;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r21,8(r18)
	PPC_STORE_U32(ctx.r18.u32 + 8, ctx.r21.u32);
	// stb r21,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r21.u8);
	// lwz r11,-3384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3384);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82685b04
	if (ctx.cr0.eq) goto loc_82685B04;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82685854;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82685b04
	if (ctx.cr0.eq) goto loc_82685B04;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82685884;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,16
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 16, ctx.xer);
	// bne cr6,0x82685aec
	if (!ctx.cr6.eq) goto loc_82685AEC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826858AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x82685aec
	if (!ctx.cr6.eq) goto loc_82685AEC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stb r21,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r21.u8);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r11,6528
	ctx.r3.s64 = ctx.r11.s64 + 6528;
	// bl 0x826e6bb0
	ctx.lr = 0x826858C8;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82685aec
	if (!ctx.cr0.eq) goto loc_82685AEC;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
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
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// beq cr6,0x82685904
	if (ctx.cr6.eq) goto loc_82685904;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82685aec
	if (!ctx.cr6.eq) goto loc_82685AEC;
loc_82685904:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82685330
	ctx.lr = 0x8268590C;
	sub_82685330(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r19,-32071
	ctx.r19.s64 = -2101805056;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// lwz r11,-11316(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + -11316);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82685930:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82685930
	if (!ctx.cr0.eq) goto loc_82685930;
	// lis r17,-32071
	ctx.r17.s64 = -2101805056;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// lwz r11,-11296(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + -11296);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82685954:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82685954
	if (!ctx.cr0.eq) goto loc_82685954;
	// stb r21,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r21.u8);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82685990;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x82685aec
	if (!ctx.cr6.eq) goto loc_82685AEC;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
	// or r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 | ctx.r10.u64;
	// cmpwi cr6,r6,255
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 255, ctx.xer);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bgt cr6,0x82685af8
	if (ctx.cr6.gt) goto loc_82685AF8;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r5,r18,13
	ctx.r5.s64 = ctx.r18.s64 + 13;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826859E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82685af4
	if (!ctx.cr6.eq) goto loc_82685AF4;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stb r21,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r21.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82685A14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82685aec
	if (!ctx.cr6.eq) goto loc_82685AEC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r28,r11,6604
	ctx.r28.s64 = ctx.r11.s64 + 6604;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r22,-32071
	ctx.r22.s64 = -2101805056;
	// addi r27,r11,6592
	ctx.r27.s64 = ctx.r11.s64 + 6592;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f30,2372(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2372);
	ctx.f30.f64 = double(temp.f32);
	// lis r23,-32071
	ctx.r23.s64 = -2101805056;
	// addi r26,r11,6580
	ctx.r26.s64 = ctx.r11.s64 + 6580;
	// lis r24,-32071
	ctx.r24.s64 = -2101805056;
	// lis r25,-32071
	ctx.r25.s64 = -2101805056;
	// li r20,-2
	ctx.r20.s64 = -2;
loc_82685A50:
	// stfs f30,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82685A7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82685aec
	if (!ctx.cr6.eq) goto loc_82685AEC;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82685f20
	if (!ctx.cr0.gt) goto loc_82685F20;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x82685cdc
	if (!ctx.cr6.gt) goto loc_82685CDC;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x82685c74
	if (ctx.cr6.eq) goto loc_82685C74;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x82685c0c
	if (ctx.cr6.eq) goto loc_82685C0C;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82685ba4
	if (ctx.cr6.eq) goto loc_82685BA4;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x82685f20
	if (!ctx.cr6.eq) goto loc_82685F20;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82685b18
	if (!ctx.cr6.eq) goto loc_82685B18;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82685AE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,64
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 64, ctx.xer);
	// beq cr6,0x82685f20
	if (ctx.cr6.eq) goto loc_82685F20;
loc_82685AEC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82685AF4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82685AF8:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82685B04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82685B04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82685B08:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x826de8ec
	__restgprlr_17(ctx, base);
	return;
loc_82685B18:
	// stw r21,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r21.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82685B34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x82685aec
	if (!ctx.cr6.eq) goto loc_82685AEC;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
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
	// or. r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 | ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// beq 0x82685f20
	if (ctx.cr0.eq) goto loc_82685F20;
	// cmplwi cr6,r30,63
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 63, ctx.xer);
	// blt cr6,0x82685b70
	if (ctx.cr6.lt) goto loc_82685B70;
	// li r30,63
	ctx.r30.s64 = 63;
loc_82685B70:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82685B90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82685aec
	if (!ctx.cr6.eq) goto loc_82685AEC;
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// stbx r21,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r21.u8);
	// b 0x82685f20
	goto loc_82685F20;
loc_82685BA4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82685BC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x82685aec
	if (!ctx.cr6.eq) goto loc_82685AEC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
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
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x826e0998
	ctx.lr = 0x82685C08;
	sub_826E0998(ctx, base);
	// b 0x82685f20
	goto loc_82685F20;
loc_82685C0C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82685C2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x82685aec
	if (!ctx.cr6.eq) goto loc_82685AEC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
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
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x826e0998
	ctx.lr = 0x82685C70;
	sub_826E0998(ctx, base);
	// b 0x82685f20
	goto loc_82685F20;
loc_82685C74:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82685C94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x82685aec
	if (!ctx.cr6.eq) goto loc_82685AEC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
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
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x826e0998
	ctx.lr = 0x82685CD8;
	sub_826E0998(ctx, base);
	// b 0x82685f20
	goto loc_82685F20;
loc_82685CDC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82685CFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x82685aec
	if (!ctx.cr6.eq) goto loc_82685AEC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82685D24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x82685aec
	if (!ctx.cr6.eq) goto loc_82685AEC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82685D4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x82685aec
	if (!ctx.cr6.eq) goto loc_82685AEC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// rlwimi r7,r11,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r8,r11,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r10,16,16,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r5,r10,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r7,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r11,r8,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lwz r10,-11316(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + -11316);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// rlwimi r4,r9,16,16,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r3,r9,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r9,r6,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r5,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// rlwinm r7,r4,24,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFF;
	// or r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r6,r3,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFF0000;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// or r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
loc_82685DC8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82685dec
	if (ctx.cr0.eq) goto loc_82685DEC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82685dc8
	if (ctx.cr6.eq) goto loc_82685DC8;
loc_82685DEC:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82685e54
	if (ctx.cr0.eq) goto loc_82685E54;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82685638
	ctx.lr = 0x82685E04;
	sub_82685638(ctx, base);
	// lwz r11,-11316(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + -11316);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stfs f31,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
loc_82685E20:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82685e20
	if (!ctx.cr0.eq) goto loc_82685E20;
	// lwz r11,-11296(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + -11296);
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82685E40:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82685e40
	if (!ctx.cr0.eq) goto loc_82685E40;
loc_82685E54:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f0,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bne cr6,0x82685ea0
	if (!ctx.cr6.eq) goto loc_82685EA0;
	// lwz r11,-11312(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -11312);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82685E88:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82685e88
	if (!ctx.cr0.eq) goto loc_82685E88;
	// b 0x82685f20
	goto loc_82685F20;
loc_82685EA0:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82685ecc
	if (!ctx.cr6.eq) goto loc_82685ECC;
	// lwz r11,-11308(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -11308);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82685EB4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82685eb4
	if (!ctx.cr0.eq) goto loc_82685EB4;
	// b 0x82685f20
	goto loc_82685F20;
loc_82685ECC:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82685ef8
	if (!ctx.cr6.eq) goto loc_82685EF8;
	// lwz r11,-11304(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -11304);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82685EE0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82685ee0
	if (!ctx.cr0.eq) goto loc_82685EE0;
	// b 0x82685f20
	goto loc_82685F20;
loc_82685EF8:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82685f20
	if (!ctx.cr6.eq) goto loc_82685F20;
	// lwz r11,-11300(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -11300);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82685F0C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82685f0c
	if (!ctx.cr0.eq) goto loc_82685F0C;
loc_82685F20:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82685a50
	if (!ctx.cr0.eq) goto loc_82685A50;
	// lwz r11,-11316(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + -11316);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
loc_82685F34:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82685f58
	if (ctx.cr0.eq) goto loc_82685F58;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82685f34
	if (ctx.cr6.eq) goto loc_82685F34;
loc_82685F58:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82685f70
	if (ctx.cr0.eq) goto loc_82685F70;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82685638
	ctx.lr = 0x82685F70;
	sub_82685638(ctx, base);
loc_82685F70:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82685F88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82685b08
	goto loc_82685B08;
}

__attribute__((alias("__imp__sub_82685F90"))) PPC_WEAK_FUNC(sub_82685F90);
PPC_FUNC_IMPL(__imp__sub_82685F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82685F98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,6620
	ctx.r11.s64 = ctx.r11.s64 + 6620;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82686028
	if (!ctx.cr6.gt) goto loc_82686028;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82685FC4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82685ffc
	if (ctx.cr6.eq) goto loc_82685FFC;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82685ff4
	if (ctx.cr0.eq) goto loc_82685FF4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82685FF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82685FF4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stwx r28,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r28.u32);
loc_82685FFC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82685fc4
	if (!ctx.cr6.eq) goto loc_82685FC4;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82685fc4
	if (ctx.cr6.lt) goto loc_82685FC4;
loc_82686028:
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,-11212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268603C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addi r11,r11,-16924
	ctx.r11.s64 = ctx.r11.s64 + -16924;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82686058"))) PPC_WEAK_FUNC(sub_82686058);
PPC_FUNC_IMPL(__imp__sub_82686058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,-5276
	ctx.r3.s64 = ctx.r11.s64 + -5276;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82686068"))) PPC_WEAK_FUNC(sub_82686068);
PPC_FUNC_IMPL(__imp__sub_82686068) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82686084
	if (!ctx.cr6.eq) goto loc_82686084;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82686098
	goto loc_82686098;
loc_82686084:
	// bl 0x82696750
	ctx.lr = 0x82686088;
	sub_82696750(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_82686098:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826860A8"))) PPC_WEAK_FUNC(sub_826860A8);
PPC_FUNC_IMPL(__imp__sub_826860A8) {
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
	// bl 0x82685f90
	ctx.lr = 0x826860C8;
	sub_82685F90(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826860e4
	if (ctx.cr0.eq) goto loc_826860E4;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-11212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826860E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826860E4:
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

__attribute__((alias("__imp__sub_82686100"))) PPC_WEAK_FUNC(sub_82686100);
PPC_FUNC_IMPL(__imp__sub_82686100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82686108;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82686128
	if (!ctx.cr6.eq) goto loc_82686128;
loc_82686120:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82686284
	goto loc_82686284;
loc_82686128:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82687ef0
	ctx.lr = 0x82686134;
	sub_82687EF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82686120
	if (!ctx.cr0.eq) goto loc_82686120;
	// li r3,276
	ctx.r3.s64 = 276;
	// bl 0x8251c658
	ctx.lr = 0x82686144;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82686158
	if (ctx.cr0.eq) goto loc_82686158;
	// bl 0x826853c0
	ctx.lr = 0x82686150;
	sub_826853C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x8268615c
	goto loc_8268615C;
loc_82686158:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8268615C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82685800
	ctx.lr = 0x82686168;
	sub_82685800(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82686194
	if (!ctx.cr0.eq) goto loc_82686194;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82686120
	if (ctx.cr6.eq) goto loc_82686120;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82686190;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82686120
	goto loc_82686120;
loc_82686194:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82686218
	if (!ctx.cr6.eq) goto loc_82686218;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x826861c4
	if (!ctx.cr6.gt) goto loc_826861C4;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_826861C4:
	// bl 0x8251c658
	ctx.lr = 0x826861C8;
	sub_8251C658(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82686200
	if (!ctx.cr6.gt) goto loc_82686200;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826861E0:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stwx r9,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x826861e0
	if (ctx.cr6.lt) goto loc_826861E0;
loc_82686200:
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,-11212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82686214;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82686218:
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x8251c658
	ctx.lr = 0x82686220;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82686260
	if (ctx.cr0.eq) goto loc_82686260;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r29,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r29.u32);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// addi r9,r11,6872
	ctx.r9.s64 = ctx.r11.s64 + 6872;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// subf r10,r28,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r28.s64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
loc_82686244:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82686244
	if (!ctx.cr0.eq) goto loc_82686244;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82686264
	goto loc_82686264;
loc_82686260:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82686264:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82686284:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82686290"))) PPC_WEAK_FUNC(sub_82686290);
PPC_FUNC_IMPL(__imp__sub_82686290) {
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
	// addi r11,r11,6620
	ctx.r11.s64 = ctx.r11.s64 + 6620;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8251c658
	ctx.lr = 0x826862B8;
	sub_8251C658(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_826862E8"))) PPC_WEAK_FUNC(sub_826862E8);
PPC_FUNC_IMPL(__imp__sub_826862E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x826862F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8268630c
	if (!ctx.cr6.eq) goto loc_8268630C;
loc_82686304:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82686378
	goto loc_82686378;
loc_8268630C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a947a0
	ctx.lr = 0x82686314;
	sub_82A947A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,6644
	ctx.r4.s64 = ctx.r11.s64 + 6644;
	// bl 0x826e6bb0
	ctx.lr = 0x82686320;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8268636c
	if (!ctx.cr0.eq) goto loc_8268636C;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82686304
	if (ctx.cr0.eq) goto loc_82686304;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-888
	ctx.r4.s64 = ctx.r11.s64 + -888;
	// bl 0x8268fef8
	ctx.lr = 0x82686344;
	sub_8268FEF8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82686304
	if (ctx.cr0.eq) goto loc_82686304;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82686100
	ctx.lr = 0x82686358;
	sub_82686100(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// b 0x82686378
	goto loc_82686378;
loc_8268636C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82526588
	ctx.lr = 0x82686378;
	sub_82526588(ctx, base);
loc_82686378:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82686380"))) PPC_WEAK_FUNC(sub_82686380);
PPC_FUNC_IMPL(__imp__sub_82686380) {
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8251c658
	ctx.lr = 0x82686394;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826863a4
	if (ctx.cr0.eq) goto loc_826863A4;
	// bl 0x82686290
	ctx.lr = 0x826863A0;
	sub_82686290(ctx, base);
	// b 0x826863a8
	goto loc_826863A8;
loc_826863A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826863A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826863B8"))) PPC_WEAK_FUNC(sub_826863B8);
PPC_FUNC_IMPL(__imp__sub_826863B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-5276
	ctx.r11.s64 = ctx.r11.s64 + -5276;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x826863f8
	if (ctx.cr6.eq) goto loc_826863F8;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-3968
	ctx.r11.s64 = ctx.r11.s64 + -3968;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x826863f8
	if (ctx.cr6.eq) goto loc_826863F8;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-3692
	ctx.r11.s64 = ctx.r11.s64 + -3692;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_826863F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82686400"))) PPC_WEAK_FUNC(sub_82686400);
PPC_FUNC_IMPL(__imp__sub_82686400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x82686408;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// lis r26,-32071
	ctx.r26.s64 = -2101805056;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268647c
	if (ctx.cr6.eq) goto loc_8268647C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8268646c
	if (!ctx.cr6.gt) goto loc_8268646C;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82686438:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82686458
	if (ctx.cr6.eq) goto loc_82686458;
	// lwz r11,-11212(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11212);
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82686458;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82686458:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82686438
	if (ctx.cr6.lt) goto loc_82686438;
loc_8268646C:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,-11212(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268647C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268647C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82686498
	if (ctx.cr0.eq) goto loc_82686498;
	// lwz r11,-11212(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82686498;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82686498:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r25,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82686550
	if (ctx.cr6.eq) goto loc_82686550;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82686540
	if (!ctx.cr6.gt) goto loc_82686540;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_826864BC:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268652c
	if (ctx.cr6.eq) goto loc_8268652C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82686518
	if (!ctx.cr6.gt) goto loc_82686518;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_826864E0:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82686504
	if (ctx.cr6.eq) goto loc_82686504;
	// lwz r11,-11212(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11212);
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82686504;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82686504:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826864e0
	if (ctx.cr6.lt) goto loc_826864E0;
loc_82686518:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r11,-11212(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268652C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268652C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826864bc
	if (ctx.cr6.lt) goto loc_826864BC;
loc_82686540:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,-11212(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82686550;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82686550:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82686568
	if (ctx.cr0.eq) goto loc_82686568;
	// lwz r11,-11212(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82686568;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82686568:
	// stw r25,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r25.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82686578"))) PPC_WEAK_FUNC(sub_82686578);
PPC_FUNC_IMPL(__imp__sub_82686578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b4
	ctx.lr = 0x82686580;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r11,-11200
	ctx.r28.s64 = ctx.r11.s64 + -11200;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,6576
	ctx.r4.s64 = ctx.r11.s64 + 6576;
	// lwz r11,80(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826865A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82686834
	if (ctx.cr0.eq) goto loc_82686834;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r3,r11,6676
	ctx.r3.s64 = ctx.r11.s64 + 6676;
	// lis r11,512
	ctx.r11.s64 = 33554432;
	// li r5,26
	ctx.r5.s64 = 26;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,96(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826865D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 26, ctx.xer);
	// bne cr6,0x82686824
	if (!ctx.cr6.eq) goto loc_82686824;
	// lwz r11,96(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826865FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82686824
	if (!ctx.cr6.eq) goto loc_82686824;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r10,96(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// li r4,4
	ctx.r4.s64 = 4;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82686644;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82686824
	if (!ctx.cr6.eq) goto loc_82686824;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x826866c0
	if (!ctx.cr6.gt) goto loc_826866C0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82686660:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r10,96(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826866A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82686824
	if (!ctx.cr6.eq) goto loc_82686824;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82686660
	if (ctx.cr6.lt) goto loc_82686660;
loc_826866C0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82686738
	if (!ctx.cr6.gt) goto loc_82686738;
	// li r29,0
	ctx.r29.s64 = 0;
loc_826866D4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_826866E4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826866e4
	if (!ctx.cr6.eq) goto loc_826866E4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r10,96(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8268671C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82686824
	if (!ctx.cr6.eq) goto loc_82686824;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826866d4
	if (ctx.cr6.lt) goto loc_826866D4;
loc_82686738:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268680c
	if (ctx.cr0.eq) goto loc_8268680C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8268674C:
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826867f8
	if (ctx.cr6.eq) goto loc_826867F8;
loc_82686758:
	// cmplw cr6,r23,r24
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x826867e8
	if (ctx.cr6.eq) goto loc_826867E8;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x826867e8
	if (!ctx.cr6.gt) goto loc_826867E8;
	// rlwinm r26,r24,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8268677C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r10,96(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwzx r11,r11,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826867C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82686824
	if (!ctx.cr6.eq) goto loc_82686824;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268677c
	if (ctx.cr6.lt) goto loc_8268677C;
loc_826867E8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82686758
	if (ctx.cr6.lt) goto loc_82686758;
loc_826867F8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268674c
	if (ctx.cr6.lt) goto loc_8268674C;
loc_8268680C:
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268681C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82686838
	goto loc_82686838;
loc_82686824:
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82686834;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82686834:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82686838:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de904
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82686840"))) PPC_WEAK_FUNC(sub_82686840);
PPC_FUNC_IMPL(__imp__sub_82686840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8ac
	ctx.lr = 0x82686848;
	__savegprlr_21(ctx, base);
	// stwu r1,-1216(r1)
	ea = -1216 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r11,-3384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3384);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r25,4(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// sth r23,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r23.u16);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82686884;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// beq cr6,0x826868b0
	if (ctx.cr6.eq) goto loc_826868B0;
loc_8268688C:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826868A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_826868A8:
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x826de8fc
	__restgprlr_21(ctx, base);
	return;
loc_826868B0:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// rotlwi r10,r11,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// clrlwi. r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq 0x82686bf8
	if (ctx.cr0.eq) goto loc_82686BF8;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// li r22,-1
	ctx.r22.s64 = -1;
	// ori r24,r10,65535
	ctx.r24.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// ble cr6,0x826868f0
	if (!ctx.cr6.gt) goto loc_826868F0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_826868F0:
	// bl 0x8251c658
	ctx.lr = 0x826868F4;
	sub_8251C658(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82686974
	if (!ctx.cr6.gt) goto loc_82686974;
loc_82686908:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82686928;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x8268688c
	if (!ctx.cr6.eq) goto loc_8268688C;
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rotlwi r9,r10,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r30,r9,16
	ctx.r30.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82686908
	if (ctx.cr6.lt) goto loc_82686908;
loc_82686974:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82686988
	if (!ctx.cr6.gt) goto loc_82686988;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_82686988:
	// bl 0x8251c658
	ctx.lr = 0x8268698C;
	sub_8251C658(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x826869a4
	if (!ctx.cr6.gt) goto loc_826869A4;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_826869A4:
	// bl 0x8251c658
	ctx.lr = 0x826869A8;
	sub_8251C658(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82686a68
	if (!ctx.cr6.gt) goto loc_82686A68;
loc_826869BC:
	// stb r23,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r23.u8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_826869C8:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826869E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8268688c
	if (!ctx.cr6.eq) goto loc_8268688C;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// add r5,r29,r10
	ctx.r5.u64 = ctx.r29.u64 + ctx.r10.u64;
	// lbz r10,-1(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + -1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826869c8
	if (!ctx.cr6.eq) goto loc_826869C8;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8251c658
	ctx.lr = 0x82686A14;
	sub_8251C658(ctx, base);
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
loc_82686A30:
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi r7,0
	ctx.cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stb r7,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r7.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bne 0x82686a30
	if (!ctx.cr0.eq) goto loc_82686A30;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r30,r10,16
	ctx.r30.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stwx r23,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r23.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826869bc
	if (ctx.cr6.lt) goto loc_826869BC;
loc_82686A68:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82686a7c
	if (!ctx.cr6.gt) goto loc_82686A7C;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_82686A7C:
	// bl 0x8251c658
	ctx.lr = 0x82686A80;
	sub_8251C658(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82686bf8
	if (!ctx.cr6.gt) goto loc_82686BF8;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
loc_82686A94:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82686aa8
	if (!ctx.cr6.gt) goto loc_82686AA8;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_82686AA8:
	// bl 0x8251c658
	ctx.lr = 0x82686AAC;
	sub_8251C658(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r30,r26,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82686be4
	if (!ctx.cr6.gt) goto loc_82686BE4;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_82686AC8:
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82686ae4
	if (!ctx.cr6.eq) goto loc_82686AE4;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// stwx r23,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r23.u32);
	// b 0x82686bd0
	goto loc_82686BD0;
loc_82686AE4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82686afc
	if (!ctx.cr6.gt) goto loc_82686AFC;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_82686AFC:
	// bl 0x8251c658
	ctx.lr = 0x82686B00;
	sub_8251C658(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r29,r27,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// stwx r3,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r3.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82686bd0
	if (!ctx.cr6.gt) goto loc_82686BD0;
loc_82686B24:
	// sth r23,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r23.u16);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82686B48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x82686c00
	if (!ctx.cr6.eq) goto loc_82686C00;
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// clrlwi r9,r28,16
	ctx.r9.u64 = ctx.r28.u32 & 0xFFFF;
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rotlwi r10,r11,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// lwzx r10,r30,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// lhz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x82686ba4
	if (!ctx.cr6.eq) goto loc_82686BA4;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwzx r10,r30,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// lwzx r10,r10,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// stwx r22,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r22.u32);
	// b 0x82686bb4
	goto loc_82686BB4;
loc_82686BA4:
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwzx r8,r30,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// lwzx r8,r8,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	// stwx r10,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u32);
loc_82686BB4:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// clrlwi r28,r11,16
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFF;
	// lwzx r11,r10,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82686b24
	if (ctx.cr6.lt) goto loc_82686B24;
loc_82686BD0:
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r27,r11,16
	ctx.r27.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82686ac8
	if (ctx.cr6.lt) goto loc_82686AC8;
loc_82686BE4:
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r26,r11,16
	ctx.r26.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82686a94
	if (ctx.cr6.lt) goto loc_82686A94;
loc_82686BF8:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x82686c04
	goto loc_82686C04;
loc_82686C00:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_82686C04:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82686C1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x826868a8
	goto loc_826868A8;
}

__attribute__((alias("__imp__sub_82686C28"))) PPC_WEAK_FUNC(sub_82686C28);
PPC_FUNC_IMPL(__imp__sub_82686C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8a4
	ctx.lr = 0x82686C30;
	__savegprlr_19(ctx, base);
	// stwu r1,-1296(r1)
	ea = -1296 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// bl 0x82686400
	ctx.lr = 0x82686C40;
	sub_82686400(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r11,-3384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3384);
	// lwz r24,4(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi r24,0
	ctx.cr0.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq 0x826870b0
	if (ctx.cr0.eq) goto loc_826870B0;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82686C6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826870b0
	if (ctx.cr0.eq) goto loc_826870B0;
	// li r19,-1
	ctx.r19.s64 = -1;
	// li r6,26
	ctx.r6.s64 = 26;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82686C9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 26, ctx.xer);
	// bne cr6,0x82687098
	if (!ctx.cr6.eq) goto loc_82687098;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82686CC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x82687098
	if (!ctx.cr6.eq) goto loc_82687098;
	// li r20,0
	ctx.r20.s64 = 0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,6676
	ctx.r3.s64 = ctx.r11.s64 + 6676;
	// stb r20,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r20.u8);
	// bl 0x826e6bb0
	ctx.lr = 0x82686CE4;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82687098
	if (!ctx.cr0.eq) goto loc_82687098;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
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
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x82686d2c
	if (!ctx.cr6.eq) goto loc_82686D2C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82686840
	ctx.lr = 0x82686D28;
	sub_82686840(ctx, base);
	// b 0x826870b4
	goto loc_826870B4;
loc_82686D2C:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bne cr6,0x826870a4
	if (!ctx.cr6.eq) goto loc_826870A4;
	// addi r26,r30,12
	ctx.r26.s64 = ctx.r30.s64 + 12;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82686D54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x82687098
	if (!ctx.cr6.eq) goto loc_82687098;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
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
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82687078
	if (ctx.cr0.eq) goto loc_82687078;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r21,r10,65535
	ctx.r21.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// ble cr6,0x82686da4
	if (!ctx.cr6.gt) goto loc_82686DA4;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
loc_82686DA4:
	// bl 0x8251c658
	ctx.lr = 0x82686DA8;
	sub_8251C658(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82686e2c
	if (!ctx.cr6.gt) goto loc_82686E2C;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_82686DC0:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// add r5,r31,r11
	ctx.r5.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82686DE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x82687098
	if (!ctx.cr6.eq) goto loc_82687098;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82686dc0
	if (ctx.cr6.lt) goto loc_82686DC0;
loc_82686E2C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82686e40
	if (!ctx.cr6.gt) goto loc_82686E40;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
loc_82686E40:
	// bl 0x8251c658
	ctx.lr = 0x82686E44;
	sub_8251C658(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82686e5c
	if (!ctx.cr6.gt) goto loc_82686E5C;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
loc_82686E5C:
	// bl 0x8251c658
	ctx.lr = 0x82686E60;
	sub_8251C658(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82686f14
	if (!ctx.cr6.gt) goto loc_82686F14;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
loc_82686E78:
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// stb r20,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r20.u8);
loc_82686E80:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// li r6,1
	ctx.r6.s64 = 1;
	// add r5,r31,r11
	ctx.r5.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82686EA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82687098
	if (!ctx.cr6.eq) goto loc_82687098;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lbz r11,-1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82686e80
	if (!ctx.cr6.eq) goto loc_82686E80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8251c658
	ctx.lr = 0x82686ECC;
	sub_8251C658(ctx, base);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stwx r3,r29,r10
	PPC_STORE_U32(ctx.r29.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwzx r10,r29,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
loc_82686EE0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x82686ee0
	if (!ctx.cr0.eq) goto loc_82686EE0;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stwx r20,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r20.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82686e78
	if (ctx.cr6.lt) goto loc_82686E78;
loc_82686F14:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82686f28
	if (!ctx.cr6.gt) goto loc_82686F28;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
loc_82686F28:
	// bl 0x8251c658
	ctx.lr = 0x82686F2C;
	sub_8251C658(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82687078
	if (!ctx.cr6.gt) goto loc_82687078;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_82686F44:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82686f58
	if (!ctx.cr6.gt) goto loc_82686F58;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
loc_82686F58:
	// bl 0x8251c658
	ctx.lr = 0x82686F5C;
	sub_8251C658(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// stwx r3,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82687064
	if (!ctx.cr6.gt) goto loc_82687064;
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
loc_82686F78:
	// cmplw cr6,r23,r25
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82686f90
	if (!ctx.cr6.eq) goto loc_82686F90;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// stwx r20,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r20.u32);
	// b 0x82687050
	goto loc_82687050;
loc_82686F90:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82686fa8
	if (!ctx.cr6.gt) goto loc_82686FA8;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
loc_82686FA8:
	// bl 0x8251c658
	ctx.lr = 0x82686FAC;
	sub_8251C658(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// stwx r3,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r3.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82687050
	if (!ctx.cr6.gt) goto loc_82687050;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
loc_82686FD0:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82686FFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x82687098
	if (!ctx.cr6.eq) goto loc_82687098;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r8,r11,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwinm r11,r9,8,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r9,r8,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82686fd0
	if (ctx.cr6.lt) goto loc_82686FD0;
loc_82687050:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82686f78
	if (ctx.cr6.lt) goto loc_82686F78;
loc_82687064:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82686f44
	if (ctx.cr6.lt) goto loc_82686F44;
loc_82687078:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82687090;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826870b4
	goto loc_826870B4;
loc_82687098:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_826870A4:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826870B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826870B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826870B4:
	// addi r1,r1,1296
	ctx.r1.s64 = ctx.r1.s64 + 1296;
	// b 0x826de8f4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826870C0"))) PPC_WEAK_FUNC(sub_826870C0);
PPC_FUNC_IMPL(__imp__sub_826870C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x826870C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82687128
	if (!ctx.cr6.gt) goto loc_82687128;
loc_826870EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x826e6bb0
	ctx.lr = 0x82687104;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82687134
	if (ctx.cr0.eq) goto loc_82687134;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x826870ec
	if (ctx.cr6.lt) goto loc_826870EC;
loc_82687128:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8268712C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_82687134:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8268712c
	goto loc_8268712C;
}

__attribute__((alias("__imp__sub_82687140"))) PPC_WEAK_FUNC(sub_82687140);
PPC_FUNC_IMPL(__imp__sub_82687140) {
	PPC_FUNC_PROLOGUE();
	// lbz r9,88(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 88);
	// lwz r10,80(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// lwz r11,84(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8268715c
	if (!ctx.cr0.eq) goto loc_8268715C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8268715C:
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8268716c
	if (!ctx.cr6.eq) goto loc_8268716C;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// b 0x82687198
	goto loc_82687198;
loc_8268716C:
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82687198:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826871A0"))) PPC_WEAK_FUNC(sub_826871A0);
PPC_FUNC_IMPL(__imp__sub_826871A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x826871d0
	if (ctx.cr0.eq) goto loc_826871D0;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
loc_826871B4:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x826871d8
	if (ctx.cr6.eq) goto loc_826871D8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x826871b4
	if (ctx.cr6.lt) goto loc_826871B4;
loc_826871D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_826871D8:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826871E8"))) PPC_WEAK_FUNC(sub_826871E8);
PPC_FUNC_IMPL(__imp__sub_826871E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-9356
	ctx.r11.s64 = ctx.r11.s64 + -9356;
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r10,16
	ctx.r10.s64 = 16;
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82687228:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82687228
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82687228;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stb r8,264(r1)
	PPC_STORE_U8(ctx.r1.u32 + 264, ctx.r8.u8);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r11,16
	ctx.r11.s64 = 16;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82687264:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82687264
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82687264;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// stb r8,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r8.u8);
	// addi r11,r11,-11200
	ctx.r11.s64 = ctx.r11.s64 + -11200;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82687290
	if (!ctx.cr6.eq) goto loc_82687290;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// b 0x826872a4
	goto loc_826872A4;
loc_82687290:
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826872A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826872A4:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826872B8"))) PPC_WEAK_FUNC(sub_826872B8);
PPC_FUNC_IMPL(__imp__sub_826872B8) {
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
	// addi r11,r11,6708
	ctx.r11.s64 = ctx.r11.s64 + 6708;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82686400
	ctx.lr = 0x826872DC;
	sub_82686400(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-16924
	ctx.r11.s64 = ctx.r11.s64 + -16924;
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

__attribute__((alias("__imp__sub_82687300"))) PPC_WEAK_FUNC(sub_82687300);
PPC_FUNC_IMPL(__imp__sub_82687300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,-3968
	ctx.r3.s64 = ctx.r11.s64 + -3968;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82687310"))) PPC_WEAK_FUNC(sub_82687310);
PPC_FUNC_IMPL(__imp__sub_82687310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82687318;
	__savegprlr_27(ctx, base);
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r27,-1
	ctx.r27.s64 = -1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f30,-16480(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16480);
	ctx.f30.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82687358;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82687424
	if (ctx.cr0.eq) goto loc_82687424;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f29,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f29.f64 = double(temp.f32);
loc_82687368:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82687380;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x826873a0
	if (!ctx.cr6.lt) goto loc_826873A0;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_826873A0:
	// lfs f13,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82687404
	if (ctx.cr6.gt) goto loc_82687404;
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f31,f13,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bgt cr6,0x82687404
	if (ctx.cr6.gt) goto loc_82687404;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826871e8
	ctx.lr = 0x826873EC;
	sub_826871E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82687404
	if (!ctx.cr0.eq) goto loc_82687404;
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bge cr6,0x82687404
	if (!ctx.cr6.lt) goto loc_82687404;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_82687404:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268741C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82687368
	if (ctx.cr6.lt) goto loc_82687368;
loc_82687424:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82687440"))) PPC_WEAK_FUNC(sub_82687440);
PPC_FUNC_IMPL(__imp__sub_82687440) {
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
	// bl 0x826872b8
	ctx.lr = 0x82687460;
	sub_826872B8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268747c
	if (ctx.cr0.eq) goto loc_8268747C;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-11212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268747C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268747C:
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

__attribute__((alias("__imp__sub_82687498"))) PPC_WEAK_FUNC(sub_82687498);
PPC_FUNC_IMPL(__imp__sub_82687498) {
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
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8251c658
	ctx.lr = 0x826874AC;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826874dc
	if (ctx.cr0.eq) goto loc_826874DC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,6708
	ctx.r10.s64 = ctx.r11.s64 + 6708;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// b 0x826874e0
	goto loc_826874E0;
loc_826874DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826874E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826874F0"))) PPC_WEAK_FUNC(sub_826874F0);
PPC_FUNC_IMPL(__imp__sub_826874F0) {
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
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lwz r11,-3972(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3972);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// addi r31,r9,-5000
	ctx.r31.s64 = ctx.r9.s64 + -5000;
	// bne 0x8268754c
	if (!ctx.cr0.eq) goto loc_8268754C;
	// lis r9,-32071
	ctx.r9.s64 = -2101805056;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lbz r8,-11244(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -11244);
	// stw r11,-3972(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3972, ctx.r11.u32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82687538
	if (ctx.cr0.eq) goto loc_82687538;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r11.u32);
loc_82687538:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32081
	ctx.r10.s64 = -2102460416;
	// addi r3,r10,-27848
	ctx.r3.s64 = ctx.r10.s64 + -27848;
	// stb r11,-11244(r9)
	PPC_STORE_U8(ctx.r9.u32 + -11244, ctx.r11.u8);
	// bl 0x826ded00
	ctx.lr = 0x8268754C;
	sub_826DED00(ctx, base);
loc_8268754C:
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

__attribute__((alias("__imp__sub_82687568"))) PPC_WEAK_FUNC(sub_82687568);
PPC_FUNC_IMPL(__imp__sub_82687568) {
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
	// beq cr6,0x826875e4
	if (ctx.cr6.eq) goto loc_826875E4;
	// bl 0x826874f0
	ctx.lr = 0x82687588;
	sub_826874F0(ctx, base);
	// lwz r5,1024(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x826875e4
	if (!ctx.cr0.gt) goto loc_826875E4;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_8268759C:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
loc_826875A8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x826875cc
	if (ctx.cr0.eq) goto loc_826875CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x826875a8
	if (ctx.cr6.eq) goto loc_826875A8;
loc_826875CC:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x826875fc
	if (ctx.cr0.eq) goto loc_826875FC;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8268759c
	if (ctx.cr6.lt) goto loc_8268759C;
loc_826875E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826875E8:
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
loc_826875FC:
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// b 0x826875e8
	goto loc_826875E8;
}

__attribute__((alias("__imp__sub_82687608"))) PPC_WEAK_FUNC(sub_82687608);
PPC_FUNC_IMPL(__imp__sub_82687608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b8
	ctx.lr = 0x82687610;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-1184(r1)
	ea = -1184 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82687630
	if (!ctx.cr6.eq) goto loc_82687630;
loc_82687628:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826878d0
	goto loc_826878D0;
loc_82687630:
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,-3384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3384);
	// lfs f31,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82687650
	if (ctx.cr6.eq) goto loc_82687650;
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82687654
	goto loc_82687654;
loc_82687650:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_82687654:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f13,28580(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28580);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,4(r24)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 4, temp.u32);
	// addi r4,r11,6816
	ctx.r4.s64 = ctx.r11.s64 + 6816;
	// bl 0x8268ff80
	ctx.lr = 0x82687674;
	sub_8268FF80(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82687690
	if (ctx.cr0.eq) goto loc_82687690;
	// bl 0x826e2438
	ctx.lr = 0x82687680;
	sub_826E2438(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82687690
	if (ctx.cr6.lt) goto loc_82687690;
	// stfs f0,4(r24)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 4, temp.u32);
loc_82687690:
	// lwz r11,-3384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826876a4
	if (ctx.cr6.eq) goto loc_826876A4;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x826876a8
	goto loc_826876A8;
loc_826876A4:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_826876A8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f13,18620(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18620);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,8(r24)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 8, temp.u32);
	// addi r4,r11,6804
	ctx.r4.s64 = ctx.r11.s64 + 6804;
	// bl 0x8268ff80
	ctx.lr = 0x826876C8;
	sub_8268FF80(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826876e4
	if (ctx.cr0.eq) goto loc_826876E4;
	// bl 0x826e2438
	ctx.lr = 0x826876D4;
	sub_826E2438(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x826876e4
	if (ctx.cr6.lt) goto loc_826876E4;
	// stfs f0,8(r24)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 8, temp.u32);
loc_826876E4:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,6788
	ctx.r4.s64 = ctx.r11.s64 + 6788;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8268ff80
	ctx.lr = 0x826876F8;
	sub_8268FF80(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82687748
	if (ctx.cr0.eq) goto loc_82687748;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4952
	ctx.r4.s64 = ctx.r11.s64 + 4952;
	// bl 0x826e6bb0
	ctx.lr = 0x82687710;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82687780
	if (ctx.cr0.eq) goto loc_82687780;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,6784
	ctx.r4.s64 = ctx.r11.s64 + 6784;
	// bl 0x826e6bb0
	ctx.lr = 0x82687728;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82687780
	if (ctx.cr0.eq) goto loc_82687780;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-16008
	ctx.r4.s64 = ctx.r11.s64 + -16008;
	// bl 0x826e6bb0
	ctx.lr = 0x82687740;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82687780
	if (ctx.cr0.eq) goto loc_82687780;
loc_82687748:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-888
	ctx.r4.s64 = ctx.r11.s64 + -888;
	// bl 0x8268fef8
	ctx.lr = 0x82687758;
	sub_8268FEF8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82687780
	if (ctx.cr0.eq) goto loc_82687780;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82687774;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82687780
	if (ctx.cr0.eq) goto loc_82687780;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82687780:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826877e0
	if (!ctx.cr0.eq) goto loc_826877E0;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826877A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82687628
	if (ctx.cr0.eq) goto loc_82687628;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,6772
	ctx.r4.s64 = ctx.r11.s64 + 6772;
	// bl 0x8268ff80
	ctx.lr = 0x826877B8;
	sub_8268FF80(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826877e0
	if (ctx.cr0.eq) goto loc_826877E0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82694f88
	ctx.lr = 0x826877C8;
	sub_82694F88(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826877E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826877E0:
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826878cc
	if (ctx.cr0.eq) goto loc_826878CC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r25,r11,4168
	ctx.r25.s64 = ctx.r11.s64 + 4168;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r27,r11,6760
	ctx.r27.s64 = ctx.r11.s64 + 6760;
loc_82687804:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82690008
	ctx.lr = 0x82687810;
	sub_82690008(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82a947a0
	ctx.lr = 0x82687818;
	sub_82A947A0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x826e6bb0
	ctx.lr = 0x82687820;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826878bc
	if (!ctx.cr0.eq) goto loc_826878BC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x8268ff80
	ctx.lr = 0x82687834;
	sub_8268FF80(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826878bc
	if (ctx.cr0.eq) goto loc_826878BC;
	// bl 0x82687568
	ctx.lr = 0x82687840;
	sub_82687568(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268784C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82687864;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82687888
	if (!ctx.cr0.eq) goto loc_82687888;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82687884;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826878bc
	goto loc_826878BC;
loc_82687888:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82687894;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,24(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r11,r10,r26
	PPC_STORE_U32(ctx.r10.u32 + ctx.r26.u32, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826878B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_826878BC:
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82687804
	if (ctx.cr6.lt) goto loc_82687804;
loc_826878CC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_826878D0:
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826878E0"))) PPC_WEAK_FUNC(sub_826878E0);
PPC_FUNC_IMPL(__imp__sub_826878E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8a4
	ctx.lr = 0x826878E8;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// stw r20,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r20.u32);
	// lwz r11,32(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r24,r11,6760
	ctx.r24.s64 = ctx.r11.s64 + 6760;
	// beq 0x82687950
	if (ctx.cr0.eq) goto loc_82687950;
loc_82687914:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82690008
	ctx.lr = 0x82687920;
	sub_82690008(ctx, base);
	// bl 0x82a947a0
	ctx.lr = 0x82687924;
	sub_82A947A0(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x826e6bb0
	ctx.lr = 0x8268792C;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82687940
	if (!ctx.cr0.eq) goto loc_82687940;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82687940:
	// lwz r11,32(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82687914
	if (ctx.cr6.lt) goto loc_82687914;
loc_82687950:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82687d30
	if (ctx.cr0.eq) goto loc_82687D30;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// li r19,-1
	ctx.r19.s64 = -1;
	// ori r21,r10,65535
	ctx.r21.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// ble cr6,0x82687978
	if (!ctx.cr6.gt) goto loc_82687978;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
loc_82687978:
	// bl 0x8251c658
	ctx.lr = 0x8268797C;
	sub_8251C658(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82687994
	if (!ctx.cr6.gt) goto loc_82687994;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
loc_82687994:
	// bl 0x8251c658
	ctx.lr = 0x82687998;
	sub_8251C658(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x826879b0
	if (!ctx.cr6.gt) goto loc_826879B0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
loc_826879B0:
	// bl 0x8251c658
	ctx.lr = 0x826879B4;
	sub_8251C658(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x826879cc
	if (!ctx.cr6.gt) goto loc_826879CC;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
loc_826879CC:
	// bl 0x8251c658
	ctx.lr = 0x826879D0;
	sub_8251C658(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82687a68
	if (!ctx.cr6.gt) goto loc_82687A68;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_826879E8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stwx r20,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r20.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stwx r20,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r20.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stwx r20,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r20.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82687a14
	if (!ctx.cr6.gt) goto loc_82687A14;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
loc_82687A14:
	// bl 0x8251c658
	ctx.lr = 0x82687A18;
	sub_8251C658(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// stwx r3,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82687a54
	if (!ctx.cr6.gt) goto loc_82687A54;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_82687A34:
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r9,r30,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// stwx r20,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r20.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82687a34
	if (ctx.cr6.lt) goto loc_82687A34;
loc_82687A54:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826879e8
	if (ctx.cr6.lt) goto loc_826879E8;
loc_82687A68:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82687a7c
	if (!ctx.cr6.gt) goto loc_82687A7C;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
loc_82687A7C:
	// bl 0x8251c658
	ctx.lr = 0x82687A80;
	sub_8251C658(ctx, base);
	// lwz r11,32(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82687b88
	if (ctx.cr0.eq) goto loc_82687B88;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// addi r27,r11,4168
	ctx.r27.s64 = ctx.r11.s64 + 4168;
loc_82687AA4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82690008
	ctx.lr = 0x82687AB0;
	sub_82690008(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82a947a0
	ctx.lr = 0x82687AB8;
	sub_82A947A0(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x826e6bb0
	ctx.lr = 0x82687AC0;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82687b78
	if (!ctx.cr0.eq) goto loc_82687B78;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8268ff80
	ctx.lr = 0x82687AD4;
	sub_8268FF80(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82687d3c
	if (ctx.cr0.eq) goto loc_82687D3C;
	// bl 0x82687568
	ctx.lr = 0x82687AE0;
	sub_82687568(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82687d88
	if (ctx.cr0.eq) goto loc_82687D88;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82687AF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stwx r3,r29,r22
	PPC_STORE_U32(ctx.r29.u32 + ctx.r22.u32, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82687B0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82687dd0
	if (ctx.cr0.eq) goto loc_82687DD0;
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82687B20:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82687b20
	if (!ctx.cr6.eq) goto loc_82687B20;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x8251c658
	ctx.lr = 0x82687B44;
	sub_8251C658(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stwx r3,r29,r10
	PPC_STORE_U32(ctx.r29.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r10,r29,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
loc_82687B58:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x82687b58
	if (!ctx.cr0.eq) goto loc_82687B58;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82687B78:
	// lwz r11,32(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82687aa4
	if (ctx.cr6.lt) goto loc_82687AA4;
loc_82687B88:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82687cd0
	if (!ctx.cr6.gt) goto loc_82687CD0;
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
loc_82687B9C:
	// lwzx r3,r28,r22
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r22.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82687BB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// stwx r3,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r3.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r30,r28,r22
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r22.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82687cbc
	if (!ctx.cr6.gt) goto loc_82687CBC;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
loc_82687BD0:
	// cmplw cr6,r23,r24
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x82687ca8
	if (ctx.cr6.eq) goto loc_82687CA8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r25,r26,r22
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r22.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82687BF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r3,r21
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r21.u32, ctx.xer);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82687c00
	if (!ctx.cr6.gt) goto loc_82687C00;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
loc_82687C00:
	// bl 0x8251c658
	ctx.lr = 0x82687C04;
	sub_8251C658(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r10,r10,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// stwx r11,r10,r26
	PPC_STORE_U32(ctx.r10.u32 + ctx.r26.u32, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82687C2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82687ca8
	if (ctx.cr0.eq) goto loc_82687CA8;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
loc_82687C38:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82687C50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82687C70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r10,r10,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// lwzx r10,r10,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// stwx r11,r10,r27
	PPC_STORE_U32(ctx.r10.u32 + ctx.r27.u32, ctx.r11.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82687CA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82687c38
	if (ctx.cr6.lt) goto loc_82687C38;
loc_82687CA8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82687bd0
	if (ctx.cr6.lt) goto loc_82687BD0;
loc_82687CBC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82687b9c
	if (ctx.cr6.lt) goto loc_82687B9C;
loc_82687CD0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82687d1c
	if (!ctx.cr6.gt) goto loc_82687D1C;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_82687CE4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82687d08
	if (ctx.cr0.eq) goto loc_82687D08;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82687D04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r20,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r20.u32);
loc_82687D08:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82687ce4
	if (ctx.cr6.lt) goto loc_82687CE4;
loc_82687D1C:
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r11,-11212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82687D30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82687D30:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82687D34:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de8f4
	__restgprlr_19(ctx, base);
	return;
loc_82687D3C:
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82687d80
	if (ctx.cr6.eq) goto loc_82687D80;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_82687D4C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82687d70
	if (ctx.cr0.eq) goto loc_82687D70;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82687D6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r20,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r20.u32);
loc_82687D70:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82687d4c
	if (ctx.cr6.lt) goto loc_82687D4C;
loc_82687D80:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82687d34
	goto loc_82687D34;
loc_82687D88:
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82687d80
	if (ctx.cr6.eq) goto loc_82687D80;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_82687D98:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82687dbc
	if (ctx.cr0.eq) goto loc_82687DBC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82687DB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r20,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r20.u32);
loc_82687DBC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82687d98
	if (ctx.cr6.lt) goto loc_82687D98;
	// b 0x82687d80
	goto loc_82687D80;
loc_82687DD0:
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82687d80
	if (ctx.cr6.eq) goto loc_82687D80;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_82687DE0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82687e04
	if (ctx.cr0.eq) goto loc_82687E04;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82687E00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r20,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r20.u32);
loc_82687E04:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82687de0
	if (ctx.cr6.lt) goto loc_82687DE0;
	// b 0x82687d80
	goto loc_82687D80;
}

__attribute__((alias("__imp__sub_82687E18"))) PPC_WEAK_FUNC(sub_82687E18);
PPC_FUNC_IMPL(__imp__sub_82687E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82687E20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,6848
	ctx.r11.s64 = ctx.r11.s64 + 6848;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82687eb0
	if (!ctx.cr6.gt) goto loc_82687EB0;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82687E4C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82687e84
	if (ctx.cr6.eq) goto loc_82687E84;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82687e7c
	if (ctx.cr0.eq) goto loc_82687E7C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82687E7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82687E7C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stwx r28,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r28.u32);
loc_82687E84:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82687e4c
	if (!ctx.cr6.eq) goto loc_82687E4C;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82687e4c
	if (ctx.cr6.lt) goto loc_82687E4C;
loc_82687EB0:
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,-11212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82687EC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addi r11,r11,-16924
	ctx.r11.s64 = ctx.r11.s64 + -16924;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82687EE0"))) PPC_WEAK_FUNC(sub_82687EE0);
PPC_FUNC_IMPL(__imp__sub_82687EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,-3692
	ctx.r3.s64 = ctx.r11.s64 + -3692;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82687EF0"))) PPC_WEAK_FUNC(sub_82687EF0);
PPC_FUNC_IMPL(__imp__sub_82687EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82687EF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82687f48
	if (!ctx.cr6.gt) goto loc_82687F48;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82687F18:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x826e6bb0
	ctx.lr = 0x82687F2C;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82687f54
	if (ctx.cr0.eq) goto loc_82687F54;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82687f18
	if (ctx.cr6.lt) goto loc_82687F18;
loc_82687F48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82687F4C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82687F54:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// b 0x82687f4c
	goto loc_82687F4C;
}

__attribute__((alias("__imp__sub_82687F68"))) PPC_WEAK_FUNC(sub_82687F68);
PPC_FUNC_IMPL(__imp__sub_82687F68) {
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
	// addi r11,r11,6872
	ctx.r11.s64 = ctx.r11.s64 + 6872;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82687fbc
	if (ctx.cr0.eq) goto loc_82687FBC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82687fbc
	if (ctx.cr6.eq) goto loc_82687FBC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82687FB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
loc_82687FBC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// addi r11,r11,-16924
	ctx.r11.s64 = ctx.r11.s64 + -16924;
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

__attribute__((alias("__imp__sub_82687FE8"))) PPC_WEAK_FUNC(sub_82687FE8);
PPC_FUNC_IMPL(__imp__sub_82687FE8) {
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
	// bl 0x82687e18
	ctx.lr = 0x82688008;
	sub_82687E18(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82688024
	if (ctx.cr0.eq) goto loc_82688024;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-11212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82688024;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82688024:
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

__attribute__((alias("__imp__sub_82688040"))) PPC_WEAK_FUNC(sub_82688040);
PPC_FUNC_IMPL(__imp__sub_82688040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82688048;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82688068
	if (!ctx.cr6.eq) goto loc_82688068;
loc_82688060:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826881c4
	goto loc_826881C4;
loc_82688068:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82687ef0
	ctx.lr = 0x82688074;
	sub_82687EF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82688060
	if (!ctx.cr0.eq) goto loc_82688060;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8251c658
	ctx.lr = 0x82688084;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82688098
	if (ctx.cr0.eq) goto loc_82688098;
	// bl 0x82688350
	ctx.lr = 0x82688090;
	sub_82688350(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x8268809c
	goto loc_8268809C;
loc_82688098:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8268809C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826883d8
	ctx.lr = 0x826880A8;
	sub_826883D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826880d4
	if (!ctx.cr0.eq) goto loc_826880D4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82688060
	if (ctx.cr6.eq) goto loc_82688060;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826880D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82688060
	goto loc_82688060;
loc_826880D4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82688158
	if (!ctx.cr6.eq) goto loc_82688158;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82688104
	if (!ctx.cr6.gt) goto loc_82688104;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82688104:
	// bl 0x8251c658
	ctx.lr = 0x82688108;
	sub_8251C658(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82688140
	if (!ctx.cr6.gt) goto loc_82688140;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82688120:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stwx r9,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82688120
	if (ctx.cr6.lt) goto loc_82688120;
loc_82688140:
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,-11212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82688154;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82688158:
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x8251c658
	ctx.lr = 0x82688160;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826881a0
	if (ctx.cr0.eq) goto loc_826881A0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r29,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r29.u32);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// addi r9,r11,6872
	ctx.r9.s64 = ctx.r11.s64 + 6872;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// subf r10,r28,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r28.s64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
loc_82688184:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82688184
	if (!ctx.cr0.eq) goto loc_82688184;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x826881a4
	goto loc_826881A4;
loc_826881A0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826881A4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_826881C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826881D0"))) PPC_WEAK_FUNC(sub_826881D0);
PPC_FUNC_IMPL(__imp__sub_826881D0) {
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
	// bl 0x82687f68
	ctx.lr = 0x826881F0;
	sub_82687F68(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268820c
	if (ctx.cr0.eq) goto loc_8268820C;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-11212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268820C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268820C:
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

__attribute__((alias("__imp__sub_82688228"))) PPC_WEAK_FUNC(sub_82688228);
PPC_FUNC_IMPL(__imp__sub_82688228) {
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
	// addi r11,r11,6848
	ctx.r11.s64 = ctx.r11.s64 + 6848;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8251c658
	ctx.lr = 0x82688250;
	sub_8251C658(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82688280"))) PPC_WEAK_FUNC(sub_82688280);
PPC_FUNC_IMPL(__imp__sub_82688280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82688288;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x826882a4
	if (!ctx.cr6.eq) goto loc_826882A4;
loc_8268829C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82688310
	goto loc_82688310;
loc_826882A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a947a0
	ctx.lr = 0x826882AC;
	sub_82A947A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,6876
	ctx.r4.s64 = ctx.r11.s64 + 6876;
	// bl 0x826e6bb0
	ctx.lr = 0x826882B8;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82688304
	if (!ctx.cr0.eq) goto loc_82688304;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x8268829c
	if (ctx.cr0.eq) goto loc_8268829C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-888
	ctx.r4.s64 = ctx.r11.s64 + -888;
	// bl 0x8268fef8
	ctx.lr = 0x826882DC;
	sub_8268FEF8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x8268829c
	if (ctx.cr0.eq) goto loc_8268829C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82688040
	ctx.lr = 0x826882F0;
	sub_82688040(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// b 0x82688310
	goto loc_82688310;
loc_82688304:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82526588
	ctx.lr = 0x82688310;
	sub_82526588(ctx, base);
loc_82688310:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82688318"))) PPC_WEAK_FUNC(sub_82688318);
PPC_FUNC_IMPL(__imp__sub_82688318) {
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8251c658
	ctx.lr = 0x8268832C;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268833c
	if (ctx.cr0.eq) goto loc_8268833C;
	// bl 0x82688228
	ctx.lr = 0x82688338;
	sub_82688228(ctx, base);
	// b 0x82688340
	goto loc_82688340;
loc_8268833C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82688340:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82688350"))) PPC_WEAK_FUNC(sub_82688350);
PPC_FUNC_IMPL(__imp__sub_82688350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,6904
	ctx.r11.s64 = ctx.r11.s64 + 6904;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82688370"))) PPC_WEAK_FUNC(sub_82688370);
PPC_FUNC_IMPL(__imp__sub_82688370) {
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
	// addi r11,r11,6904
	ctx.r11.s64 = ctx.r11.s64 + 6904;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x826883b4
	if (ctx.cr0.eq) goto loc_826883B4;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// lwz r11,-11212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826883AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_826883B4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-16924
	ctx.r11.s64 = ctx.r11.s64 + -16924;
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

__attribute__((alias("__imp__sub_826883D8"))) PPC_WEAK_FUNC(sub_826883D8);
PPC_FUNC_IMPL(__imp__sub_826883D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x826883E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,-3384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3384);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x8268840c
	if (!ctx.cr0.eq) goto loc_8268840C;
loc_82688400:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82688404:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_8268840C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82688424;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82688400
	if (ctx.cr0.eq) goto loc_82688400;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82688444;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// beq 0x826884b8
	if (ctx.cr0.eq) goto loc_826884B8;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x8251c658
	ctx.lr = 0x82688458;
	sub_8251C658(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r5.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268847C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826884ac
	if (ctx.cr6.eq) goto loc_826884AC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8268848C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826884A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82688404
	goto loc_82688404;
loc_826884AC:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
loc_826884B8:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x8268848c
	goto loc_8268848C;
}

__attribute__((alias("__imp__sub_826884C0"))) PPC_WEAK_FUNC(sub_826884C0);
PPC_FUNC_IMPL(__imp__sub_826884C0) {
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
	// bl 0x82688370
	ctx.lr = 0x826884E0;
	sub_82688370(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826884fc
	if (ctx.cr0.eq) goto loc_826884FC;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-11212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826884FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826884FC:
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

__attribute__((alias("__imp__sub_82688518"))) PPC_WEAK_FUNC(sub_82688518);
PPC_FUNC_IMPL(__imp__sub_82688518) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826885A0"))) PPC_WEAK_FUNC(sub_826885A0);
PPC_FUNC_IMPL(__imp__sub_826885A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// lwz r11,52(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// lwz r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// lwz r11,76(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// lwz r11,84(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// lwz r11,88(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// lwz r11,92(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// lwz r11,96(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// lwz r11,100(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// lwz r11,104(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// lwz r11,108(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// lwz r11,112(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// lwz r11,116(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// lwz r11,120(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826886A0"))) PPC_WEAK_FUNC(sub_826886A0);
PPC_FUNC_IMPL(__imp__sub_826886A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lbz r3,-3404(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3404);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826886B0"))) PPC_WEAK_FUNC(sub_826886B0);
PPC_FUNC_IMPL(__imp__sub_826886B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r10.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826886d0
	if (!ctx.cr6.eq) goto loc_826886D0;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_826886D0:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826886e4
	if (!ctx.cr6.eq) goto loc_826886E4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
loc_826886E4:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x826886f8
	if (ctx.cr0.eq) goto loc_826886F8;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
loc_826886F8:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8268870c
	if (ctx.cr0.eq) goto loc_8268870C;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
loc_8268870C:
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82688728"))) PPC_WEAK_FUNC(sub_82688728);
PPC_FUNC_IMPL(__imp__sub_82688728) {
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
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r31,r11,-11200
	ctx.r31.s64 = ctx.r11.s64 + -11200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826885a0
	ctx.lr = 0x8268874C;
	sub_826885A0(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r10,-3400(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3400);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82688768
	if (!ctx.cr6.eq) goto loc_82688768;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lwz r10,-3396(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3396);
	// stw r10,-3400(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3400, ctx.r10.u32);
loc_82688768:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// stw r11,-3412(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3412, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82688790
	if (!ctx.cr6.lt) goto loc_82688790;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-3416(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3416, ctx.r11.u32);
	// b 0x826887ec
	goto loc_826887EC;
loc_82688790:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x826887a8
	if (!ctx.cr6.gt) goto loc_826887A8;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_826887A8:
	// bl 0x8251c658
	ctx.lr = 0x826887AC;
	sub_8251C658(ctx, base);
	// lis r8,-32044
	ctx.r8.s64 = -2100035584;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r3,-3416(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3416, ctx.r3.u32);
	// beq cr6,0x826887ec
	if (ctx.cr6.eq) goto loc_826887EC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x826887d0
	goto loc_826887D0;
loc_826887CC:
	// lwz r3,-3416(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3416);
loc_826887D0:
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r9,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x826887cc
	if (ctx.cr6.lt) goto loc_826887CC;
loc_826887EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8268881c
	if (ctx.cr6.lt) goto loc_8268881C;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8251c658
	ctx.lr = 0x82688800;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268881c
	if (ctx.cr0.eq) goto loc_8268881C;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8269d0b8
	ctx.lr = 0x82688810;
	sub_8269D0B8(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stw r3,-3408(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3408, ctx.r3.u32);
	// b 0x82688828
	goto loc_82688828;
loc_8268881C:
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-3408(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3408, ctx.r11.u32);
loc_82688828:
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,-3404(r10)
	PPC_STORE_U8(ctx.r10.u32 + -3404, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82688850"))) PPC_WEAK_FUNC(sub_82688850);
PPC_FUNC_IMPL(__imp__sub_82688850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82688858;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32044
	ctx.r28.s64 = -2100035584;
	// lwz r3,-3416(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3416);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826888cc
	if (ctx.cr6.eq) goto loc_826888CC;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,-11200
	ctx.r30.s64 = ctx.r11.s64 + -11200;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826888b4
	if (ctx.cr6.eq) goto loc_826888B4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82688888:
	// lwzx r10,r31,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826888a4
	if (ctx.cr6.eq) goto loc_826888A4;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x826934a8
	ctx.lr = 0x8268889C;
	sub_826934A8(ctx, base);
	// lwz r3,-3416(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3416);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_826888A4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82688888
	if (ctx.cr6.lt) goto loc_82688888;
loc_826888B4:
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// lwz r11,-11212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826888C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-3416(r28)
	PPC_STORE_U32(ctx.r28.u32 + -3416, ctx.r11.u32);
loc_826888CC:
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// lwz r3,-3408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3408);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82688990
	if (ctx.cr6.eq) goto loc_82688990;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,-16868
	ctx.r11.s64 = ctx.r11.s64 + -16868;
	// cntlzw r10,r31
	ctx.r10.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// b 0x8268895c
	goto loc_8268895C;
loc_826888FC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82688934
	if (ctx.cr6.eq) goto loc_82688934;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82688928
	if (ctx.cr0.eq) goto loc_82688928;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82688928;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82688928:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r3,-3408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3408);
loc_82688934:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826888fc
	if (!ctx.cr6.eq) goto loc_826888FC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826886b0
	ctx.lr = 0x82688948;
	sub_826886B0(ctx, base);
	// lwz r3,-3408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3408);
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8268895C:
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826888fc
	if (!ctx.cr0.eq) goto loc_826888FC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82688988
	if (ctx.cr6.eq) goto loc_82688988;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82688988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82688988:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-3408(r30)
	PPC_STORE_U32(ctx.r30.u32 + -3408, ctx.r11.u32);
loc_82688990:
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-3412(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3412, ctx.r11.u32);
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// stb r11,-3404(r10)
	PPC_STORE_U8(ctx.r10.u32 + -3404, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826889B0"))) PPC_WEAK_FUNC(sub_826889B0);
PPC_FUNC_IMPL(__imp__sub_826889B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x826889B8;
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
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82688a10
	if (!ctx.cr0.eq) goto loc_82688A10;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r3,64
	ctx.r3.s64 = 64;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bl 0x8251c658
	ctx.lr = 0x826889E4;
	sub_8251C658(ctx, base);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82688a04
	if (!ctx.cr6.gt) goto loc_82688A04;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82688A04:
	// bl 0x8251c658
	ctx.lr = 0x82688A08;
	sub_8251C658(ctx, base);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// b 0x82688ad8
	goto loc_82688AD8;
loc_82688A10:
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82688ad8
	if (!ctx.cr6.eq) goto loc_82688AD8;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// li r29,-1
	ctx.r29.s64 = -1;
	// ori r30,r10,65535
	ctx.r30.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x82688a40
	if (!ctx.cr6.gt) goto loc_82688A40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82688A40:
	// bl 0x8251c658
	ctx.lr = 0x82688A44;
	sub_8251C658(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82688a5c
	if (!ctx.cr6.gt) goto loc_82688A5C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82688A5C:
	// bl 0x8251c658
	ctx.lr = 0x82688A60;
	sub_8251C658(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82688aac
	if (!ctx.cr6.gt) goto loc_82688AAC;
	// li r11,0
	ctx.r11.s64 = 0;
	// subf r8,r30,r28
	ctx.r8.s64 = ctx.r28.s64 - ctx.r30.s64;
loc_82688A7C:
	// lwz r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwzx r7,r7,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// stwx r7,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r7.u32);
	// lwz r7,60(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwzx r7,r7,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82688a7c
	if (ctx.cr6.lt) goto loc_82688A7C;
loc_82688AAC:
	// lis r29,-32071
	ctx.r29.s64 = -2101805056;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,-11212(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82688AC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-11212(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11212);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82688AD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r28.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
loc_82688AD8:
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r27.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r26,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r26.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82688B10"))) PPC_WEAK_FUNC(sub_82688B10);
PPC_FUNC_IMPL(__imp__sub_82688B10) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blelr 
	if (!ctx.cr0.gt) return;
	// lwz r8,56(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r10,0
	ctx.r10.s64 = 0;
loc_82688B28:
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82688b44
	if (!ctx.cr6.eq) goto loc_82688B44;
	// lwz r7,60(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwzx r7,r7,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82688b5c
	if (ctx.cr6.eq) goto loc_82688B5C;
loc_82688B44:
	// lwz r7,48(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82688b28
	if (ctx.cr6.lt) goto loc_82688B28;
	// blr 
	return;
loc_82688B5C:
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82688B70:
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,60(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82688b70
	if (ctx.cr6.lt) goto loc_82688B70;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82688BA8"))) PPC_WEAK_FUNC(sub_82688BA8);
PPC_FUNC_IMPL(__imp__sub_82688BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x82688BB0;
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
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82688c08
	if (!ctx.cr0.eq) goto loc_82688C08;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r3,64
	ctx.r3.s64 = 64;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// bl 0x8251c658
	ctx.lr = 0x82688BDC;
	sub_8251C658(ctx, base);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82688bfc
	if (!ctx.cr6.gt) goto loc_82688BFC;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82688BFC:
	// bl 0x8251c658
	ctx.lr = 0x82688C00;
	sub_8251C658(ctx, base);
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// b 0x82688cd0
	goto loc_82688CD0;
loc_82688C08:
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82688cd0
	if (!ctx.cr6.eq) goto loc_82688CD0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// li r29,-1
	ctx.r29.s64 = -1;
	// ori r30,r10,65535
	ctx.r30.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x82688c38
	if (!ctx.cr6.gt) goto loc_82688C38;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82688C38:
	// bl 0x8251c658
	ctx.lr = 0x82688C3C;
	sub_8251C658(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82688c54
	if (!ctx.cr6.gt) goto loc_82688C54;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82688C54:
	// bl 0x8251c658
	ctx.lr = 0x82688C58;
	sub_8251C658(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82688ca4
	if (!ctx.cr6.gt) goto loc_82688CA4;
	// li r11,0
	ctx.r11.s64 = 0;
	// subf r8,r30,r28
	ctx.r8.s64 = ctx.r28.s64 - ctx.r30.s64;
loc_82688C74:
	// lwz r7,72(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwzx r7,r7,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// stwx r7,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r7.u32);
	// lwz r7,76(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwzx r7,r7,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82688c74
	if (ctx.cr6.lt) goto loc_82688C74;
loc_82688CA4:
	// lis r29,-32071
	ctx.r29.s64 = -2101805056;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r11,-11212(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82688CB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-11212(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11212);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82688CC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
loc_82688CD0:
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r27.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r26,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r26.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82688D08"))) PPC_WEAK_FUNC(sub_82688D08);
PPC_FUNC_IMPL(__imp__sub_82688D08) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blelr 
	if (!ctx.cr0.gt) return;
	// lwz r8,72(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r10,0
	ctx.r10.s64 = 0;
loc_82688D20:
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82688d3c
	if (!ctx.cr6.eq) goto loc_82688D3C;
	// lwz r7,76(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// lwzx r7,r7,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82688d54
	if (ctx.cr6.eq) goto loc_82688D54;
loc_82688D3C:
	// lwz r7,64(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82688d20
	if (ctx.cr6.lt) goto loc_82688D20;
	// blr 
	return;
loc_82688D54:
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82688D68:
	// lwz r9,72(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,76(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82688d68
	if (ctx.cr6.lt) goto loc_82688D68;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82688DA0"))) PPC_WEAK_FUNC(sub_82688DA0);
PPC_FUNC_IMPL(__imp__sub_82688DA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// addi r10,r11,6916
	ctx.r10.s64 = ctx.r11.s64 + 6916;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lfs f0,14088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82688DF8"))) PPC_WEAK_FUNC(sub_82688DF8);
PPC_FUNC_IMPL(__imp__sub_82688DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82688E00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82688eb0
	if (!ctx.cr6.eq) goto loc_82688EB0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82688e2c
	if (!ctx.cr6.eq) goto loc_82688E2C;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82688e30
	goto loc_82688E30;
loc_82688E2C:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82688E30:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82688e50
	if (!ctx.cr6.gt) goto loc_82688E50;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82688E50:
	// bl 0x8251c658
	ctx.lr = 0x82688E54;
	sub_8251C658(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82688e8c
	if (!ctx.cr6.gt) goto loc_82688E8C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82688E6C:
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stwx r9,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82688e6c
	if (ctx.cr6.lt) goto loc_82688E6C;
loc_82688E8C:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82688eac
	if (ctx.cr6.eq) goto loc_82688EAC;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,-11212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82688EAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82688EAC:
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_82688EB0:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r29.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82688ED8"))) PPC_WEAK_FUNC(sub_82688ED8);
PPC_FUNC_IMPL(__imp__sub_82688ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82688EE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r30,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r30.u32);
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82688f0c
	if (ctx.cr6.lt) goto loc_82688F0C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82688fa0
	goto loc_82688FA0;
loc_82688F0C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r11,-16868
	ctx.r11.s64 = ctx.r11.s64 + -16868;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,172
	ctx.r5.s64 = ctx.r1.s64 + 172;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82681d30
	ctx.lr = 0x82688F30;
	sub_82681D30(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// addi r11,r11,-16924
	ctx.r11.s64 = ctx.r11.s64 + -16924;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r31,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r31.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82688f88
	if (!ctx.cr6.gt) goto loc_82688F88;
loc_82688F58:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwzx r4,r10,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82688F74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82688f58
	if (ctx.cr6.lt) goto loc_82688F58;
loc_82688F88:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82688F9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82688FA0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82688FA8"))) PPC_WEAK_FUNC(sub_82688FA8);
PPC_FUNC_IMPL(__imp__sub_82688FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82688FB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8268901c
	if (!ctx.cr6.gt) goto loc_8268901C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82688FD0:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82688FE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82688FE8:
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82689028
	if (ctx.cr6.eq) goto loc_82689028;
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82688fe8
	if (!ctx.cr0.eq) goto loc_82688FE8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82689000:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82689030
	if (!ctx.cr0.eq) goto loc_82689030;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82688fd0
	if (ctx.cr6.lt) goto loc_82688FD0;
loc_8268901C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82689020:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82689028:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82689000
	goto loc_82689000;
loc_82689030:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82689020
	goto loc_82689020;
}

__attribute__((alias("__imp__sub_82689040"))) PPC_WEAK_FUNC(sub_82689040);
PPC_FUNC_IMPL(__imp__sub_82689040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82689048;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8268f898
	ctx.lr = 0x8268905C;
	sub_8268F898(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8268e638
	ctx.lr = 0x82689068;
	sub_8268E638(ctx, base);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8268908c
	goto loc_8268908C;
loc_82689074:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82689088;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_8268908C:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82689074
	if (!ctx.cr0.eq) goto loc_82689074;
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82689218
	if (!ctx.cr6.gt) goto loc_82689218;
	// li r31,0
	ctx.r31.s64 = 0;
loc_826890B8:
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826890D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826890b8
	if (ctx.cr6.lt) goto loc_826890B8;
	// b 0x82689218
	goto loc_82689218;
loc_826890E8:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82689100
	if (ctx.cr6.lt) goto loc_82689100;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8268910c
	goto loc_8268910C;
loc_82689100:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mulli r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 * 20;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8268910C:
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82689218
	if (ctx.cr0.eq) goto loc_82689218;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82689218
	if (ctx.cr0.eq) goto loc_82689218;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82689180
	if (!ctx.cr6.gt) goto loc_82689180;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8268913C:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82689168
	if (ctx.cr6.eq) goto loc_82689168;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82689168;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82689168:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8268913c
	if (ctx.cr6.lt) goto loc_8268913C;
loc_82689180:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x826891dc
	if (!ctx.cr6.gt) goto loc_826891DC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82689198:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826891c4
	if (ctx.cr6.eq) goto loc_826891C4;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826891C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826891C4:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82689198
	if (ctx.cr6.lt) goto loc_82689198;
loc_826891DC:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826891F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82689218
	if (!ctx.cr6.eq) goto loc_82689218;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82689218;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82689218:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8268fb78
	ctx.lr = 0x82689220;
	sub_8268FB78(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x826890e8
	if (!ctx.cr6.eq) goto loc_826890E8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8268e7e8
	ctx.lr = 0x82689230;
	sub_8268E7E8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689240"))) PPC_WEAK_FUNC(sub_82689240);
PPC_FUNC_IMPL(__imp__sub_82689240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82689248;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82689274
	if (!ctx.cr0.eq) goto loc_82689274;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82689320
	goto loc_82689320;
loc_82689274:
	// lwz r11,64(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826892d8
	if (!ctx.cr6.gt) goto loc_826892D8;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_8268928C:
	// lwz r11,72(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,76(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwzx r4,r30,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826892A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,64(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8268928c
	if (ctx.cr6.lt) goto loc_8268928C;
	// b 0x826892d8
	goto loc_826892D8;
loc_826892C0:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826892D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826892D8:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x826892c0
	if (!ctx.cr0.eq) goto loc_826892C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82689308;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// bl 0x826886b0
	ctx.lr = 0x82689314;
	sub_826886B0(ctx, base);
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r27,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r27.u32);
loc_82689320:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689328"))) PPC_WEAK_FUNC(sub_82689328);
PPC_FUNC_IMPL(__imp__sub_82689328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82689330;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,6916
	ctx.r11.s64 = ctx.r11.s64 + 6916;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826893bc
	if (ctx.cr0.eq) goto loc_826893BC;
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82689380
	goto loc_82689380;
loc_8268935C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268937c
	if (ctx.cr0.eq) goto loc_8268937C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268937C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268937C:
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
loc_82689380:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268935c
	if (!ctx.cr0.eq) goto loc_8268935C;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826893bc
	if (ctx.cr0.eq) goto loc_826893BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826893B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
loc_826893BC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826893f4
	if (ctx.cr0.eq) goto loc_826893F4;
	// b 0x826893d8
	goto loc_826893D8;
loc_826893CC:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x826937f8
	ctx.lr = 0x826893D4;
	sub_826937F8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
loc_826893D8:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826893cc
	if (!ctx.cr0.eq) goto loc_826893CC;
loc_826893F4:
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// lwz r11,-3408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3408);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82689430
	if (ctx.cr6.eq) goto loc_82689430;
	// b 0x82689414
	goto loc_82689414;
loc_82689408:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x826937f8
	ctx.lr = 0x82689410;
	sub_826937F8(ctx, base);
	// lwz r11,-3408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3408);
loc_82689414:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82689408
	if (!ctx.cr0.eq) goto loc_82689408;
loc_82689430:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x826894a8
	if (!ctx.cr6.gt) goto loc_826894A8;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82689444:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8268947c
	if (ctx.cr6.eq) goto loc_8268947C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82689474
	if (ctx.cr0.eq) goto loc_82689474;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82689474;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82689474:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stwx r28,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r28.u32);
loc_8268947C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82689444
	if (!ctx.cr6.eq) goto loc_82689444;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82689444
	if (ctx.cr6.lt) goto loc_82689444;
loc_826894A8:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lis r30,-32071
	ctx.r30.s64 = -2101805056;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826894cc
	if (ctx.cr6.eq) goto loc_826894CC;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,-11212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826894C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
loc_826894CC:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826894f8
	if (ctx.cr0.eq) goto loc_826894F8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826894f8
	if (ctx.cr6.eq) goto loc_826894F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826894F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
loc_826894F8:
	// bl 0x8268e2c8
	ctx.lr = 0x826894FC;
	sub_8268E2C8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82689538
	if (ctx.cr6.eq) goto loc_82689538;
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
	// stw r28,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
	// lwz r11,-11212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11212);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82689520;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r28.u32);
	// lwz r11,-11212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11212);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82689534;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
loc_82689538:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82689574
	if (ctx.cr6.eq) goto loc_82689574;
	// stw r28,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r28.u32);
	// stw r28,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
	// lwz r11,-11212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11212);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268955C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// lwz r11,-11212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11212);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82689570;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r28.u32);
loc_82689574:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-16924
	ctx.r11.s64 = ctx.r11.s64 + -16924;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689588"))) PPC_WEAK_FUNC(sub_82689588);
PPC_FUNC_IMPL(__imp__sub_82689588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82689590;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x826895c0
	goto loc_826895C0;
loc_826895A4:
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x826e6bb0
	ctx.lr = 0x826895B4;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826895e4
	if (ctx.cr0.eq) goto loc_826895E4;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_826895C0:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826895a4
	if (!ctx.cr0.eq) goto loc_826895A4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_826895DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_826895E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x826895dc
	goto loc_826895DC;
}

__attribute__((alias("__imp__sub_826895F0"))) PPC_WEAK_FUNC(sub_826895F0);
PPC_FUNC_IMPL(__imp__sub_826895F0) {
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
	// bl 0x82689328
	ctx.lr = 0x82689610;
	sub_82689328(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268962c
	if (ctx.cr0.eq) goto loc_8268962C;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-11212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268962C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268962C:
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

__attribute__((alias("__imp__sub_82689648"))) PPC_WEAK_FUNC(sub_82689648);
PPC_FUNC_IMPL(__imp__sub_82689648) {
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
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lwz r11,-2348(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2348);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// addi r31,r9,-3376
	ctx.r31.s64 = ctx.r9.s64 + -3376;
	// bne 0x826896a4
	if (!ctx.cr0.eq) goto loc_826896A4;
	// lis r9,-32071
	ctx.r9.s64 = -2101805056;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lbz r8,-11064(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -11064);
	// stw r11,-2348(r10)
	PPC_STORE_U32(ctx.r10.u32 + -2348, ctx.r11.u32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82689690
	if (ctx.cr0.eq) goto loc_82689690;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r11.u32);
loc_82689690:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32081
	ctx.r10.s64 = -2102460416;
	// addi r3,r10,-27792
	ctx.r3.s64 = ctx.r10.s64 + -27792;
	// stb r11,-11064(r9)
	PPC_STORE_U8(ctx.r9.u32 + -11064, ctx.r11.u8);
	// bl 0x826ded00
	ctx.lr = 0x826896A4;
	sub_826DED00(ctx, base);
loc_826896A4:
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

__attribute__((alias("__imp__sub_826896C0"))) PPC_WEAK_FUNC(sub_826896C0);
PPC_FUNC_IMPL(__imp__sub_826896C0) {
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
	// beq cr6,0x8268973c
	if (ctx.cr6.eq) goto loc_8268973C;
	// bl 0x82689648
	ctx.lr = 0x826896E0;
	sub_82689648(ctx, base);
	// lwz r5,1024(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x8268973c
	if (!ctx.cr0.gt) goto loc_8268973C;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_826896F4:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
loc_82689700:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82689724
	if (ctx.cr0.eq) goto loc_82689724;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82689700
	if (ctx.cr6.eq) goto loc_82689700;
loc_82689724:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82689754
	if (ctx.cr0.eq) goto loc_82689754;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x826896f4
	if (ctx.cr6.lt) goto loc_826896F4;
loc_8268973C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82689740:
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
loc_82689754:
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// b 0x82689740
	goto loc_82689740;
}

__attribute__((alias("__imp__sub_82689760"))) PPC_WEAK_FUNC(sub_82689760);
PPC_FUNC_IMPL(__imp__sub_82689760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8a0
	ctx.lr = 0x82689768;
	__savegprlr_18(ctx, base);
	// stfd f29,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f29.u64);
	// stfd f30,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f30.u64);
	// stfd f31,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,7100
	ctx.r4.s64 = ctx.r11.s64 + 7100;
	// stw r3,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r3.u32);
	// bl 0x8268ff80
	ctx.lr = 0x82689790;
	sub_8268FF80(ctx, base);
	// li r18,0
	ctx.r18.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826897a8
	if (ctx.cr0.eq) goto loc_826897A8;
	// bl 0x826e2440
	ctx.lr = 0x826897A0;
	sub_826E2440(ctx, base);
	// stw r3,16(r21)
	PPC_STORE_U32(ctx.r21.u32 + 16, ctx.r3.u32);
	// b 0x826897ac
	goto loc_826897AC;
loc_826897A8:
	// stw r18,16(r21)
	PPC_STORE_U32(ctx.r21.u32 + 16, ctx.r18.u32);
loc_826897AC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r3,8(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// addi r4,r11,7092
	ctx.r4.s64 = ctx.r11.s64 + 7092;
	// bl 0x8268ff80
	ctx.lr = 0x826897BC;
	sub_8268FF80(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r18,28(r21)
	PPC_STORE_U32(ctx.r21.u32 + 28, ctx.r18.u32);
	// beq 0x826897fc
	if (ctx.cr0.eq) goto loc_826897FC;
	// bl 0x826e2440
	ctx.lr = 0x826897CC;
	sub_826E2440(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r11,24(r21)
	PPC_STORE_U32(ctx.r21.u32 + 24, ctx.r11.u32);
	// bl 0x8251c658
	ctx.lr = 0x826897DC;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826897f0
	if (ctx.cr0.eq) goto loc_826897F0;
	// lwz r4,24(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24);
	// bl 0x8269d0b8
	ctx.lr = 0x826897EC;
	sub_8269D0B8(ctx, base);
	// b 0x826897f4
	goto loc_826897F4;
loc_826897F0:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
loc_826897F4:
	// stw r3,28(r21)
	PPC_STORE_U32(ctx.r21.u32 + 28, ctx.r3.u32);
	// b 0x82689800
	goto loc_82689800;
loc_826897FC:
	// stw r18,24(r21)
	PPC_STORE_U32(ctx.r21.u32 + 24, ctx.r18.u32);
loc_82689800:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r3,8(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// addi r4,r11,7080
	ctx.r4.s64 = ctx.r11.s64 + 7080;
	// bl 0x8268ff80
	ctx.lr = 0x82689810;
	sub_8268FF80(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82689820
	if (!ctx.cr0.eq) goto loc_82689820;
loc_82689818:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82689db4
	goto loc_82689DB4;
loc_82689820:
	// bl 0x826e2438
	ctx.lr = 0x82689824;
	sub_826E2438(ctx, base);
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,12(r21)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r21.u32 + 12, temp.u32);
	// lwz r10,16(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16);
	// lwz r11,-11200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11200);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82689844
	if (!ctx.cr6.gt) goto loc_82689844;
	// stw r11,16(r21)
	PPC_STORE_U32(ctx.r21.u32 + 16, ctx.r11.u32);
loc_82689844:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8251c658
	ctx.lr = 0x8268984C;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82689864
	if (ctx.cr0.eq) goto loc_82689864;
	// lwz r4,16(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16);
	// bl 0x8269d0b8
	ctx.lr = 0x8268985C;
	sub_8269D0B8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82689868
	goto loc_82689868;
loc_82689864:
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
loc_82689868:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r3,8(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// stw r10,20(r21)
	PPC_STORE_U32(ctx.r21.u32 + 20, ctx.r10.u32);
	// addi r4,r11,7072
	ctx.r4.s64 = ctx.r11.s64 + 7072;
	// bl 0x8268fef8
	ctx.lr = 0x8268987C;
	sub_8268FEF8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,8(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// addi r4,r11,7052
	ctx.r4.s64 = ctx.r11.s64 + 7052;
	// bl 0x8268ff80
	ctx.lr = 0x82689890;
	sub_8268FF80(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r19,r11,7040
	ctx.r19.s64 = ctx.r11.s64 + 7040;
	// beq 0x826898b0
	if (ctx.cr0.eq) goto loc_826898B0;
	// bl 0x826e2440
	ctx.lr = 0x826898A4;
	sub_826E2440(ctx, base);
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// stw r3,-11000(r11)
	PPC_STORE_U32(ctx.r11.u32 + -11000, ctx.r3.u32);
	// b 0x82689910
	goto loc_82689910;
loc_826898B0:
	// lis r30,-32071
	ctx.r30.s64 = -2101805056;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,-11000(r30)
	PPC_STORE_U32(ctx.r30.u32 + -11000, ctx.r11.u32);
	// beq cr6,0x82689910
	if (ctx.cr6.eq) goto loc_82689910;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82689910
	if (ctx.cr0.eq) goto loc_82689910;
loc_826898D4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82690008
	ctx.lr = 0x826898E0;
	sub_82690008(ctx, base);
	// bl 0x82a947a0
	ctx.lr = 0x826898E4;
	sub_82A947A0(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x826e6bb0
	ctx.lr = 0x826898EC;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82689900
	if (!ctx.cr0.eq) goto loc_82689900;
	// lwz r11,-11000(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11000);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-11000(r30)
	PPC_STORE_U32(ctx.r30.u32 + -11000, ctx.r11.u32);
loc_82689900:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826898d4
	if (ctx.cr6.lt) goto loc_826898D4;
loc_82689910:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r3,8(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// addi r4,r11,7024
	ctx.r4.s64 = ctx.r11.s64 + 7024;
	// bl 0x8268ff80
	ctx.lr = 0x82689920;
	sub_8268FF80(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r20,r11,7012
	ctx.r20.s64 = ctx.r11.s64 + 7012;
	// beq 0x82689940
	if (ctx.cr0.eq) goto loc_82689940;
	// bl 0x826e2440
	ctx.lr = 0x82689934;
	sub_826E2440(ctx, base);
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// stw r3,-10996(r11)
	PPC_STORE_U32(ctx.r11.u32 + -10996, ctx.r3.u32);
	// b 0x826899a0
	goto loc_826899A0;
loc_82689940:
	// lis r30,-32071
	ctx.r30.s64 = -2101805056;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,-10996(r30)
	PPC_STORE_U32(ctx.r30.u32 + -10996, ctx.r11.u32);
	// beq cr6,0x826899a0
	if (ctx.cr6.eq) goto loc_826899A0;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826899a0
	if (ctx.cr0.eq) goto loc_826899A0;
loc_82689964:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82690008
	ctx.lr = 0x82689970;
	sub_82690008(ctx, base);
	// bl 0x82a947a0
	ctx.lr = 0x82689974;
	sub_82A947A0(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x826e6bb0
	ctx.lr = 0x8268997C;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82689990
	if (!ctx.cr0.eq) goto loc_82689990;
	// lwz r11,-10996(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10996);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-10996(r30)
	PPC_STORE_U32(ctx.r30.u32 + -10996, ctx.r11.u32);
loc_82689990:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82689964
	if (ctx.cr6.lt) goto loc_82689964;
loc_826899A0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r3,8(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// addi r4,r11,6992
	ctx.r4.s64 = ctx.r11.s64 + 6992;
	// bl 0x8268ff80
	ctx.lr = 0x826899B0;
	sub_8268FF80(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r22,r11,6980
	ctx.r22.s64 = ctx.r11.s64 + 6980;
	// beq 0x826899d0
	if (ctx.cr0.eq) goto loc_826899D0;
	// bl 0x826e2440
	ctx.lr = 0x826899C4;
	sub_826E2440(ctx, base);
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// stw r3,-10992(r11)
	PPC_STORE_U32(ctx.r11.u32 + -10992, ctx.r3.u32);
	// b 0x82689a00
	goto loc_82689A00;
loc_826899D0:
	// lis r31,-32071
	ctx.r31.s64 = -2101805056;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,-10992(r31)
	PPC_STORE_U32(ctx.r31.u32 + -10992, ctx.r11.u32);
	// beq cr6,0x82689a00
	if (ctx.cr6.eq) goto loc_82689A00;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x8268fef8
	ctx.lr = 0x826899F0;
	sub_8268FEF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82689a00
	if (ctx.cr0.eq) goto loc_82689A00;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// stw r11,-10992(r31)
	PPC_STORE_U32(ctx.r31.u32 + -10992, ctx.r11.u32);
loc_82689A00:
	// bl 0x8268f898
	ctx.lr = 0x82689A04;
	sub_8268F898(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,8(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// addi r23,r11,6976
	ctx.r23.s64 = ctx.r11.s64 + 6976;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x8268ff80
	ctx.lr = 0x82689A1C;
	sub_8268FF80(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82689818
	if (ctx.cr0.eq) goto loc_82689818;
	// bl 0x826e2438
	ctx.lr = 0x82689A28;
	sub_826E2438(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f31,8072(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8072);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x82629778
	ctx.lr = 0x82689A40;
	sub_82629778(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82689c40
	if (ctx.cr6.eq) goto loc_82689C40;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82689bd0
	if (ctx.cr0.eq) goto loc_82689BD0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r26,r11,6968
	ctx.r26.s64 = ctx.r11.s64 + 6968;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r25,r11,6960
	ctx.r25.s64 = ctx.r11.s64 + 6960;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f29,8888(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8888);
	ctx.f29.f64 = double(temp.f32);
	// addi r24,r11,6948
	ctx.r24.s64 = ctx.r11.s64 + 6948;
	// lfs f30,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f30.f64 = double(temp.f32);
loc_82689A80:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82690008
	ctx.lr = 0x82689A8C;
	sub_82690008(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a947a0
	ctx.lr = 0x82689A94;
	sub_82A947A0(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x826e6bb0
	ctx.lr = 0x82689A9C;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82689b58
	if (!ctx.cr0.eq) goto loc_82689B58;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82689bc0
	if (ctx.cr0.eq) goto loc_82689BC0;
	// bl 0x8268f9c8
	ctx.lr = 0x82689AB4;
	sub_8268F9C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82689bc0
	if (ctx.cr6.eq) goto loc_82689BC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8268ff80
	ctx.lr = 0x82689ACC;
	sub_8268FF80(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82689adc
	if (!ctx.cr0.eq) goto loc_82689ADC;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// b 0x82689ae4
	goto loc_82689AE4;
loc_82689ADC:
	// bl 0x826e2438
	ctx.lr = 0x82689AE0;
	sub_826E2438(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
loc_82689AE4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8268e450
	ctx.lr = 0x82689AF0;
	sub_8268E450(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x8268ff80
	ctx.lr = 0x82689AFC;
	sub_8268FF80(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82689b0c
	if (!ctx.cr0.eq) goto loc_82689B0C;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// b 0x82689b18
	goto loc_82689B18;
loc_82689B0C:
	// bl 0x826e2438
	ctx.lr = 0x82689B10;
	sub_826E2438(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
loc_82689B18:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8268e478
	ctx.lr = 0x82689B24;
	sub_8268E478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x8268ff80
	ctx.lr = 0x82689B30;
	sub_8268FF80(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82689b40
	if (!ctx.cr0.eq) goto loc_82689B40;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82689b48
	goto loc_82689B48;
loc_82689B40:
	// bl 0x826e2440
	ctx.lr = 0x82689B44;
	sub_826E2440(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82689B48:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8268e4a0
	ctx.lr = 0x82689B54;
	sub_8268E4A0(ctx, base);
	// b 0x82689bc0
	goto loc_82689BC0;
loc_82689B58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a947a0
	ctx.lr = 0x82689B60;
	sub_82A947A0(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x826e6bb0
	ctx.lr = 0x82689B68;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82689bc0
	if (!ctx.cr0.eq) goto loc_82689BC0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82689bc0
	if (ctx.cr0.eq) goto loc_82689BC0;
	// bl 0x8268f8f0
	ctx.lr = 0x82689B80;
	sub_8268F8F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82689bc0
	if (ctx.cr6.eq) goto loc_82689BC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8268ff80
	ctx.lr = 0x82689B98;
	sub_8268FF80(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82689ba8
	if (!ctx.cr0.eq) goto loc_82689BA8;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// b 0x82689bb4
	goto loc_82689BB4;
loc_82689BA8:
	// bl 0x826e2438
	ctx.lr = 0x82689BAC;
	sub_826E2438(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
loc_82689BB4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8268e4c8
	ctx.lr = 0x82689BC0;
	sub_8268E4C8(ctx, base);
loc_82689BC0:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82689a80
	if (ctx.cr6.lt) goto loc_82689A80;
loc_82689BD0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x8268fef8
	ctx.lr = 0x82689BDC;
	sub_8268FEF8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82689c40
	if (ctx.cr0.eq) goto loc_82689C40;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82689c40
	if (ctx.cr0.eq) goto loc_82689C40;
loc_82689BF4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82690008
	ctx.lr = 0x82689C00;
	sub_82690008(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82a947a0
	ctx.lr = 0x82689C08;
	sub_82A947A0(ctx, base);
	// bl 0x8268faa0
	ctx.lr = 0x82689C0C;
	sub_8268FAA0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a94798
	ctx.lr = 0x82689C18;
	sub_82A94798(ctx, base);
	// bl 0x826e2438
	ctx.lr = 0x82689C1C;
	sub_826E2438(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x8268e4f0
	ctx.lr = 0x82689C30;
	sub_8268E4F0(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82689bf4
	if (ctx.cr6.lt) goto loc_82689BF4;
loc_82689C40:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r3,8(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// addi r4,r11,6932
	ctx.r4.s64 = ctx.r11.s64 + 6932;
	// bl 0x8268fef8
	ctx.lr = 0x82689C50;
	sub_8268FEF8(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82689db0
	if (ctx.cr0.eq) goto loc_82689DB0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r3,8(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// addi r4,r11,6920
	ctx.r4.s64 = ctx.r11.s64 + 6920;
	// bl 0x8268fef8
	ctx.lr = 0x82689C68;
	sub_8268FEF8(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq 0x82689db0
	if (ctx.cr0.eq) goto loc_82689DB0;
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82689db0
	if (ctx.cr0.eq) goto loc_82689DB0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r26,r11,4168
	ctx.r26.s64 = ctx.r11.s64 + 4168;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r29,r11,4192
	ctx.r29.s64 = ctx.r11.s64 + 4192;
loc_82689C90:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82690008
	ctx.lr = 0x82689C9C;
	sub_82690008(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a947a0
	ctx.lr = 0x82689CA4;
	sub_82A947A0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// beq cr6,0x82689da0
	if (ctx.cr6.eq) goto loc_82689DA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a947a0
	ctx.lr = 0x82689CB8;
	sub_82A947A0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x826e6bb0
	ctx.lr = 0x82689CC0;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82689da0
	if (!ctx.cr0.eq) goto loc_82689DA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a94798
	ctx.lr = 0x82689CD0;
	sub_82A94798(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82689da0
	if (ctx.cr0.eq) goto loc_82689DA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a94798
	ctx.lr = 0x82689CE0;
	sub_82A94798(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8268fe40
	ctx.lr = 0x82689CF0;
	sub_8268FE40(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82689da0
	if (ctx.cr0.eq) goto loc_82689DA0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8268ff80
	ctx.lr = 0x82689D04;
	sub_8268FF80(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82689da0
	if (ctx.cr0.eq) goto loc_82689DA0;
	// bl 0x826896c0
	ctx.lr = 0x82689D10;
	sub_826896C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82689d44
	if (!ctx.cr0.eq) goto loc_82689D44;
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
	// bl 0x82689648
	ctx.lr = 0x82689D20;
	sub_82689648(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82689da0
	if (!ctx.cr6.gt) goto loc_82689DA0;
loc_82689D2C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82689648
	ctx.lr = 0x82689D34;
	sub_82689648(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82689d2c
	if (ctx.cr6.lt) goto loc_82689D2C;
	// b 0x82689da0
	goto loc_82689DA0;
loc_82689D44:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82689da0
	if (ctx.cr0.eq) goto loc_82689DA0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82689D58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82689D70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82689d94
	if (!ctx.cr0.eq) goto loc_82689D94;
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
	ctx.lr = 0x82689D90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82689da0
	goto loc_82689DA0;
loc_82689D94:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82688df8
	ctx.lr = 0x82689DA0;
	sub_82688DF8(ctx, base);
loc_82689DA0:
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82689c90
	if (ctx.cr6.lt) goto loc_82689C90;
loc_82689DB0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82689DB4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f30,-136(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x826de8f0
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689DC8"))) PPC_WEAK_FUNC(sub_82689DC8);
PPC_FUNC_IMPL(__imp__sub_82689DC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f31,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f2,f31
	ctx.cr6.compare(ctx.f2.f64, ctx.f31.f64);
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f11,f0,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f29,f12,f12,f11
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// blt cr6,0x82689e2c
	if (ctx.cr6.lt) goto loc_82689E2C;
	// fmuls f11,f2,f2
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// fcmpu cr6,f29,f11
	ctx.cr6.compare(ctx.f29.f64, ctx.f11.f64);
	// bgt cr6,0x82689e94
	if (ctx.cr6.gt) goto loc_82689E94;
loc_82689E2C:
	// lfs f11,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f13,f11,f13,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fmadds f30,f10,f0,f13
	ctx.f30.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f13.f64));
	// bl 0x82692118
	ctx.lr = 0x82689E48;
	sub_82692118(ctx, base);
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bge cr6,0x82689e74
	if (!ctx.cr6.lt) goto loc_82689E74;
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x82689e94
	if (!ctx.cr6.lt) goto loc_82689E94;
	// fmuls f0,f1,f1
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fmuls f13,f30,f30
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82689e98
	if (!ctx.cr6.gt) goto loc_82689E98;
	// b 0x82689e94
	goto loc_82689E94;
loc_82689E74:
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// blt cr6,0x82689e98
	if (ctx.cr6.lt) goto loc_82689E98;
	// fmuls f0,f1,f1
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fmuls f13,f30,f30
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82689e98
	if (!ctx.cr6.lt) goto loc_82689E98;
loc_82689E94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82689E98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f30,-24(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82689EB8"))) PPC_WEAK_FUNC(sub_82689EB8);
PPC_FUNC_IMPL(__imp__sub_82689EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x82689EC0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82689f90
	if (ctx.cr0.eq) goto loc_82689F90;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r29,r11,4176
	ctx.r29.s64 = ctx.r11.s64 + 4176;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r28,r11,7124
	ctx.r28.s64 = ctx.r11.s64 + 7124;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r27,r11,4168
	ctx.r27.s64 = ctx.r11.s64 + 4168;
loc_82689EF4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82690008
	ctx.lr = 0x82689F00;
	sub_82690008(ctx, base);
	// bl 0x82a947a0
	ctx.lr = 0x82689F04;
	sub_82A947A0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x826e6bb0
	ctx.lr = 0x82689F0C;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82689f80
	if (ctx.cr0.eq) goto loc_82689F80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82690008
	ctx.lr = 0x82689F20;
	sub_82690008(ctx, base);
	// bl 0x82a947a0
	ctx.lr = 0x82689F24;
	sub_82A947A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x826e6bb0
	ctx.lr = 0x82689F2C;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82689f80
	if (ctx.cr0.eq) goto loc_82689F80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82690008
	ctx.lr = 0x82689F40;
	sub_82690008(ctx, base);
	// bl 0x82a947a0
	ctx.lr = 0x82689F44;
	sub_82A947A0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x826e6bb0
	ctx.lr = 0x82689F4C;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82689f80
	if (ctx.cr0.eq) goto loc_82689F80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82690008
	ctx.lr = 0x82689F60;
	sub_82690008(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82689F78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82689f9c
	if (ctx.cr0.eq) goto loc_82689F9C;
loc_82689F80:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82689ef4
	if (ctx.cr6.lt) goto loc_82689EF4;
loc_82689F90:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82689F94:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_82689F9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82689f94
	goto loc_82689F94;
}

__attribute__((alias("__imp__sub_82689FA8"))) PPC_WEAK_FUNC(sub_82689FA8);
PPC_FUNC_IMPL(__imp__sub_82689FA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82689FC8"))) PPC_WEAK_FUNC(sub_82689FC8);
PPC_FUNC_IMPL(__imp__sub_82689FC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82689FD0"))) PPC_WEAK_FUNC(sub_82689FD0);
PPC_FUNC_IMPL(__imp__sub_82689FD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82689ff8
	if (ctx.cr0.lt) goto loc_82689FF8;
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82689ff8
	if (!ctx.cr6.lt) goto loc_82689FF8;
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
loc_82689FF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268A000"))) PPC_WEAK_FUNC(sub_8268A000);
PPC_FUNC_IMPL(__imp__sub_8268A000) {
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
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268a034
	if (ctx.cr6.eq) goto loc_8268A034;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268A034;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268A034:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268a048
	if (ctx.cr0.eq) goto loc_8268A048;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8268c710
	ctx.lr = 0x8268A048;
	sub_8268C710(ctx, base);
loc_8268A048:
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

__attribute__((alias("__imp__sub_8268A060"))) PPC_WEAK_FUNC(sub_8268A060);
PPC_FUNC_IMPL(__imp__sub_8268A060) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268a094
	if (ctx.cr6.eq) goto loc_8268A094;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268A094;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268A094:
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x8268a0ac
	if (ctx.cr0.eq) goto loc_8268A0AC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8268cf28
	ctx.lr = 0x8268A0AC;
	sub_8268CF28(ctx, base);
loc_8268A0AC:
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

__attribute__((alias("__imp__sub_8268A0C0"))) PPC_WEAK_FUNC(sub_8268A0C0);
PPC_FUNC_IMPL(__imp__sub_8268A0C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8268a0e0
	if (!ctx.cr0.eq) goto loc_8268A0E0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8268A0E0:
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r9,20
	ctx.r9.s64 = 20;
	// lwz r10,-3384(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3384);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divwu r3,r11,r9
	ctx.r3.u32 = ctx.r11.u32 / ctx.r9.u32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268A100"))) PPC_WEAK_FUNC(sub_8268A100);
PPC_FUNC_IMPL(__imp__sub_8268A100) {
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
	// lwz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi r31,0
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8268a154
	if (ctx.cr0.lt) goto loc_8268A154;
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8268a154
	if (!ctx.cr6.lt) goto loc_8268A154;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268a154
	if (ctx.cr0.eq) goto loc_8268A154;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268A144;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// b 0x8268a158
	goto loc_8268A158;
loc_8268A154:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8268A158:
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

__attribute__((alias("__imp__sub_8268A170"))) PPC_WEAK_FUNC(sub_8268A170);
PPC_FUNC_IMPL(__imp__sub_8268A170) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,96(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 96);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8268a1a4
	if (!ctx.cr6.eq) goto loc_8268A1A4;
	// lwz r11,104(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 104);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8268a210
	if (!ctx.cr0.eq) goto loc_8268A210;
loc_8268A1A4:
	// lwz r11,40(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268a20c
	if (ctx.cr6.eq) goto loc_8268A20C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8268a1e0
	if (ctx.cr6.eq) goto loc_8268A1E0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8268cf28
	ctx.lr = 0x8268A1C0;
	sub_8268CF28(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// b 0x8268a214
	goto loc_8268A214;
loc_8268A1E0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8268a210
	if (ctx.cr6.eq) goto loc_8268A210;
	// lwz r11,104(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 104);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268a210
	if (ctx.cr0.eq) goto loc_8268A210;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8268c710
	ctx.lr = 0x8268A208;
	sub_8268C710(ctx, base);
	// b 0x8268a210
	goto loc_8268A210;
loc_8268A20C:
	// stw r4,96(r5)
	PPC_STORE_U32(ctx.r5.u32 + 96, ctx.r4.u32);
loc_8268A210:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8268A214:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268A228"))) PPC_WEAK_FUNC(sub_8268A228);
PPC_FUNC_IMPL(__imp__sub_8268A228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8268A230;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,7136
	ctx.r11.s64 = ctx.r11.s64 + 7136;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8268a260
	goto loc_8268A260;
loc_8268A248:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268A260;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268A260:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8268a248
	if (!ctx.cr0.eq) goto loc_8268A248;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268a2a4
	if (ctx.cr0.eq) goto loc_8268A2A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268A2A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
loc_8268A2A4:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268a2c8
	if (ctx.cr0.eq) goto loc_8268A2C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268A2C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
loc_8268A2C8:
	// lis r27,-32071
	ctx.r27.s64 = -2101805056;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,-11212(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268A2DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268a364
	if (ctx.cr0.eq) goto loc_8268A364;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8268a354
	if (!ctx.cr6.gt) goto loc_8268A354;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8268A2F8:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8268a330
	if (ctx.cr6.eq) goto loc_8268A330;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268a328
	if (ctx.cr0.eq) goto loc_8268A328;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268A328;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268A328:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stwx r28,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r28.u32);
loc_8268A330:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8268a2f8
	if (!ctx.cr6.eq) goto loc_8268A2F8;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8268a2f8
	if (ctx.cr6.lt) goto loc_8268A2F8;
loc_8268A354:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r11,-11212(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268A364;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268A364:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-16924
	ctx.r11.s64 = ctx.r11.s64 + -16924;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268A388"))) PPC_WEAK_FUNC(sub_8268A388);
PPC_FUNC_IMPL(__imp__sub_8268A388) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8268a3b4
	if (!ctx.cr6.eq) goto loc_8268A3B4;
loc_8268A3AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8268a454
	goto loc_8268A454;
loc_8268A3B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a947a0
	ctx.lr = 0x8268A3BC;
	sub_82A947A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268a3d8
	if (ctx.cr0.eq) goto loc_8268A3D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a947a0
	ctx.lr = 0x8268A3CC;
	sub_82A947A0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// beq cr6,0x8268a3ac
	if (ctx.cr6.eq) goto loc_8268A3AC;
loc_8268A3D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a947a0
	ctx.lr = 0x8268A3E0;
	sub_82A947A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268a450
	if (ctx.cr0.eq) goto loc_8268A450;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a947a0
	ctx.lr = 0x8268A3F0;
	sub_82A947A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,7168
	ctx.r3.s64 = ctx.r11.s64 + 7168;
	// bl 0x826e6bb0
	ctx.lr = 0x8268A400;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8268a450
	if (!ctx.cr0.eq) goto loc_8268A450;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a94798
	ctx.lr = 0x8268A410;
	sub_82A94798(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8268a3ac
	if (ctx.cr0.eq) goto loc_8268A3AC;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r4,r11,4880
	ctx.r4.s64 = ctx.r11.s64 + 4880;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,-3384(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3384);
	// bl 0x82688fa8
	ctx.lr = 0x8268A42C;
	sub_82688FA8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268a3ac
	if (ctx.cr0.eq) goto loc_8268A3AC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8268bea8
	ctx.lr = 0x8268A43C;
	sub_8268BEA8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8268a3ac
	if (ctx.cr0.eq) goto loc_8268A3AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8268a170
	ctx.lr = 0x8268A44C;
	sub_8268A170(ctx, base);
	// b 0x8268a3ac
	goto loc_8268A3AC;
loc_8268A450:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8268A454:
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

__attribute__((alias("__imp__sub_8268A470"))) PPC_WEAK_FUNC(sub_8268A470);
PPC_FUNC_IMPL(__imp__sub_8268A470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8268A478;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r30,24(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8268a4e0
	if (!ctx.cr6.eq) goto loc_8268A4E0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8268a4bc
	if (ctx.cr6.eq) goto loc_8268A4BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268A4B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
loc_8268A4BC:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8251c658
	ctx.lr = 0x8268A4C4;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268a4d8
	if (ctx.cr0.eq) goto loc_8268A4D8;
	// rlwinm r4,r30,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x8269d0b8
	ctx.lr = 0x8268A4D4;
	sub_8269D0B8(ctx, base);
	// b 0x8268a4dc
	goto loc_8268A4DC;
loc_8268A4D8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8268A4DC:
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
loc_8268A4E0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r11,r11,13856
	ctx.r11.s64 = ctx.r11.s64 + 13856;
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82699008
	ctx.lr = 0x8268A504;
	sub_82699008(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268A510"))) PPC_WEAK_FUNC(sub_8268A510);
PPC_FUNC_IMPL(__imp__sub_8268A510) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r11,r11,13856
	ctx.r11.s64 = ctx.r11.s64 + 13856;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x8268a544
	goto loc_8268A544;
loc_8268A534:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8268a564
	if (ctx.cr6.eq) goto loc_8268A564;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_8268A544:
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8268a534
	if (!ctx.cr0.eq) goto loc_8268A534;
	// b 0x8268a56c
	goto loc_8268A56C;
loc_8268A564:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826886b0
	ctx.lr = 0x8268A56C;
	sub_826886B0(ctx, base);
loc_8268A56C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268A580"))) PPC_WEAK_FUNC(sub_8268A580);
PPC_FUNC_IMPL(__imp__sub_8268A580) {
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
	// bl 0x8268a228
	ctx.lr = 0x8268A5A0;
	sub_8268A228(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268a5bc
	if (ctx.cr0.eq) goto loc_8268A5BC;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-11212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268A5BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268A5BC:
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

__attribute__((alias("__imp__sub_8268A5D8"))) PPC_WEAK_FUNC(sub_8268A5D8);
PPC_FUNC_IMPL(__imp__sub_8268A5D8) {
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
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lwz r11,-1316(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1316);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// addi r31,r9,-2344
	ctx.r31.s64 = ctx.r9.s64 + -2344;
	// bne 0x8268a634
	if (!ctx.cr0.eq) goto loc_8268A634;
	// lis r9,-32071
	ctx.r9.s64 = -2101805056;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lbz r8,-11036(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -11036);
	// stw r11,-1316(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1316, ctx.r11.u32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x8268a620
	if (ctx.cr0.eq) goto loc_8268A620;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r11.u32);
loc_8268A620:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32081
	ctx.r10.s64 = -2102460416;
	// addi r3,r10,-27768
	ctx.r3.s64 = ctx.r10.s64 + -27768;
	// stb r11,-11036(r9)
	PPC_STORE_U8(ctx.r9.u32 + -11036, ctx.r11.u8);
	// bl 0x826ded00
	ctx.lr = 0x8268A634;
	sub_826DED00(ctx, base);
loc_8268A634:
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

__attribute__((alias("__imp__sub_8268A650"))) PPC_WEAK_FUNC(sub_8268A650);
PPC_FUNC_IMPL(__imp__sub_8268A650) {
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
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lwz r11,-284(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -284);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// addi r31,r9,-1312
	ctx.r31.s64 = ctx.r9.s64 + -1312;
	// bne 0x8268a6ac
	if (!ctx.cr0.eq) goto loc_8268A6AC;
	// lis r9,-32071
	ctx.r9.s64 = -2101805056;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lbz r8,-11035(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -11035);
	// stw r11,-284(r10)
	PPC_STORE_U32(ctx.r10.u32 + -284, ctx.r11.u32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x8268a698
	if (ctx.cr0.eq) goto loc_8268A698;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r11.u32);
loc_8268A698:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32081
	ctx.r10.s64 = -2102460416;
	// addi r3,r10,-27744
	ctx.r3.s64 = ctx.r10.s64 + -27744;
	// stb r11,-11035(r9)
	PPC_STORE_U8(ctx.r9.u32 + -11035, ctx.r11.u8);
	// bl 0x826ded00
	ctx.lr = 0x8268A6AC;
	sub_826DED00(ctx, base);
loc_8268A6AC:
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

__attribute__((alias("__imp__sub_8268A6C8"))) PPC_WEAK_FUNC(sub_8268A6C8);
PPC_FUNC_IMPL(__imp__sub_8268A6C8) {
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
	// bl 0x8268a650
	ctx.lr = 0x8268A6E0;
	sub_8268A650(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,1024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8268a748
	if (!ctx.cr0.gt) goto loc_8268A748;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_8268A6FC:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_8268A708:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x8268a72c
	if (ctx.cr0.eq) goto loc_8268A72C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8268a708
	if (ctx.cr6.eq) goto loc_8268A708;
loc_8268A72C:
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8268a758
	if (ctx.cr0.eq) goto loc_8268A758;
	// lwz r10,1024(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8268a6fc
	if (ctx.cr6.lt) goto loc_8268A6FC;
loc_8268A748:
	// cmpwi cr6,r3,256
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 256, ctx.xer);
	// bne cr6,0x8268a764
	if (!ctx.cr6.eq) goto loc_8268A764;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8268a77c
	goto loc_8268A77C;
loc_8268A758:
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
	// b 0x8268a778
	goto loc_8268A778;
loc_8268A764:
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
	// lwz r10,1024(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
loc_8268A778:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8268A77C:
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

__attribute__((alias("__imp__sub_8268A790"))) PPC_WEAK_FUNC(sub_8268A790);
PPC_FUNC_IMPL(__imp__sub_8268A790) {
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
	// bl 0x8268a5d8
	ctx.lr = 0x8268A7A8;
	sub_8268A5D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,1024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8268a810
	if (!ctx.cr0.gt) goto loc_8268A810;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_8268A7C4:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_8268A7D0:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x8268a7f4
	if (ctx.cr0.eq) goto loc_8268A7F4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8268a7d0
	if (ctx.cr6.eq) goto loc_8268A7D0;
loc_8268A7F4:
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8268a820
	if (ctx.cr0.eq) goto loc_8268A820;
	// lwz r10,1024(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8268a7c4
	if (ctx.cr6.lt) goto loc_8268A7C4;
loc_8268A810:
	// cmpwi cr6,r3,256
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 256, ctx.xer);
	// bne cr6,0x8268a82c
	if (!ctx.cr6.eq) goto loc_8268A82C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8268a844
	goto loc_8268A844;
loc_8268A820:
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
	// b 0x8268a840
	goto loc_8268A840;
loc_8268A82C:
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
	// lwz r10,1024(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
loc_8268A840:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8268A844:
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

__attribute__((alias("__imp__sub_8268A858"))) PPC_WEAK_FUNC(sub_8268A858);
PPC_FUNC_IMPL(__imp__sub_8268A858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8268A860;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r10,r11,7136
	ctx.r10.s64 = ctx.r11.s64 + 7136;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-16868
	ctx.r11.s64 = ctx.r11.s64 + -16868;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r5,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r5.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// beq cr6,0x8268a934
	if (ctx.cr6.eq) goto loc_8268A934;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8268A8EC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8268a8ec
	if (!ctx.cr6.eq) goto loc_8268A8EC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x8251c658
	ctx.lr = 0x8268A910;
	sub_8251C658(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_8268A918:
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x8268a918
	if (!ctx.cr0.eq) goto loc_8268A918;
	// b 0x8268a964
	goto loc_8268A964;
loc_8268A934:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x8251c658
	ctx.lr = 0x8268A93C;
	sub_8251C658(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// addi r11,r11,11568
	ctx.r11.s64 = ctx.r11.s64 + 11568;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8268A950:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bdnz 0x8268a950
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8268A950;
loc_8268A964:
	// bl 0x8268a5d8
	ctx.lr = 0x8268A968;
	sub_8268A5D8(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// beq 0x8268a9cc
	if (ctx.cr0.eq) goto loc_8268A9CC;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8268a990
	if (!ctx.cr6.gt) goto loc_8268A990;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8268A990:
	// bl 0x8251c658
	ctx.lr = 0x8268A994;
	sub_8251C658(ctx, base);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8268a9d0
	if (!ctx.cr6.gt) goto loc_8268A9D0;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_8268A9AC:
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r30.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8268a9ac
	if (ctx.cr6.lt) goto loc_8268A9AC;
	// b 0x8268a9d0
	goto loc_8268A9D0;
loc_8268A9CC:
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
loc_8268A9D0:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8251c658
	ctx.lr = 0x8268A9D8;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268a9ec
	if (ctx.cr0.eq) goto loc_8268A9EC;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8269d0b8
	ctx.lr = 0x8268A9E8;
	sub_8269D0B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8268A9EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268AA00"))) PPC_WEAK_FUNC(sub_8268AA00);
PPC_FUNC_IMPL(__imp__sub_8268AA00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8268AA08;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,-16368
	ctx.r9.s64 = ctx.r11.s64 + -16368;
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
loc_8268AA38:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x8268aa38
	if (!ctx.cr0.eq) goto loc_8268AA38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268a6c8
	ctx.lr = 0x8268AA54;
	sub_8268A6C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268aa64
	if (!ctx.cr0.eq) goto loc_8268AA64;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x8268aa70
	goto loc_8268AA70;
loc_8268AA64:
	// bl 0x8268a650
	ctx.lr = 0x8268AA68;
	sub_8268A650(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8268AA70:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r29,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r29.u32);
	// bne cr6,0x8268aa94
	if (!ctx.cr6.eq) goto loc_8268AA94;
	// bl 0x82693340
	ctx.lr = 0x8268AA8C;
	sub_82693340(ctx, base);
	// stw r3,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r3.u32);
	// b 0x8268aa9c
	goto loc_8268AA9C;
loc_8268AA94:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
loc_8268AA9C:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268aab8
	if (ctx.cr0.eq) goto loc_8268AAB8;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// lwz r9,272(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r10,-10868(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10868);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,-10868(r11)
	PPC_STORE_U32(ctx.r11.u32 + -10868, ctx.r10.u32);
loc_8268AAB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268AAC8"))) PPC_WEAK_FUNC(sub_8268AAC8);
PPC_FUNC_IMPL(__imp__sub_8268AAC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8268AAD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,-9304
	ctx.r9.s64 = ctx.r11.s64 + -9304;
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
loc_8268AB00:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x8268ab00
	if (!ctx.cr0.eq) goto loc_8268AB00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268a790
	ctx.lr = 0x8268AB1C;
	sub_8268A790(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268ab2c
	if (!ctx.cr0.eq) goto loc_8268AB2C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x8268ab38
	goto loc_8268AB38;
loc_8268AB2C:
	// bl 0x8268a5d8
	ctx.lr = 0x8268AB30;
	sub_8268A5D8(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8268AB38:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r29,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r29.u32);
	// bne cr6,0x8268ab5c
	if (!ctx.cr6.eq) goto loc_8268AB5C;
	// bl 0x82693340
	ctx.lr = 0x8268AB54;
	sub_82693340(ctx, base);
	// stw r3,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r3.u32);
	// b 0x8268ab64
	goto loc_8268AB64;
loc_8268AB5C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
loc_8268AB64:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268ab80
	if (ctx.cr0.eq) goto loc_8268AB80;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// lwz r9,272(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r10,-10868(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10868);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,-10868(r11)
	PPC_STORE_U32(ctx.r11.u32 + -10868, ctx.r10.u32);
loc_8268AB80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268AB90"))) PPC_WEAK_FUNC(sub_8268AB90);
PPC_FUNC_IMPL(__imp__sub_8268AB90) {
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
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8268aa00
	ctx.lr = 0x8268ABB0;
	sub_8268AA00(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,7176
	ctx.r11.s64 = ctx.r11.s64 + 7176;
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

__attribute__((alias("__imp__sub_8268ABD8"))) PPC_WEAK_FUNC(sub_8268ABD8);
PPC_FUNC_IMPL(__imp__sub_8268ABD8) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-16368
	ctx.r11.s64 = ctx.r11.s64 + -16368;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x8268ac04
	if (ctx.cr0.eq) goto loc_8268AC04;
	// bl 0x82186190
	ctx.lr = 0x8268AC04;
	sub_82186190(ctx, base);
loc_8268AC04:
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

__attribute__((alias("__imp__sub_8268AC20"))) PPC_WEAK_FUNC(sub_8268AC20);
PPC_FUNC_IMPL(__imp__sub_8268AC20) {
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
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8268aac8
	ctx.lr = 0x8268AC44;
	sub_8268AAC8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,7180
	ctx.r11.s64 = ctx.r11.s64 + 7180;
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

__attribute__((alias("__imp__sub_8268AC68"))) PPC_WEAK_FUNC(sub_8268AC68);
PPC_FUNC_IMPL(__imp__sub_8268AC68) {
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
	// addi r11,r11,-9304
	ctx.r11.s64 = ctx.r11.s64 + -9304;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x8268ac94
	if (ctx.cr0.eq) goto loc_8268AC94;
	// bl 0x82186190
	ctx.lr = 0x8268AC94;
	sub_82186190(ctx, base);
loc_8268AC94:
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

__attribute__((alias("__imp__sub_8268ACB0"))) PPC_WEAK_FUNC(sub_8268ACB0);
PPC_FUNC_IMPL(__imp__sub_8268ACB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8268ACB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,7184
	ctx.r11.s64 = ctx.r11.s64 + 7184;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r27,-32071
	ctx.r27.s64 = -2101805056;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268ad5c
	if (ctx.cr0.eq) goto loc_8268AD5C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8268ad4c
	if (!ctx.cr6.gt) goto loc_8268AD4C;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8268ACF4:
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8268ad28
	if (ctx.cr6.eq) goto loc_8268AD28;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268ad20
	if (ctx.cr0.eq) goto loc_8268AD20;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268AD20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268AD20:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stwx r28,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r28.u32);
loc_8268AD28:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8268acf4
	if (!ctx.cr6.eq) goto loc_8268ACF4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8268acf4
	if (ctx.cr6.lt) goto loc_8268ACF4;
loc_8268AD4C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,-11212(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268AD5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268AD5C:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268ad80
	if (ctx.cr0.eq) goto loc_8268AD80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268AD7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
loc_8268AD80:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268ae08
	if (ctx.cr0.eq) goto loc_8268AE08;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8268adf8
	if (!ctx.cr6.gt) goto loc_8268ADF8;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8268ADA0:
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8268add4
	if (ctx.cr6.eq) goto loc_8268ADD4;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268adcc
	if (ctx.cr0.eq) goto loc_8268ADCC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268ADCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268ADCC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stwx r28,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r28.u32);
loc_8268ADD4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8268ada0
	if (!ctx.cr6.eq) goto loc_8268ADA0;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8268ada0
	if (ctx.cr6.lt) goto loc_8268ADA0;
loc_8268ADF8:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,-11212(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268AE08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268AE08:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-16924
	ctx.r11.s64 = ctx.r11.s64 + -16924;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268AE20"))) PPC_WEAK_FUNC(sub_8268AE20);
PPC_FUNC_IMPL(__imp__sub_8268AE20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8268AE28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8268ae70
	if (!ctx.cr6.gt) goto loc_8268AE70;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8268AE44:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268AE5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8268ae44
	if (ctx.cr6.lt) goto loc_8268AE44;
loc_8268AE70:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8268aeb0
	if (!ctx.cr6.gt) goto loc_8268AEB0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8268AE84:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268AE9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8268ae84
	if (ctx.cr6.lt) goto loc_8268AE84;
loc_8268AEB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268AEB8"))) PPC_WEAK_FUNC(sub_8268AEB8);
PPC_FUNC_IMPL(__imp__sub_8268AEB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8268AEC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8268af14
	if (!ctx.cr6.gt) goto loc_8268AF14;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8268AEE0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268AEF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8268af20
	if (ctx.cr6.eq) goto loc_8268AF20;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8268aee0
	if (ctx.cr6.lt) goto loc_8268AEE0;
loc_8268AF14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8268AF18:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_8268AF20:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x8268af18
	goto loc_8268AF18;
}

__attribute__((alias("__imp__sub_8268AF30"))) PPC_WEAK_FUNC(sub_8268AF30);
PPC_FUNC_IMPL(__imp__sub_8268AF30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8268AF38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8268af80
	if (!ctx.cr6.gt) goto loc_8268AF80;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8268AF54:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268AF6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8268af54
	if (ctx.cr6.lt) goto loc_8268AF54;
loc_8268AF80:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8268afc0
	if (!ctx.cr6.gt) goto loc_8268AFC0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8268AF94:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268AFAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8268af94
	if (ctx.cr6.lt) goto loc_8268AF94;
loc_8268AFC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268AFC8"))) PPC_WEAK_FUNC(sub_8268AFC8);
PPC_FUNC_IMPL(__imp__sub_8268AFC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8268AFD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8268b018
	if (!ctx.cr6.gt) goto loc_8268B018;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8268AFEC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268B004;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8268afec
	if (ctx.cr6.lt) goto loc_8268AFEC;
loc_8268B018:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8268b058
	if (!ctx.cr6.gt) goto loc_8268B058;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8268B02C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268B044;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8268b02c
	if (ctx.cr6.lt) goto loc_8268B02C;
loc_8268B058:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268B060"))) PPC_WEAK_FUNC(sub_8268B060);
PPC_FUNC_IMPL(__imp__sub_8268B060) {
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
	// bl 0x8268acb0
	ctx.lr = 0x8268B080;
	sub_8268ACB0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268b09c
	if (ctx.cr0.eq) goto loc_8268B09C;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-11212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268B09C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268B09C:
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

__attribute__((alias("__imp__sub_8268B0B8"))) PPC_WEAK_FUNC(sub_8268B0B8);
PPC_FUNC_IMPL(__imp__sub_8268B0B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8268B0C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8268b12c
	if (!ctx.cr6.gt) goto loc_8268B12C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8268B0E0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268B0F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268B0F8:
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8268b138
	if (ctx.cr6.eq) goto loc_8268B138;
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8268b0f8
	if (!ctx.cr0.eq) goto loc_8268B0F8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8268B110:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268b140
	if (!ctx.cr0.eq) goto loc_8268B140;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8268b0e0
	if (ctx.cr6.lt) goto loc_8268B0E0;
loc_8268B12C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8268B130:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_8268B138:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8268b110
	goto loc_8268B110;
loc_8268B140:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x8268b130
	goto loc_8268B130;
}

__attribute__((alias("__imp__sub_8268B150"))) PPC_WEAK_FUNC(sub_8268B150);
PPC_FUNC_IMPL(__imp__sub_8268B150) {
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
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lwz r11,748(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 748);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// addi r31,r9,-280
	ctx.r31.s64 = ctx.r9.s64 + -280;
	// bne 0x8268b1ac
	if (!ctx.cr0.eq) goto loc_8268B1AC;
	// lis r9,-32071
	ctx.r9.s64 = -2101805056;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lbz r8,-11028(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -11028);
	// stw r11,748(r10)
	PPC_STORE_U32(ctx.r10.u32 + 748, ctx.r11.u32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x8268b198
	if (ctx.cr0.eq) goto loc_8268B198;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r11.u32);
loc_8268B198:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32081
	ctx.r10.s64 = -2102460416;
	// addi r3,r10,-27696
	ctx.r3.s64 = ctx.r10.s64 + -27696;
	// stb r11,-11028(r9)
	PPC_STORE_U8(ctx.r9.u32 + -11028, ctx.r11.u8);
	// bl 0x826ded00
	ctx.lr = 0x8268B1AC;
	sub_826DED00(ctx, base);
loc_8268B1AC:
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

__attribute__((alias("__imp__sub_8268B1C8"))) PPC_WEAK_FUNC(sub_8268B1C8);
PPC_FUNC_IMPL(__imp__sub_8268B1C8) {
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
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lwz r11,1780(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1780);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// addi r31,r9,752
	ctx.r31.s64 = ctx.r9.s64 + 752;
	// bne 0x8268b224
	if (!ctx.cr0.eq) goto loc_8268B224;
	// lis r9,-32071
	ctx.r9.s64 = -2101805056;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lbz r8,-11027(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -11027);
	// stw r11,1780(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1780, ctx.r11.u32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x8268b210
	if (ctx.cr0.eq) goto loc_8268B210;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r11.u32);
loc_8268B210:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32081
	ctx.r10.s64 = -2102460416;
	// addi r3,r10,-27720
	ctx.r3.s64 = ctx.r10.s64 + -27720;
	// stb r11,-11027(r9)
	PPC_STORE_U8(ctx.r9.u32 + -11027, ctx.r11.u8);
	// bl 0x826ded00
	ctx.lr = 0x8268B224;
	sub_826DED00(ctx, base);
loc_8268B224:
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

__attribute__((alias("__imp__sub_8268B240"))) PPC_WEAK_FUNC(sub_8268B240);
PPC_FUNC_IMPL(__imp__sub_8268B240) {
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
	// beq cr6,0x8268b2bc
	if (ctx.cr6.eq) goto loc_8268B2BC;
	// bl 0x8268b150
	ctx.lr = 0x8268B260;
	sub_8268B150(ctx, base);
	// lwz r5,1024(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x8268b2bc
	if (!ctx.cr0.gt) goto loc_8268B2BC;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_8268B274:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
loc_8268B280:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8268b2a4
	if (ctx.cr0.eq) goto loc_8268B2A4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8268b280
	if (ctx.cr6.eq) goto loc_8268B280;
loc_8268B2A4:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8268b2d4
	if (ctx.cr0.eq) goto loc_8268B2D4;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8268b274
	if (ctx.cr6.lt) goto loc_8268B274;
loc_8268B2BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8268B2C0:
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
loc_8268B2D4:
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// b 0x8268b2c0
	goto loc_8268B2C0;
}

__attribute__((alias("__imp__sub_8268B2E0"))) PPC_WEAK_FUNC(sub_8268B2E0);
PPC_FUNC_IMPL(__imp__sub_8268B2E0) {
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
	// beq cr6,0x8268b35c
	if (ctx.cr6.eq) goto loc_8268B35C;
	// bl 0x8268b1c8
	ctx.lr = 0x8268B300;
	sub_8268B1C8(ctx, base);
	// lwz r5,1024(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x8268b35c
	if (!ctx.cr0.gt) goto loc_8268B35C;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_8268B314:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
loc_8268B320:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8268b344
	if (ctx.cr0.eq) goto loc_8268B344;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8268b320
	if (ctx.cr6.eq) goto loc_8268B320;
loc_8268B344:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8268b374
	if (ctx.cr0.eq) goto loc_8268B374;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8268b314
	if (ctx.cr6.lt) goto loc_8268B314;
loc_8268B35C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8268B360:
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
loc_8268B374:
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// b 0x8268b360
	goto loc_8268B360;
}

__attribute__((alias("__imp__sub_8268B380"))) PPC_WEAK_FUNC(sub_8268B380);
PPC_FUNC_IMPL(__imp__sub_8268B380) {
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
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lwz r11,2812(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2812);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// addi r31,r9,1784
	ctx.r31.s64 = ctx.r9.s64 + 1784;
	// bne 0x8268b3dc
	if (!ctx.cr0.eq) goto loc_8268B3DC;
	// lis r9,-32071
	ctx.r9.s64 = -2101805056;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lbz r8,-11026(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -11026);
	// stw r11,2812(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2812, ctx.r11.u32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x8268b3c8
	if (ctx.cr0.eq) goto loc_8268B3C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r11.u32);
loc_8268B3C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32081
	ctx.r10.s64 = -2102460416;
	// addi r3,r10,-27672
	ctx.r3.s64 = ctx.r10.s64 + -27672;
	// stb r11,-11026(r9)
	PPC_STORE_U8(ctx.r9.u32 + -11026, ctx.r11.u8);
	// bl 0x826ded00
	ctx.lr = 0x8268B3DC;
	sub_826DED00(ctx, base);
loc_8268B3DC:
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

__attribute__((alias("__imp__sub_8268B3F8"))) PPC_WEAK_FUNC(sub_8268B3F8);
PPC_FUNC_IMPL(__imp__sub_8268B3F8) {
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
	// bl 0x8268b380
	ctx.lr = 0x8268B410;
	sub_8268B380(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,1024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8268b478
	if (!ctx.cr0.gt) goto loc_8268B478;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_8268B42C:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_8268B438:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x8268b45c
	if (ctx.cr0.eq) goto loc_8268B45C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8268b438
	if (ctx.cr6.eq) goto loc_8268B438;
loc_8268B45C:
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8268b488
	if (ctx.cr0.eq) goto loc_8268B488;
	// lwz r10,1024(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8268b42c
	if (ctx.cr6.lt) goto loc_8268B42C;
loc_8268B478:
	// cmpwi cr6,r3,256
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 256, ctx.xer);
	// bne cr6,0x8268b494
	if (!ctx.cr6.eq) goto loc_8268B494;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8268b4ac
	goto loc_8268B4AC;
loc_8268B488:
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
	// b 0x8268b4a8
	goto loc_8268B4A8;
loc_8268B494:
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
	// lwz r10,1024(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
loc_8268B4A8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8268B4AC:
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

__attribute__((alias("__imp__sub_8268B4C0"))) PPC_WEAK_FUNC(sub_8268B4C0);
PPC_FUNC_IMPL(__imp__sub_8268B4C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b8
	ctx.lr = 0x8268B4C8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8268b4e8
	if (!ctx.cr6.eq) goto loc_8268B4E8;
loc_8268B4E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8268b780
	goto loc_8268B780;
loc_8268B4E8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8268b77c
	if (ctx.cr6.eq) goto loc_8268B77C;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r25,r11,4184
	ctx.r25.s64 = ctx.r11.s64 + 4184;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r26,r11,4168
	ctx.r26.s64 = ctx.r11.s64 + 4168;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r24,r11,4192
	ctx.r24.s64 = ctx.r11.s64 + 4192;
	// beq 0x8268b6d0
	if (ctx.cr0.eq) goto loc_8268B6D0;
loc_8268B518:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82690008
	ctx.lr = 0x8268B524;
	sub_82690008(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a947a0
	ctx.lr = 0x8268B52C;
	sub_82A947A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268b6c0
	if (ctx.cr0.eq) goto loc_8268B6C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a947a0
	ctx.lr = 0x8268B53C;
	sub_82A947A0(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x826e6bb0
	ctx.lr = 0x8268B544;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x8268b60c
	if (!ctx.cr0.eq) goto loc_8268B60C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8268ff80
	ctx.lr = 0x8268B558;
	sub_8268FF80(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268b6c0
	if (ctx.cr0.eq) goto loc_8268B6C0;
	// bl 0x8268b240
	ctx.lr = 0x8268B564;
	sub_8268B240(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8268b598
	if (!ctx.cr0.eq) goto loc_8268B598;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x8268b150
	ctx.lr = 0x8268B574;
	sub_8268B150(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8268b6c0
	if (!ctx.cr6.gt) goto loc_8268B6C0;
loc_8268B580:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x8268b150
	ctx.lr = 0x8268B588;
	sub_8268B150(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8268b580
	if (ctx.cr6.lt) goto loc_8268B580;
	// b 0x8268b6c0
	goto loc_8268B6C0;
loc_8268B598:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268b6c0
	if (ctx.cr0.eq) goto loc_8268B6C0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268B5B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268B5C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268b5ec
	if (!ctx.cr0.eq) goto loc_8268B5EC;
loc_8268B5D0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268B5E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8268b6c0
	goto loc_8268B6C0;
loc_8268B5EC:
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r30.u32);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r11.u32);
	// b 0x8268b6c0
	goto loc_8268B6C0;
loc_8268B60C:
	// bl 0x82a947a0
	ctx.lr = 0x8268B610;
	sub_82A947A0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x826e6bb0
	ctx.lr = 0x8268B618;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8268b6c0
	if (!ctx.cr0.eq) goto loc_8268B6C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8268ff80
	ctx.lr = 0x8268B62C;
	sub_8268FF80(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268b6c0
	if (ctx.cr0.eq) goto loc_8268B6C0;
	// bl 0x8268b2e0
	ctx.lr = 0x8268B638;
	sub_8268B2E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8268b66c
	if (!ctx.cr0.eq) goto loc_8268B66C;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x8268b1c8
	ctx.lr = 0x8268B648;
	sub_8268B1C8(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8268b6c0
	if (!ctx.cr6.gt) goto loc_8268B6C0;
loc_8268B654:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x8268b1c8
	ctx.lr = 0x8268B65C;
	sub_8268B1C8(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8268b654
	if (ctx.cr6.lt) goto loc_8268B654;
	// b 0x8268b6c0
	goto loc_8268B6C0;
loc_8268B66C:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268b6c0
	if (ctx.cr0.eq) goto loc_8268B6C0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268B684;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268B69C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268b5d0
	if (ctx.cr0.eq) goto loc_8268B5D0;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r30.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_8268B6C0:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268b518
	if (ctx.cr6.lt) goto loc_8268B518;
loc_8268B6D0:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268b77c
	if (ctx.cr0.eq) goto loc_8268B77C;
loc_8268B6E0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82690008
	ctx.lr = 0x8268B6EC;
	sub_82690008(ctx, base);
	// bl 0x82a947a0
	ctx.lr = 0x8268B6F0;
	sub_82A947A0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x826e6bb0
	ctx.lr = 0x8268B6F8;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8268b76c
	if (ctx.cr0.eq) goto loc_8268B76C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82690008
	ctx.lr = 0x8268B70C;
	sub_82690008(ctx, base);
	// bl 0x82a947a0
	ctx.lr = 0x8268B710;
	sub_82A947A0(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x826e6bb0
	ctx.lr = 0x8268B718;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8268b76c
	if (ctx.cr0.eq) goto loc_8268B76C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82690008
	ctx.lr = 0x8268B72C;
	sub_82690008(ctx, base);
	// bl 0x82a947a0
	ctx.lr = 0x8268B730;
	sub_82A947A0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x826e6bb0
	ctx.lr = 0x8268B738;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8268b76c
	if (ctx.cr0.eq) goto loc_8268B76C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82690008
	ctx.lr = 0x8268B74C;
	sub_82690008(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268B764;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268b4e0
	if (ctx.cr0.eq) goto loc_8268B4E0;
loc_8268B76C:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268b6e0
	if (ctx.cr6.lt) goto loc_8268B6E0;
loc_8268B77C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8268B780:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268B788"))) PPC_WEAK_FUNC(sub_8268B788);
PPC_FUNC_IMPL(__imp__sub_8268B788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8268B790;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,-15136
	ctx.r9.s64 = ctx.r11.s64 + -15136;
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
loc_8268B7C0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x8268b7c0
	if (!ctx.cr0.eq) goto loc_8268B7C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268b3f8
	ctx.lr = 0x8268B7DC;
	sub_8268B3F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268b7ec
	if (!ctx.cr0.eq) goto loc_8268B7EC;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x8268b7f8
	goto loc_8268B7F8;
loc_8268B7EC:
	// bl 0x8268b380
	ctx.lr = 0x8268B7F0;
	sub_8268B380(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8268B7F8:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r29,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r29.u32);
	// bne cr6,0x8268b81c
	if (!ctx.cr6.eq) goto loc_8268B81C;
	// bl 0x82693340
	ctx.lr = 0x8268B814;
	sub_82693340(ctx, base);
	// stw r3,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r3.u32);
	// b 0x8268b824
	goto loc_8268B824;
loc_8268B81C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
loc_8268B824:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268b840
	if (ctx.cr0.eq) goto loc_8268B840;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// lwz r9,272(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r10,-10868(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10868);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,-10868(r11)
	PPC_STORE_U32(ctx.r11.u32 + -10868, ctx.r10.u32);
loc_8268B840:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268B850"))) PPC_WEAK_FUNC(sub_8268B850);
PPC_FUNC_IMPL(__imp__sub_8268B850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8268B858;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,7184
	ctx.r11.s64 = ctx.r11.s64 + 7184;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r4,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// bl 0x8268b1c8
	ctx.lr = 0x8268B884;
	sub_8268B1C8(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// li r28,-1
	ctx.r28.s64 = -1;
	// ori r30,r10,65535
	ctx.r30.u64 = ctx.r10.u64 | 65535;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8268b8c0
	if (ctx.cr6.eq) goto loc_8268B8C0;
	// bl 0x8268b1c8
	ctx.lr = 0x8268B8A0;
	sub_8268B1C8(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8268b8b4
	if (!ctx.cr6.gt) goto loc_8268B8B4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8268B8B4:
	// bl 0x8251c658
	ctx.lr = 0x8268B8B8;
	sub_8251C658(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// b 0x8268b8c4
	goto loc_8268B8C4;
loc_8268B8C0:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_8268B8C4:
	// bl 0x8268b150
	ctx.lr = 0x8268B8C8;
	sub_8268B150(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8268b8f8
	if (ctx.cr6.eq) goto loc_8268B8F8;
	// bl 0x8268b150
	ctx.lr = 0x8268B8D8;
	sub_8268B150(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8268b8ec
	if (!ctx.cr6.gt) goto loc_8268B8EC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8268B8EC:
	// bl 0x8251c658
	ctx.lr = 0x8268B8F0;
	sub_8251C658(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// b 0x8268b8fc
	goto loc_8268B8FC;
loc_8268B8F8:
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
loc_8268B8FC:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8268b910
	if (!ctx.cr0.eq) goto loc_8268B910;
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// b 0x8268b91c
	goto loc_8268B91C;
loc_8268B910:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268B918;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
loc_8268B91C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268B928"))) PPC_WEAK_FUNC(sub_8268B928);
PPC_FUNC_IMPL(__imp__sub_8268B928) {
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
	// bl 0x8268b788
	ctx.lr = 0x8268B940;
	sub_8268B788(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,7216
	ctx.r11.s64 = ctx.r11.s64 + 7216;
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

__attribute__((alias("__imp__sub_8268B968"))) PPC_WEAK_FUNC(sub_8268B968);
PPC_FUNC_IMPL(__imp__sub_8268B968) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-15136
	ctx.r11.s64 = ctx.r11.s64 + -15136;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x8268b994
	if (ctx.cr0.eq) goto loc_8268B994;
	// bl 0x82186190
	ctx.lr = 0x8268B994;
	sub_82186190(ctx, base);
loc_8268B994:
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

__attribute__((alias("__imp__sub_8268B9B0"))) PPC_WEAK_FUNC(sub_8268B9B0);
PPC_FUNC_IMPL(__imp__sub_8268B9B0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82526588
	ctx.lr = 0x8268B9D0;
	sub_82526588(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8268b9e4
	if (!ctx.cr6.eq) goto loc_8268B9E4;
loc_8268B9DC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8268bd04
	goto loc_8268BD04;
loc_8268B9E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a947a0
	ctx.lr = 0x8268B9EC;
	sub_82A947A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,7392
	ctx.r4.s64 = ctx.r11.s64 + 7392;
	// bl 0x826e6bb0
	ctx.lr = 0x8268B9F8;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x8268ba34
	if (!ctx.cr0.eq) goto loc_8268BA34;
	// bl 0x82a94798
	ctx.lr = 0x8268BA08;
	sub_82A94798(ctx, base);
	// bl 0x826e2438
	ctx.lr = 0x8268BA0C;
	sub_826E2438(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lfs f13,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8268b9dc
	if (ctx.cr6.gt) goto loc_8268B9DC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6448(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6448);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// b 0x8268b9dc
	goto loc_8268B9DC;
loc_8268BA34:
	// bl 0x82a947a0
	ctx.lr = 0x8268BA38;
	sub_82A947A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,7380
	ctx.r4.s64 = ctx.r11.s64 + 7380;
	// bl 0x826e6bb0
	ctx.lr = 0x8268BA44;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x8268baa0
	if (!ctx.cr0.eq) goto loc_8268BAA0;
	// bl 0x82a94798
	ctx.lr = 0x8268BA54;
	sub_82A94798(ctx, base);
	// bl 0x826e2438
	ctx.lr = 0x8268BA58;
	sub_826E2438(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r11,-3384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3384);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8268ba88
	if (ctx.cr6.gt) goto loc_8268BA88;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268ba98
	if (ctx.cr6.eq) goto loc_8268BA98;
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8268ba98
	goto loc_8268BA98;
loc_8268BA88:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268ba94
	if (ctx.cr6.eq) goto loc_8268BA94;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
loc_8268BA94:
	// fmuls f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_8268BA98:
	// stfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// b 0x8268b9dc
	goto loc_8268B9DC;
loc_8268BAA0:
	// bl 0x82a947a0
	ctx.lr = 0x8268BAA4;
	sub_82A947A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,7372
	ctx.r4.s64 = ctx.r11.s64 + 7372;
	// bl 0x826e6bb0
	ctx.lr = 0x8268BAB0;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8268b9dc
	if (ctx.cr0.eq) goto loc_8268B9DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a947a0
	ctx.lr = 0x8268BAC0;
	sub_82A947A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,7360
	ctx.r4.s64 = ctx.r11.s64 + 7360;
	// bl 0x826e6bb0
	ctx.lr = 0x8268BACC;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8268b9dc
	if (ctx.cr0.eq) goto loc_8268B9DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a947a0
	ctx.lr = 0x8268BADC;
	sub_82A947A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,7348
	ctx.r4.s64 = ctx.r11.s64 + 7348;
	// bl 0x826e6bb0
	ctx.lr = 0x8268BAE8;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8268b9dc
	if (ctx.cr0.eq) goto loc_8268B9DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a947a0
	ctx.lr = 0x8268BAF8;
	sub_82A947A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,7332
	ctx.r4.s64 = ctx.r11.s64 + 7332;
	// bl 0x826e6bb0
	ctx.lr = 0x8268BB04;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x8268bb40
	if (!ctx.cr0.eq) goto loc_8268BB40;
	// bl 0x82a94798
	ctx.lr = 0x8268BB14;
	sub_82A94798(ctx, base);
	// bl 0x826e2438
	ctx.lr = 0x8268BB18;
	sub_826E2438(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8072(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8072);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8268b9dc
	if (!ctx.cr6.gt) goto loc_8268B9DC;
	// stfs f0,148(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 148, temp.u32);
	// b 0x8268b9dc
	goto loc_8268B9DC;
loc_8268BB40:
	// bl 0x82a947a0
	ctx.lr = 0x8268BB44;
	sub_82A947A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,7312
	ctx.r4.s64 = ctx.r11.s64 + 7312;
	// bl 0x826e6bb0
	ctx.lr = 0x8268BB50;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x8268bb8c
	if (!ctx.cr0.eq) goto loc_8268BB8C;
	// bl 0x82a94798
	ctx.lr = 0x8268BB60;
	sub_82A94798(ctx, base);
	// bl 0x826e2438
	ctx.lr = 0x8268BB64;
	sub_826E2438(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8072(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8072);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8268b9dc
	if (!ctx.cr6.gt) goto loc_8268B9DC;
	// stfs f0,152(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 152, temp.u32);
	// b 0x8268b9dc
	goto loc_8268B9DC;
loc_8268BB8C:
	// bl 0x82a947a0
	ctx.lr = 0x8268BB90;
	sub_82A947A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,7296
	ctx.r4.s64 = ctx.r11.s64 + 7296;
	// bl 0x826e6bb0
	ctx.lr = 0x8268BB9C;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x8268bbd0
	if (!ctx.cr0.eq) goto loc_8268BBD0;
	// bl 0x82a94798
	ctx.lr = 0x8268BBAC;
	sub_82A94798(ctx, base);
	// bl 0x826e2440
	ctx.lr = 0x8268BBB0;
	sub_826E2440(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// stw r3,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r3.u32);
	// blt cr6,0x8268bbc4
	if (ctx.cr6.lt) goto loc_8268BBC4;
	// cmplwi cr6,r3,16
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 16, ctx.xer);
	// blt cr6,0x8268b9dc
	if (ctx.cr6.lt) goto loc_8268B9DC;
loc_8268BBC4:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r11.u32);
	// b 0x8268b9dc
	goto loc_8268B9DC;
loc_8268BBD0:
	// bl 0x82a947a0
	ctx.lr = 0x8268BBD4;
	sub_82A947A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,7280
	ctx.r4.s64 = ctx.r11.s64 + 7280;
	// bl 0x826e6bb0
	ctx.lr = 0x8268BBE0;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x8268bca4
	if (!ctx.cr0.eq) goto loc_8268BCA4;
	// bl 0x82a94798
	ctx.lr = 0x8268BBF0;
	sub_82A94798(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8268bc10
	if (ctx.cr0.eq) goto loc_8268BC10;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,6784
	ctx.r4.s64 = ctx.r11.s64 + 6784;
	// bl 0x826e6bb0
	ctx.lr = 0x8268BC08;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8268bc98
	if (ctx.cr0.eq) goto loc_8268BC98;
loc_8268BC10:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-16008
	ctx.r4.s64 = ctx.r11.s64 + -16008;
	// bl 0x826e6bb0
	ctx.lr = 0x8268BC20;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8268bc98
	if (ctx.cr0.eq) goto loc_8268BC98;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4952
	ctx.r4.s64 = ctx.r11.s64 + 4952;
	// bl 0x826e6bb0
	ctx.lr = 0x8268BC38;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8268bc98
	if (ctx.cr0.eq) goto loc_8268BC98;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8268bc60
	if (ctx.cr6.eq) goto loc_8268BC60;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,7276
	ctx.r4.s64 = ctx.r11.s64 + 7276;
	// bl 0x826e6bb0
	ctx.lr = 0x8268BC58;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8268bc90
	if (ctx.cr0.eq) goto loc_8268BC90;
loc_8268BC60:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-16016
	ctx.r4.s64 = ctx.r11.s64 + -16016;
	// bl 0x826e6bb0
	ctx.lr = 0x8268BC70;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8268bc90
	if (ctx.cr0.eq) goto loc_8268BC90;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28200
	ctx.r4.s64 = ctx.r11.s64 + -28200;
	// bl 0x826e6bb0
	ctx.lr = 0x8268BC88;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8268bd00
	if (!ctx.cr0.eq) goto loc_8268BD00;
loc_8268BC90:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8268bc9c
	goto loc_8268BC9C;
loc_8268BC98:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8268BC9C:
	// stb r11,136(r30)
	PPC_STORE_U8(ctx.r30.u32 + 136, ctx.r11.u8);
	// b 0x8268b9dc
	goto loc_8268B9DC;
loc_8268BCA4:
	// bl 0x82a947a0
	ctx.lr = 0x8268BCA8;
	sub_82A947A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,7252
	ctx.r4.s64 = ctx.r11.s64 + 7252;
	// bl 0x826e6bb0
	ctx.lr = 0x8268BCB4;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8268bd00
	if (!ctx.cr0.eq) goto loc_8268BD00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a94798
	ctx.lr = 0x8268BCC4;
	sub_82A94798(ctx, base);
	// bl 0x826e2438
	ctx.lr = 0x8268BCC8;
	sub_826E2438(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,176(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 176, temp.u32);
	// lfs f13,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8268bcf0
	if (!ctx.cr6.gt) goto loc_8268BCF0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8268b9dc
	if (!ctx.cr6.gt) goto loc_8268B9DC;
loc_8268BCF0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,32148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,176(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 176, temp.u32);
	// b 0x8268b9dc
	goto loc_8268B9DC;
loc_8268BD00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8268BD04:
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

__attribute__((alias("__imp__sub_8268BD20"))) PPC_WEAK_FUNC(sub_8268BD20);
PPC_FUNC_IMPL(__imp__sub_8268BD20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8268bd40
	if (!ctx.cr6.lt) goto loc_8268BD40;
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8268BD40:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f1,-16480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16480);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268BD50"))) PPC_WEAK_FUNC(sub_8268BD50);
PPC_FUNC_IMPL(__imp__sub_8268BD50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8268bd68
	if (!ctx.cr6.lt) goto loc_8268BD68;
loc_8268BD60:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8268BD68:
	// ble cr6,0x8268bd74
	if (!ctx.cr6.gt) goto loc_8268BD74;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8268BD74:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8268bd60
	if (ctx.cr6.lt) goto loc_8268BD60;
	// li r3,1
	ctx.r3.s64 = 1;
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268BD98"))) PPC_WEAK_FUNC(sub_8268BD98);
PPC_FUNC_IMPL(__imp__sub_8268BD98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8268BDA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f0,7412(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7412);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268bdfc
	if (ctx.cr0.eq) goto loc_8268BDFC;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8268BDCC:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268BDE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268bdcc
	if (ctx.cr6.lt) goto loc_8268BDCC;
loc_8268BDFC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268BE08"))) PPC_WEAK_FUNC(sub_8268BE08);
PPC_FUNC_IMPL(__imp__sub_8268BE08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8268BE10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lfs f13,5160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5160);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,192(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// lfs f13,5160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5160);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// stfs f13,184(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// stb r10,200(r31)
	PPC_STORE_U8(ctx.r31.u32 + 200, ctx.r10.u8);
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f0,188(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// beq 0x8268be9c
	if (ctx.cr0.eq) goto loc_8268BE9C;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8268BE70:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268BE88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268be70
	if (ctx.cr6.lt) goto loc_8268BE70;
loc_8268BE9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268BEA8"))) PPC_WEAK_FUNC(sub_8268BEA8);
PPC_FUNC_IMPL(__imp__sub_8268BEA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8268BEB0;
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
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268bf00
	if (ctx.cr0.eq) goto loc_8268BF00;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8268BED0:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r29,r30,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r3,28(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// bl 0x826e6bb0
	ctx.lr = 0x8268BEE4;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8268bf0c
	if (ctx.cr0.eq) goto loc_8268BF0C;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268bed0
	if (ctx.cr6.lt) goto loc_8268BED0;
loc_8268BF00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8268BF04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_8268BF0C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x8268bf04
	goto loc_8268BF04;
}

__attribute__((alias("__imp__sub_8268BF18"))) PPC_WEAK_FUNC(sub_8268BF18);
PPC_FUNC_IMPL(__imp__sub_8268BF18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8268BF20;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f31,5160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5160);
	ctx.f31.f64 = double(temp.f32);
loc_8268BF3C:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268bf7c
	if (ctx.cr0.eq) goto loc_8268BF7C;
	// lbz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 68);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8268bf7c
	if (!ctx.cr0.eq) goto loc_8268BF7C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268BF74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268bfc4
	if (ctx.cr0.eq) goto loc_8268BFC4;
loc_8268BF7C:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// bne cr6,0x8268bfac
	if (!ctx.cr6.eq) goto loc_8268BFAC;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// stfs f31,192(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
loc_8268BFAC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8268bfc4
	if (!ctx.cr6.lt) goto loc_8268BFC4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8268bf3c
	if (!ctx.cr6.eq) goto loc_8268BF3C;
loc_8268BFC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268BFD0"))) PPC_WEAK_FUNC(sub_8268BFD0);
PPC_FUNC_IMPL(__imp__sub_8268BFD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8ac
	ctx.lr = 0x8268BFD8;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x826dfb84
	ctx.lr = 0x8268BFE0;
	__savefpr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r21,r11,-11200
	ctx.r21.s64 = ctx.r11.s64 + -11200;
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f29,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f29.f64 = double(temp.f32);
	// beq cr6,0x8268c018
	if (ctx.cr6.eq) goto loc_8268C018;
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268C010;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// b 0x8268c01c
	goto loc_8268C01C;
loc_8268C018:
	// fmr f27,f29
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f29.f64;
loc_8268C01C:
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r22,0
	ctx.r22.s64 = 0;
	// stfs f27,180(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8268c05c
	if (ctx.cr0.eq) goto loc_8268C05C;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_8268C038:
	// lwz r9,116(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r22,76(r9)
	PPC_STORE_U32(ctx.r9.u32 + 76, ctx.r22.u32);
	// lwz r9,124(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8268c038
	if (ctx.cr6.lt) goto loc_8268C038;
loc_8268C05C:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// bne cr6,0x8268c07c
	if (!ctx.cr6.eq) goto loc_8268C07C;
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// stw r22,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r22.u32);
	// lfs f0,5160(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_8268C07C:
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// lfs f28,5160(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5160);
	ctx.f28.f64 = double(temp.f32);
	// lwz r9,156(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lfs f0,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r8,r9
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f28,f13
	ctx.f13.f64 = double(float(ctx.f28.f64 - ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8268c0cc
	if (!ctx.cr6.gt) goto loc_8268C0CC;
	// lwz r8,164(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// divwu r7,r10,r8
	ctx.r7.u32 = ctx.r10.u32 / ctx.r8.u32;
	// twllei r8,0
	// mullw r8,r7,r8
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// lfs f0,5160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5160);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r8,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, temp.u32);
	// lfs f28,5160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5160);
	ctx.f28.f64 = double(temp.f32);
loc_8268C0CC:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8268c0e4
	if (!ctx.cr0.eq) goto loc_8268C0E4;
	// stfs f28,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// stfs f28,184(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// b 0x8268c2e0
	goto loc_8268C2E0;
loc_8268C0E4:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfs f0,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f13,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fdivs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// lfs f0,5176(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5176);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f11,f13
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f0.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8268bf18
	ctx.lr = 0x8268C14C;
	sub_8268BF18(ctx, base);
	// lfs f0,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// li r23,1
	ctx.r23.s64 = 1;
	// fsubs f0,f28,f0
	ctx.f0.f64 = double(float(ctx.f28.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x8268c180
	if (ctx.cr6.lt) goto loc_8268C180;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lbz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 136);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// beq 0x8268c274
	if (ctx.cr0.eq) goto loc_8268C274;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268bf18
	ctx.lr = 0x8268C180;
	sub_8268BF18(ctx, base);
loc_8268C180:
	// stb r23,200(r31)
	PPC_STORE_U8(ctx.r31.u32 + 200, ctx.r23.u8);
loc_8268C184:
	// bl 0x8268f898
	ctx.lr = 0x8268C188;
	sub_8268F898(ctx, base);
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8268e518
	ctx.lr = 0x8268C194;
	sub_8268E518(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x82596350
	ctx.lr = 0x8268C1A0;
	sub_82596350(ctx, base);
	// fcmpu cr6,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// beq cr6,0x8268c1b4
	if (ctx.cr6.eq) goto loc_8268C1B4;
	// fcmpu cr6,f30,f1
	ctx.cr6.compare(ctx.f30.f64, ctx.f1.f64);
	// ble cr6,0x8268c1b4
	if (!ctx.cr6.gt) goto loc_8268C1B4;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
loc_8268C1B4:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// fmr f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f29.f64;
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// lis r26,-32044
	ctx.r26.s64 = -2100035584;
loc_8268C1C8:
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_8268C1D8:
	// fsubs f0,f30,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x8268c290
	if (!ctx.cr6.gt) goto loc_8268C290;
	// lfs f12,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// lfs f11,72(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268c290
	if (ctx.cr6.eq) goto loc_8268C290;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268C228;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f31,72(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f31.f64 = double(temp.f32);
	// lwz r29,76(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8268f898
	ctx.lr = 0x8268C238;
	sub_8268F898(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lwz r10,8(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,5172(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 5172);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f13,f31,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfs f0,5172(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 5172, temp.u32);
	// beq cr6,0x8268c27c
	if (ctx.cr6.eq) goto loc_8268C27C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268C270;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8268c280
	goto loc_8268C280;
loc_8268C274:
	// stb r22,200(r31)
	PPC_STORE_U8(ctx.r31.u32 + 200, ctx.r22.u8);
	// b 0x8268c184
	goto loc_8268C184;
loc_8268C27C:
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
loc_8268C280:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fsubs f13,f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f27.f64));
	// beq 0x8268c1d8
	if (ctx.cr0.eq) goto loc_8268C1D8;
	// b 0x8268c294
	goto loc_8268C294;
loc_8268C290:
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_8268C294:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268c2e0
	if (!ctx.cr0.eq) goto loc_8268C2E0;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// bne cr6,0x8268c2c8
	if (!ctx.cr6.eq) goto loc_8268C2C8;
	// lfs f0,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// stw r22,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r22.u32);
	// fsubs f0,f28,f0
	ctx.f0.f64 = double(float(ctx.f28.f64 - ctx.f0.f64));
	// stfs f28,184(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// stfs f0,188(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
loc_8268C2C8:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8268c2e0
	if (!ctx.cr6.lt) goto loc_8268C2E0;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8268c1c8
	if (!ctx.cr6.eq) goto loc_8268C1C8;
loc_8268C2E0:
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268c2fc
	if (ctx.cr6.eq) goto loc_8268C2FC;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268C2F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8268c300
	goto loc_8268C300;
loc_8268C2FC:
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
loc_8268C300:
	// lfs f0,180(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x826dfbd0
	ctx.lr = 0x8268C318;
	__restfpr_27(ctx, base);
	// b 0x826de8fc
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268C320"))) PPC_WEAK_FUNC(sub_8268C320);
PPC_FUNC_IMPL(__imp__sub_8268C320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8268C328;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// stw r29,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r29.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268c380
	if (ctx.cr0.eq) goto loc_8268C380;
loc_8268C348:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268C360;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268c348
	if (ctx.cr6.lt) goto loc_8268C348;
loc_8268C380:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268C388"))) PPC_WEAK_FUNC(sub_8268C388);
PPC_FUNC_IMPL(__imp__sub_8268C388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8268C390;
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
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268c408
	if (ctx.cr0.eq) goto loc_8268C408;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8268C3B0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r29,r11,r30
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq 0x8268c3f4
	if (ctx.cr0.eq) goto loc_8268C3F4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268C3D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268C3D4:
	// cmplw cr6,r27,r3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8268c414
	if (ctx.cr6.eq) goto loc_8268C414;
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8268c3d4
	if (!ctx.cr0.eq) goto loc_8268C3D4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8268C3EC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268c41c
	if (!ctx.cr0.eq) goto loc_8268C41C;
loc_8268C3F4:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268c3b0
	if (ctx.cr6.lt) goto loc_8268C3B0;
loc_8268C408:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8268C40C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_8268C414:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8268c3ec
	goto loc_8268C3EC;
loc_8268C41C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x8268c40c
	goto loc_8268C40C;
}

__attribute__((alias("__imp__sub_8268C428"))) PPC_WEAK_FUNC(sub_8268C428);
PPC_FUNC_IMPL(__imp__sub_8268C428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8268C430;
	__savegprlr_29(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8268c6d8
	if (!ctx.cr6.lt) goto loc_8268C6D8;
	// lwz r30,36(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lis r4,-32044
	ctx.r4.s64 = -2100035584;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8268C454:
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x8268c6b0
	if (!ctx.cr6.lt) goto loc_8268C6B0;
	// lwz r6,40(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
loc_8268C464:
	// lwz r7,48(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r5,44(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// bne cr6,0x8268c530
	if (!ctx.cr6.eq) goto loc_8268C530;
	// stw r31,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r31.u32);
	// lwz r10,-3384(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + -3384);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// ble cr6,0x8268c4e8
	if (!ctx.cr6.gt) goto loc_8268C4E8;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_8268C494:
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r10,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// mulli r10,r8,12
	ctx.r10.s64 = ctx.r8.s64 * 12;
	// add r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8268c4c8
	if (ctx.cr6.lt) goto loc_8268C4C8;
	// bgt cr6,0x8268c4d0
	if (ctx.cr6.gt) goto loc_8268C4D0;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8268c4d0
	if (!ctx.cr6.lt) goto loc_8268C4D0;
loc_8268C4C8:
	// stw r8,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// b 0x8268c4d4
	goto loc_8268C4D4;
loc_8268C4D0:
	// stw r8,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r8.u32);
loc_8268C4D4:
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x8268c494
	if (ctx.cr6.gt) goto loc_8268C494;
loc_8268C4E8:
	// lwz r7,48(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mulli r10,r7,12
	ctx.r10.s64 = ctx.r7.s64 * 12;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8268c518
	if (ctx.cr6.lt) goto loc_8268C518;
	// bgt cr6,0x8268c520
	if (ctx.cr6.gt) goto loc_8268C520;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8268c518
	if (ctx.cr6.lt) goto loc_8268C518;
	// bgt cr6,0x8268c520
	if (ctx.cr6.gt) goto loc_8268C520;
loc_8268C518:
	// stw r7,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r7.u32);
	// b 0x8268c528
	goto loc_8268C528;
loc_8268C520:
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
loc_8268C528:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,60(r11)
	PPC_STORE_U8(ctx.r11.u32 + 60, ctx.r10.u8);
loc_8268C530:
	// lbz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 60);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8268c5f4
	if (ctx.cr0.eq) goto loc_8268C5F4;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x8268c5e8
	if (!ctx.cr6.eq) goto loc_8268C5E8;
loc_8268C558:
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mulli r10,r9,12
	ctx.r10.s64 = ctx.r9.s64 * 12;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r29,8(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x8268c5e8
	if (!ctx.cr6.eq) goto loc_8268C5E8;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8268c5b8
	if (ctx.cr0.eq) goto loc_8268C5B8;
	// lfs f13,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f10,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f11,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x8268c6e0
	if (ctx.cr6.lt) goto loc_8268C6E0;
loc_8268C5B8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8268c5e8
	if (ctx.cr6.eq) goto loc_8268C5E8;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// lwz r29,40(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x8268c558
	if (ctx.cr6.eq) goto loc_8268C558;
loc_8268C5E8:
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// stb r31,60(r11)
	PPC_STORE_U8(ctx.r11.u32 + 60, ctx.r31.u8);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
loc_8268C5F4:
	// lwz r10,-3384(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + -3384);
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8268c694
	if (!ctx.cr6.lt) goto loc_8268C694;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_8268C60C:
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mulli r10,r9,12
	ctx.r10.s64 = ctx.r9.s64 * 12;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x8268c694
	if (!ctx.cr6.eq) goto loc_8268C694;
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x8268c694
	if (!ctx.cr6.eq) goto loc_8268C694;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8268c678
	if (ctx.cr0.eq) goto loc_8268C678;
	// lfs f13,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f10,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f11,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x8268c6fc
	if (ctx.cr6.lt) goto loc_8268C6FC;
loc_8268C678:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// lwz r10,-3384(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + -3384);
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8268c60c
	if (ctx.cr6.lt) goto loc_8268C60C;
loc_8268C694:
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// stw r3,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r3.u32);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8268c464
	if (ctx.cr6.lt) goto loc_8268C464;
loc_8268C6B0:
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r3,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r3.u32);
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8268c454
	if (ctx.cr6.lt) goto loc_8268C454;
loc_8268C6D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8268C6DC:
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_8268C6E0:
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mulli r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 * 12;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_8268C6EC:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// b 0x8268c6dc
	goto loc_8268C6DC;
loc_8268C6FC:
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mulli r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 * 12;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x8268c6ec
	goto loc_8268C6EC;
}

__attribute__((alias("__imp__sub_8268C710"))) PPC_WEAK_FUNC(sub_8268C710);
PPC_FUNC_IMPL(__imp__sub_8268C710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8268C718;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,40(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268c7b8
	if (ctx.cr6.eq) goto loc_8268C7B8;
	// lwz r11,104(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 104);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268c7b8
	if (ctx.cr0.eq) goto loc_8268C7B8;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,112
	ctx.r31.s64 = ctx.r11.s64 + 112;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268c79c
	if (ctx.cr0.eq) goto loc_8268C79C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8268C764:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268c788
	if (ctx.cr0.eq) goto loc_8268C788;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268C788;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268C788:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268c764
	if (ctx.cr6.lt) goto loc_8268C764;
loc_8268C79C:
	// addi r4,r27,100
	ctx.r4.s64 = ctx.r27.s64 + 100;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x826886b0
	ctx.lr = 0x8268C7A8;
	sub_826886B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,104(r27)
	PPC_STORE_U32(ctx.r27.u32 + 104, ctx.r11.u32);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x8268c320
	ctx.lr = 0x8268C7B8;
	sub_8268C320(ctx, base);
loc_8268C7B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268C7C0"))) PPC_WEAK_FUNC(sub_8268C7C0);
PPC_FUNC_IMPL(__imp__sub_8268C7C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8268C7C8;
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5160);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8268c958
	if (ctx.cr6.gt) goto loc_8268C958;
	// lis r28,-32044
	ctx.r28.s64 = -2100035584;
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,-3384(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3384);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8268c850
	if (!ctx.cr6.gt) goto loc_8268C850;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_8268C814:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r7,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lwz r10,-3384(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3384);
	// lwz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8268c814
	if (ctx.cr6.lt) goto loc_8268C814;
loc_8268C850:
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268c940
	if (ctx.cr0.eq) goto loc_8268C940;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
loc_8268C878:
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8268a0c0
	ctx.lr = 0x8268C884;
	sub_8268A0C0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 * 12;
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// lfs f0,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// blt cr6,0x8268c8b4
	if (ctx.cr6.lt) goto loc_8268C8B4;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// b 0x8268c8c8
	goto loc_8268C8C8;
loc_8268C8B4:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfiwx f0,0,r10
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_8268C8C8:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lfs f0,56(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// blt cr6,0x8268c8fc
	if (ctx.cr6.lt) goto loc_8268C8FC;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// b 0x8268c910
	goto loc_8268C910;
loc_8268C8FC:
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// stfiwx f0,0,r10
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_8268C910:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r29,12(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268c878
	if (!ctx.cr0.eq) goto loc_8268C878;
	// lwz r10,-3384(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3384);
loc_8268C940:
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r11,-17072
	ctx.r6.s64 = ctx.r11.s64 + -17072;
	// bl 0x826e2c68
	ctx.lr = 0x8268C958;
	sub_826E2C68(ctx, base);
loc_8268C958:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268C968"))) PPC_WEAK_FUNC(sub_8268C968);
PPC_FUNC_IMPL(__imp__sub_8268C968) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8268c7c0
	ctx.lr = 0x8268C990;
	sub_8268C7C0(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmr f9,f11
	ctx.f9.f64 = ctx.f11.f64;
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// lfs f11,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fadds f9,f31,f9
	ctx.f9.f64 = double(float(ctx.f31.f64 + ctx.f9.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// blt cr6,0x8268c9d8
	if (ctx.cr6.lt) goto loc_8268C9D8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfiwx f13,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f13.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8268c9e8
	goto loc_8268C9E8;
loc_8268C9D8:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfiwx f13,0,r11
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U32(ctx.r11.u32, ctx.f13.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
loc_8268C9E8:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// blt cr6,0x8268ca0c
	if (ctx.cr6.lt) goto loc_8268CA0C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8268ca1c
	goto loc_8268CA1C;
loc_8268CA0C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfiwx f0,0,r11
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8268CA1C:
	// fdivs f0,f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f10.f64 / ctx.f12.f64));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// blt cr6,0x8268ca44
	if (ctx.cr6.lt) goto loc_8268CA44;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8268ca54
	goto loc_8268CA54;
loc_8268CA44:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfiwx f0,0,r11
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
loc_8268CA54:
	// fdivs f0,f9,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f9.f64 / ctx.f12.f64));
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// fcmpu cr6,f9,f11
	ctx.cr6.compare(ctx.f9.f64, ctx.f11.f64);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// blt cr6,0x8268ca78
	if (ctx.cr6.lt) goto loc_8268CA78;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8268ca88
	goto loc_8268CA88;
loc_8268CA78:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfiwx f0,0,r11
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8268CA88:
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmuls f0,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,64(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,68(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,72(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bl 0x8268c428
	ctx.lr = 0x8268CACC;
	sub_8268C428(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_8268CAE8"))) PPC_WEAK_FUNC(sub_8268CAE8);
PPC_FUNC_IMPL(__imp__sub_8268CAE8) {
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
	// addi r11,r11,7416
	ctx.r11.s64 = ctx.r11.s64 + 7416;
	// lis r3,-32044
	ctx.r3.s64 = -2100035584;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,-3384(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -3384);
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268cb2c
	if (ctx.cr6.eq) goto loc_8268CB2C;
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// b 0x8268cb30
	goto loc_8268CB30;
loc_8268CB2C:
	// fmr f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f0.f64;
loc_8268CB30:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r30,4
	ctx.r30.s64 = 4;
	// lfs f13,7004(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7004);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stb r9,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r9.u8);
	// lfs f13,5592(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5592);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f13,3548(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3548);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lfs f12,22004(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 22004);
	ctx.f12.f64 = double(temp.f32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r9,r10,12928
	ctx.r9.s64 = ctx.r10.s64 + 12928;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r6,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r6.u32);
	// stw r5,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r5.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r8,r10,12928
	ctx.r8.s64 = ctx.r10.s64 + 12928;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r7,r10,12928
	ctx.r7.s64 = ctx.r10.s64 + 12928;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lfs f10,32148(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 32148);
	ctx.f10.f64 = double(temp.f32);
	// lis r6,-32151
	ctx.r6.s64 = -2107047936;
	// addi r10,r10,9108
	ctx.r10.s64 = ctx.r10.s64 + 9108;
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,64(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,68(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f11,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,72(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r7,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r7.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stfs f13,148(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// stw r4,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r4.u32);
	// addi r4,r6,-17000
	ctx.r4.s64 = ctx.r6.s64 + -17000;
	// stfs f12,152(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stb r11,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r11.u8);
	// stfs f10,176(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// lwz r3,-3384(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -3384);
	// bl 0x82688ba8
	ctx.lr = 0x8268CC48;
	sub_82688BA8(ctx, base);
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

__attribute__((alias("__imp__sub_8268CC68"))) PPC_WEAK_FUNC(sub_8268CC68);
PPC_FUNC_IMPL(__imp__sub_8268CC68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,4880
	ctx.r3.s64 = ctx.r11.s64 + 4880;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268CC78"))) PPC_WEAK_FUNC(sub_8268CC78);
PPC_FUNC_IMPL(__imp__sub_8268CC78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8268CC80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,7416
	ctx.r11.s64 = ctx.r11.s64 + 7416;
	// lis r10,-32151
	ctx.r10.s64 = -2107047936;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r10,-17000
	ctx.r4.s64 = ctx.r10.s64 + -17000;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,-3384(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3384);
	// bl 0x82688d08
	ctx.lr = 0x8268CCAC;
	sub_82688D08(ctx, base);
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lis r30,-32071
	ctx.r30.s64 = -2101805056;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268ccc8
	if (ctx.cr0.eq) goto loc_8268CCC8;
	// lwz r11,-11212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268CCC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268CCC8:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268cce0
	if (ctx.cr0.eq) goto loc_8268CCE0;
	// lwz r11,-11212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268CCE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268CCE0:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268cd2c
	if (ctx.cr0.eq) goto loc_8268CD2C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8268CCF4:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268cd18
	if (ctx.cr0.eq) goto loc_8268CD18;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268CD18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268CD18:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268ccf4
	if (ctx.cr6.lt) goto loc_8268CCF4;
loc_8268CD2C:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268cd78
	if (ctx.cr0.eq) goto loc_8268CD78;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8268CD40:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268cd64
	if (ctx.cr0.eq) goto loc_8268CD64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268CD64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268CD64:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268cd40
	if (ctx.cr6.lt) goto loc_8268CD40;
loc_8268CD78:
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x826c22c8
	ctx.lr = 0x8268CD80;
	sub_826C22C8(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x826c22c8
	ctx.lr = 0x8268CD88;
	sub_826C22C8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x826c22c8
	ctx.lr = 0x8268CD90;
	sub_826C22C8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-16924
	ctx.r11.s64 = ctx.r11.s64 + -16924;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268CDA8"))) PPC_WEAK_FUNC(sub_8268CDA8);
PPC_FUNC_IMPL(__imp__sub_8268CDA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8268CDB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r10,7440
	ctx.r10.s64 = ctx.r10.s64 + 7440;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r9,r9,12928
	ctx.r9.s64 = ctx.r9.s64 + 12928;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
loc_8268CDF8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8268cdf8
	if (!ctx.cr6.eq) goto loc_8268CDF8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x8251c658
	ctx.lr = 0x8268CE1C;
	sub_8251C658(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_8268CE24:
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x8268ce24
	if (!ctx.cr0.eq) goto loc_8268CE24;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8251c658
	ctx.lr = 0x8268CE44;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268ce58
	if (ctx.cr0.eq) goto loc_8268CE58;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8269d0b8
	ctx.lr = 0x8268CE54;
	sub_8269D0B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8268CE58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268CE68"))) PPC_WEAK_FUNC(sub_8268CE68);
PPC_FUNC_IMPL(__imp__sub_8268CE68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8268CE70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,7440
	ctx.r11.s64 = ctx.r11.s64 + 7440;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268ced0
	if (ctx.cr0.eq) goto loc_8268CED0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8268CE98:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268cebc
	if (ctx.cr0.eq) goto loc_8268CEBC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268CEBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268CEBC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268ce98
	if (ctx.cr6.lt) goto loc_8268CE98;
loc_8268CED0:
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,-11212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268CEE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268cf0c
	if (ctx.cr0.eq) goto loc_8268CF0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268CF04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8268CF0C:
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x826c22c8
	ctx.lr = 0x8268CF14;
	sub_826C22C8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-16924
	ctx.r11.s64 = ctx.r11.s64 + -16924;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268CF28"))) PPC_WEAK_FUNC(sub_8268CF28);
PPC_FUNC_IMPL(__imp__sub_8268CF28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x8268CF30;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268cf54
	if (ctx.cr0.eq) goto loc_8268CF54;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8268c710
	ctx.lr = 0x8268CF54;
	sub_8268C710(ctx, base);
loc_8268CF54:
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r29.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8268cf8c
	if (!ctx.cr6.eq) goto loc_8268CF8C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8268c320
	ctx.lr = 0x8268CF78;
	sub_8268C320(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r29,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r29.u32);
	// addi r11,r11,-16868
	ctx.r11.s64 = ctx.r11.s64 + -16868;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// b 0x8268d028
	goto loc_8268D028;
loc_8268CF8C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r27,r11,-16868
	ctx.r27.s64 = ctx.r11.s64 + -16868;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// bl 0x82681d30
	ctx.lr = 0x8268CFB4;
	sub_82681D30(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,-16924
	ctx.r11.s64 = ctx.r11.s64 + -16924;
	// stw r10,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r10.u32);
	// stw r31,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r31.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x8268c320
	ctx.lr = 0x8268CFD4;
	sub_8268C320(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r31,r11,112
	ctx.r31.s64 = ctx.r11.s64 + 112;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268d01c
	if (ctx.cr0.eq) goto loc_8268D01C;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_8268CFEC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268D008;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268cfec
	if (ctx.cr6.lt) goto loc_8268CFEC;
loc_8268D01C:
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
loc_8268D028:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268D038"))) PPC_WEAK_FUNC(sub_8268D038);
PPC_FUNC_IMPL(__imp__sub_8268D038) {
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
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lwz r11,3844(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3844);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// addi r31,r9,2816
	ctx.r31.s64 = ctx.r9.s64 + 2816;
	// bne 0x8268d094
	if (!ctx.cr0.eq) goto loc_8268D094;
	// lis r9,-32071
	ctx.r9.s64 = -2101805056;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lbz r8,-11012(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -11012);
	// stw r11,3844(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3844, ctx.r11.u32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x8268d080
	if (ctx.cr0.eq) goto loc_8268D080;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r11.u32);
loc_8268D080:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32081
	ctx.r10.s64 = -2102460416;
	// addi r3,r10,-27600
	ctx.r3.s64 = ctx.r10.s64 + -27600;
	// stb r11,-11012(r9)
	PPC_STORE_U8(ctx.r9.u32 + -11012, ctx.r11.u8);
	// bl 0x826ded00
	ctx.lr = 0x8268D094;
	sub_826DED00(ctx, base);
loc_8268D094:
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

__attribute__((alias("__imp__sub_8268D0B0"))) PPC_WEAK_FUNC(sub_8268D0B0);
PPC_FUNC_IMPL(__imp__sub_8268D0B0) {
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
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lwz r11,4876(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4876);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// addi r31,r9,3848
	ctx.r31.s64 = ctx.r9.s64 + 3848;
	// bne 0x8268d10c
	if (!ctx.cr0.eq) goto loc_8268D10C;
	// lis r9,-32071
	ctx.r9.s64 = -2101805056;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lbz r8,-11011(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -11011);
	// stw r11,4876(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4876, ctx.r11.u32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x8268d0f8
	if (ctx.cr0.eq) goto loc_8268D0F8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r11.u32);
loc_8268D0F8:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32081
	ctx.r10.s64 = -2102460416;
	// addi r3,r10,-27624
	ctx.r3.s64 = ctx.r10.s64 + -27624;
	// stb r11,-11011(r9)
	PPC_STORE_U8(ctx.r9.u32 + -11011, ctx.r11.u8);
	// bl 0x826ded00
	ctx.lr = 0x8268D10C;
	sub_826DED00(ctx, base);
loc_8268D10C:
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

__attribute__((alias("__imp__sub_8268D128"))) PPC_WEAK_FUNC(sub_8268D128);
PPC_FUNC_IMPL(__imp__sub_8268D128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8268D130;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x826d5d68
	ctx.lr = 0x8268D14C;
	sub_826D5D68(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8268d180
	if (!ctx.cr6.lt) goto loc_8268D180;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_8268D160:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8268d160
	if (ctx.cr6.lt) goto loc_8268D160;
loc_8268D180:
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268D190"))) PPC_WEAK_FUNC(sub_8268D190);
PPC_FUNC_IMPL(__imp__sub_8268D190) {
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
	// beq cr6,0x8268d20c
	if (ctx.cr6.eq) goto loc_8268D20C;
	// bl 0x8268d038
	ctx.lr = 0x8268D1B0;
	sub_8268D038(ctx, base);
	// lwz r5,1024(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x8268d20c
	if (!ctx.cr0.gt) goto loc_8268D20C;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_8268D1C4:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
loc_8268D1D0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8268d1f4
	if (ctx.cr0.eq) goto loc_8268D1F4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8268d1d0
	if (ctx.cr6.eq) goto loc_8268D1D0;
loc_8268D1F4:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8268d224
	if (ctx.cr0.eq) goto loc_8268D224;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8268d1c4
	if (ctx.cr6.lt) goto loc_8268D1C4;
loc_8268D20C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8268D210:
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
loc_8268D224:
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// b 0x8268d210
	goto loc_8268D210;
}

__attribute__((alias("__imp__sub_8268D230"))) PPC_WEAK_FUNC(sub_8268D230);
PPC_FUNC_IMPL(__imp__sub_8268D230) {
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
	// beq cr6,0x8268d2ac
	if (ctx.cr6.eq) goto loc_8268D2AC;
	// bl 0x8268d0b0
	ctx.lr = 0x8268D250;
	sub_8268D0B0(ctx, base);
	// lwz r5,1024(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x8268d2ac
	if (!ctx.cr0.gt) goto loc_8268D2AC;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_8268D264:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
loc_8268D270:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8268d294
	if (ctx.cr0.eq) goto loc_8268D294;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8268d270
	if (ctx.cr6.eq) goto loc_8268D270;
loc_8268D294:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8268d2c4
	if (ctx.cr0.eq) goto loc_8268D2C4;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8268d264
	if (ctx.cr6.lt) goto loc_8268D264;
loc_8268D2AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8268D2B0:
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
loc_8268D2C4:
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// b 0x8268d2b0
	goto loc_8268D2B0;
}

__attribute__((alias("__imp__sub_8268D2D0"))) PPC_WEAK_FUNC(sub_8268D2D0);
PPC_FUNC_IMPL(__imp__sub_8268D2D0) {
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
	// li r3,204
	ctx.r3.s64 = 204;
	// bl 0x8251c658
	ctx.lr = 0x8268D2E4;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268d2f4
	if (ctx.cr0.eq) goto loc_8268D2F4;
	// bl 0x8268cae8
	ctx.lr = 0x8268D2F0;
	sub_8268CAE8(ctx, base);
	// b 0x8268d2f8
	goto loc_8268D2F8;
loc_8268D2F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8268D2F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268D308"))) PPC_WEAK_FUNC(sub_8268D308);
PPC_FUNC_IMPL(__imp__sub_8268D308) {
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
	// bl 0x8268cc78
	ctx.lr = 0x8268D328;
	sub_8268CC78(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268d344
	if (ctx.cr0.eq) goto loc_8268D344;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-11212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268D344;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268D344:
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

__attribute__((alias("__imp__sub_8268D360"))) PPC_WEAK_FUNC(sub_8268D360);
PPC_FUNC_IMPL(__imp__sub_8268D360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x8268D368;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8268d4a8
	if (ctx.cr6.eq) goto loc_8268D4A8;
	// addi r25,r3,96
	ctx.r25.s64 = ctx.r3.s64 + 96;
	// lwz r4,32(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x826c2210
	ctx.lr = 0x8268D388;
	sub_826C2210(ctx, base);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268d4a8
	if (ctx.cr0.eq) goto loc_8268D4A8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r26,r11,4168
	ctx.r26.s64 = ctx.r11.s64 + 4168;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r27,r11,7444
	ctx.r27.s64 = ctx.r11.s64 + 7444;
loc_8268D3A8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82690008
	ctx.lr = 0x8268D3B4;
	sub_82690008(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82a947a0
	ctx.lr = 0x8268D3BC;
	sub_82A947A0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x826e6bb0
	ctx.lr = 0x8268D3C4;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8268d498
	if (!ctx.cr0.eq) goto loc_8268D498;
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x8268d498
	if (ctx.cr0.eq) goto loc_8268D498;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268d498
	if (ctx.cr6.eq) goto loc_8268D498;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8268fef8
	ctx.lr = 0x8268D3F0;
	sub_8268FEF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268d498
	if (ctx.cr0.eq) goto loc_8268D498;
	// bl 0x82a94798
	ctx.lr = 0x8268D3FC;
	sub_82A94798(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268d498
	if (ctx.cr0.eq) goto loc_8268D498;
	// bl 0x8268d190
	ctx.lr = 0x8268D408;
	sub_8268D190(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8268d43c
	if (!ctx.cr0.eq) goto loc_8268D43C;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x8268d038
	ctx.lr = 0x8268D418;
	sub_8268D038(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8268d498
	if (!ctx.cr6.gt) goto loc_8268D498;
loc_8268D424:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x8268d038
	ctx.lr = 0x8268D42C;
	sub_8268D038(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8268d424
	if (ctx.cr6.lt) goto loc_8268D424;
	// b 0x8268d498
	goto loc_8268D498;
loc_8268D43C:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268D44C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268D468;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268d48c
	if (!ctx.cr0.eq) goto loc_8268D48C;
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
	ctx.lr = 0x8268D488;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8268d498
	goto loc_8268D498;
loc_8268D48C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x826c2328
	ctx.lr = 0x8268D498;
	sub_826C2328(ctx, base);
loc_8268D498:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268d3a8
	if (ctx.cr6.lt) goto loc_8268D3A8;
loc_8268D4A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268D4B8"))) PPC_WEAK_FUNC(sub_8268D4B8);
PPC_FUNC_IMPL(__imp__sub_8268D4B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b4
	ctx.lr = 0x8268D4C0;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r25,r26,80
	ctx.r25.s64 = ctx.r26.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x826c2210
	ctx.lr = 0x8268D4DC;
	sub_826C2210(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268d598
	if (ctx.cr0.eq) goto loc_8268D598;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r24,r11,7452
	ctx.r24.s64 = ctx.r11.s64 + 7452;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r27,r11,7168
	ctx.r27.s64 = ctx.r11.s64 + 7168;
loc_8268D500:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82690008
	ctx.lr = 0x8268D50C;
	sub_82690008(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a947a0
	ctx.lr = 0x8268D514;
	sub_82A947A0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x826e6bb0
	ctx.lr = 0x8268D51C;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8268d588
	if (!ctx.cr0.eq) goto loc_8268D588;
	// lwz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq 0x8268d588
	if (ctx.cr0.eq) goto loc_8268D588;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8268fef8
	ctx.lr = 0x8268D53C;
	sub_8268FEF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268d578
	if (ctx.cr0.eq) goto loc_8268D578;
	// bl 0x82a94798
	ctx.lr = 0x8268D548;
	sub_82A94798(ctx, base);
	// bl 0x826e2440
	ctx.lr = 0x8268D54C;
	sub_826E2440(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x8251c658
	ctx.lr = 0x8268D558;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268d578
	if (ctx.cr0.eq) goto loc_8268D578;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8268cda8
	ctx.lr = 0x8268D570;
	sub_8268CDA8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8268d57c
	goto loc_8268D57C;
loc_8268D578:
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
loc_8268D57C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x826c2328
	ctx.lr = 0x8268D588;
	sub_826C2328(ctx, base);
loc_8268D588:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268d500
	if (ctx.cr6.lt) goto loc_8268D500;
loc_8268D598:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de904
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268D5A8"))) PPC_WEAK_FUNC(sub_8268D5A8);
PPC_FUNC_IMPL(__imp__sub_8268D5A8) {
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
	// bl 0x8268ce68
	ctx.lr = 0x8268D5C8;
	sub_8268CE68(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268d5e4
	if (ctx.cr0.eq) goto loc_8268D5E4;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-11212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268D5E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268D5E4:
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

__attribute__((alias("__imp__sub_8268D600"))) PPC_WEAK_FUNC(sub_8268D600);
PPC_FUNC_IMPL(__imp__sub_8268D600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8a4
	ctx.lr = 0x8268D608;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8268d0b0
	ctx.lr = 0x8268D628;
	sub_8268D0B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r23,12
	ctx.r3.s64 = ctx.r23.s64 + 12;
	// lwz r4,1024(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// bl 0x8268d128
	ctx.lr = 0x8268D640;
	sub_8268D128(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268d8a8
	if (ctx.cr0.eq) goto loc_8268D8A8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r29,r11,7360
	ctx.r29.s64 = ctx.r11.s64 + 7360;
loc_8268D658:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82690008
	ctx.lr = 0x8268D664;
	sub_82690008(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq 0x8268d688
	if (ctx.cr0.eq) goto loc_8268D688;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a947a0
	ctx.lr = 0x8268D674;
	sub_82A947A0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x826e6bb0
	ctx.lr = 0x8268D67C;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8268d698
	if (ctx.cr0.eq) goto loc_8268D698;
	// li r25,0
	ctx.r25.s64 = 0;
loc_8268D688:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268d658
	if (ctx.cr6.lt) goto loc_8268D658;
loc_8268D698:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8268d8a8
	if (ctx.cr6.eq) goto loc_8268D8A8;
	// lwz r11,32(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268d8a8
	if (ctx.cr0.eq) goto loc_8268D8A8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r21,r11,4168
	ctx.r21.s64 = ctx.r11.s64 + 4168;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r22,r11,7476
	ctx.r22.s64 = ctx.r11.s64 + 7476;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r26,r11,7464
	ctx.r26.s64 = ctx.r11.s64 + 7464;
loc_8268D6C8:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82690008
	ctx.lr = 0x8268D6D4;
	sub_82690008(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82a947a0
	ctx.lr = 0x8268D6DC;
	sub_82A947A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268d898
	if (ctx.cr0.eq) goto loc_8268D898;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a947a0
	ctx.lr = 0x8268D6EC;
	sub_82A947A0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x826e6bb0
	ctx.lr = 0x8268D6F4;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8268d898
	if (!ctx.cr0.eq) goto loc_8268D898;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268d898
	if (ctx.cr0.eq) goto loc_8268D898;
loc_8268D70C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82690008
	ctx.lr = 0x8268D718;
	sub_82690008(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8268d738
	if (ctx.cr0.eq) goto loc_8268D738;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a947a0
	ctx.lr = 0x8268D728;
	sub_82A947A0(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x826e6bb0
	ctx.lr = 0x8268D730;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8268d74c
	if (ctx.cr0.eq) goto loc_8268D74C;
loc_8268D738:
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268d70c
	if (ctx.cr6.lt) goto loc_8268D70C;
	// b 0x8268d898
	goto loc_8268D898;
loc_8268D74C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a94798
	ctx.lr = 0x8268D754;
	sub_82A94798(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x8268d898
	if (ctx.cr0.eq) goto loc_8268D898;
	// lwz r11,32(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 32);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268d898
	if (ctx.cr0.eq) goto loc_8268D898;
loc_8268D76C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82690008
	ctx.lr = 0x8268D778;
	sub_82690008(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82a947a0
	ctx.lr = 0x8268D780;
	sub_82A947A0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x826e6bb0
	ctx.lr = 0x8268D788;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8268d7ac
	if (!ctx.cr0.eq) goto loc_8268D7AC;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268d7ac
	if (ctx.cr0.eq) goto loc_8268D7AC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x826e6bb0
	ctx.lr = 0x8268D7A4;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8268d7c0
	if (ctx.cr0.eq) goto loc_8268D7C0;
loc_8268D7AC:
	// lwz r11,32(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268d76c
	if (ctx.cr6.lt) goto loc_8268D76C;
	// b 0x8268d898
	goto loc_8268D898;
loc_8268D7C0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x8268fef8
	ctx.lr = 0x8268D7CC;
	sub_8268FEF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268d898
	if (ctx.cr0.eq) goto loc_8268D898;
	// bl 0x82a94798
	ctx.lr = 0x8268D7D8;
	sub_82A94798(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268d898
	if (ctx.cr0.eq) goto loc_8268D898;
	// bl 0x8268d230
	ctx.lr = 0x8268D7E4;
	sub_8268D230(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8268d818
	if (!ctx.cr0.eq) goto loc_8268D818;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x8268d0b0
	ctx.lr = 0x8268D7F4;
	sub_8268D0B0(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8268d898
	if (!ctx.cr6.gt) goto loc_8268D898;
loc_8268D800:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x8268d0b0
	ctx.lr = 0x8268D808;
	sub_8268D0B0(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8268d800
	if (ctx.cr6.lt) goto loc_8268D800;
	// b 0x8268d898
	goto loc_8268D898;
loc_8268D818:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,16(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8268d898
	if (!ctx.cr6.eq) goto loc_8268D898;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268D848;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268D864;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268d888
	if (!ctx.cr0.eq) goto loc_8268D888;
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
	ctx.lr = 0x8268D884;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8268d898
	goto loc_8268D898;
loc_8268D888:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,16(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r31.u32);
loc_8268D898:
	// lwz r11,32(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268d6c8
	if (ctx.cr6.lt) goto loc_8268D6C8;
loc_8268D8A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826de8f4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268D8B8"))) PPC_WEAK_FUNC(sub_8268D8B8);
PPC_FUNC_IMPL(__imp__sub_8268D8B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8ac
	ctx.lr = 0x8268D8C0;
	__savegprlr_21(ctx, base);
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82696750
	ctx.lr = 0x8268D8D8;
	sub_82696750(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268d8e8
	if (!ctx.cr0.eq) goto loc_8268D8E8;
loc_8268D8E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8268dc20
	goto loc_8268DC20;
loc_8268D8E8:
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// lis r10,5461
	ctx.r10.s64 = 357892096;
	// li r28,-1
	ctx.r28.s64 = -1;
	// ori r10,r10,21845
	ctx.r10.u64 = ctx.r10.u64 | 21845;
	// lwz r11,-3384(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3384);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// mulli r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 * 12;
	// ble cr6,0x8268d910
	if (!ctx.cr6.gt) goto loc_8268D910;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8268D910:
	// bl 0x8251c658
	ctx.lr = 0x8268D914;
	sub_8251C658(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lwz r11,-3384(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3384);
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8268d970
	if (!ctx.cr6.gt) goto loc_8268D970;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_8268D938:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r21,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r21.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// lwz r9,-3384(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3384);
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8268d938
	if (ctx.cr6.lt) goto loc_8268D938;
loc_8268D970:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,16383
	ctx.r9.s64 = 1073676288;
	// stw r21,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r21.u32);
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r10,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// ble cr6,0x8268d9a4
	if (!ctx.cr6.gt) goto loc_8268D9A4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8268D9A4:
	// bl 0x8251c658
	ctx.lr = 0x8268D9A8;
	sub_8251C658(ctx, base);
	// lfs f0,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// stw r3,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r3.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8268d9c0
	if (!ctx.cr6.lt) goto loc_8268D9C0;
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
loc_8268D9C0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,7372
	ctx.r4.s64 = ctx.r11.s64 + 7372;
	// bl 0x8268fef8
	ctx.lr = 0x8268D9D0;
	sub_8268FEF8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,7348
	ctx.r4.s64 = ctx.r11.s64 + 7348;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8268fef8
	ctx.lr = 0x8268D9E4;
	sub_8268FEF8(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x8268da04
	if (!ctx.cr0.eq) goto loc_8268DA04;
loc_8268D9EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268DA00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8268dc1c
	goto loc_8268DC1C;
loc_8268DA04:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,7360
	ctx.r4.s64 = ctx.r11.s64 + 7360;
	// bl 0x8268fef8
	ctx.lr = 0x8268DA14;
	sub_8268FEF8(ctx, base);
	// mr. r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq 0x8268d9ec
	if (ctx.cr0.eq) goto loc_8268D9EC;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lfs f0,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f30.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8268da64
	if (ctx.cr6.lt) goto loc_8268DA64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// lfs f13,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f13,152(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// ble cr6,0x8268d8e0
	if (!ctx.cr6.gt) goto loc_8268D8E0;
loc_8268DA64:
	// lwz r11,32(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32);
	// addi r22,r31,112
	ctx.r22.s64 = ctx.r31.s64 + 112;
	// lwz r10,32(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mullw r4,r11,r10
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x826c2210
	ctx.lr = 0x8268DA7C;
	sub_826C2210(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268d360
	ctx.lr = 0x8268DA88;
	sub_8268D360(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268d8e0
	if (ctx.cr0.eq) goto loc_8268D8E0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268d4b8
	ctx.lr = 0x8268DA9C;
	sub_8268D4B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268d8e0
	if (ctx.cr0.eq) goto loc_8268D8E0;
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268db84
	if (ctx.cr0.eq) goto loc_8268DB84;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
	// addi r25,r11,7168
	ctx.r25.s64 = ctx.r11.s64 + 7168;
loc_8268DAC0:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82690008
	ctx.lr = 0x8268DACC;
	sub_82690008(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82a947a0
	ctx.lr = 0x8268DAD4;
	sub_82A947A0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x826e6bb0
	ctx.lr = 0x8268DADC;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8268db74
	if (!ctx.cr0.eq) goto loc_8268DB74;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8268db74
	if (ctx.cr6.eq) goto loc_8268DB74;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwzx r30,r11,r24
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x8268db74
	if (ctx.cr0.eq) goto loc_8268DB74;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268d600
	ctx.lr = 0x8268DB14;
	sub_8268D600(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268d8e0
	if (ctx.cr0.eq) goto loc_8268D8E0;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268db70
	if (ctx.cr0.eq) goto loc_8268DB70;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
loc_8268DB30:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq 0x8268db5c
	if (ctx.cr0.eq) goto loc_8268DB5C;
	// lbz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 68);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8268db5c
	if (!ctx.cr0.eq) goto loc_8268DB5C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x826c2328
	ctx.lr = 0x8268DB5C;
	sub_826C2328(ctx, base);
loc_8268DB5C:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268db30
	if (ctx.cr6.lt) goto loc_8268DB30;
loc_8268DB70:
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
loc_8268DB74:
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268dac0
	if (ctx.cr6.lt) goto loc_8268DAC0;
loc_8268DB84:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268DB98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8268f898
	ctx.lr = 0x8268DB9C;
	sub_8268F898(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,7224
	ctx.r4.s64 = ctx.r11.s64 + 7224;
	// bl 0x8268e318
	ctx.lr = 0x8268DBAC;
	sub_8268E318(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r3,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r3.u32);
	// beq cr6,0x8268d8e0
	if (ctx.cr6.eq) goto loc_8268D8E0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596350
	ctx.lr = 0x8268DBC0;
	sub_82596350(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8268e518
	ctx.lr = 0x8268DBD0;
	sub_8268E518(ctx, base);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// bne cr6,0x8268dbf4
	if (!ctx.cr6.eq) goto loc_8268DBF4;
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x8268dc0c
	if (!ctx.cr6.eq) goto loc_8268DC0C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5024);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8268dc18
	goto loc_8268DC18;
loc_8268DBF4:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// beq cr6,0x8268dc1c
	if (ctx.cr6.eq) goto loc_8268DC1C;
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// blt cr6,0x8268dc1c
	if (ctx.cr6.lt) goto loc_8268DC1C;
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8268DC0C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
loc_8268DC18:
	// bl 0x8268e478
	ctx.lr = 0x8268DC1C;
	sub_8268E478(ctx, base);
loc_8268DC1C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8268DC20:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x826de8fc
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268DC30"))) PPC_WEAK_FUNC(sub_8268DC30);
PPC_FUNC_IMPL(__imp__sub_8268DC30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x8268DC38;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,7504
	ctx.r11.s64 = ctx.r11.s64 + 7504;
	// lis r29,-32071
	ctx.r29.s64 = -2101805056;
	// lfs f31,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r26,0
	ctx.r26.s64 = 0;
	// stfs f31,8(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// li r27,-1
	ctx.r27.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// lfs f0,14088(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// ori r30,r11,65535
	ctx.r30.u64 = ctx.r11.u64 | 65535;
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lwz r11,-11000(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11000);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268dcdc
	if (ctx.cr6.eq) goto loc_8268DCDC;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8268dc98
	if (!ctx.cr6.gt) goto loc_8268DC98;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8268DC98:
	// bl 0x8251c658
	ctx.lr = 0x8268DC9C;
	sub_8251C658(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lwz r11,-11000(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11000);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8268dcb4
	if (!ctx.cr6.gt) goto loc_8268DCB4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8268DCB4:
	// bl 0x8251c658
	ctx.lr = 0x8268DCB8;
	sub_8251C658(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r11,-11000(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11000);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8268dcd0
	if (!ctx.cr6.gt) goto loc_8268DCD0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8268DCD0:
	// bl 0x8251c658
	ctx.lr = 0x8268DCD4;
	sub_8251C658(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// b 0x8268dce8
	goto loc_8268DCE8;
loc_8268DCDC:
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
loc_8268DCE8:
	// lis r28,-32071
	ctx.r28.s64 = -2101805056;
	// lwz r11,-10996(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -10996);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268dd14
	if (ctx.cr6.eq) goto loc_8268DD14;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8268dd08
	if (!ctx.cr6.gt) goto loc_8268DD08;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8268DD08:
	// bl 0x8251c658
	ctx.lr = 0x8268DD0C;
	sub_8251C658(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// b 0x8268dd18
	goto loc_8268DD18;
loc_8268DD14:
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
loc_8268DD18:
	// lwz r11,-11000(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11000);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268dd58
	if (ctx.cr6.eq) goto loc_8268DD58;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8268DD2C:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfsx f31,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stfsx f31,r11,r9
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stfsx f31,r11,r9
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// lwz r9,-11000(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11000);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8268dd2c
	if (ctx.cr6.lt) goto loc_8268DD2C;
loc_8268DD58:
	// lwz r10,-10996(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -10996);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8268dda8
	if (ctx.cr6.eq) goto loc_8268DDA8;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lfs f0,-28684(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -28684);
	ctx.f0.f64 = double(temp.f32);
loc_8268DD74:
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsx f13,r10,r8
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// lwz r9,-10996(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + -10996);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8268dd74
	if (ctx.cr6.lt) goto loc_8268DD74;
loc_8268DDA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268DDB8"))) PPC_WEAK_FUNC(sub_8268DDB8);
PPC_FUNC_IMPL(__imp__sub_8268DDB8) {
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
	// lis r30,-32071
	ctx.r30.s64 = -2101805056;
	// addi r11,r11,7504
	ctx.r11.s64 = ctx.r11.s64 + 7504;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x8268ddf8
	if (ctx.cr0.eq) goto loc_8268DDF8;
	// lwz r11,-11212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268DDF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268DDF8:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268de10
	if (ctx.cr0.eq) goto loc_8268DE10;
	// lwz r11,-11212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268DE10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268DE10:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268de28
	if (ctx.cr0.eq) goto loc_8268DE28;
	// lwz r11,-11212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268DE28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268DE28:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268de40
	if (ctx.cr0.eq) goto loc_8268DE40;
	// lwz r11,-11212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268DE40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268DE40:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-16924
	ctx.r11.s64 = ctx.r11.s64 + -16924;
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

__attribute__((alias("__imp__sub_8268DE68"))) PPC_WEAK_FUNC(sub_8268DE68);
PPC_FUNC_IMPL(__imp__sub_8268DE68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x8268DE70;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,7508
	ctx.r11.s64 = ctx.r11.s64 + 7508;
	// lis r31,-32071
	ctx.r31.s64 = -2101805056;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r28,-1
	ctx.r28.s64 = -1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// ori r30,r11,65535
	ctx.r30.u64 = ctx.r11.u64 | 65535;
	// lwz r11,-11000(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11000);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268dec0
	if (ctx.cr6.eq) goto loc_8268DEC0;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8268deb4
	if (!ctx.cr6.gt) goto loc_8268DEB4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8268DEB4:
	// bl 0x8251c658
	ctx.lr = 0x8268DEB8;
	sub_8251C658(ctx, base);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// b 0x8268dec4
	goto loc_8268DEC4;
loc_8268DEC0:
	// stw r26,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r26.u32);
loc_8268DEC4:
	// lis r27,-32071
	ctx.r27.s64 = -2101805056;
	// lwz r11,-10996(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -10996);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268def0
	if (ctx.cr6.eq) goto loc_8268DEF0;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8268dee4
	if (!ctx.cr6.gt) goto loc_8268DEE4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8268DEE4:
	// bl 0x8251c658
	ctx.lr = 0x8268DEE8;
	sub_8251C658(ctx, base);
	// stw r3,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// b 0x8268def4
	goto loc_8268DEF4;
loc_8268DEF0:
	// stw r26,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r26.u32);
loc_8268DEF4:
	// lwz r10,-11000(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11000);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8268df28
	if (ctx.cr6.eq) goto loc_8268DF28;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lfs f0,3544(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
loc_8268DF10:
	// stfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r9,-11000(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11000);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8268df10
	if (ctx.cr6.lt) goto loc_8268DF10;
loc_8268DF28:
	// lwz r10,-10996(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + -10996);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8268df74
	if (ctx.cr6.eq) goto loc_8268DF74;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lfs f0,-28684(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -28684);
	ctx.f0.f64 = double(temp.f32);
loc_8268DF44:
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r9,-10996(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + -10996);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8268df44
	if (ctx.cr6.lt) goto loc_8268DF44;
loc_8268DF74:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268DF80"))) PPC_WEAK_FUNC(sub_8268DF80);
PPC_FUNC_IMPL(__imp__sub_8268DF80) {
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
	// lis r30,-32071
	ctx.r30.s64 = -2101805056;
	// addi r11,r11,7508
	ctx.r11.s64 = ctx.r11.s64 + 7508;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x8268dfc0
	if (ctx.cr0.eq) goto loc_8268DFC0;
	// lwz r11,-11212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268DFC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268DFC0:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268dfd8
	if (ctx.cr0.eq) goto loc_8268DFD8;
	// lwz r11,-11212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268DFD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268DFD8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-16924
	ctx.r11.s64 = ctx.r11.s64 + -16924;
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

__attribute__((alias("__imp__sub_8268E000"))) PPC_WEAK_FUNC(sub_8268E000);
PPC_FUNC_IMPL(__imp__sub_8268E000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x8268E008;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r26,-32071
	ctx.r26.s64 = -2101805056;
	// addi r11,r11,7512
	ctx.r11.s64 = ctx.r11.s64 + 7512;
	// lwz r3,32(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// beq 0x8268e038
	if (ctx.cr0.eq) goto loc_8268E038;
	// lwz r11,-11212(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268E038;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268E038:
	// lwz r3,36(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268e050
	if (ctx.cr0.eq) goto loc_8268E050;
	// lwz r11,-11212(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268E050;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268E050:
	// lwz r3,40(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268e068
	if (ctx.cr0.eq) goto loc_8268E068;
	// lwz r11,-11212(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268E068;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268E068:
	// lwz r3,44(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268e080
	if (ctx.cr0.eq) goto loc_8268E080;
	// lwz r11,-11212(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268E080;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268E080:
	// lwz r3,64(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268e098
	if (ctx.cr0.eq) goto loc_8268E098;
	// lwz r11,-11212(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268E098;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268E098:
	// lwz r3,68(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268e0b0
	if (ctx.cr0.eq) goto loc_8268E0B0;
	// lwz r11,-11212(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268E0B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268E0B0:
	// lwz r3,48(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268e0c8
	if (ctx.cr0.eq) goto loc_8268E0C8;
	// lwz r11,-11212(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268E0C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268E0C8:
	// lwz r3,72(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268e0e0
	if (ctx.cr0.eq) goto loc_8268E0E0;
	// lwz r11,-11212(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268E0E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268E0E0:
	// lwz r11,52(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268e12c
	if (ctx.cr0.eq) goto loc_8268E12C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268e12c
	if (ctx.cr6.eq) goto loc_8268E12C;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8268e124
	if (ctx.cr6.eq) goto loc_8268E124;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268E120;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8268e128
	goto loc_8268E128;
loc_8268E124:
	// bl 0x82186190
	ctx.lr = 0x8268E128;
	sub_82186190(ctx, base);
loc_8268E128:
	// stw r31,52(r27)
	PPC_STORE_U32(ctx.r27.u32 + 52, ctx.r31.u32);
loc_8268E12C:
	// lwz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268e174
	if (ctx.cr0.eq) goto loc_8268E174;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268e174
	if (ctx.cr6.eq) goto loc_8268E174;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8268e16c
	if (ctx.cr6.eq) goto loc_8268E16C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268E168;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8268e170
	goto loc_8268E170;
loc_8268E16C:
	// bl 0x82186190
	ctx.lr = 0x8268E170;
	sub_82186190(ctx, base);
loc_8268E170:
	// stw r31,56(r27)
	PPC_STORE_U32(ctx.r27.u32 + 56, ctx.r31.u32);
loc_8268E174:
	// lwz r3,60(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268e18c
	if (ctx.cr0.eq) goto loc_8268E18C;
	// lwz r11,-11212(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268E18C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268E18C:
	// lis r29,-32071
	ctx.r29.s64 = -2101805056;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// lwz r11,-11000(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11000);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268e1d8
	if (ctx.cr6.eq) goto loc_8268E1D8;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_8268E1A4:
	// lwz r10,20(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// lwzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8268e1c8
	if (ctx.cr6.eq) goto loc_8268E1C8;
	// lwz r11,-11212(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11212);
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268E1C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-11000(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11000);
loc_8268E1C8:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268e1a4
	if (ctx.cr6.lt) goto loc_8268E1A4;
loc_8268E1D8:
	// lwz r3,20(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268e1f0
	if (ctx.cr0.eq) goto loc_8268E1F0;
	// lwz r11,-11212(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268E1F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268E1F0:
	// lis r29,-32071
	ctx.r29.s64 = -2101805056;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// lwz r11,-10996(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10996);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268e23c
	if (ctx.cr6.eq) goto loc_8268E23C;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_8268E208:
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8268e22c
	if (ctx.cr6.eq) goto loc_8268E22C;
	// lwz r11,-11212(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11212);
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268E228;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-10996(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10996);
loc_8268E22C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268e208
	if (ctx.cr6.lt) goto loc_8268E208;
loc_8268E23C:
	// lwz r3,16(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268e254
	if (ctx.cr0.eq) goto loc_8268E254;
	// lwz r11,-11212(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268E254;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268E254:
	// lis r30,-32071
	ctx.r30.s64 = -2101805056;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// lwz r11,-10992(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10992);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268e29c
	if (ctx.cr6.eq) goto loc_8268E29C;
loc_8268E268:
	// lwz r10,24(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8268e28c
	if (ctx.cr6.eq) goto loc_8268E28C;
	// lwz r11,-11212(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11212);
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268E288;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-10992(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10992);
loc_8268E28C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268e268
	if (ctx.cr6.lt) goto loc_8268E268;
loc_8268E29C:
	// lwz r3,24(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268e2b4
	if (ctx.cr0.eq) goto loc_8268E2B4;
	// lwz r11,-11212(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268E2B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268E2B4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-16924
	ctx.r11.s64 = ctx.r11.s64 + -16924;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268E2C8"))) PPC_WEAK_FUNC(sub_8268E2C8);
PPC_FUNC_IMPL(__imp__sub_8268E2C8) {
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
	// lwz r3,5156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8268e2fc
	if (ctx.cr6.eq) goto loc_8268E2FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268E2FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268E2FC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,5156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5156, ctx.r11.u32);
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

