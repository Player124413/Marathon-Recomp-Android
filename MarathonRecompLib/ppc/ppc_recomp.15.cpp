#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_822150C8"))) PPC_WEAK_FUNC(sub_822150C8);
PPC_FUNC_IMPL(__imp__sub_822150C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x822150D0;
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r30,164(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// bl 0x82208f60
	ctx.lr = 0x822150EC;
	sub_82208F60(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82214c38
	ctx.lr = 0x822150FC;
	sub_82214C38(ctx, base);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r30,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x40;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82215148
	if (ctx.cr6.eq) goto loc_82215148;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221512C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82215148
	if (ctx.cr6.eq) goto loc_82215148;
loc_82215138:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_82215148:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82215178
	if (!ctx.cr6.eq) goto loc_82215178;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221516C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82215138
	if (!ctx.cr6.eq) goto loc_82215138;
loc_82215178:
	// rlwinm r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822151a0
	if (ctx.cr6.eq) goto loc_822151A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82214dd0
	ctx.lr = 0x82215190;
	sub_82214DD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822151a4
	if (!ctx.cr6.eq) goto loc_822151A4;
loc_822151A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822151A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822151B0"))) PPC_WEAK_FUNC(sub_822151B0);
PPC_FUNC_IMPL(__imp__sub_822151B0) {
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
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r30,164(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// bl 0x82214d40
	ctx.lr = 0x822151D8;
	sub_82214D40(ctx, base);
	// rlwinm r11,r30,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82215224
	if (ctx.cr6.eq) goto loc_82215224;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f31,56(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f31,60(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215210;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82215224
	if (ctx.cr6.eq) goto loc_82215224;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82215268
	goto loc_82215268;
loc_82215224:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82215264
	if (ctx.cr6.eq) goto loc_82215264;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f31,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f31,60(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215254;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82215268
	if (!ctx.cr6.eq) goto loc_82215268;
loc_82215264:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82215268:
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

__attribute__((alias("__imp__sub_82215288"))) PPC_WEAK_FUNC(sub_82215288);
PPC_FUNC_IMPL(__imp__sub_82215288) {
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
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r30,164(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// bl 0x82208f60
	ctx.lr = 0x822152B4;
	sub_82208F60(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82214c38
	ctx.lr = 0x822152C0;
	sub_82214C38(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822152f8
	if (!ctx.cr6.eq) goto loc_822152F8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822152E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822152f8
	if (ctx.cr6.eq) goto loc_822152F8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8221534c
	goto loc_8221534C;
loc_822152F8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82215348
	if (ctx.cr6.eq) goto loc_82215348;
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bne cr6,0x82215330
	if (!ctx.cr6.eq) goto loc_82215330;
	// li r4,3
	ctx.r4.s64 = 3;
loc_82215330:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215338;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221534c
	if (!ctx.cr6.eq) goto loc_8221534C;
loc_82215348:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221534C:
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

__attribute__((alias("__imp__sub_82215368"))) PPC_WEAK_FUNC(sub_82215368);
PPC_FUNC_IMPL(__imp__sub_82215368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82215370;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r30,164(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// bl 0x82208f60
	ctx.lr = 0x82215390;
	sub_82208F60(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x822153c0
	if (!ctx.cr6.eq) goto loc_822153C0;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822153c0
	if (ctx.cr6.eq) goto loc_822153C0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82208f48
	ctx.lr = 0x822153C0;
	sub_82208F48(ctx, base);
loc_822153C0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x82215430
	if (!ctx.cr6.gt) goto loc_82215430;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,264
	ctx.r10.s64 = ctx.r11.s64 + 264;
	// lfs f0,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82215410
	if (!ctx.cr6.gt) goto loc_82215410;
	// lfs f13,284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f13,f31,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f31.f64 - ctx.f0.f64)));
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82215408
	if (ctx.cr6.lt) goto loc_82215408;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_82215408:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
loc_82215410:
	// rlwinm r11,r29,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x40;
	// stfs f30,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82215500
	if (ctx.cr6.eq) goto loc_82215500;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,280(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// b 0x82215500
	goto loc_82215500;
loc_82215430:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x822154ac
	if (ctx.cr6.gt) goto loc_822154AC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,264
	ctx.r10.s64 = ctx.r11.s64 + 264;
	// lfs f0,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82215478
	if (!ctx.cr6.gt) goto loc_82215478;
	// lfs f13,284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f13,f31,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f31.f64 - ctx.f0.f64)));
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82215470
	if (ctx.cr6.lt) goto loc_82215470;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_82215470:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
loc_82215478:
	// rlwinm r11,r29,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82215500
	if (ctx.cr6.eq) goto loc_82215500;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,9
	ctx.r4.s64 = 9;
	// lfs f0,276(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// bl 0x82208f48
	ctx.lr = 0x82215498;
	sub_82208F48(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r10.u32);
	// b 0x82215500
	goto loc_82215500;
loc_822154AC:
	// rlwinm r11,r29,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822154c4
	if (ctx.cr6.eq) goto loc_822154C4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,280(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
loc_822154C4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,272
	ctx.r10.s64 = ctx.r11.s64 + 272;
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82215500
	if (!ctx.cr6.gt) goto loc_82215500;
	// lfs f13,268(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f13,f31,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f0.f64));
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x822154f8
	if (ctx.cr6.lt) goto loc_822154F8;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_822154F8:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
loc_82215500:
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x82215520
	if (ctx.cr6.lt) goto loc_82215520;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
loc_82215520:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x82215548
	if (ctx.cr6.lt) goto loc_82215548;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
loc_82215548:
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82215594
	if (!ctx.cr6.eq) goto loc_82215594;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215574;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82215594
	if (ctx.cr6.eq) goto loc_82215594;
loc_82215580:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_82215594:
	// rlwinm r11,r30,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822155dc
	if (!ctx.cr6.eq) goto loc_822155DC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bne cr6,0x822155c8
	if (!ctx.cr6.eq) goto loc_822155C8;
	// li r4,3
	ctx.r4.s64 = 3;
loc_822155C8:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822155D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82215580
	if (!ctx.cr6.eq) goto loc_82215580;
loc_822155DC:
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82215610
	if (ctx.cr6.eq) goto loc_82215610;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215600;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82215614
	if (!ctx.cr6.eq) goto loc_82215614;
loc_82215610:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82215614:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82215628"))) PPC_WEAK_FUNC(sub_82215628);
PPC_FUNC_IMPL(__imp__sub_82215628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82215630;
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r30,164(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// bl 0x82208f60
	ctx.lr = 0x8221564C;
	sub_82208F60(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82214c38
	ctx.lr = 0x8221565C;
	sub_82214C38(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221569c
	if (!ctx.cr6.eq) goto loc_8221569C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215680;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221569c
	if (ctx.cr6.eq) goto loc_8221569C;
loc_8221568C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_8221569C:
	// rlwinm r11,r30,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822156e4
	if (!ctx.cr6.eq) goto loc_822156E4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bne cr6,0x822156d0
	if (!ctx.cr6.eq) goto loc_822156D0;
	// li r4,3
	ctx.r4.s64 = 3;
loc_822156D0:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822156D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221568c
	if (!ctx.cr6.eq) goto loc_8221568C;
loc_822156E4:
	// rlwinm r11,r29,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82215718
	if (!ctx.cr6.eq) goto loc_82215718;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215708;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221571c
	if (!ctx.cr6.eq) goto loc_8221571C;
loc_82215718:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221571C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82215728"))) PPC_WEAK_FUNC(sub_82215728);
PPC_FUNC_IMPL(__imp__sub_82215728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82215730;
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r30,164(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// bl 0x82208f60
	ctx.lr = 0x8221574C;
	sub_82208F60(ctx, base);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221579c
	if (!ctx.cr6.eq) goto loc_8221579C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215780;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221579c
	if (ctx.cr6.eq) goto loc_8221579C;
loc_8221578C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_8221579C:
	// rlwinm r11,r30,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822157e4
	if (!ctx.cr6.eq) goto loc_822157E4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bne cr6,0x822157d0
	if (!ctx.cr6.eq) goto loc_822157D0;
	// li r4,3
	ctx.r4.s64 = 3;
loc_822157D0:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822157D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221578c
	if (!ctx.cr6.eq) goto loc_8221578C;
loc_822157E4:
	// rlwinm r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221580c
	if (ctx.cr6.eq) goto loc_8221580C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82214dd0
	ctx.lr = 0x822157FC;
	sub_82214DD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82215810
	if (!ctx.cr6.eq) goto loc_82215810;
loc_8221580C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82215810:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82215820"))) PPC_WEAK_FUNC(sub_82215820);
PPC_FUNC_IMPL(__imp__sub_82215820) {
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
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822158cc
	if (ctx.cr6.eq) goto loc_822158CC;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822158cc
	if (ctx.cr6.eq) goto loc_822158CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215860;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822158b8
	if (ctx.cr6.eq) goto loc_822158B8;
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215884;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// stfs f1,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822158A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
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
loc_822158B8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
loc_822158CC:
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

__attribute__((alias("__imp__sub_822158E0"))) PPC_WEAK_FUNC(sub_822158E0);
PPC_FUNC_IMPL(__imp__sub_822158E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x822158E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r31,164(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// lbz r10,193(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 193);
	// lbz r9,191(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 191);
	// ld r28,168(r11)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r11.u32 + 168);
	// rlwinm r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	// or r29,r10,r9
	ctx.r29.u64 = ctx.r10.u64 | ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82215948
	if (ctx.cr6.eq) goto loc_82215948;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lbz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82215948
	if (!ctx.cr6.eq) goto loc_82215948;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221593C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82215abc
	if (!ctx.cr6.eq) goto loc_82215ABC;
loc_82215948:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82215a68
	if (!ctx.cr6.eq) goto loc_82215A68;
	// rlwinm r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221596c
	if (!ctx.cr6.eq) goto loc_8221596C;
	// clrldi r11,r28,63
	ctx.r11.u64 = ctx.r28.u64 & 0x1;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822159e0
	if (ctx.cr6.eq) goto loc_822159E0;
loc_8221596C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822159bc
	if (ctx.cr6.eq) goto loc_822159BC;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822159bc
	if (ctx.cr6.eq) goto loc_822159BC;
	// lwz r3,196(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822159A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// ble cr6,0x822159c8
	if (!ctx.cr6.gt) goto loc_822159C8;
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x822159cc
	goto loc_822159CC;
loc_822159BC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
loc_822159C8:
	// li r4,7
	ctx.r4.s64 = 7;
loc_822159CC:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822159D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82215abc
	if (!ctx.cr6.eq) goto loc_82215ABC;
loc_822159E0:
	// rlwinm r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82215a68
	if (ctx.cr6.eq) goto loc_82215A68;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82215a44
	if (ctx.cr6.eq) goto loc_82215A44;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82215a44
	if (ctx.cr6.eq) goto loc_82215A44;
	// lwz r3,196(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215A20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82215a44
	if (!ctx.cr6.gt) goto loc_82215A44;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,196(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215A40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82215a68
	goto loc_82215A68;
loc_82215A44:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215A5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82215abc
	if (!ctx.cr6.eq) goto loc_82215ABC;
loc_82215A68:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,-21096
	ctx.r11.s64 = ctx.r11.s64 + -21096;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
loc_82215A78:
	// ld r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + -8);
	// and r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 & ctx.r28.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82215aac
	if (ctx.cr6.eq) goto loc_82215AAC;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215AA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82215abc
	if (!ctx.cr6.eq) goto loc_82215ABC;
loc_82215AAC:
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r29,16
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 16, ctx.xer);
	// bne cr6,0x82215a78
	if (!ctx.cr6.eq) goto loc_82215A78;
loc_82215ABC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82215AC8"))) PPC_WEAK_FUNC(sub_82215AC8);
PPC_FUNC_IMPL(__imp__sub_82215AC8) {
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
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r11,193(r10)
	PPC_STORE_U8(ctx.r10.u32 + 193, ctx.r11.u8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82215b20
	if (ctx.cr6.eq) goto loc_82215B20;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82215b20
	if (ctx.cr6.eq) goto loc_82215B20;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,196(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215B20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82215B20:
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f48
	ctx.lr = 0x82215B2C;
	sub_82208F48(ctx, base);
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

__attribute__((alias("__imp__sub_82215B40"))) PPC_WEAK_FUNC(sub_82215B40);
PPC_FUNC_IMPL(__imp__sub_82215B40) {
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
	// bl 0x82209ee0
	ctx.lr = 0x82215B5C;
	sub_82209EE0(ctx, base);
	// addi r30,r31,144
	ctx.r30.s64 = ctx.r31.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221eda8
	ctx.lr = 0x82215B68;
	sub_8221EDA8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r10,r10,-20948
	ctx.r10.s64 = ctx.r10.s64 + -20948;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// addi r11,r11,-21032
	ctx.r11.s64 = ctx.r11.s64 + -21032;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// addi r9,r9,-20960
	ctx.r9.s64 = ctx.r9.s64 + -20960;
	// addi r8,r8,-21016
	ctx.r8.s64 = ctx.r8.s64 + -21016;
	// addi r7,r7,-21064
	ctx.r7.s64 = ctx.r7.s64 + -21064;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r6,-21076
	ctx.r6.s64 = ctx.r6.s64 + -21076;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// std r11,168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 168, ctx.r11.u64);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// stw r10,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r10.u32);
	// stb r11,188(r31)
	PPC_STORE_U8(ctx.r31.u32 + 188, ctx.r11.u8);
	// stb r11,189(r31)
	PPC_STORE_U8(ctx.r31.u32 + 189, ctx.r11.u8);
	// stb r11,190(r31)
	PPC_STORE_U8(ctx.r31.u32 + 190, ctx.r11.u8);
	// stb r11,191(r31)
	PPC_STORE_U8(ctx.r31.u32 + 191, ctx.r11.u8);
	// stb r11,192(r31)
	PPC_STORE_U8(ctx.r31.u32 + 192, ctx.r11.u8);
	// stb r11,193(r31)
	PPC_STORE_U8(ctx.r31.u32 + 193, ctx.r11.u8);
	// stb r11,194(r31)
	PPC_STORE_U8(ctx.r31.u32 + 194, ctx.r11.u8);
	// stb r11,195(r31)
	PPC_STORE_U8(ctx.r31.u32 + 195, ctx.r11.u8);
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// stfs f0,212(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// stfs f0,216(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// stfs f0,220(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
	// stfs f0,224(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 224, temp.u32);
	// stfs f0,228(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 228, temp.u32);
	// stfs f0,232(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// stfs f0,236(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// stfs f0,240(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// stfs f0,244(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// stfs f0,248(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// stfs f0,252(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// stfs f0,256(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// stfs f0,260(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// stfs f0,264(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// stfs f0,268(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// stfs f0,272(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// stfs f0,276(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// stfs f0,280(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// stfs f0,284(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// stfs f0,288(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// stfs f0,292(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 292, temp.u32);
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

__attribute__((alias("__imp__sub_82215C88"))) PPC_WEAK_FUNC(sub_82215C88);
PPC_FUNC_IMPL(__imp__sub_82215C88) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-144
	ctx.r3.s64 = ctx.r3.s64 + -144;
	// b 0x82215ca0
	sub_82215CA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82215C90"))) PPC_WEAK_FUNC(sub_82215C90);
PPC_FUNC_IMPL(__imp__sub_82215C90) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-36
	ctx.r3.s64 = ctx.r3.s64 + -36;
	// b 0x82215ca0
	sub_82215CA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82215C98"))) PPC_WEAK_FUNC(sub_82215C98);
PPC_FUNC_IMPL(__imp__sub_82215C98) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x82215ca0
	sub_82215CA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82215CA0"))) PPC_WEAK_FUNC(sub_82215CA0);
PPC_FUNC_IMPL(__imp__sub_82215CA0) {
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
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82215ccc
	if (ctx.cr6.eq) goto loc_82215CCC;
	// bl 0x821601b8
	ctx.lr = 0x82215CCC;
	sub_821601B8(ctx, base);
loc_82215CCC:
	// lwz r3,200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82215cdc
	if (ctx.cr6.eq) goto loc_82215CDC;
	// bl 0x821601b8
	ctx.lr = 0x82215CDC;
	sub_821601B8(ctx, base);
loc_82215CDC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bne cr6,0x82215cec
	if (!ctx.cr6.eq) goto loc_82215CEC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82215CEC:
	// bl 0x8221eda8
	ctx.lr = 0x82215CF0;
	sub_8221EDA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221db40
	ctx.lr = 0x82215CF8;
	sub_8221DB40(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82215d10
	if (ctx.cr6.eq) goto loc_82215D10;
	// bl 0x82186190
	ctx.lr = 0x82215D0C;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82215D10:
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

__attribute__((alias("__imp__sub_82215D28"))) PPC_WEAK_FUNC(sub_82215D28);
PPC_FUNC_IMPL(__imp__sub_82215D28) {
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
	// bl 0x8221ddb0
	ctx.lr = 0x82215D48;
	sub_8221DDB0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-20940
	ctx.r11.s64 = ctx.r11.s64 + -20940;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215D6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r11,29844
	ctx.r6.s64 = ctx.r11.s64 + 29844;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,29796
	ctx.r5.s64 = ctx.r11.s64 + 29796;
	// bl 0x826df418
	ctx.lr = 0x82215D8C;
	sub_826DF418(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x82215da4
	if (ctx.cr6.eq) goto loc_82215DA4;
	// bl 0x821601b8
	ctx.lr = 0x82215DA4;
	sub_821601B8(ctx, base);
loc_82215DA4:
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

__attribute__((alias("__imp__sub_82215DC0"))) PPC_WEAK_FUNC(sub_82215DC0);
PPC_FUNC_IMPL(__imp__sub_82215DC0) {
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
	// bl 0x82215d28
	ctx.lr = 0x82215DD8;
	sub_82215D28(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-20892
	ctx.r11.s64 = ctx.r11.s64 + -20892;
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

__attribute__((alias("__imp__sub_82215E00"))) PPC_WEAK_FUNC(sub_82215E00);
PPC_FUNC_IMPL(__imp__sub_82215E00) {
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
	// bl 0x82215d28
	ctx.lr = 0x82215E18;
	sub_82215D28(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-20840
	ctx.r11.s64 = ctx.r11.s64 + -20840;
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

__attribute__((alias("__imp__sub_82215E40"))) PPC_WEAK_FUNC(sub_82215E40);
PPC_FUNC_IMPL(__imp__sub_82215E40) {
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
	// bl 0x82215d28
	ctx.lr = 0x82215E58;
	sub_82215D28(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-20792
	ctx.r11.s64 = ctx.r11.s64 + -20792;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
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

__attribute__((alias("__imp__sub_82215E88"))) PPC_WEAK_FUNC(sub_82215E88);
PPC_FUNC_IMPL(__imp__sub_82215E88) {
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
	// bl 0x82215d28
	ctx.lr = 0x82215EA0;
	sub_82215D28(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-20744
	ctx.r11.s64 = ctx.r11.s64 + -20744;
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

__attribute__((alias("__imp__sub_82215EC8"))) PPC_WEAK_FUNC(sub_82215EC8);
PPC_FUNC_IMPL(__imp__sub_82215EC8) {
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
	// bl 0x82215d28
	ctx.lr = 0x82215EE0;
	sub_82215D28(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-20696
	ctx.r11.s64 = ctx.r11.s64 + -20696;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82215F18"))) PPC_WEAK_FUNC(sub_82215F18);
PPC_FUNC_IMPL(__imp__sub_82215F18) {
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
	// bl 0x82215d28
	ctx.lr = 0x82215F30;
	sub_82215D28(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-20648
	ctx.r11.s64 = ctx.r11.s64 + -20648;
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

__attribute__((alias("__imp__sub_82215F58"))) PPC_WEAK_FUNC(sub_82215F58);
PPC_FUNC_IMPL(__imp__sub_82215F58) {
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
	// bl 0x82215d28
	ctx.lr = 0x82215F70;
	sub_82215D28(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-20600
	ctx.r11.s64 = ctx.r11.s64 + -20600;
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

__attribute__((alias("__imp__sub_82215F98"))) PPC_WEAK_FUNC(sub_82215F98);
PPC_FUNC_IMPL(__imp__sub_82215F98) {
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
	// bl 0x82215d28
	ctx.lr = 0x82215FB0;
	sub_82215D28(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-20552
	ctx.r11.s64 = ctx.r11.s64 + -20552;
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

__attribute__((alias("__imp__sub_82215FD8"))) PPC_WEAK_FUNC(sub_82215FD8);
PPC_FUNC_IMPL(__imp__sub_82215FD8) {
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
	// bl 0x82215d28
	ctx.lr = 0x82215FF0;
	sub_82215D28(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-20504
	ctx.r11.s64 = ctx.r11.s64 + -20504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
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

__attribute__((alias("__imp__sub_82216028"))) PPC_WEAK_FUNC(sub_82216028);
PPC_FUNC_IMPL(__imp__sub_82216028) {
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
	// bl 0x82215d28
	ctx.lr = 0x82216040;
	sub_82215D28(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-20456
	ctx.r11.s64 = ctx.r11.s64 + -20456;
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

__attribute__((alias("__imp__sub_82216068"))) PPC_WEAK_FUNC(sub_82216068);
PPC_FUNC_IMPL(__imp__sub_82216068) {
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
	// bl 0x82215d28
	ctx.lr = 0x82216080;
	sub_82215D28(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-20408
	ctx.r11.s64 = ctx.r11.s64 + -20408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
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

__attribute__((alias("__imp__sub_822160B0"))) PPC_WEAK_FUNC(sub_822160B0);
PPC_FUNC_IMPL(__imp__sub_822160B0) {
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
	// bl 0x82215d28
	ctx.lr = 0x822160C8;
	sub_82215D28(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-20360
	ctx.r11.s64 = ctx.r11.s64 + -20360;
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

__attribute__((alias("__imp__sub_822160F0"))) PPC_WEAK_FUNC(sub_822160F0);
PPC_FUNC_IMPL(__imp__sub_822160F0) {
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
	// bl 0x82215d28
	ctx.lr = 0x82216108;
	sub_82215D28(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-20312
	ctx.r11.s64 = ctx.r11.s64 + -20312;
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

__attribute__((alias("__imp__sub_82216130"))) PPC_WEAK_FUNC(sub_82216130);
PPC_FUNC_IMPL(__imp__sub_82216130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82216138;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82216260
	if (ctx.cr6.eq) goto loc_82216260;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82216260
	if (ctx.cr6.eq) goto loc_82216260;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82216178
	if (ctx.cr6.lt) goto loc_82216178;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8221617c
	goto loc_8221617C;
loc_82216178:
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
loc_8221617C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82216260
	if (ctx.cr6.eq) goto loc_82216260;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,32084
	ctx.r10.s64 = ctx.r11.s64 + 32084;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82216190:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822161b4
	if (ctx.cr6.eq) goto loc_822161B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82216190
	if (ctx.cr6.eq) goto loc_82216190;
loc_822161B4:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x822161f4
	if (!ctx.cr6.eq) goto loc_822161F4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8220e418
	ctx.lr = 0x822161D8;
	sub_8220E418(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r28,160
	ctx.r3.s64 = ctx.r28.s64 + 160;
	// bl 0x8221f3c8
	ctx.lr = 0x822161E4;
	sub_8221F3C8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822161f4
	if (ctx.cr6.eq) goto loc_822161F4;
	// bl 0x821601b8
	ctx.lr = 0x822161F4;
	sub_821601B8(ctx, base);
loc_822161F4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-31136
	ctx.r10.s64 = ctx.r11.s64 + -31136;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82216200:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82216224
	if (ctx.cr6.eq) goto loc_82216224;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82216200
	if (ctx.cr6.eq) goto loc_82216200;
loc_82216224:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82216260
	if (!ctx.cr6.eq) goto loc_82216260;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x821c0328
	ctx.lr = 0x82216244;
	sub_821C0328(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r28,168
	ctx.r3.s64 = ctx.r28.s64 + 168;
	// bl 0x8221f3c8
	ctx.lr = 0x82216250;
	sub_8221F3C8(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82216260
	if (ctx.cr6.eq) goto loc_82216260;
	// bl 0x821601b8
	ctx.lr = 0x82216260;
	sub_821601B8(ctx, base);
loc_82216260:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82216268"))) PPC_WEAK_FUNC(sub_82216268);
PPC_FUNC_IMPL(__imp__sub_82216268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82216270;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-768(r1)
	ea = -768 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r4,r11,-20160
	ctx.r4.s64 = ctx.r11.s64 + -20160;
	// stw r31,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r31.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stw r30,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r30.u32);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// stb r31,404(r1)
	PPC_STORE_U8(ctx.r1.u32 + 404, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x822162A8;
	sub_82161E08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ea350
	ctx.lr = 0x822162C0;
	sub_821EA350(ctx, base);
	// lwz r11,424(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	// stfs f1,180(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 180, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822162d8
	if (ctx.cr6.lt) goto loc_822162D8;
	// lwz r3,404(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// bl 0x82186190
	ctx.lr = 0x822162D8;
	sub_82186190(ctx, base);
loc_822162D8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r30.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stw r31,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r31.u32);
	// addi r4,r11,-20172
	ctx.r4.s64 = ctx.r11.s64 + -20172;
	// stb r31,404(r1)
	PPC_STORE_U8(ctx.r1.u32 + 404, ctx.r31.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stb r31,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82216304;
	sub_82161E08(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x82216314;
	sub_821EA350(ctx, base);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stfs f1,184(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 184, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8221632c
	if (ctx.cr6.lt) goto loc_8221632C;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82186190
	ctx.lr = 0x8221632C;
	sub_82186190(ctx, base);
loc_8221632C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// li r5,14
	ctx.r5.s64 = 14;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// addi r4,r11,-20188
	ctx.r4.s64 = ctx.r11.s64 + -20188;
	// stb r31,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r31.u8);
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// stw r30,680(r1)
	PPC_STORE_U32(ctx.r1.u32 + 680, ctx.r30.u32);
	// stw r31,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r31.u32);
	// stb r31,660(r1)
	PPC_STORE_U8(ctx.r1.u32 + 660, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82216358;
	sub_82161E08(ctx, base);
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x82216368;
	sub_821EA350(ctx, base);
	// lwz r11,680(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 680);
	// stfs f1,188(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 188, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82216380
	if (ctx.cr6.lt) goto loc_82216380;
	// lwz r3,660(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 660);
	// bl 0x82186190
	ctx.lr = 0x82216380;
	sub_82186190(ctx, base);
loc_82216380:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,680(r1)
	PPC_STORE_U32(ctx.r1.u32 + 680, ctx.r30.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stw r31,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r31.u32);
	// addi r4,r11,-20196
	ctx.r4.s64 = ctx.r11.s64 + -20196;
	// stb r31,660(r1)
	PPC_STORE_U8(ctx.r1.u32 + 660, ctx.r31.u8);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stw r30,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r30.u32);
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// stb r31,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x822163AC;
	sub_82161E08(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x822163BC;
	sub_821EA350(ctx, base);
	// lwz r11,232(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// stfs f1,192(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 192, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822163d4
	if (ctx.cr6.lt) goto loc_822163D4;
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// bl 0x82186190
	ctx.lr = 0x822163D4;
	sub_82186190(ctx, base);
loc_822163D4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r30.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// addi r4,r11,-20208
	ctx.r4.s64 = ctx.r11.s64 + -20208;
	// stb r31,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r31.u8);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// stw r30,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r30.u32);
	// stw r31,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r31.u32);
	// stb r31,468(r1)
	PPC_STORE_U8(ctx.r1.u32 + 468, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82216400;
	sub_82161E08(ctx, base);
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x82216410;
	sub_821EA350(ctx, base);
	// lwz r11,488(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 488);
	// stfs f1,196(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 196, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82216428
	if (ctx.cr6.lt) goto loc_82216428;
	// lwz r3,468(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// bl 0x82186190
	ctx.lr = 0x82216428;
	sub_82186190(ctx, base);
loc_82216428:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r30.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stw r31,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r31.u32);
	// addi r4,r11,-20220
	ctx.r4.s64 = ctx.r11.s64 + -20220;
	// stb r31,468(r1)
	PPC_STORE_U8(ctx.r1.u32 + 468, ctx.r31.u8);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stw r30,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r30.u32);
	// stw r31,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r31.u32);
	// stb r31,276(r1)
	PPC_STORE_U8(ctx.r1.u32 + 276, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82216454;
	sub_82161E08(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x82216464;
	sub_821EA350(ctx, base);
	// lwz r11,296(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// stfs f1,200(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 200, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8221647c
	if (ctx.cr6.lt) goto loc_8221647C;
	// lwz r3,276(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// bl 0x82186190
	ctx.lr = 0x8221647C;
	sub_82186190(ctx, base);
loc_8221647C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r30.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stw r31,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r31.u32);
	// addi r4,r11,-20232
	ctx.r4.s64 = ctx.r11.s64 + -20232;
	// stb r31,276(r1)
	PPC_STORE_U8(ctx.r1.u32 + 276, ctx.r31.u8);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// stw r30,616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 616, ctx.r30.u32);
	// stw r31,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r31.u32);
	// stb r31,596(r1)
	PPC_STORE_U8(ctx.r1.u32 + 596, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x822164A8;
	sub_82161E08(ctx, base);
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x822164B8;
	sub_821EA350(ctx, base);
	// lwz r11,616(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 616);
	// stfs f1,204(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 204, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822164d0
	if (ctx.cr6.lt) goto loc_822164D0;
	// lwz r3,596(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// bl 0x82186190
	ctx.lr = 0x822164D0;
	sub_82186190(ctx, base);
loc_822164D0:
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// lfs f0,204(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 616, ctx.r30.u32);
	// stw r31,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r31.u32);
	// stb r31,596(r1)
	PPC_STORE_U8(ctx.r1.u32 + 596, ctx.r31.u8);
	// lfs f13,27212(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27212);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82216500
	if (!ctx.cr6.gt) goto loc_82216500;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// b 0x82216504
	goto loc_82216504;
loc_82216500:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_82216504:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,208(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 208, temp.u32);
	// li r5,13
	ctx.r5.s64 = 13;
	// stw r30,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r30.u32);
	// addi r4,r11,-20248
	ctx.r4.s64 = ctx.r11.s64 + -20248;
	// stw r31,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r31.u32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// stb r31,340(r1)
	PPC_STORE_U8(ctx.r1.u32 + 340, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82216528;
	sub_82161E08(ctx, base);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ea350
	ctx.lr = 0x82216538;
	sub_821EA350(ctx, base);
	// lwz r11,360(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// stfs f1,212(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 212, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82216550
	if (ctx.cr6.lt) goto loc_82216550;
	// lwz r3,340(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// bl 0x82186190
	ctx.lr = 0x82216550;
	sub_82186190(ctx, base);
loc_82216550:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r30.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// stw r31,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r31.u32);
	// addi r4,r11,-20264
	ctx.r4.s64 = ctx.r11.s64 + -20264;
	// stb r31,340(r1)
	PPC_STORE_U8(ctx.r1.u32 + 340, ctx.r31.u8);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// stw r30,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, ctx.r30.u32);
	// stw r31,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r31.u32);
	// stb r31,532(r1)
	PPC_STORE_U8(ctx.r1.u32 + 532, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x8221657C;
	sub_82161E08(ctx, base);
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x8221658C;
	sub_821EA350(ctx, base);
	// lwz r11,552(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 552);
	// stfs f1,216(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 216, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822165a4
	if (ctx.cr6.lt) goto loc_822165A4;
	// lwz r3,532(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// bl 0x82186190
	ctx.lr = 0x822165A4;
	sub_82186190(ctx, base);
loc_822165A4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, ctx.r30.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stw r31,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r31.u32);
	// addi r4,r11,-23116
	ctx.r4.s64 = ctx.r11.s64 + -23116;
	// stb r31,532(r1)
	PPC_STORE_U8(ctx.r1.u32 + 532, ctx.r31.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x822165D0;
	sub_82161E08(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x822165E0;
	sub_821EA350(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f1,220(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 220, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822165f8
	if (ctx.cr6.lt) goto loc_822165F8;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x822165F8;
	sub_82186190(ctx, base);
loc_822165F8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// li r5,13
	ctx.r5.s64 = 13;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r4,r11,-22916
	ctx.r4.s64 = ctx.r11.s64 + -22916;
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stb r31,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82216624;
	sub_82161E08(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x82216634;
	sub_821EA350(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stfs f1,224(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 224, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8221664c
	if (ctx.cr6.lt) goto loc_8221664C;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82186190
	ctx.lr = 0x8221664C;
	sub_82186190(ctx, base);
loc_8221664C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r4,r11,-23128
	ctx.r4.s64 = ctx.r11.s64 + -23128;
	// stb r31,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r31.u8);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r30.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stb r31,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82216678;
	sub_82161E08(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x82216688;
	sub_821EA350(ctx, base);
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// stfs f1,228(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 228, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822166a0
	if (ctx.cr6.lt) goto loc_822166A0;
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x82186190
	ctx.lr = 0x822166A0;
	sub_82186190(ctx, base);
loc_822166A0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r30.u32);
	// li r5,17
	ctx.r5.s64 = 17;
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// addi r4,r11,-23260
	ctx.r4.s64 = ctx.r11.s64 + -23260;
	// stb r31,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r31.u8);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r30,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r30.u32);
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r31.u32);
	// stb r31,244(r1)
	PPC_STORE_U8(ctx.r1.u32 + 244, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x822166CC;
	sub_82161E08(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x822166DC;
	sub_821EA350(ctx, base);
	// lwz r11,264(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// stfs f1,232(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 232, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822166f4
	if (ctx.cr6.lt) goto loc_822166F4;
	// lwz r3,244(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// bl 0x82186190
	ctx.lr = 0x822166F4;
	sub_82186190(ctx, base);
loc_822166F4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r30.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r31.u32);
	// addi r4,r11,-23272
	ctx.r4.s64 = ctx.r11.s64 + -23272;
	// stb r31,244(r1)
	PPC_STORE_U8(ctx.r1.u32 + 244, ctx.r31.u8);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stw r30,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r30.u32);
	// stw r31,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r31.u32);
	// stb r31,308(r1)
	PPC_STORE_U8(ctx.r1.u32 + 308, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82216720;
	sub_82161E08(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x82216730;
	sub_821EA350(ctx, base);
	// lwz r11,328(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// stfs f1,236(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 236, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82216748
	if (ctx.cr6.lt) goto loc_82216748;
	// lwz r3,308(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// bl 0x82186190
	ctx.lr = 0x82216748;
	sub_82186190(ctx, base);
loc_82216748:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r30.u32);
	// li r5,17
	ctx.r5.s64 = 17;
	// stw r31,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r31.u32);
	// addi r4,r11,-23292
	ctx.r4.s64 = ctx.r11.s64 + -23292;
	// stb r31,308(r1)
	PPC_STORE_U8(ctx.r1.u32 + 308, ctx.r31.u8);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// stw r30,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r30.u32);
	// stw r31,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r31.u32);
	// stb r31,372(r1)
	PPC_STORE_U8(ctx.r1.u32 + 372, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82216774;
	sub_82161E08(ctx, base);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x82216784;
	sub_821EA350(ctx, base);
	// lwz r11,392(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	// stfs f1,240(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 240, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8221679c
	if (ctx.cr6.lt) goto loc_8221679C;
	// lwz r3,372(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// bl 0x82186190
	ctx.lr = 0x8221679C;
	sub_82186190(ctx, base);
loc_8221679C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r30.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r31,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r31.u32);
	// addi r4,r11,-23308
	ctx.r4.s64 = ctx.r11.s64 + -23308;
	// stb r31,372(r1)
	PPC_STORE_U8(ctx.r1.u32 + 372, ctx.r31.u8);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// stw r30,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r30.u32);
	// stw r31,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r31.u32);
	// stb r31,436(r1)
	PPC_STORE_U8(ctx.r1.u32 + 436, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x822167C8;
	sub_82161E08(ctx, base);
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x822167D8;
	sub_821EA350(ctx, base);
	// lwz r11,456(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 456);
	// stfs f1,244(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 244, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822167f0
	if (ctx.cr6.lt) goto loc_822167F0;
	// lwz r3,436(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// bl 0x82186190
	ctx.lr = 0x822167F0;
	sub_82186190(ctx, base);
loc_822167F0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r30.u32);
	// li r5,20
	ctx.r5.s64 = 20;
	// stw r31,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r31.u32);
	// addi r4,r11,-23332
	ctx.r4.s64 = ctx.r11.s64 + -23332;
	// stb r31,436(r1)
	PPC_STORE_U8(ctx.r1.u32 + 436, ctx.r31.u8);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// stw r30,520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 520, ctx.r30.u32);
	// stw r31,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r31.u32);
	// stb r31,500(r1)
	PPC_STORE_U8(ctx.r1.u32 + 500, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x8221681C;
	sub_82161E08(ctx, base);
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x8221682C;
	sub_821EA350(ctx, base);
	// lwz r11,520(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 520);
	// stfs f1,248(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 248, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82216844
	if (ctx.cr6.lt) goto loc_82216844;
	// lwz r3,500(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// bl 0x82186190
	ctx.lr = 0x82216844;
	sub_82186190(ctx, base);
loc_82216844:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 520, ctx.r30.u32);
	// li r5,17
	ctx.r5.s64 = 17;
	// stw r31,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r31.u32);
	// addi r4,r11,-23352
	ctx.r4.s64 = ctx.r11.s64 + -23352;
	// stb r31,500(r1)
	PPC_STORE_U8(ctx.r1.u32 + 500, ctx.r31.u8);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// stw r30,584(r1)
	PPC_STORE_U32(ctx.r1.u32 + 584, ctx.r30.u32);
	// stw r31,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r31.u32);
	// stb r31,564(r1)
	PPC_STORE_U8(ctx.r1.u32 + 564, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82216870;
	sub_82161E08(ctx, base);
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x82216880;
	sub_821EA350(ctx, base);
	// lwz r11,584(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 584);
	// stfs f1,252(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 252, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82216898
	if (ctx.cr6.lt) goto loc_82216898;
	// lwz r3,564(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// bl 0x82186190
	ctx.lr = 0x82216898;
	sub_82186190(ctx, base);
loc_82216898:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,584(r1)
	PPC_STORE_U32(ctx.r1.u32 + 584, ctx.r30.u32);
	// li r5,17
	ctx.r5.s64 = 17;
	// stw r31,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r31.u32);
	// addi r4,r11,-23148
	ctx.r4.s64 = ctx.r11.s64 + -23148;
	// stb r31,564(r1)
	PPC_STORE_U8(ctx.r1.u32 + 564, ctx.r31.u8);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// stw r30,648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 648, ctx.r30.u32);
	// stw r31,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r31.u32);
	// stb r31,628(r1)
	PPC_STORE_U8(ctx.r1.u32 + 628, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x822168C4;
	sub_82161E08(ctx, base);
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x822168D4;
	sub_821EA350(ctx, base);
	// lwz r11,648(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 648);
	// stfs f1,256(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 256, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822168ec
	if (ctx.cr6.lt) goto loc_822168EC;
	// lwz r3,628(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// bl 0x82186190
	ctx.lr = 0x822168EC;
	sub_82186190(ctx, base);
loc_822168EC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 648, ctx.r30.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r31,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r31.u32);
	// addi r4,r11,-23048
	ctx.r4.s64 = ctx.r11.s64 + -23048;
	// stb r31,628(r1)
	PPC_STORE_U8(ctx.r1.u32 + 628, ctx.r31.u8);
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// stw r30,712(r1)
	PPC_STORE_U32(ctx.r1.u32 + 712, ctx.r30.u32);
	// stw r31,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r31.u32);
	// stb r31,692(r1)
	PPC_STORE_U8(ctx.r1.u32 + 692, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82216918;
	sub_82161E08(ctx, base);
	// addi r4,r1,688
	ctx.r4.s64 = ctx.r1.s64 + 688;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x82216928;
	sub_821EA350(ctx, base);
	// lwz r11,712(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 712);
	// stfs f1,260(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 260, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82216940
	if (ctx.cr6.lt) goto loc_82216940;
	// lwz r3,692(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 692);
	// bl 0x82186190
	ctx.lr = 0x82216940;
	sub_82186190(ctx, base);
loc_82216940:
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82216950"))) PPC_WEAK_FUNC(sub_82216950);
PPC_FUNC_IMPL(__imp__sub_82216950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x82216958;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r27,r11,-20144
	ctx.r27.s64 = ctx.r11.s64 + -20144;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// lwz r29,560(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 560);
	// addi r31,r27,4
	ctx.r31.s64 = ctx.r27.s64 + 4;
loc_82216978:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822169a0
	if (!ctx.cr6.eq) goto loc_822169A0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82209058
	ctx.lr = 0x82216994;
	sub_82209058(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822169c0
	if (!ctx.cr6.eq) goto loc_822169C0;
loc_822169A0:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmpwi cr6,r28,8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 8, ctx.xer);
	// bne cr6,0x82216978
	if (!ctx.cr6.eq) goto loc_82216978;
	// stw r26,560(r30)
	PPC_STORE_U32(ctx.r30.u32 + 560, ctx.r26.u32);
	// stw r26,592(r30)
	PPC_STORE_U32(ctx.r30.u32 + 592, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_822169C0:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r27,4
	ctx.r10.s64 = ctx.r27.s64 + 4;
	// addi r9,r27,12
	ctx.r9.s64 = ctx.r27.s64 + 12;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r10,560(r30)
	PPC_STORE_U32(ctx.r30.u32 + 560, ctx.r10.u32);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r11,592(r30)
	PPC_STORE_U32(ctx.r30.u32 + 592, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822169E8"))) PPC_WEAK_FUNC(sub_822169E8);
PPC_FUNC_IMPL(__imp__sub_822169E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x822169F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r27,r11,-20016
	ctx.r27.s64 = ctx.r11.s64 + -20016;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// lwz r29,560(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 560);
	// addi r31,r27,4
	ctx.r31.s64 = ctx.r27.s64 + 4;
loc_82216A10:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82216a38
	if (!ctx.cr6.eq) goto loc_82216A38;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82209058
	ctx.lr = 0x82216A2C;
	sub_82209058(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82216a58
	if (!ctx.cr6.eq) goto loc_82216A58;
loc_82216A38:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmpwi cr6,r28,8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 8, ctx.xer);
	// bne cr6,0x82216a10
	if (!ctx.cr6.eq) goto loc_82216A10;
	// stw r26,560(r30)
	PPC_STORE_U32(ctx.r30.u32 + 560, ctx.r26.u32);
	// stw r26,592(r30)
	PPC_STORE_U32(ctx.r30.u32 + 592, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_82216A58:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r27,4
	ctx.r10.s64 = ctx.r27.s64 + 4;
	// addi r9,r27,12
	ctx.r9.s64 = ctx.r27.s64 + 12;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r10,560(r30)
	PPC_STORE_U32(ctx.r30.u32 + 560, ctx.r10.u32);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r11,592(r30)
	PPC_STORE_U32(ctx.r30.u32 + 592, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82216A80"))) PPC_WEAK_FUNC(sub_82216A80);
PPC_FUNC_IMPL(__imp__sub_82216A80) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,560(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82216A88"))) PPC_WEAK_FUNC(sub_82216A88);
PPC_FUNC_IMPL(__imp__sub_82216A88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r11,80
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 80, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x822090e0
	sub_822090E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82216A9C"))) PPC_WEAK_FUNC(sub_82216A9C);
PPC_FUNC_IMPL(__imp__sub_82216A9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82216AA0"))) PPC_WEAK_FUNC(sub_82216AA0);
PPC_FUNC_IMPL(__imp__sub_82216AA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82216ac0
	if (ctx.cr6.gt) goto loc_82216AC0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82216AC0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82216ae0
	if (ctx.cr6.eq) goto loc_82216AE0;
	// lfs f4,352(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,368(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,364(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	ctx.f2.f64 = double(temp.f32);
	// b 0x8220a630
	sub_8220A630(ctx, base);
	return;
loc_82216AE0:
	// lbz r11,578(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 578);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82216afc
	if (ctx.cr6.eq) goto loc_82216AFC;
	// lfs f4,672(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 672);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,664(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 664);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,668(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 668);
	ctx.f2.f64 = double(temp.f32);
	// b 0x8220a630
	sub_8220A630(ctx, base);
	return;
loc_82216AFC:
	// lfs f4,352(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,360(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,356(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	ctx.f2.f64 = double(temp.f32);
	// b 0x8220a630
	sub_8220A630(ctx, base);
	return;
}

extern void RemapLightDash(PPCRegister& r3, PPCRegister& r11);

__attribute__((alias("__imp__sub_82216B10"))) PPC_WEAK_FUNC(sub_82216B10);
PPC_FUNC_IMPL(__imp__sub_82216B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82216B18;
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82208f60
	ctx.lr = 0x82216B30;
	sub_82208F60(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// ld r30,200(r10)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r10.u32 + 200);
	// bl 0x82208f60
	ctx.lr = 0x82216B48;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,24,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r11,0
	RemapLightDash(ctx.r3, ctx.r11);
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82216bac
	if (ctx.cr6.eq) goto loc_82216BAC;
	// rlwinm r11,r30,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82216bac
	if (ctx.cr6.eq) goto loc_82216BAC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82209058
	ctx.lr = 0x82216B6C;
	sub_82209058(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82216bac
	if (ctx.cr6.eq) goto loc_82216BAC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,72
	ctx.r4.s64 = 72;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82216B90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82216bac
	if (ctx.cr6.eq) goto loc_82216BAC;
loc_82216B9C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_82216BAC:
	// rlwinm r11,r29,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82216bf4
	if (ctx.cr6.eq) goto loc_82216BF4;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82209058
	ctx.lr = 0x82216BC4;
	sub_82209058(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82216bf4
	if (ctx.cr6.eq) goto loc_82216BF4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,71
	ctx.r4.s64 = 71;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82216BE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82216b9c
	if (!ctx.cr6.eq) goto loc_82216B9C;
loc_82216BF4:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82216C0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82216c3c
	if (ctx.cr6.eq) goto loc_82216C3C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,75
	ctx.r4.s64 = 75;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82216C30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82216b9c
	if (!ctx.cr6.eq) goto loc_82216B9C;
loc_82216C3C:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82216C54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82216c6c
	if (ctx.cr6.eq) goto loc_82216C6C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,582(r11)
	PPC_STORE_U8(ctx.r11.u32 + 582, ctx.r10.u8);
loc_82216C6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8220b088
	ctx.lr = 0x82216C78;
	sub_8220B088(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82216C88"))) PPC_WEAK_FUNC(sub_82216C88);
PPC_FUNC_IMPL(__imp__sub_82216C88) {
	PPC_FUNC_PROLOGUE();
	// b 0x82209bc0
	sub_82209BC0(ctx, base);
	return;
}

extern void RemapLightDash(PPCRegister& r3, PPCRegister& r11);

__attribute__((alias("__imp__sub_82216C90"))) PPC_WEAK_FUNC(sub_82216C90);
PPC_FUNC_IMPL(__imp__sub_82216C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82216C98;
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82208f60
	ctx.lr = 0x82216CB0;
	sub_82208F60(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ld r30,200(r11)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 200);
	// bl 0x82208f60
	ctx.lr = 0x82216CC4;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,24,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r11,0
	RemapLightDash(ctx.r3, ctx.r11);
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82216d28
	if (ctx.cr6.eq) goto loc_82216D28;
	// rlwinm r11,r30,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82216d28
	if (ctx.cr6.eq) goto loc_82216D28;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82209058
	ctx.lr = 0x82216CE8;
	sub_82209058(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82216d28
	if (ctx.cr6.eq) goto loc_82216D28;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,72
	ctx.r4.s64 = 72;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82216D0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82216d28
	if (ctx.cr6.eq) goto loc_82216D28;
loc_82216D18:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_82216D28:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lbz r11,578(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 578);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82216d70
	if (ctx.cr6.eq) goto loc_82216D70;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x82216D40;
	sub_82208F60(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82216d70
	if (ctx.cr6.eq) goto loc_82216D70;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82216D64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82216d18
	if (!ctx.cr6.eq) goto loc_82216D18;
loc_82216D70:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82216D88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82216db8
	if (ctx.cr6.eq) goto loc_82216DB8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,65
	ctx.r4.s64 = 65;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82216DAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82216d18
	if (!ctx.cr6.eq) goto loc_82216D18;
loc_82216DB8:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82216DD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82216e00
	if (ctx.cr6.eq) goto loc_82216E00;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,75
	ctx.r4.s64 = 75;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82216DF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82216d18
	if (!ctx.cr6.eq) goto loc_82216D18;
loc_82216E00:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82216E18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82216e30
	if (ctx.cr6.eq) goto loc_82216E30;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,582(r11)
	PPC_STORE_U8(ctx.r11.u32 + 582, ctx.r10.u8);
loc_82216E30:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x82216E38;
	sub_82208F60(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82216e68
	if (ctx.cr6.eq) goto loc_82216E68;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,66
	ctx.r4.s64 = 66;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82216E5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82216d18
	if (!ctx.cr6.eq) goto loc_82216D18;
loc_82216E68:
	// rlwinm r11,r29,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82216eb0
	if (ctx.cr6.eq) goto loc_82216EB0;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82209058
	ctx.lr = 0x82216E80;
	sub_82209058(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82216eb0
	if (ctx.cr6.eq) goto loc_82216EB0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,71
	ctx.r4.s64 = 71;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82216EA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82216d18
	if (!ctx.cr6.eq) goto loc_82216D18;
loc_82216EB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8220b2d0
	ctx.lr = 0x82216EBC;
	sub_8220B2D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82216EC8"))) PPC_WEAK_FUNC(sub_82216EC8);
PPC_FUNC_IMPL(__imp__sub_82216EC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82209c58
	sub_82209C58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82216ED0"))) PPC_WEAK_FUNC(sub_82216ED0);
PPC_FUNC_IMPL(__imp__sub_82216ED0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82209d38
	sub_82209D38(ctx, base);
	return;
}

extern void RemapLightDash(PPCRegister& r3, PPCRegister& r11);

__attribute__((alias("__imp__sub_82216ED8"))) PPC_WEAK_FUNC(sub_82216ED8);
PPC_FUNC_IMPL(__imp__sub_82216ED8) {
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
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82208f60
	ctx.lr = 0x82216F00;
	sub_82208F60(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ld r30,200(r11)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 200);
	// bl 0x82208f60
	ctx.lr = 0x82216F10;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,24,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r11,0
	RemapLightDash(ctx.r3, ctx.r11);
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82216f6c
	if (ctx.cr6.eq) goto loc_82216F6C;
	// rlwinm r11,r30,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82216f6c
	if (ctx.cr6.eq) goto loc_82216F6C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82209058
	ctx.lr = 0x82216F34;
	sub_82209058(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82216f6c
	if (ctx.cr6.eq) goto loc_82216F6C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,72
	ctx.r4.s64 = 72;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82216F58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82216f6c
	if (ctx.cr6.eq) goto loc_82216F6C;
loc_82216F64:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82216ff8
	goto loc_82216FF8;
loc_82216F6C:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82216F84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82216fb4
	if (ctx.cr6.eq) goto loc_82216FB4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,65
	ctx.r4.s64 = 65;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82216FA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82216f64
	if (!ctx.cr6.eq) goto loc_82216F64;
loc_82216FB4:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x82216FBC;
	sub_82208F60(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82216fec
	if (ctx.cr6.eq) goto loc_82216FEC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,66
	ctx.r4.s64 = 66;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82216FE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82216f64
	if (!ctx.cr6.eq) goto loc_82216F64;
loc_82216FEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8220ddc8
	ctx.lr = 0x82216FF8;
	sub_8220DDC8(ctx, base);
loc_82216FF8:
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

__attribute__((alias("__imp__sub_82217018"))) PPC_WEAK_FUNC(sub_82217018);
PPC_FUNC_IMPL(__imp__sub_82217018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r4,70
	ctx.r4.s64 = 70;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,572(r10)
	PPC_STORE_U8(ctx.r10.u32 + 572, ctx.r11.u8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r11,228(r10)
	PPC_STORE_U8(ctx.r10.u32 + 228, ctx.r11.u8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r11,233(r10)
	PPC_STORE_U8(ctx.r10.u32 + 233, ctx.r11.u8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r11,250(r10)
	PPC_STORE_U8(ctx.r10.u32 + 250, ctx.r11.u8);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f13,596(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 596);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,48(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// b 0x82208f48
	sub_82208F48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82217068"))) PPC_WEAK_FUNC(sub_82217068);
PPC_FUNC_IMPL(__imp__sub_82217068) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,572(r10)
	PPC_STORE_U8(ctx.r10.u32 + 572, ctx.r11.u8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r11,228(r10)
	PPC_STORE_U8(ctx.r10.u32 + 228, ctx.r11.u8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r11,233(r10)
	PPC_STORE_U8(ctx.r10.u32 + 233, ctx.r11.u8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r11,250(r10)
	PPC_STORE_U8(ctx.r10.u32 + 250, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82217090"))) PPC_WEAK_FUNC(sub_82217090);
PPC_FUNC_IMPL(__imp__sub_82217090) {
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
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r30,196(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// lfs f2,600(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 600);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x8220a7e8
	ctx.lr = 0x822170B8;
	sub_8220A7E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220a938
	ctx.lr = 0x822170C0;
	sub_8220A938(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822170d4
	if (ctx.cr6.eq) goto loc_822170D4;
loc_822170CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822171f8
	goto loc_822171F8;
loc_822170D4:
	// rlwinm r11,r30,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82217118
	if (ctx.cr6.eq) goto loc_82217118;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82209068
	ctx.lr = 0x822170E8;
	sub_82209068(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82217118
	if (ctx.cr6.eq) goto loc_82217118;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// b 0x822171f8
	goto loc_822171F8;
loc_82217118:
	// rlwinm r11,r30,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82217138
	if (!ctx.cr6.eq) goto loc_82217138;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82209068
	ctx.lr = 0x8221712C;
	sub_82209068(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822170cc
	if (!ctx.cr6.eq) goto loc_822170CC;
loc_82217138:
	// rlwinm r11,r30,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82217168
	if (ctx.cr6.eq) goto loc_82217168;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,67
	ctx.r4.s64 = 67;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221715C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822170cc
	if (!ctx.cr6.eq) goto loc_822170CC;
loc_82217168:
	// rlwinm r11,r30,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82217198
	if (ctx.cr6.eq) goto loc_82217198;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,33
	ctx.r4.s64 = 33;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221718C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822170cc
	if (!ctx.cr6.eq) goto loc_822170CC;
loc_82217198:
	// rlwinm r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822171d4
	if (ctx.cr6.eq) goto loc_822171D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82209068
	ctx.lr = 0x822171AC;
	sub_82209068(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822171d4
	if (ctx.cr6.eq) goto loc_822171D4;
loc_822171B8:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// b 0x822171f8
	goto loc_822171F8;
loc_822171D4:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822171f4
	if (ctx.cr6.eq) goto loc_822171F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82209068
	ctx.lr = 0x822171E8;
	sub_82209068(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822171b8
	if (!ctx.cr6.eq) goto loc_822171B8;
loc_822171F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822171F8:
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

__attribute__((alias("__imp__sub_82217210"))) PPC_WEAK_FUNC(sub_82217210);
PPC_FUNC_IMPL(__imp__sub_82217210) {
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
	// li r4,70
	ctx.r4.s64 = 70;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82208f48
	ctx.lr = 0x82217230;
	sub_82208F48(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
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

__attribute__((alias("__imp__sub_82217260"))) PPC_WEAK_FUNC(sub_82217260);
PPC_FUNC_IMPL(__imp__sub_82217260) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,231(r10)
	PPC_STORE_U8(ctx.r10.u32 + 231, ctx.r11.u8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r11,572(r10)
	PPC_STORE_U8(ctx.r10.u32 + 572, ctx.r11.u8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r11,228(r10)
	PPC_STORE_U8(ctx.r10.u32 + 228, ctx.r11.u8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r11,233(r10)
	PPC_STORE_U8(ctx.r10.u32 + 233, ctx.r11.u8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r11,250(r10)
	PPC_STORE_U8(ctx.r10.u32 + 250, ctx.r11.u8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r11,575(r10)
	PPC_STORE_U8(ctx.r10.u32 + 575, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82217298"))) PPC_WEAK_FUNC(sub_82217298);
PPC_FUNC_IMPL(__imp__sub_82217298) {
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
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// bl 0x82208f60
	ctx.lr = 0x822172C0;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,14,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 14) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82217314
	if (ctx.cr6.eq) goto loc_82217314;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,648(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 648);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x822172ec
	if (ctx.cr6.gt) goto loc_822172EC;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x82217314
	goto loc_82217314;
loc_822172EC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,66
	ctx.r4.s64 = 66;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82217304;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82217318
	if (!ctx.cr6.eq) goto loc_82217318;
loc_82217314:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82217318:
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

__attribute__((alias("__imp__sub_82217330"))) PPC_WEAK_FUNC(sub_82217330);
PPC_FUNC_IMPL(__imp__sub_82217330) {
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
	// bl 0x82209208
	ctx.lr = 0x82217348;
	sub_82209208(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-21846
	ctx.r11.s64 = -1431699456;
	// ori r9,r11,43691
	ctx.r9.u64 = ctx.r11.u64 | 43691;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r8,r11,17188
	ctx.r8.s64 = ctx.r11.s64 + 17188;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,588(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 588);
	// mulhwu r9,r10,r9
	ctx.r9.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stb r6,252(r11)
	PPC_STORE_U8(ctx.r11.u32 + 252, ctx.r6.u8);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stb r6,227(r11)
	PPC_STORE_U8(ctx.r11.u32 + 227, ctx.r6.u8);
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

__attribute__((alias("__imp__sub_822173B8"))) PPC_WEAK_FUNC(sub_822173B8);
PPC_FUNC_IMPL(__imp__sub_822173B8) {
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
	// bl 0x82209bc0
	ctx.lr = 0x822173D0;
	sub_82209BC0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822173E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r3,65
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 65, ctx.xer);
	// bne cr6,0x82217404
	if (!ctx.cr6.eq) goto loc_82217404;
	// lwz r10,588(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 588);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,588(r11)
	PPC_STORE_U32(ctx.r11.u32 + 588, ctx.r10.u32);
	// b 0x82217408
	goto loc_82217408;
loc_82217404:
	// stw r9,588(r11)
	PPC_STORE_U32(ctx.r11.u32 + 588, ctx.r9.u32);
loc_82217408:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stb r9,227(r11)
	PPC_STORE_U8(ctx.r11.u32 + 227, ctx.r9.u8);
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

extern void RemapLightDash(PPCRegister& r3, PPCRegister& r11);

__attribute__((alias("__imp__sub_82217428"))) PPC_WEAK_FUNC(sub_82217428);
PPC_FUNC_IMPL(__imp__sub_82217428) {
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
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ld r30,200(r11)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 200);
	// bl 0x82208f60
	ctx.lr = 0x82217458;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,24,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r11,0
	RemapLightDash(ctx.r3, ctx.r11);
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822174b4
	if (ctx.cr6.eq) goto loc_822174B4;
	// rlwinm r11,r30,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822174b4
	if (ctx.cr6.eq) goto loc_822174B4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82209058
	ctx.lr = 0x8221747C;
	sub_82209058(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822174b4
	if (ctx.cr6.eq) goto loc_822174B4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,72
	ctx.r4.s64 = 72;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822174A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822174b4
	if (ctx.cr6.eq) goto loc_822174B4;
loc_822174AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8221761c
	goto loc_8221761C;
loc_822174B4:
	// lbz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82217540
	if (ctx.cr6.eq) goto loc_82217540;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822174D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82217508
	if (ctx.cr6.eq) goto loc_82217508;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,65
	ctx.r4.s64 = 65;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822174FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822174ac
	if (!ctx.cr6.eq) goto loc_822174AC;
loc_82217508:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x82217510;
	sub_82208F60(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82217540
	if (ctx.cr6.eq) goto loc_82217540;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,66
	ctx.r4.s64 = 66;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82217534;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822174ac
	if (!ctx.cr6.eq) goto loc_822174AC;
loc_82217540:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x82217548;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,24,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82217590
	if (ctx.cr6.eq) goto loc_82217590;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82209058
	ctx.lr = 0x82217560;
	sub_82209058(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82217590
	if (ctx.cr6.eq) goto loc_82217590;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,71
	ctx.r4.s64 = 71;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82217584;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822174ac
	if (!ctx.cr6.eq) goto loc_822174AC;
loc_82217590:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8220b2d0
	ctx.lr = 0x8221759C;
	sub_8220B2D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822174ac
	if (!ctx.cr6.eq) goto loc_822174AC;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82208f48
	ctx.lr = 0x822175B4;
	sub_82208F48(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822175d0
	if (ctx.cr6.eq) goto loc_822175D0;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82208f48
	ctx.lr = 0x822175D0;
	sub_82208F48(ctx, base);
loc_822175D0:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822175e4
	if (ctx.cr6.eq) goto loc_822175E4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x822175f8
	if (!ctx.cr6.eq) goto loc_822175F8;
loc_822175E4:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
	// stb r9,227(r10)
	PPC_STORE_U8(ctx.r10.u32 + 227, ctx.r9.u8);
loc_822175F8:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82217618
	if (ctx.cr6.eq) goto loc_82217618;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
loc_82217618:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221761C:
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

__attribute__((alias("__imp__sub_82217638"))) PPC_WEAK_FUNC(sub_82217638);
PPC_FUNC_IMPL(__imp__sub_82217638) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,266(r10)
	PPC_STORE_U8(ctx.r10.u32 + 266, ctx.r11.u8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r11,574(r10)
	PPC_STORE_U8(ctx.r10.u32 + 574, ctx.r11.u8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r11,229(r10)
	PPC_STORE_U8(ctx.r10.u32 + 229, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82217658"))) PPC_WEAK_FUNC(sub_82217658);
PPC_FUNC_IMPL(__imp__sub_82217658) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,81
	ctx.r4.s64 = 81;
	// stb r11,240(r10)
	PPC_STORE_U8(ctx.r10.u32 + 240, ctx.r11.u8);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x82208f48
	sub_82208F48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82217670"))) PPC_WEAK_FUNC(sub_82217670);
PPC_FUNC_IMPL(__imp__sub_82217670) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,240(r10)
	PPC_STORE_U8(ctx.r10.u32 + 240, ctx.r11.u8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r11,229(r10)
	PPC_STORE_U8(ctx.r10.u32 + 229, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82217688"))) PPC_WEAK_FUNC(sub_82217688);
PPC_FUNC_IMPL(__imp__sub_82217688) {
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
	// bl 0x82209bc0
	ctx.lr = 0x822176A0;
	sub_82209BC0(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,576(r10)
	PPC_STORE_U8(ctx.r10.u32 + 576, ctx.r11.u8);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stb r11,227(r10)
	PPC_STORE_U8(ctx.r10.u32 + 227, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_822176C8"))) PPC_WEAK_FUNC(sub_822176C8);
PPC_FUNC_IMPL(__imp__sub_822176C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82217704
	if (ctx.cr6.gt) goto loc_82217704;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82217704:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82217794
	if (!ctx.cr6.eq) goto loc_82217794;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82208f88
	ctx.lr = 0x82217718;
	sub_82208F88(ctx, base);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82217730;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r31,392
	ctx.r11.s64 = ctx.r31.s64 + 392;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82217794
	if (ctx.cr6.gt) goto loc_82217794;
	// lfs f0,344(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82217784
	if (ctx.cr6.gt) goto loc_82217784;
	// lfs f0,380(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x82217778
	if (ctx.cr6.lt) goto loc_82217778;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82217778:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// b 0x82217794
	goto loc_82217794;
loc_82217784:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,384(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x8220a7e8
	ctx.lr = 0x82217794;
	sub_8220A7E8(ctx, base);
loc_82217794:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822177B0"))) PPC_WEAK_FUNC(sub_822177B0);
PPC_FUNC_IMPL(__imp__sub_822177B0) {
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
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82217800
	if (ctx.cr6.eq) goto loc_82217800;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8221782c
	if (!ctx.cr6.eq) goto loc_8221782C;
	// bl 0x82217090
	ctx.lr = 0x822177DC;
	sub_82217090(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221782c
	if (ctx.cr6.eq) goto loc_8221782C;
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
loc_82217800:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82217298
	ctx.lr = 0x82217808;
	sub_82217298(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221782c
	if (ctx.cr6.eq) goto loc_8221782C;
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
loc_8221782C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822178bc
	if (ctx.cr6.eq) goto loc_822178BC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82217850
	if (!ctx.cr6.eq) goto loc_82217850;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,231(r11)
	PPC_STORE_U8(ctx.r11.u32 + 231, ctx.r10.u8);
loc_82217850:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// beq cr6,0x822178b0
	if (ctx.cr6.eq) goto loc_822178B0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822178bc
	if (!ctx.cr6.eq) goto loc_822178BC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stb r11,575(r10)
	PPC_STORE_U8(ctx.r10.u32 + 575, ctx.r11.u8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stb r11,572(r10)
	PPC_STORE_U8(ctx.r10.u32 + 572, ctx.r11.u8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stb r11,228(r10)
	PPC_STORE_U8(ctx.r10.u32 + 228, ctx.r11.u8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stb r11,233(r10)
	PPC_STORE_U8(ctx.r10.u32 + 233, ctx.r11.u8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stb r11,250(r10)
	PPC_STORE_U8(ctx.r10.u32 + 250, ctx.r11.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f13,596(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,48(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// b 0x822178bc
	goto loc_822178BC;
loc_822178B0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,231(r11)
	PPC_STORE_U8(ctx.r11.u32 + 231, ctx.r10.u8);
loc_822178BC:
	// li r3,0
	ctx.r3.s64 = 0;
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

extern bool AntigravityRetainsMomentum();

extern bool AntigravityRetainsMomentum();

__attribute__((alias("__imp__sub_822178D8"))) PPC_WEAK_FUNC(sub_822178D8);
PPC_FUNC_IMPL(__imp__sub_822178D8) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,79
	ctx.r4.s64 = 79;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stb r11,266(r10)
	PPC_STORE_U8(ctx.r10.u32 + 266, ctx.r11.u8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stb r11,574(r10)
	PPC_STORE_U8(ctx.r10.u32 + 574, ctx.r11.u8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stb r11,229(r10)
	PPC_STORE_U8(ctx.r10.u32 + 229, ctx.r11.u8);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82208f48
	ctx.lr = 0x82217914;
	sub_82208F48(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221792C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r10,r11,640
	ctx.r10.s64 = ctx.r11.s64 + 640;
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x82217948
	if (!ctx.cr6.lt) goto loc_82217948;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_82217948:
	// addi r9,r11,644
	ctx.r9.s64 = ctx.r11.s64 + 644;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82217960
	if (!ctx.cr6.lt) goto loc_82217960;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82217960:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f13,48(r11)
	if (AntigravityRetainsMomentum()) {
		goto loc_8221796C;
	}
	else {
	}
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
loc_8221796C:
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r11)
	if (AntigravityRetainsMomentum()) {
		goto loc_82217974;
	}
	else {
	}
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
loc_82217974:
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

extern bool UnlimitedAntigravity();

extern void RemapAntigravityExit(PPCRegister& r11, PPCRegister& r30);

__attribute__((alias("__imp__sub_82217988"))) PPC_WEAK_FUNC(sub_82217988);
PPC_FUNC_IMPL(__imp__sub_82217988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82217990;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82208f60
	ctx.lr = 0x822179B0;
	sub_82208F60(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r29,196(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// bl 0x82208f88
	ctx.lr = 0x822179C4;
	sub_82208F88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// bl 0x8220aaf8
	ctx.lr = 0x822179D0;
	sub_8220AAF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82217a64
	if (!ctx.cr6.eq) goto loc_82217A64;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82217a28
	if (ctx.cr6.eq) goto loc_82217A28;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82217a20
	if (!ctx.cr6.eq) goto loc_82217A20;
	// li r4,80
	ctx.r4.s64 = 80;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82208f48
	ctx.lr = 0x82217A08;
	sub_82208F48(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f31,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f31,52(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stb r10,240(r11)
	PPC_STORE_U8(ctx.r11.u32 + 240, ctx.r10.u8);
loc_82217A20:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82217A28:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82217a7c
	if (ctx.cr6.eq) goto loc_82217A7C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82217ad8
	if (!ctx.cr6.eq) goto loc_82217AD8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82217ad8
	if (ctx.cr6.eq) goto loc_82217AD8;
loc_82217A50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82209068
	ctx.lr = 0x82217A58;
	sub_82209068(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82217ad8
	if (ctx.cr6.eq) goto loc_82217AD8;
loc_82217A64:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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
loc_82217A7C:
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82217a9c
	if (UnlimitedAntigravity()) {
		goto loc_82217A98;
	}
	else {
	}
	if (ctx.cr6.lt) goto loc_82217A9C;
loc_82217A98:
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
loc_82217A9C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82217ac8
	if (ctx.cr6.eq) goto loc_82217AC8;
	// rlwinm r11,r30,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r11,0
	RemapAntigravityExit(ctx.r11, ctx.r30);
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82217ac8
	if (!ctx.cr6.eq) goto loc_82217AC8;
	// rlwinm r11,r29,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82217ad8
	if (ctx.cr6.eq) goto loc_82217AD8;
	// b 0x82217ad0
	goto loc_82217AD0;
loc_82217AC8:
	// fcmpu cr6,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// bgt cr6,0x82217a50
	if (ctx.cr6.gt) goto loc_82217A50;
loc_82217AD0:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82217AD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_82217AF0"))) PPC_WEAK_FUNC(sub_82217AF0);
PPC_FUNC_IMPL(__imp__sub_82217AF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82217AF8;
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82208f60
	ctx.lr = 0x82217B10;
	sub_82208F60(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,196(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// bl 0x8220aaf8
	ctx.lr = 0x82217B24;
	sub_8220AAF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82217bc0
	if (!ctx.cr6.eq) goto loc_82217BC0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82217bd0
	if (ctx.cr6.lt) goto loc_82217BD0;
	// bne cr6,0x82217c10
	if (!ctx.cr6.eq) goto loc_82217C10;
	// lfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82217b68
	if (ctx.cr6.lt) goto loc_82217B68;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
loc_82217B68:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82217b84
	if (ctx.cr6.eq) goto loc_82217B84;
	// rlwinm r11,r29,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82217b98
	if (ctx.cr6.eq) goto loc_82217B98;
loc_82217B84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82209068
	ctx.lr = 0x82217B8C;
	sub_82209068(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82217bc0
	if (!ctx.cr6.eq) goto loc_82217BC0;
loc_82217B98:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x82217BA0;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,24,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82217c10
	if (ctx.cr6.eq) goto loc_82217C10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82209068
	ctx.lr = 0x82217BB4;
	sub_82209068(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82217c10
	if (ctx.cr6.eq) goto loc_82217C10;
loc_82217BC0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_82217BD0:
	// rlwinm r11,r30,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82217c10
	if (ctx.cr6.eq) goto loc_82217C10;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r4,82
	ctx.r4.s64 = 82;
	// lfs f13,608(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,48(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// bl 0x82208f48
	ctx.lr = 0x82217C08;
	sub_82208F48(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stb r30,229(r11)
	PPC_STORE_U8(ctx.r11.u32 + 229, ctx.r30.u8);
loc_82217C10:
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82217c34
	if (!ctx.cr6.eq) goto loc_82217C34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82209068
	ctx.lr = 0x82217C24;
	sub_82209068(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82217c38
	if (!ctx.cr6.eq) goto loc_82217C38;
loc_82217C34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82217C38:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

extern void RemapLightDash(PPCRegister& r3, PPCRegister& r11);

extern bool ControllableBoundAttack2(PPCCRRegister& cr6);

extern bool ControllableBoundAttack();

extern bool ControllableBoundAttack();

__attribute__((alias("__imp__sub_82217C48"))) PPC_WEAK_FUNC(sub_82217C48);
PPC_FUNC_IMPL(__imp__sub_82217C48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82217C50;
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
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,196(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	// lwz r28,196(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// ld r30,200(r11)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 200);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82217cb8
	if (ctx.cr6.eq) goto loc_82217CB8;
	// stfs f31,56(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f31,60(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// bl 0x8220aaf8
	ctx.lr = 0x82217C98;
	sub_8220AAF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82217cc8
	if (ctx.cr6.eq) goto loc_82217CC8;
loc_82217CA4:
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_82217CB8:
	// bl 0x8220a938
	ctx.lr = 0x82217CBC;
	sub_8220A938(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82217dac
	if (!ctx.cr6.eq) goto loc_82217DAC;
loc_82217CC8:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x82217CD0;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,24,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r11,0
	RemapLightDash(ctx.r3, ctx.r11);
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82217d24
	if (ctx.cr6.eq) goto loc_82217D24;
	// rlwinm r11,r30,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82217d24
	if (ctx.cr6.eq) goto loc_82217D24;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82209058
	ctx.lr = 0x82217CF4;
	sub_82209058(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82217d24
	if (ctx.cr6.eq) goto loc_82217D24;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,72
	ctx.r4.s64 = 72;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82217D18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82217ca4
	if (!ctx.cr6.eq) goto loc_82217CA4;
loc_82217D24:
	// rlwinm r11,r28,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82217d54
	if (ctx.cr6.eq) goto loc_82217D54;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,33
	ctx.r4.s64 = 33;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82217D48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82217ca4
	if (!ctx.cr6.eq) goto loc_82217CA4;
loc_82217D54:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82217dc0
	if (ctx.cr6.eq) goto loc_82217DC0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82217ec4
	if (!ctx.cr6.eq) goto loc_82217EC4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82217d94
	if (ctx.cr6.eq) goto loc_82217D94;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stb r30,577(r11)
	PPC_STORE_U8(ctx.r11.u32 + 577, ctx.r30.u8);
	// b 0x82217ec4
	goto loc_82217EC4;
loc_82217D94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x8220b088
	ctx.lr = 0x82217DA0;
	sub_8220B088(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82217ec4
	if (ctx.cr6.eq) goto loc_82217EC4;
loc_82217DAC:
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_82217DC0:
	// rlwinm r11,r28,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82217dd8
	if (ControllableBoundAttack2(ctx.cr6)) {
		goto loc_82217DD8;
	}
	else {
		goto loc_82217DCC;
	}
	if (ctx.cr6.eq) goto loc_82217DD8;
loc_82217DCC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stb r30,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r30.u8);
	// stb r29,227(r11)
	PPC_STORE_U8(ctx.r11.u32 + 227, ctx.r29.u8);
loc_82217DD8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,632(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 632);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82217e88
	if (ctx.cr6.gt) goto loc_82217E88;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x82217DF4;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,24,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82217e08
	if (ctx.cr6.eq) goto loc_82217E08;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_82217E08:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82217E20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82217e50
	if (ctx.cr6.eq) goto loc_82217E50;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,65
	ctx.r4.s64 = 65;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82217E44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82217ca4
	if (!ctx.cr6.eq) goto loc_82217CA4;
loc_82217E50:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x82217E58;
	sub_82208F60(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82217e88
	if (ctx.cr6.eq) goto loc_82217E88;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,66
	ctx.r4.s64 = 66;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82217E7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82217ca4
	if (!ctx.cr6.eq) goto loc_82217CA4;
loc_82217E88:
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82217eac
	if (ctx.cr6.eq) goto loc_82217EAC;
	// rlwinm r11,r28,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82217eac
	if (ctx.cr6.eq) goto loc_82217EAC;
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82208f48
	ctx.lr = 0x82217EAC;
	sub_82208F48(ctx, base);
loc_82217EAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x8220b088
	ctx.lr = 0x82217EB8;
	sub_8220B088(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82217ca4
	if (!ctx.cr6.eq) goto loc_82217CA4;
loc_82217EC4:
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82217ee8
	if (!ctx.cr6.eq) goto loc_82217EE8;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stfs f31,48(r11)
	if (ControllableBoundAttack()) {
		goto loc_82217EE4;
	}
	else {
	}
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
loc_82217EE4:
	// stfs f31,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
loc_82217EE8:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82217fac
	if (ctx.cr6.eq) goto loc_82217FAC;
	// stfs f31,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82217f5c
	if (ctx.cr6.eq) goto loc_82217F5C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82217fac
	if (!ctx.cr6.eq) goto loc_82217FAC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r4,83
	ctx.r4.s64 = 83;
	// stb r29,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r29.u8);
	// stb r30,227(r11)
	if (ControllableBoundAttack()) {
		goto loc_82217F20;
	}
	else {
	}
	PPC_STORE_U8(ctx.r11.u32 + 227, ctx.r30.u8);
loc_82217F20:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82208f48
	ctx.lr = 0x82217F28;
	sub_82208F48(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,628(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f31,60(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stb r30,576(r11)
	PPC_STORE_U8(ctx.r11.u32 + 576, ctx.r30.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stb r30,252(r11)
	PPC_STORE_U8(ctx.r11.u32 + 252, ctx.r30.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82217F5C:
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82217f78
	if (ctx.cr6.gt) goto loc_82217F78;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82217F78:
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r9,r9,154
	ctx.r9.s64 = ctx.r9.s64 + 154;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f31,60(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stb r29,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r29.u8);
	// stb r30,227(r11)
	PPC_STORE_U8(ctx.r11.u32 + 227, ctx.r30.u8);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82217FAC:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82217FC0"))) PPC_WEAK_FUNC(sub_82217FC0);
PPC_FUNC_IMPL(__imp__sub_82217FC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,564(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82218060
	if (ctx.cr6.eq) goto loc_82218060;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82218060
	if (ctx.cr6.eq) goto loc_82218060;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82218060
	if (ctx.cr6.gt) goto loc_82218060;
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// addi r12,r12,-32768
	ctx.r12.s64 = ctx.r12.s64 + -32768;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82218020;
	case 1:
		goto loc_82218028;
	case 2:
		goto loc_82218030;
	case 3:
		goto loc_82218038;
	case 4:
		goto loc_82218040;
	case 5:
		goto loc_82218048;
	case 6:
		goto loc_82218050;
	case 7:
		goto loc_82218058;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-32736(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32736);
	// lwz r17,-32728(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32728);
	// lwz r17,-32720(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32720);
	// lwz r17,-32712(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32712);
	// lwz r17,-32704(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32704);
	// lwz r17,-32696(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32696);
	// lwz r17,-32688(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32688);
	// lwz r17,-32680(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32680);
loc_82218020:
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x8223efe8
	sub_8223EFE8(ctx, base);
	return;
loc_82218028:
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x8223efe8
	sub_8223EFE8(ctx, base);
	return;
loc_82218030:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8223efe8
	sub_8223EFE8(ctx, base);
	return;
loc_82218038:
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x8223efe8
	sub_8223EFE8(ctx, base);
	return;
loc_82218040:
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x8223efe8
	sub_8223EFE8(ctx, base);
	return;
loc_82218048:
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x8223efe8
	sub_8223EFE8(ctx, base);
	return;
loc_82218050:
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x8223efe8
	sub_8223EFE8(ctx, base);
	return;
loc_82218058:
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x8223efe8
	sub_8223EFE8(ctx, base);
	return;
loc_82218060:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82218068"))) PPC_WEAK_FUNC(sub_82218068);
PPC_FUNC_IMPL(__imp__sub_82218068) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,564(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
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
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// addi r12,r12,-32600
	ctx.r12.s64 = ctx.r12.s64 + -32600;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_822180C8;
	case 1:
		goto loc_822180D0;
	case 2:
		goto loc_822180D8;
	case 3:
		goto loc_822180E0;
	case 4:
		goto loc_822180E8;
	case 5:
		goto loc_822180F0;
	case 6:
		goto loc_822180F8;
	case 7:
		goto loc_82218100;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-32568(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32568);
	// lwz r17,-32560(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32560);
	// lwz r17,-32552(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32552);
	// lwz r17,-32544(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32544);
	// lwz r17,-32536(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32536);
	// lwz r17,-32528(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32528);
	// lwz r17,-32520(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32520);
	// lwz r17,-32512(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32512);
loc_822180C8:
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x8223f138
	sub_8223F138(ctx, base);
	return;
loc_822180D0:
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x8223f138
	sub_8223F138(ctx, base);
	return;
loc_822180D8:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8223f138
	sub_8223F138(ctx, base);
	return;
loc_822180E0:
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x8223f138
	sub_8223F138(ctx, base);
	return;
loc_822180E8:
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x8223f138
	sub_8223F138(ctx, base);
	return;
loc_822180F0:
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x8223f138
	sub_8223F138(ctx, base);
	return;
loc_822180F8:
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x8223f138
	sub_8223F138(ctx, base);
	return;
loc_82218100:
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x8223f138
	sub_8223F138(ctx, base);
	return;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82218110"))) PPC_WEAK_FUNC(sub_82218110);
PPC_FUNC_IMPL(__imp__sub_82218110) {
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
	// bl 0x8220e908
	ctx.lr = 0x82218130;
	sub_8220E908(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-19884
	ctx.r11.s64 = ctx.r11.s64 + -19884;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82218154;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r11,30632
	ctx.r6.s64 = ctx.r11.s64 + 30632;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,29796
	ctx.r5.s64 = ctx.r11.s64 + 29796;
	// bl 0x826df418
	ctx.lr = 0x82218174;
	sub_826DF418(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8221818c
	if (ctx.cr6.eq) goto loc_8221818C;
	// bl 0x821601b8
	ctx.lr = 0x8221818C;
	sub_821601B8(ctx, base);
loc_8221818C:
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

__attribute__((alias("__imp__sub_822181A8"))) PPC_WEAK_FUNC(sub_822181A8);
PPC_FUNC_IMPL(__imp__sub_822181A8) {
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
	// bl 0x8220e9a0
	ctx.lr = 0x822181C8;
	sub_8220E9A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-19836
	ctx.r11.s64 = ctx.r11.s64 + -19836;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822181EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r11,30632
	ctx.r6.s64 = ctx.r11.s64 + 30632;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,29796
	ctx.r5.s64 = ctx.r11.s64 + 29796;
	// bl 0x826df418
	ctx.lr = 0x8221820C;
	sub_826DF418(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// beq cr6,0x82218224
	if (ctx.cr6.eq) goto loc_82218224;
	// bl 0x821601b8
	ctx.lr = 0x82218224;
	sub_821601B8(ctx, base);
loc_82218224:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
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

__attribute__((alias("__imp__sub_82218250"))) PPC_WEAK_FUNC(sub_82218250);
PPC_FUNC_IMPL(__imp__sub_82218250) {
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
	// bl 0x8220e9f8
	ctx.lr = 0x82218270;
	sub_8220E9F8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-19788
	ctx.r11.s64 = ctx.r11.s64 + -19788;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82218294;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r11,30632
	ctx.r6.s64 = ctx.r11.s64 + 30632;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,29796
	ctx.r5.s64 = ctx.r11.s64 + 29796;
	// bl 0x826df418
	ctx.lr = 0x822182B4;
	sub_826DF418(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x822182cc
	if (ctx.cr6.eq) goto loc_822182CC;
	// bl 0x821601b8
	ctx.lr = 0x822182CC;
	sub_821601B8(ctx, base);
loc_822182CC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
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

__attribute__((alias("__imp__sub_822182F8"))) PPC_WEAK_FUNC(sub_822182F8);
PPC_FUNC_IMPL(__imp__sub_822182F8) {
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
	// bl 0x8220ea38
	ctx.lr = 0x82218318;
	sub_8220EA38(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-19740
	ctx.r11.s64 = ctx.r11.s64 + -19740;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221833C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r11,30632
	ctx.r6.s64 = ctx.r11.s64 + 30632;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,29796
	ctx.r5.s64 = ctx.r11.s64 + 29796;
	// bl 0x826df418
	ctx.lr = 0x8221835C;
	sub_826DF418(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x82218374
	if (ctx.cr6.eq) goto loc_82218374;
	// bl 0x821601b8
	ctx.lr = 0x82218374;
	sub_821601B8(ctx, base);
loc_82218374:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
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

__attribute__((alias("__imp__sub_822183A0"))) PPC_WEAK_FUNC(sub_822183A0);
PPC_FUNC_IMPL(__imp__sub_822183A0) {
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
	// bl 0x8220ea78
	ctx.lr = 0x822183C0;
	sub_8220EA78(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-19688
	ctx.r11.s64 = ctx.r11.s64 + -19688;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822183E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r11,30632
	ctx.r6.s64 = ctx.r11.s64 + 30632;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,29796
	ctx.r5.s64 = ctx.r11.s64 + 29796;
	// bl 0x826df418
	ctx.lr = 0x82218404;
	sub_826DF418(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// beq cr6,0x8221841c
	if (ctx.cr6.eq) goto loc_8221841C;
	// bl 0x821601b8
	ctx.lr = 0x8221841C;
	sub_821601B8(ctx, base);
loc_8221841C:
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

__attribute__((alias("__imp__sub_82218438"))) PPC_WEAK_FUNC(sub_82218438);
PPC_FUNC_IMPL(__imp__sub_82218438) {
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
	// bl 0x8220eac8
	ctx.lr = 0x82218458;
	sub_8220EAC8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-19636
	ctx.r11.s64 = ctx.r11.s64 + -19636;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221847C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r11,30632
	ctx.r6.s64 = ctx.r11.s64 + 30632;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,29796
	ctx.r5.s64 = ctx.r11.s64 + 29796;
	// bl 0x826df418
	ctx.lr = 0x8221849C;
	sub_826DF418(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// beq cr6,0x822184b4
	if (ctx.cr6.eq) goto loc_822184B4;
	// bl 0x821601b8
	ctx.lr = 0x822184B4;
	sub_821601B8(ctx, base);
loc_822184B4:
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

__attribute__((alias("__imp__sub_822184D0"))) PPC_WEAK_FUNC(sub_822184D0);
PPC_FUNC_IMPL(__imp__sub_822184D0) {
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
	// bl 0x8220f150
	ctx.lr = 0x822184F0;
	sub_8220F150(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-19584
	ctx.r11.s64 = ctx.r11.s64 + -19584;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82218514;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r11,30632
	ctx.r6.s64 = ctx.r11.s64 + 30632;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,29796
	ctx.r5.s64 = ctx.r11.s64 + 29796;
	// bl 0x826df418
	ctx.lr = 0x82218534;
	sub_826DF418(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// beq cr6,0x8221854c
	if (ctx.cr6.eq) goto loc_8221854C;
	// bl 0x821601b8
	ctx.lr = 0x8221854C;
	sub_821601B8(ctx, base);
loc_8221854C:
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

__attribute__((alias("__imp__sub_82218568"))) PPC_WEAK_FUNC(sub_82218568);
PPC_FUNC_IMPL(__imp__sub_82218568) {
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
	// bl 0x82218110
	ctx.lr = 0x82218580;
	sub_82218110(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-19536
	ctx.r11.s64 = ctx.r11.s64 + -19536;
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

__attribute__((alias("__imp__sub_822185A8"))) PPC_WEAK_FUNC(sub_822185A8);
PPC_FUNC_IMPL(__imp__sub_822185A8) {
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
	// bl 0x82218110
	ctx.lr = 0x822185C0;
	sub_82218110(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-19488
	ctx.r11.s64 = ctx.r11.s64 + -19488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82218600"))) PPC_WEAK_FUNC(sub_82218600);
PPC_FUNC_IMPL(__imp__sub_82218600) {
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
	// bl 0x8220eac8
	ctx.lr = 0x82218620;
	sub_8220EAC8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-19440
	ctx.r11.s64 = ctx.r11.s64 + -19440;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82218644;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r11,30632
	ctx.r6.s64 = ctx.r11.s64 + 30632;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,29796
	ctx.r5.s64 = ctx.r11.s64 + 29796;
	// bl 0x826df418
	ctx.lr = 0x82218664;
	sub_826DF418(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// beq cr6,0x8221867c
	if (ctx.cr6.eq) goto loc_8221867C;
	// bl 0x821601b8
	ctx.lr = 0x8221867C;
	sub_821601B8(ctx, base);
loc_8221867C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_822186A8"))) PPC_WEAK_FUNC(sub_822186A8);
PPC_FUNC_IMPL(__imp__sub_822186A8) {
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
	// bl 0x82218110
	ctx.lr = 0x822186C0;
	sub_82218110(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-19388
	ctx.r11.s64 = ctx.r11.s64 + -19388;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f0,604(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 604);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82218700"))) PPC_WEAK_FUNC(sub_82218700);
PPC_FUNC_IMPL(__imp__sub_82218700) {
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
	// bl 0x82218110
	ctx.lr = 0x82218718;
	sub_82218110(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-19340
	ctx.r11.s64 = ctx.r11.s64 + -19340;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f0,612(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 612);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
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

__attribute__((alias("__imp__sub_82218750"))) PPC_WEAK_FUNC(sub_82218750);
PPC_FUNC_IMPL(__imp__sub_82218750) {
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
	// bl 0x8220ea78
	ctx.lr = 0x82218770;
	sub_8220EA78(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-19292
	ctx.r11.s64 = ctx.r11.s64 + -19292;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82218794;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r11,30632
	ctx.r6.s64 = ctx.r11.s64 + 30632;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,29796
	ctx.r5.s64 = ctx.r11.s64 + 29796;
	// bl 0x826df418
	ctx.lr = 0x822187B4;
	sub_826DF418(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// beq cr6,0x822187cc
	if (ctx.cr6.eq) goto loc_822187CC;
	// bl 0x821601b8
	ctx.lr = 0x822187CC;
	sub_821601B8(ctx, base);
loc_822187CC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stb r11,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82218800"))) PPC_WEAK_FUNC(sub_82218800);
PPC_FUNC_IMPL(__imp__sub_82218800) {
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
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r6,r11,12672
	ctx.r6.s64 = ctx.r11.s64 + 12672;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,30176
	ctx.r5.s64 = ctx.r11.s64 + 30176;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x826df418
	ctx.lr = 0x8221883C;
	sub_826DF418(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq cr6,0x82218854
	if (ctx.cr6.eq) goto loc_82218854;
	// bl 0x82160140
	ctx.lr = 0x82218854;
	sub_82160140(ctx, base);
loc_82218854:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82218878
	if (!ctx.cr6.eq) goto loc_82218878;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82218870
	if (ctx.cr6.eq) goto loc_82218870;
	// bl 0x821601b8
	ctx.lr = 0x82218870;
	sub_821601B8(ctx, base);
loc_82218870:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82218878:
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

__attribute__((alias("__imp__sub_82218898"))) PPC_WEAK_FUNC(sub_82218898);
PPC_FUNC_IMPL(__imp__sub_82218898) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x8221890c
	if (!ctx.cr6.eq) goto loc_8221890C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82217fc0
	ctx.lr = 0x822188D4;
	sub_82217FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221890c
	if (ctx.cr6.eq) goto loc_8221890C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82208f60
	ctx.lr = 0x822188E8;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,16,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221890c
	if (ctx.cr6.eq) goto loc_8221890C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82218068
	ctx.lr = 0x82218904;
	sub_82218068(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82218910
	goto loc_82218910;
loc_8221890C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82218910:
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

__attribute__((alias("__imp__sub_82218930"))) PPC_WEAK_FUNC(sub_82218930);
PPC_FUNC_IMPL(__imp__sub_82218930) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x822189a4
	if (!ctx.cr6.eq) goto loc_822189A4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82217fc0
	ctx.lr = 0x8221896C;
	sub_82217FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822189a4
	if (ctx.cr6.eq) goto loc_822189A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82208f60
	ctx.lr = 0x82218980;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,14,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 14) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822189a4
	if (ctx.cr6.eq) goto loc_822189A4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82218068
	ctx.lr = 0x8221899C;
	sub_82218068(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822189a8
	goto loc_822189A8;
loc_822189A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822189A8:
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

__attribute__((alias("__imp__sub_822189C8"))) PPC_WEAK_FUNC(sub_822189C8);
PPC_FUNC_IMPL(__imp__sub_822189C8) {
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
	// lwz r11,592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82218a18
	if (!ctx.cr6.eq) goto loc_82218A18;
	// bl 0x82217fc0
	ctx.lr = 0x822189EC;
	sub_82217FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82218a18
	if (ctx.cr6.eq) goto loc_82218A18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82208f60
	ctx.lr = 0x82218A00;
	sub_82208F60(ctx, base);
	// rlwinm r3,r3,15,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 15) & 0x1;
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
loc_82218A18:
	// li r3,0
	ctx.r3.s64 = 0;
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

extern void RemapLightDash(PPCRegister& r3, PPCRegister& r11);

__attribute__((alias("__imp__sub_82218A30"))) PPC_WEAK_FUNC(sub_82218A30);
PPC_FUNC_IMPL(__imp__sub_82218A30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82218A38;
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r10,80
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 80, ctx.xer);
	// bne cr6,0x82218a78
	if (!ctx.cr6.eq) goto loc_82218A78;
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82218a78
	if (ctx.cr6.eq) goto loc_82218A78;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f48
	ctx.lr = 0x82218A78;
	sub_82208F48(ctx, base);
loc_82218A78:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82208f60
	ctx.lr = 0x82218A80;
	sub_82208F60(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ld r29,200(r11)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r11.u32 + 200);
	// bl 0x82208f60
	ctx.lr = 0x82218A90;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 23) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x82218ab4
	if (ctx.cr6.eq) goto loc_82218AB4;
	// lfs f0,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// b 0x82218ab8
	goto loc_82218AB8;
loc_82218AB4:
	// stfs f30,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
loc_82218AB8:
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 592);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82218af4
	if (!ctx.cr6.eq) goto loc_82218AF4;
	// li r4,5
	ctx.r4.s64 = 5;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82217fc0
	ctx.lr = 0x82218AD8;
	sub_82217FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82218af4
	if (ctx.cr6.eq) goto loc_82218AF4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82208f60
	ctx.lr = 0x82218AEC;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 15) & 0x1;
	// b 0x82218af8
	goto loc_82218AF8;
loc_82218AF4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82218AF8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82218b14
	if (ctx.cr6.eq) goto loc_82218B14;
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// b 0x82218b18
	goto loc_82218B18;
loc_82218B14:
	// stfs f30,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
loc_82218B18:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x82218B20;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,24,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r11,0
	RemapLightDash(ctx.r3, ctx.r11);
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82218b88
	if (ctx.cr6.eq) goto loc_82218B88;
	// rlwinm r11,r29,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x4000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82218b88
	if (ctx.cr6.eq) goto loc_82218B88;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82209058
	ctx.lr = 0x82218B44;
	sub_82209058(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82218b88
	if (ctx.cr6.eq) goto loc_82218B88;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,72
	ctx.r4.s64 = 72;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82218B68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82218b88
	if (ctx.cr6.eq) goto loc_82218B88;
loc_82218B74:
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_82218B88:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x82218B90;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,22,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 22) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82218bc0
	if (ctx.cr6.eq) goto loc_82218BC0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,69
	ctx.r4.s64 = 69;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82218BB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82218b74
	if (!ctx.cr6.eq) goto loc_82218B74;
loc_82218BC0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,500(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 500);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82218bf8
	if (ctx.cr6.gt) goto loc_82218BF8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,70
	ctx.r4.s64 = 70;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82218BEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82218b74
	if (!ctx.cr6.eq) goto loc_82218B74;
loc_82218BF8:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82218C10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82218c40
	if (ctx.cr6.eq) goto loc_82218C40;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,73
	ctx.r4.s64 = 73;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82218C34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82218b74
	if (!ctx.cr6.eq) goto loc_82218B74;
loc_82218C40:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82218C58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82218c88
	if (ctx.cr6.eq) goto loc_82218C88;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,74
	ctx.r4.s64 = 74;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82218C7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82218b74
	if (!ctx.cr6.eq) goto loc_82218B74;
loc_82218C88:
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82218930
	ctx.lr = 0x82218C94;
	sub_82218930(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82218cc4
	if (ctx.cr6.eq) goto loc_82218CC4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,46
	ctx.r4.s64 = 46;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82218CB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82218b74
	if (!ctx.cr6.eq) goto loc_82218B74;
loc_82218CC4:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,500(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 500);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82218cfc
	if (ctx.cr6.gt) goto loc_82218CFC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,47
	ctx.r4.s64 = 47;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82218CF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82218b74
	if (!ctx.cr6.eq) goto loc_82218B74;
loc_82218CFC:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82218D14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82218d44
	if (ctx.cr6.eq) goto loc_82218D44;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,77
	ctx.r4.s64 = 77;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82218D38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82218b74
	if (!ctx.cr6.eq) goto loc_82218B74;
loc_82218D44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8220cf80
	ctx.lr = 0x82218D50;
	sub_8220CF80(ctx, base);
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

extern void RemapLightDash(PPCRegister& r3, PPCRegister& r11);

extern void RemapAntigravityEnter(PPCRegister& r11, PPCRegister& r28);

__attribute__((alias("__imp__sub_82218D60"))) PPC_WEAK_FUNC(sub_82218D60);
PPC_FUNC_IMPL(__imp__sub_82218D60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82218D68;
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82208f60
	ctx.lr = 0x82218D80;
	sub_82208F60(ctx, base);
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 592);
	// ld r29,200(r30)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r30.u32 + 200);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82218dc4
	if (!ctx.cr6.eq) goto loc_82218DC4;
	// li r4,5
	ctx.r4.s64 = 5;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82217fc0
	ctx.lr = 0x82218DA8;
	sub_82217FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82218dc4
	if (ctx.cr6.eq) goto loc_82218DC4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82208f60
	ctx.lr = 0x82218DBC;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 15) & 0x1;
	// b 0x82218dc8
	goto loc_82218DC8;
loc_82218DC4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82218DC8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82218de0
	if (ctx.cr6.eq) goto loc_82218DE0;
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// b 0x82218de8
	goto loc_82218DE8;
loc_82218DE0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
loc_82218DE8:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// bl 0x82208f60
	ctx.lr = 0x82218DF4;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,24,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r11,0
	RemapLightDash(ctx.r3, ctx.r11);
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82218e58
	if (ctx.cr6.eq) goto loc_82218E58;
	// rlwinm r11,r29,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x4000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82218e58
	if (ctx.cr6.eq) goto loc_82218E58;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82209058
	ctx.lr = 0x82218E18;
	sub_82209058(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82218e58
	if (ctx.cr6.eq) goto loc_82218E58;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,72
	ctx.r4.s64 = 72;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82218E3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82218e58
	if (ctx.cr6.eq) goto loc_82218E58;
loc_82218E48:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82218E58:
	// rlwinm r11,r28,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r11,0
	RemapAntigravityEnter(ctx.r11, ctx.r28);
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82218ea0
	if (ctx.cr6.eq) goto loc_82218EA0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82209058
	ctx.lr = 0x82218E70;
	sub_82209058(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82218ea0
	if (ctx.cr6.eq) goto loc_82218EA0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,68
	ctx.r4.s64 = 68;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82218E94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82218e48
	if (!ctx.cr6.eq) goto loc_82218E48;
loc_82218EA0:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x82218EA8;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,22,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 22) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82218ed8
	if (ctx.cr6.eq) goto loc_82218ED8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,69
	ctx.r4.s64 = 69;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82218ECC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82218e48
	if (!ctx.cr6.eq) goto loc_82218E48;
loc_82218ED8:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82218EF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82218f20
	if (ctx.cr6.eq) goto loc_82218F20;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,73
	ctx.r4.s64 = 73;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82218F14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82218e48
	if (!ctx.cr6.eq) goto loc_82218E48;
loc_82218F20:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82218F38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82218f68
	if (ctx.cr6.eq) goto loc_82218F68;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,74
	ctx.r4.s64 = 74;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82218F5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82218e48
	if (!ctx.cr6.eq) goto loc_82218E48;
loc_82218F68:
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82218930
	ctx.lr = 0x82218F74;
	sub_82218930(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82218fa4
	if (ctx.cr6.eq) goto loc_82218FA4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,46
	ctx.r4.s64 = 46;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82218F98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82218e48
	if (!ctx.cr6.eq) goto loc_82218E48;
loc_82218FA4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,500(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 500);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82218fdc
	if (ctx.cr6.gt) goto loc_82218FDC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,47
	ctx.r4.s64 = 47;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82218FD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82218e48
	if (!ctx.cr6.eq) goto loc_82218E48;
loc_82218FDC:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82218FF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82219024
	if (ctx.cr6.eq) goto loc_82219024;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,77
	ctx.r4.s64 = 77;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82219018;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82218e48
	if (!ctx.cr6.eq) goto loc_82218E48;
loc_82219024:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8220ac18
	ctx.lr = 0x82219030;
	sub_8220AC18(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

extern void RemapLightDash(PPCRegister& r3, PPCRegister& r11);

extern void RemapAntigravityEnter(PPCRegister& r11, PPCRegister& r28);

__attribute__((alias("__imp__sub_82219040"))) PPC_WEAK_FUNC(sub_82219040);
PPC_FUNC_IMPL(__imp__sub_82219040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82219048;
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82208f60
	ctx.lr = 0x82219060;
	sub_82208F60(ctx, base);
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 592);
	// ld r29,200(r30)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r30.u32 + 200);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x822190a4
	if (!ctx.cr6.eq) goto loc_822190A4;
	// li r4,5
	ctx.r4.s64 = 5;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82217fc0
	ctx.lr = 0x82219088;
	sub_82217FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822190a4
	if (ctx.cr6.eq) goto loc_822190A4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82208f60
	ctx.lr = 0x8221909C;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 15) & 0x1;
	// b 0x822190a8
	goto loc_822190A8;
loc_822190A4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822190A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822190c0
	if (ctx.cr6.eq) goto loc_822190C0;
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// b 0x822190c8
	goto loc_822190C8;
loc_822190C0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
loc_822190C8:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// bl 0x82208f60
	ctx.lr = 0x822190D4;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,24,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r11,0
	RemapLightDash(ctx.r3, ctx.r11);
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82219138
	if (ctx.cr6.eq) goto loc_82219138;
	// rlwinm r11,r29,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x4000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82219138
	if (ctx.cr6.eq) goto loc_82219138;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82209058
	ctx.lr = 0x822190F8;
	sub_82209058(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82219138
	if (ctx.cr6.eq) goto loc_82219138;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,72
	ctx.r4.s64 = 72;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221911C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82219138
	if (ctx.cr6.eq) goto loc_82219138;
loc_82219128:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82219138:
	// rlwinm r11,r28,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r11,0
	RemapAntigravityEnter(ctx.r11, ctx.r28);
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82219180
	if (ctx.cr6.eq) goto loc_82219180;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82209058
	ctx.lr = 0x82219150;
	sub_82209058(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82219180
	if (ctx.cr6.eq) goto loc_82219180;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,68
	ctx.r4.s64 = 68;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82219174;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82219128
	if (!ctx.cr6.eq) goto loc_82219128;
loc_82219180:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x82219188;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,22,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 22) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822191b8
	if (ctx.cr6.eq) goto loc_822191B8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,69
	ctx.r4.s64 = 69;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822191AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82219128
	if (!ctx.cr6.eq) goto loc_82219128;
loc_822191B8:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822191D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82219200
	if (ctx.cr6.eq) goto loc_82219200;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,73
	ctx.r4.s64 = 73;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822191F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82219128
	if (!ctx.cr6.eq) goto loc_82219128;
loc_82219200:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82219218;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82219248
	if (ctx.cr6.eq) goto loc_82219248;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,74
	ctx.r4.s64 = 74;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221923C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82219128
	if (!ctx.cr6.eq) goto loc_82219128;
loc_82219248:
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82218930
	ctx.lr = 0x82219254;
	sub_82218930(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82219284
	if (ctx.cr6.eq) goto loc_82219284;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,46
	ctx.r4.s64 = 46;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82219278;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82219128
	if (!ctx.cr6.eq) goto loc_82219128;
loc_82219284:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,500(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 500);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x822192bc
	if (ctx.cr6.gt) goto loc_822192BC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,47
	ctx.r4.s64 = 47;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822192B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82219128
	if (!ctx.cr6.eq) goto loc_82219128;
loc_822192BC:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822192D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82219304
	if (ctx.cr6.eq) goto loc_82219304;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,77
	ctx.r4.s64 = 77;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822192F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82219128
	if (!ctx.cr6.eq) goto loc_82219128;
loc_82219304:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8220ae28
	ctx.lr = 0x82219310;
	sub_8220AE28(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82219320"))) PPC_WEAK_FUNC(sub_82219320);
PPC_FUNC_IMPL(__imp__sub_82219320) {
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
	// bl 0x8220e4b0
	ctx.lr = 0x82219338;
	sub_8220E4B0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,-19108
	ctx.r11.s64 = ctx.r11.s64 + -19108;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r10,r10,-19184
	ctx.r10.s64 = ctx.r10.s64 + -19184;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-19120
	ctx.r9.s64 = ctx.r9.s64 + -19120;
	// addi r8,r8,-19176
	ctx.r8.s64 = ctx.r8.s64 + -19176;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// addi r7,r7,-19216
	ctx.r7.s64 = ctx.r7.s64 + -19216;
	// addi r6,r6,-19228
	ctx.r6.s64 = ctx.r6.s64 + -19228;
	// addi r5,r5,-19240
	ctx.r5.s64 = ctx.r5.s64 + -19240;
	// stw r11,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// stw r6,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r6.u32);
	// stw r5,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r5.u32);
	// stw r11,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r11.u32);
	// stw r11,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r11.u32);
	// stfs f0,596(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 596, temp.u32);
	// stfs f0,600(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 600, temp.u32);
	// stb r11,572(r31)
	PPC_STORE_U8(ctx.r31.u32 + 572, ctx.r11.u8);
	// stfs f0,604(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 604, temp.u32);
	// stb r11,573(r31)
	PPC_STORE_U8(ctx.r31.u32 + 573, ctx.r11.u8);
	// stfs f0,608(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 608, temp.u32);
	// stb r11,574(r31)
	PPC_STORE_U8(ctx.r31.u32 + 574, ctx.r11.u8);
	// stfs f0,612(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 612, temp.u32);
	// stb r11,575(r31)
	PPC_STORE_U8(ctx.r31.u32 + 575, ctx.r11.u8);
	// stfs f0,624(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 624, temp.u32);
	// stb r11,576(r31)
	PPC_STORE_U8(ctx.r31.u32 + 576, ctx.r11.u8);
	// stfs f0,628(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 628, temp.u32);
	// stb r11,577(r31)
	PPC_STORE_U8(ctx.r31.u32 + 577, ctx.r11.u8);
	// stfs f0,632(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 632, temp.u32);
	// stb r11,578(r31)
	PPC_STORE_U8(ctx.r31.u32 + 578, ctx.r11.u8);
	// stfs f0,636(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 636, temp.u32);
	// stb r11,579(r31)
	PPC_STORE_U8(ctx.r31.u32 + 579, ctx.r11.u8);
	// stfs f0,640(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 640, temp.u32);
	// stb r11,580(r31)
	PPC_STORE_U8(ctx.r31.u32 + 580, ctx.r11.u8);
	// stfs f0,644(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 644, temp.u32);
	// stb r11,581(r31)
	PPC_STORE_U8(ctx.r31.u32 + 581, ctx.r11.u8);
	// stfs f0,648(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 648, temp.u32);
	// stb r11,582(r31)
	PPC_STORE_U8(ctx.r31.u32 + 582, ctx.r11.u8);
	// stfs f0,652(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 652, temp.u32);
	// stb r11,583(r31)
	PPC_STORE_U8(ctx.r31.u32 + 583, ctx.r11.u8);
	// stfs f0,656(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 656, temp.u32);
	// stb r11,584(r31)
	PPC_STORE_U8(ctx.r31.u32 + 584, ctx.r11.u8);
	// stfs f0,660(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 660, temp.u32);
	// stb r10,585(r31)
	PPC_STORE_U8(ctx.r31.u32 + 585, ctx.r10.u8);
	// stfs f0,664(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 664, temp.u32);
	// stw r11,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r11.u32);
	// stfs f0,668(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 668, temp.u32);
	// stw r11,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r11.u32);
	// stfs f0,672(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 672, temp.u32);
	// stfs f0,676(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 676, temp.u32);
	// stfs f0,680(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 680, temp.u32);
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

__attribute__((alias("__imp__sub_82219450"))) PPC_WEAK_FUNC(sub_82219450);
PPC_FUNC_IMPL(__imp__sub_82219450) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-36
	ctx.r3.s64 = ctx.r3.s64 + -36;
	// b 0x82214100
	sub_82214100(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82219458"))) PPC_WEAK_FUNC(sub_82219458);
PPC_FUNC_IMPL(__imp__sub_82219458) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x82214100
	sub_82214100(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82219460"))) PPC_WEAK_FUNC(sub_82219460);
PPC_FUNC_IMPL(__imp__sub_82219460) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8220f330
	ctx.lr = 0x82219480;
	sub_8220F330(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8221949c
	if (ctx.cr6.lt) goto loc_8221949C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x822194a0
	goto loc_822194A0;
loc_8221949C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_822194A0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82219514
	if (ctx.cr6.eq) goto loc_82219514;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,13988
	ctx.r10.s64 = ctx.r10.s64 + 13988;
loc_822194B0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822194d4
	if (ctx.cr6.eq) goto loc_822194D4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822194b0
	if (ctx.cr6.eq) goto loc_822194B0;
loc_822194D4:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82219514
	if (!ctx.cr6.eq) goto loc_82219514;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82218800
	ctx.lr = 0x822194F8;
	sub_82218800(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r30,528
	ctx.r3.s64 = ctx.r30.s64 + 528;
	// bl 0x8221f3c8
	ctx.lr = 0x82219504;
	sub_8221F3C8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82219514
	if (ctx.cr6.eq) goto loc_82219514;
	// bl 0x821601b8
	ctx.lr = 0x82219514;
	sub_821601B8(ctx, base);
loc_82219514:
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

extern void SonicGauge_FixFlags(PPCRegister& r3, PPCRegister& r31);

__attribute__((alias("__imp__sub_82219530"))) PPC_WEAK_FUNC(sub_82219530);
PPC_FUNC_IMPL(__imp__sub_82219530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82219538;
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lbz r29,585(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 585);
	// bl 0x82208f60
	ctx.lr = 0x82219550;
	sub_82208F60(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82219584
	if (ctx.cr6.eq) goto loc_82219584;
	// rlwinm r11,r30,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82219570
	if (ctx.cr6.eq) goto loc_82219570;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82216950
	ctx.lr = 0x82219570;
	sub_82216950(ctx, base);
loc_82219570:
	// rlwinm r11,r30,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82219584
	if (ctx.cr6.eq) goto loc_82219584;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822169e8
	ctx.lr = 0x82219584;
	sub_822169E8(ctx, base);
loc_82219584:
	// lwz r11,592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822195c0
	if (!ctx.cr6.eq) goto loc_822195C0;
	// li r4,2
	ctx.r4.s64 = 2;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82217fc0
	ctx.lr = 0x822195A4;
	sub_82217FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822195c0
	if (ctx.cr6.eq) goto loc_822195C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82208f60
	ctx.lr = 0x822195B8;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 15) & 0x1;
	// b 0x822195c4
	goto loc_822195C4;
loc_822195C0:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_822195C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822195f4
	if (ctx.cr6.eq) goto loc_822195F4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822195f4
	if (ctx.cr6.eq) goto loc_822195F4;
	// li r4,2
	ctx.r4.s64 = 2;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82218068
	ctx.lr = 0x822195EC;
	sub_82218068(ctx, base);
	// stb r30,583(r31)
	PPC_STORE_U8(ctx.r31.u32 + 583, ctx.r30.u8);
	// b 0x822195f8
	goto loc_822195F8;
loc_822195F4:
	// stb r28,583(r31)
	PPC_STORE_U8(ctx.r31.u32 + 583, ctx.r28.u8);
loc_822195F8:
	// lwz r11,592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82219630
	if (!ctx.cr6.eq) goto loc_82219630;
	// li r4,4
	ctx.r4.s64 = 4;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82217fc0
	ctx.lr = 0x82219614;
	sub_82217FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82219630
	if (ctx.cr6.eq) goto loc_82219630;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82208f60
	ctx.lr = 0x82219628;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 15) & 0x1;
	// b 0x82219634
	goto loc_82219634;
loc_82219630:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82219634:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82219660
	if (ctx.cr6.eq) goto loc_82219660;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82219660
	if (ctx.cr6.eq) goto loc_82219660;
	// li r4,4
	ctx.r4.s64 = 4;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82218068
	ctx.lr = 0x82219658;
	sub_82218068(ctx, base);
	// stb r30,578(r31)
	PPC_STORE_U8(ctx.r31.u32 + 578, ctx.r30.u8);
	// b 0x82219664
	goto loc_82219664;
loc_82219660:
	// stb r28,578(r31)
	PPC_STORE_U8(ctx.r31.u32 + 578, ctx.r28.u8);
loc_82219664:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221967C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82219698
	if (ctx.cr6.eq) goto loc_82219698;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82219698
	if (ctx.cr6.eq) goto loc_82219698;
	// stb r30,579(r31)
	PPC_STORE_U8(ctx.r31.u32 + 579, ctx.r30.u8);
	// stb r30,260(r31)
	PPC_STORE_U8(ctx.r31.u32 + 260, ctx.r30.u8);
loc_82219698:
	// lbz r11,579(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 579);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822196b4
	if (ctx.cr6.eq) goto loc_822196B4;
	// lbz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822196b4
	if (!ctx.cr6.eq) goto loc_822196B4;
	// stb r28,579(r31)
	PPC_STORE_U8(ctx.r31.u32 + 579, ctx.r28.u8);
loc_822196B4:
	// lwz r3,564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822196ec
	if (ctx.cr6.eq) goto loc_822196EC;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822196ec
	if (ctx.cr6.eq) goto loc_822196EC;
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822196e8
	if (!ctx.cr6.eq) goto loc_822196E8;
	// bl 0x8223efb8
	ctx.lr = 0x822196E4;
	sub_8223EFB8(ctx, base);
	// b 0x822196ec
	goto loc_822196EC;
loc_822196E8:
	// bl 0x8223efd8
	ctx.lr = 0x822196EC;
	sub_8223EFD8(ctx, base);
loc_822196EC:
	// mr r3,r31
	SonicGauge_FixFlags(ctx.r3, ctx.r31);
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8220a000
	ctx.lr = 0x822196F8;
	sub_8220A000(ctx, base);
	// lbz r11,572(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 572);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// bne cr6,0x8221970c
	if (!ctx.cr6.eq) goto loc_8221970C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8221970C:
	// lbz r10,573(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 573);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// stw r10,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r10.u32);
	// bne cr6,0x8221972c
	if (!ctx.cr6.eq) goto loc_8221972C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8221972C:
	// lbz r9,584(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 584);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lbz r8,581(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 581);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// lbz r7,580(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 580);
	// lbz r6,576(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 576);
	// subfe r10,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lbz r5,575(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 575);
	// subfic r8,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r8.s64;
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// lbz r9,574(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 574);
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lbz r4,579(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 579);
	// subfic r7,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r7.s64;
	// lbz r3,578(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 578);
	// rlwimi r10,r8,0,23,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x100) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFEFF);
	// lbz r30,583(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 583);
	// subfe r11,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r8,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r6.s64;
	// rlwimi r10,r11,0,24,24
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x80) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF7F);
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r8,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r5.s64;
	// rlwimi r10,r11,0,29,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x4) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFB);
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r8,172(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwimi r10,r11,0,30,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x2) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFD);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// lbz r9,577(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 577);
	// stb r28,577(r31)
	PPC_STORE_U8(ctx.r31.u32 + 577, ctx.r28.u8);
	// andi. r10,r10,1414
	ctx.r10.u64 = ctx.r10.u64 & 1414;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lbz r10,582(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 582);
	// stb r28,582(r31)
	PPC_STORE_U8(ctx.r31.u32 + 582, ctx.r28.u8);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r7,r4,0
	ctx.xer.ca = ctx.r4.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r4.s64;
	// rlwinm r10,r10,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	// subfe r7,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r6,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r3.s64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// subfe r10,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r7,r7,0,25,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x40;
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// rlwinm r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r7,r30,0
	ctx.xer.ca = ctx.r30.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r30.s64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r10,r9,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// subfe r9,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r10,r9,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82219820"))) PPC_WEAK_FUNC(sub_82219820);
PPC_FUNC_IMPL(__imp__sub_82219820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82219828;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-832(r1)
	ea = -832 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x8220f5c8
	ctx.lr = 0x8221983C;
	sub_8220F5C8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r11,-26796
	ctx.r4.s64 = ctx.r11.s64 + -26796;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// stw r31,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r31.u32);
	// stw r30,616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 616, ctx.r30.u32);
	// stb r31,596(r1)
	PPC_STORE_U8(ctx.r1.u32 + 596, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82219864;
	sub_82161E08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ea350
	ctx.lr = 0x8221987C;
	sub_821EA350(ctx, base);
	// lwz r11,616(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 616);
	// stfs f1,564(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 564, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82219894
	if (ctx.cr6.lt) goto loc_82219894;
	// lwz r3,596(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// bl 0x82186190
	ctx.lr = 0x82219894;
	sub_82186190(ctx, base);
loc_82219894:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 616, ctx.r30.u32);
	// li r5,14
	ctx.r5.s64 = 14;
	// stw r31,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r31.u32);
	// addi r4,r11,-26564
	ctx.r4.s64 = ctx.r11.s64 + -26564;
	// stb r31,596(r1)
	PPC_STORE_U8(ctx.r1.u32 + 596, ctx.r31.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stb r31,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x822198C0;
	sub_82161E08(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x822198D0;
	sub_821EA350(ctx, base);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stfs f1,568(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 568, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822198e8
	if (ctx.cr6.lt) goto loc_822198E8;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82186190
	ctx.lr = 0x822198E8;
	sub_82186190(ctx, base);
loc_822198E8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// li r5,14
	ctx.r5.s64 = 14;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// addi r4,r11,-18704
	ctx.r4.s64 = ctx.r11.s64 + -18704;
	// stb r31,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r31.u8);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// stw r30,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r30.u32);
	// stw r31,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r31.u32);
	// stb r31,468(r1)
	PPC_STORE_U8(ctx.r1.u32 + 468, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82219914;
	sub_82161E08(ctx, base);
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x82219924;
	sub_821EA350(ctx, base);
	// lwz r11,488(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 488);
	// stfs f1,572(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 572, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8221993c
	if (ctx.cr6.lt) goto loc_8221993C;
	// lwz r3,468(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// bl 0x82186190
	ctx.lr = 0x8221993C;
	sub_82186190(ctx, base);
loc_8221993C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r30.u32);
	// li r5,14
	ctx.r5.s64 = 14;
	// stw r31,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r31.u32);
	// addi r4,r11,-18720
	ctx.r4.s64 = ctx.r11.s64 + -18720;
	// stb r31,468(r1)
	PPC_STORE_U8(ctx.r1.u32 + 468, ctx.r31.u8);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stw r30,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r30.u32);
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// stb r31,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82219968;
	sub_82161E08(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x82219978;
	sub_821EA350(ctx, base);
	// lwz r11,232(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// stfs f1,576(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 576, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82219990
	if (ctx.cr6.lt) goto loc_82219990;
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// bl 0x82186190
	ctx.lr = 0x82219990;
	sub_82186190(ctx, base);
loc_82219990:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r30.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// addi r4,r11,-18736
	ctx.r4.s64 = ctx.r11.s64 + -18736;
	// stb r31,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r31.u8);
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// stw r30,744(r1)
	PPC_STORE_U32(ctx.r1.u32 + 744, ctx.r30.u32);
	// stw r31,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r31.u32);
	// stb r31,724(r1)
	PPC_STORE_U8(ctx.r1.u32 + 724, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x822199BC;
	sub_82161E08(ctx, base);
	// addi r4,r1,720
	ctx.r4.s64 = ctx.r1.s64 + 720;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x822199CC;
	sub_821EA350(ctx, base);
	// lwz r11,744(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 744);
	// stfs f1,580(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 580, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822199e4
	if (ctx.cr6.lt) goto loc_822199E4;
	// lwz r3,724(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 724);
	// bl 0x82186190
	ctx.lr = 0x822199E4;
	sub_82186190(ctx, base);
loc_822199E4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,744(r1)
	PPC_STORE_U32(ctx.r1.u32 + 744, ctx.r30.u32);
	// li r5,18
	ctx.r5.s64 = 18;
	// stw r31,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r31.u32);
	// addi r4,r11,-18756
	ctx.r4.s64 = ctx.r11.s64 + -18756;
	// stb r31,724(r1)
	PPC_STORE_U8(ctx.r1.u32 + 724, ctx.r31.u8);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stw r30,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r30.u32);
	// stw r31,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r31.u32);
	// stb r31,276(r1)
	PPC_STORE_U8(ctx.r1.u32 + 276, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82219A10;
	sub_82161E08(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x82219A20;
	sub_821EA350(ctx, base);
	// lwz r11,296(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// stfs f1,584(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 584, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82219a38
	if (ctx.cr6.lt) goto loc_82219A38;
	// lwz r3,276(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// bl 0x82186190
	ctx.lr = 0x82219A38;
	sub_82186190(ctx, base);
loc_82219A38:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r30.u32);
	// li r5,18
	ctx.r5.s64 = 18;
	// stw r31,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r31.u32);
	// addi r4,r11,-18776
	ctx.r4.s64 = ctx.r11.s64 + -18776;
	// stb r31,276(r1)
	PPC_STORE_U8(ctx.r1.u32 + 276, ctx.r31.u8);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// stw r30,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, ctx.r30.u32);
	// stw r31,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r31.u32);
	// stb r31,532(r1)
	PPC_STORE_U8(ctx.r1.u32 + 532, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82219A64;
	sub_82161E08(ctx, base);
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x82219A74;
	sub_821EA350(ctx, base);
	// lwz r11,552(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 552);
	// stfs f1,588(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 588, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82219a8c
	if (ctx.cr6.lt) goto loc_82219A8C;
	// lwz r3,532(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// bl 0x82186190
	ctx.lr = 0x82219A8C;
	sub_82186190(ctx, base);
loc_82219A8C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, ctx.r30.u32);
	// li r5,17
	ctx.r5.s64 = 17;
	// stw r31,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r31.u32);
	// addi r4,r11,-22104
	ctx.r4.s64 = ctx.r11.s64 + -22104;
	// stb r31,532(r1)
	PPC_STORE_U8(ctx.r1.u32 + 532, ctx.r31.u8);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// stw r30,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r30.u32);
	// stw r31,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r31.u32);
	// stb r31,340(r1)
	PPC_STORE_U8(ctx.r1.u32 + 340, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82219AB8;
	sub_82161E08(ctx, base);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x82219AC8;
	sub_821EA350(ctx, base);
	// lwz r11,360(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// stfs f1,592(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 592, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82219ae0
	if (ctx.cr6.lt) goto loc_82219AE0;
	// lwz r3,340(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// bl 0x82186190
	ctx.lr = 0x82219AE0;
	sub_82186190(ctx, base);
loc_82219AE0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r30.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// stw r31,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r31.u32);
	// addi r4,r11,-18792
	ctx.r4.s64 = ctx.r11.s64 + -18792;
	// stb r31,340(r1)
	PPC_STORE_U8(ctx.r1.u32 + 340, ctx.r31.u8);
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// stw r30,680(r1)
	PPC_STORE_U32(ctx.r1.u32 + 680, ctx.r30.u32);
	// stw r31,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r31.u32);
	// stb r31,660(r1)
	PPC_STORE_U8(ctx.r1.u32 + 660, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82219B0C;
	sub_82161E08(ctx, base);
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x82219B1C;
	sub_821EA350(ctx, base);
	// lwz r11,680(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 680);
	// stfs f1,596(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 596, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82219b34
	if (ctx.cr6.lt) goto loc_82219B34;
	// lwz r3,660(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 660);
	// bl 0x82186190
	ctx.lr = 0x82219B34;
	sub_82186190(ctx, base);
loc_82219B34:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,680(r1)
	PPC_STORE_U32(ctx.r1.u32 + 680, ctx.r30.u32);
	// li r5,17
	ctx.r5.s64 = 17;
	// stw r31,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r31.u32);
	// addi r4,r11,-18812
	ctx.r4.s64 = ctx.r11.s64 + -18812;
	// stb r31,660(r1)
	PPC_STORE_U8(ctx.r1.u32 + 660, ctx.r31.u8);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// stw r30,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r30.u32);
	// stw r31,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r31.u32);
	// stb r31,404(r1)
	PPC_STORE_U8(ctx.r1.u32 + 404, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82219B60;
	sub_82161E08(ctx, base);
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x82219B70;
	sub_821EA350(ctx, base);
	// lwz r11,424(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	// stfs f1,600(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 600, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82219b88
	if (ctx.cr6.lt) goto loc_82219B88;
	// lwz r3,404(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// bl 0x82186190
	ctx.lr = 0x82219B88;
	sub_82186190(ctx, base);
loc_82219B88:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r30.u32);
	// li r5,14
	ctx.r5.s64 = 14;
	// stw r31,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r31.u32);
	// addi r4,r11,-18828
	ctx.r4.s64 = ctx.r11.s64 + -18828;
	// stb r31,404(r1)
	PPC_STORE_U8(ctx.r1.u32 + 404, ctx.r31.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82219BB4;
	sub_82161E08(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x82219BC4;
	sub_821EA350(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f1,604(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 604, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82219bdc
	if (ctx.cr6.lt) goto loc_82219BDC;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x82219BDC;
	sub_82186190(ctx, base);
loc_82219BDC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// li r5,19
	ctx.r5.s64 = 19;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r4,r11,-18848
	ctx.r4.s64 = ctx.r11.s64 + -18848;
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stb r31,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82219C08;
	sub_82161E08(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x82219C18;
	sub_821EA350(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stfs f1,608(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 608, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82219c30
	if (ctx.cr6.lt) goto loc_82219C30;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82186190
	ctx.lr = 0x82219C30;
	sub_82186190(ctx, base);
loc_82219C30:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// li r5,19
	ctx.r5.s64 = 19;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r4,r11,-18868
	ctx.r4.s64 = ctx.r11.s64 + -18868;
	// stb r31,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r31.u8);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r30.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stb r31,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82219C5C;
	sub_82161E08(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x82219C6C;
	sub_821EA350(ctx, base);
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// stfs f1,612(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 612, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82219c84
	if (ctx.cr6.lt) goto loc_82219C84;
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x82186190
	ctx.lr = 0x82219C84;
	sub_82186190(ctx, base);
loc_82219C84:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r30.u32);
	// li r5,21
	ctx.r5.s64 = 21;
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// addi r4,r11,-18892
	ctx.r4.s64 = ctx.r11.s64 + -18892;
	// stb r31,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r31.u8);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r30,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r30.u32);
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r31.u32);
	// stb r31,244(r1)
	PPC_STORE_U8(ctx.r1.u32 + 244, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82219CB0;
	sub_82161E08(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x82219CC0;
	sub_821EA350(ctx, base);
	// lwz r11,264(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// stfs f1,616(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 616, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82219cd8
	if (ctx.cr6.lt) goto loc_82219CD8;
	// lwz r3,244(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// bl 0x82186190
	ctx.lr = 0x82219CD8;
	sub_82186190(ctx, base);
loc_82219CD8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r30.u32);
	// li r5,25
	ctx.r5.s64 = 25;
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r31.u32);
	// addi r4,r11,-18920
	ctx.r4.s64 = ctx.r11.s64 + -18920;
	// stb r31,244(r1)
	PPC_STORE_U8(ctx.r1.u32 + 244, ctx.r31.u8);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stw r30,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r30.u32);
	// stw r31,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r31.u32);
	// stb r31,308(r1)
	PPC_STORE_U8(ctx.r1.u32 + 308, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82219D04;
	sub_82161E08(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x82219D14;
	sub_821EA350(ctx, base);
	// lwz r11,328(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// stfs f1,620(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 620, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82219d2c
	if (ctx.cr6.lt) goto loc_82219D2C;
	// lwz r3,308(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// bl 0x82186190
	ctx.lr = 0x82219D2C;
	sub_82186190(ctx, base);
loc_82219D2C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r30.u32);
	// li r5,29
	ctx.r5.s64 = 29;
	// stw r31,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r31.u32);
	// addi r4,r11,-18952
	ctx.r4.s64 = ctx.r11.s64 + -18952;
	// stb r31,308(r1)
	PPC_STORE_U8(ctx.r1.u32 + 308, ctx.r31.u8);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// stw r30,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r30.u32);
	// stw r31,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r31.u32);
	// stb r31,372(r1)
	PPC_STORE_U8(ctx.r1.u32 + 372, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82219D58;
	sub_82161E08(ctx, base);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x82219D68;
	sub_821EA350(ctx, base);
	// lwz r11,392(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	// stfs f1,624(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 624, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82219d80
	if (ctx.cr6.lt) goto loc_82219D80;
	// lwz r3,372(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// bl 0x82186190
	ctx.lr = 0x82219D80;
	sub_82186190(ctx, base);
loc_82219D80:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r30.u32);
	// li r5,30
	ctx.r5.s64 = 30;
	// stw r31,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r31.u32);
	// addi r4,r11,-18984
	ctx.r4.s64 = ctx.r11.s64 + -18984;
	// stb r31,372(r1)
	PPC_STORE_U8(ctx.r1.u32 + 372, ctx.r31.u8);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// stw r30,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r30.u32);
	// stw r31,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r31.u32);
	// stb r31,436(r1)
	PPC_STORE_U8(ctx.r1.u32 + 436, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82219DAC;
	sub_82161E08(ctx, base);
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x82219DBC;
	sub_821EA350(ctx, base);
	// lwz r11,456(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 456);
	// stfs f1,628(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 628, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82219dd4
	if (ctx.cr6.lt) goto loc_82219DD4;
	// lwz r3,436(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// bl 0x82186190
	ctx.lr = 0x82219DD4;
	sub_82186190(ctx, base);
loc_82219DD4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r30.u32);
	// li r5,21
	ctx.r5.s64 = 21;
	// stw r31,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r31.u32);
	// addi r4,r11,-19008
	ctx.r4.s64 = ctx.r11.s64 + -19008;
	// stb r31,436(r1)
	PPC_STORE_U8(ctx.r1.u32 + 436, ctx.r31.u8);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// stw r30,520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 520, ctx.r30.u32);
	// stw r31,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r31.u32);
	// stb r31,500(r1)
	PPC_STORE_U8(ctx.r1.u32 + 500, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82219E00;
	sub_82161E08(ctx, base);
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x82219E10;
	sub_821EA350(ctx, base);
	// lwz r11,520(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 520);
	// stfs f1,632(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 632, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82219e28
	if (ctx.cr6.lt) goto loc_82219E28;
	// lwz r3,500(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// bl 0x82186190
	ctx.lr = 0x82219E28;
	sub_82186190(ctx, base);
loc_82219E28:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 520, ctx.r30.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// stw r31,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r31.u32);
	// addi r4,r11,-19024
	ctx.r4.s64 = ctx.r11.s64 + -19024;
	// stb r31,500(r1)
	PPC_STORE_U8(ctx.r1.u32 + 500, ctx.r31.u8);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// stw r30,584(r1)
	PPC_STORE_U32(ctx.r1.u32 + 584, ctx.r30.u32);
	// stw r31,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r31.u32);
	// stb r31,564(r1)
	PPC_STORE_U8(ctx.r1.u32 + 564, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82219E54;
	sub_82161E08(ctx, base);
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x82219E64;
	sub_821EA350(ctx, base);
	// lwz r11,584(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 584);
	// stfs f1,636(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 636, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82219e7c
	if (ctx.cr6.lt) goto loc_82219E7C;
	// lwz r3,564(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// bl 0x82186190
	ctx.lr = 0x82219E7C;
	sub_82186190(ctx, base);
loc_82219E7C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,584(r1)
	PPC_STORE_U32(ctx.r1.u32 + 584, ctx.r30.u32);
	// li r5,22
	ctx.r5.s64 = 22;
	// stw r31,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r31.u32);
	// addi r4,r11,-19048
	ctx.r4.s64 = ctx.r11.s64 + -19048;
	// stb r31,564(r1)
	PPC_STORE_U8(ctx.r1.u32 + 564, ctx.r31.u8);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// stw r30,648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 648, ctx.r30.u32);
	// stw r31,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r31.u32);
	// stb r31,628(r1)
	PPC_STORE_U8(ctx.r1.u32 + 628, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82219EA8;
	sub_82161E08(ctx, base);
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x82219EB8;
	sub_821EA350(ctx, base);
	// lwz r11,648(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 648);
	// stfs f1,640(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 640, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82219ed0
	if (ctx.cr6.lt) goto loc_82219ED0;
	// lwz r3,628(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// bl 0x82186190
	ctx.lr = 0x82219ED0;
	sub_82186190(ctx, base);
loc_82219ED0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 648, ctx.r30.u32);
	// li r5,18
	ctx.r5.s64 = 18;
	// stw r31,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r31.u32);
	// addi r4,r11,-19068
	ctx.r4.s64 = ctx.r11.s64 + -19068;
	// stb r31,628(r1)
	PPC_STORE_U8(ctx.r1.u32 + 628, ctx.r31.u8);
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// stw r30,712(r1)
	PPC_STORE_U32(ctx.r1.u32 + 712, ctx.r30.u32);
	// stw r31,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r31.u32);
	// stb r31,692(r1)
	PPC_STORE_U8(ctx.r1.u32 + 692, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82219EFC;
	sub_82161E08(ctx, base);
	// addi r4,r1,688
	ctx.r4.s64 = ctx.r1.s64 + 688;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x82219F0C;
	sub_821EA350(ctx, base);
	// lwz r11,712(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 712);
	// stfs f1,644(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 644, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82219f24
	if (ctx.cr6.lt) goto loc_82219F24;
	// lwz r3,692(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 692);
	// bl 0x82186190
	ctx.lr = 0x82219F24;
	sub_82186190(ctx, base);
loc_82219F24:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,712(r1)
	PPC_STORE_U32(ctx.r1.u32 + 712, ctx.r30.u32);
	// li r5,18
	ctx.r5.s64 = 18;
	// stw r31,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r31.u32);
	// addi r4,r11,-19088
	ctx.r4.s64 = ctx.r11.s64 + -19088;
	// stb r31,692(r1)
	PPC_STORE_U8(ctx.r1.u32 + 692, ctx.r31.u8);
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// stw r30,776(r1)
	PPC_STORE_U32(ctx.r1.u32 + 776, ctx.r30.u32);
	// stw r31,772(r1)
	PPC_STORE_U32(ctx.r1.u32 + 772, ctx.r31.u32);
	// stb r31,756(r1)
	PPC_STORE_U8(ctx.r1.u32 + 756, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82219F50;
	sub_82161E08(ctx, base);
	// addi r4,r1,752
	ctx.r4.s64 = ctx.r1.s64 + 752;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x82219F60;
	sub_821EA350(ctx, base);
	// lwz r11,776(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 776);
	// stfs f1,648(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 648, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82219f78
	if (ctx.cr6.lt) goto loc_82219F78;
	// lwz r3,756(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 756);
	// bl 0x82186190
	ctx.lr = 0x82219F78;
	sub_82186190(ctx, base);
loc_82219F78:
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82219F88"))) PPC_WEAK_FUNC(sub_82219F88);
PPC_FUNC_IMPL(__imp__sub_82219F88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f13,352(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r10,565(r3)
	PPC_STORE_U8(ctx.r3.u32 + 565, ctx.r10.u8);
	// stfs f13,48(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82219FA8"))) PPC_WEAK_FUNC(sub_82219FA8);
PPC_FUNC_IMPL(__imp__sub_82219FA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,7004(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7004);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,580(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 580, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82219FB8"))) PPC_WEAK_FUNC(sub_82219FB8);
PPC_FUNC_IMPL(__imp__sub_82219FB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,580(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,588(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f0,f0,f31,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f13.f64));
	// lfs f13,568(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,568(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 568, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x8221a004
	if (!ctx.cr6.lt) goto loc_8221A004;
	// stfs f30,568(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 568, temp.u32);
loc_8221A004:
	// lwz r3,296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221a044
	if (ctx.cr6.eq) goto loc_8221A044;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221a044
	if (ctx.cr6.eq) goto loc_8221A044;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f0,568(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221A044;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221A044:
	// lfs f0,588(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f13,572(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,584(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f13,572(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 572, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8221a068
	if (!ctx.cr6.lt) goto loc_8221A068;
	// stfs f0,572(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 572, temp.u32);
loc_8221A068:
	// lfs f13,576(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f13,576(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 576, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8221a080
	if (!ctx.cr6.lt) goto loc_8221A080;
	// stfs f0,576(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 576, temp.u32);
loc_8221A080:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8220a000
	ctx.lr = 0x8221A08C;
	sub_8220A000(ctx, base);
	// lbz r11,563(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 563);
	// lbz r10,564(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 564);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// lbz r9,562(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 562);
	// lbz r8,561(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 561);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r7,172(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// lbz r6,565(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 565);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// rlwimi r11,r10,0,22,22
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x200) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFDFF);
	// subfe r10,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cntlzw r9,r8
	ctx.r9.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwimi r11,r10,0,30,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x2) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// andi. r11,r11,578
	ctx.r11.u64 = ctx.r11.u64 & 578;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// bne cr6,0x8221a0f4
	if (!ctx.cr6.eq) goto loc_8221A0F4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8221A0F4:
	// lwz r9,156(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lbz r8,566(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 566);
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// stw r9,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
	// bne cr6,0x8221a114
	if (!ctx.cr6.eq) goto loc_8221A114;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8221A114:
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// lbz r9,567(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 567);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lis r9,4
	ctx.r9.s64 = 262144;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// bne cr6,0x8221a130
	if (!ctx.cr6.eq) goto loc_8221A130;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_8221A130:
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// lfs f0,568(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,600(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 600);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,8
	ctx.r9.s64 = 524288;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// ble cr6,0x8221a150
	if (!ctx.cr6.gt) goto loc_8221A150;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_8221A150:
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stfs f30,580(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 580, temp.u32);
	// stb r10,561(r31)
	PPC_STORE_U8(ctx.r31.u32 + 561, ctx.r10.u8);
	// stb r10,562(r31)
	PPC_STORE_U8(ctx.r31.u32 + 562, ctx.r10.u8);
	// stb r10,564(r31)
	PPC_STORE_U8(ctx.r31.u32 + 564, ctx.r10.u8);
	// stb r10,565(r31)
	PPC_STORE_U8(ctx.r31.u32 + 565, ctx.r10.u8);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stb r10,566(r31)
	PPC_STORE_U8(ctx.r31.u32 + 566, ctx.r10.u8);
	// stb r10,567(r31)
	PPC_STORE_U8(ctx.r31.u32 + 567, ctx.r10.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221A190"))) PPC_WEAK_FUNC(sub_8221A190);
PPC_FUNC_IMPL(__imp__sub_8221A190) {
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
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r3,604(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 604);
	// stb r30,566(r31)
	PPC_STORE_U8(ctx.r31.u32 + 566, ctx.r30.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221a20c
	if (ctx.cr6.eq) goto loc_8221A20C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221a20c
	if (ctx.cr6.eq) goto loc_8221A20C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,596(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221A1E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,604(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 604);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221A1F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,14088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x8221a20c
	if (!ctx.cr6.eq) goto loc_8221A20C;
	// stb r30,567(r31)
	PPC_STORE_U8(ctx.r31.u32 + 567, ctx.r30.u8);
loc_8221A20C:
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

__attribute__((alias("__imp__sub_8221A228"))) PPC_WEAK_FUNC(sub_8221A228);
PPC_FUNC_IMPL(__imp__sub_8221A228) {
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
	// lwz r3,604(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 604);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221a28c
	if (ctx.cr6.eq) goto loc_8221A28C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221a28c
	if (ctx.cr6.eq) goto loc_8221A28C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221A260;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,14088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x8221a278
	if (ctx.cr6.eq) goto loc_8221A278;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221A278:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8221A28C:
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

__attribute__((alias("__imp__sub_8221A2A0"))) PPC_WEAK_FUNC(sub_8221A2A0);
PPC_FUNC_IMPL(__imp__sub_8221A2A0) {
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
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r6,r11,30088
	ctx.r6.s64 = ctx.r11.s64 + 30088;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,30136
	ctx.r5.s64 = ctx.r11.s64 + 30136;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x826df418
	ctx.lr = 0x8221A2DC;
	sub_826DF418(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq cr6,0x8221a2f4
	if (ctx.cr6.eq) goto loc_8221A2F4;
	// bl 0x82160140
	ctx.lr = 0x8221A2F4;
	sub_82160140(ctx, base);
loc_8221A2F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221a318
	if (!ctx.cr6.eq) goto loc_8221A318;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221a310
	if (ctx.cr6.eq) goto loc_8221A310;
	// bl 0x821601b8
	ctx.lr = 0x8221A310;
	sub_821601B8(ctx, base);
loc_8221A310:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8221A318:
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

__attribute__((alias("__imp__sub_8221A338"))) PPC_WEAK_FUNC(sub_8221A338);
PPC_FUNC_IMPL(__imp__sub_8221A338) {
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
	// bl 0x8220e4b0
	ctx.lr = 0x8221A350;
	sub_8220E4B0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// stfs f0,580(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 580, temp.u32);
	// addi r11,r11,-18660
	ctx.r11.s64 = ctx.r11.s64 + -18660;
	// stfs f0,584(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 584, temp.u32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// stfs f0,588(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 588, temp.u32);
	// addi r10,r10,-18540
	ctx.r10.s64 = ctx.r10.s64 + -18540;
	// stfs f0,592(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 592, temp.u32);
	// addi r9,r9,-18552
	ctx.r9.s64 = ctx.r9.s64 + -18552;
	// stfs f0,600(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 600, temp.u32);
	// addi r8,r8,-18608
	ctx.r8.s64 = ctx.r8.s64 + -18608;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r7,-18640
	ctx.r7.s64 = ctx.r7.s64 + -18640;
	// addi r6,r6,-18672
	ctx.r6.s64 = ctx.r6.s64 + -18672;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// addi r5,r5,-18684
	ctx.r5.s64 = ctx.r5.s64 + -18684;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// stb r11,560(r31)
	PPC_STORE_U8(ctx.r31.u32 + 560, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// stw r6,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r6.u32);
	// stw r5,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r5.u32);
	// stb r11,561(r31)
	PPC_STORE_U8(ctx.r31.u32 + 561, ctx.r11.u8);
	// stb r11,562(r31)
	PPC_STORE_U8(ctx.r31.u32 + 562, ctx.r11.u8);
	// stb r11,563(r31)
	PPC_STORE_U8(ctx.r31.u32 + 563, ctx.r11.u8);
	// stb r11,564(r31)
	PPC_STORE_U8(ctx.r31.u32 + 564, ctx.r11.u8);
	// stb r11,565(r31)
	PPC_STORE_U8(ctx.r31.u32 + 565, ctx.r11.u8);
	// stb r11,566(r31)
	PPC_STORE_U8(ctx.r31.u32 + 566, ctx.r11.u8);
	// stb r11,567(r31)
	PPC_STORE_U8(ctx.r31.u32 + 567, ctx.r11.u8);
	// stw r11,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r11.u32);
	// stw r11,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r11.u32);
	// stw r11,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r11.u32);
	// stw r11,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r11.u32);
	// stw r11,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r11.u32);
	// stb r10,269(r31)
	PPC_STORE_U8(ctx.r31.u32 + 269, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_8221A418"))) PPC_WEAK_FUNC(sub_8221A418);
PPC_FUNC_IMPL(__imp__sub_8221A418) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x8221a438
	sub_8221A438(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221A420"))) PPC_WEAK_FUNC(sub_8221A420);
PPC_FUNC_IMPL(__imp__sub_8221A420) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-144
	ctx.r3.s64 = ctx.r3.s64 + -144;
	// b 0x8221a438
	sub_8221A438(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221A428"))) PPC_WEAK_FUNC(sub_8221A428);
PPC_FUNC_IMPL(__imp__sub_8221A428) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-148
	ctx.r3.s64 = ctx.r3.s64 + -148;
	// b 0x8221a438
	sub_8221A438(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221A430"))) PPC_WEAK_FUNC(sub_8221A430);
PPC_FUNC_IMPL(__imp__sub_8221A430) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-36
	ctx.r3.s64 = ctx.r3.s64 + -36;
	// b 0x8221a438
	sub_8221A438(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221A438"))) PPC_WEAK_FUNC(sub_8221A438);
PPC_FUNC_IMPL(__imp__sub_8221A438) {
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
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221a464
	if (ctx.cr6.eq) goto loc_8221A464;
	// bl 0x821601b8
	ctx.lr = 0x8221A464;
	sub_821601B8(ctx, base);
loc_8221A464:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82206e70
	ctx.lr = 0x8221A46C;
	sub_82206E70(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221a484
	if (ctx.cr6.eq) goto loc_8221A484;
	// bl 0x82186190
	ctx.lr = 0x8221A480;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8221A484:
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

__attribute__((alias("__imp__sub_8221A4A0"))) PPC_WEAK_FUNC(sub_8221A4A0);
PPC_FUNC_IMPL(__imp__sub_8221A4A0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8220f330
	ctx.lr = 0x8221A4C0;
	sub_8220F330(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8221a4dc
	if (ctx.cr6.lt) goto loc_8221A4DC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8221a4e0
	goto loc_8221A4E0;
loc_8221A4DC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8221A4E0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221a554
	if (ctx.cr6.eq) goto loc_8221A554;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,13988
	ctx.r10.s64 = ctx.r10.s64 + 13988;
loc_8221A4F0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8221a514
	if (ctx.cr6.eq) goto loc_8221A514;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8221a4f0
	if (ctx.cr6.eq) goto loc_8221A4F0;
loc_8221A514:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8221a554
	if (!ctx.cr6.eq) goto loc_8221A554;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x821e09e0
	ctx.lr = 0x8221A538;
	sub_821E09E0(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r30,568
	ctx.r3.s64 = ctx.r30.s64 + 568;
	// bl 0x8221f3c8
	ctx.lr = 0x8221A544;
	sub_8221F3C8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221a554
	if (ctx.cr6.eq) goto loc_8221A554;
	// bl 0x821601b8
	ctx.lr = 0x8221A554;
	sub_821601B8(ctx, base);
loc_8221A554:
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

__attribute__((alias("__imp__sub_8221A570"))) PPC_WEAK_FUNC(sub_8221A570);
PPC_FUNC_IMPL(__imp__sub_8221A570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r3,604
	ctx.r4.s64 = ctx.r3.s64 + 604;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221a618
	if (ctx.cr6.eq) goto loc_8221A618;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221a618
	if (ctx.cr6.eq) goto loc_8221A618;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8221a2a0
	ctx.lr = 0x8221A5BC;
	sub_8221A2A0(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8221a608
	if (ctx.cr6.eq) goto loc_8221A608;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221a608
	if (ctx.cr6.eq) goto loc_8221A608;
	// lfs f13,40(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8221a600
	if (ctx.cr6.lt) goto loc_8221A600;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
loc_8221A600:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
loc_8221A608:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221a618
	if (ctx.cr6.eq) goto loc_8221A618;
	// bl 0x821601b8
	ctx.lr = 0x8221A618;
	sub_821601B8(ctx, base);
loc_8221A618:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221A630"))) PPC_WEAK_FUNC(sub_8221A630);
PPC_FUNC_IMPL(__imp__sub_8221A630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8221A638;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x8220f5c8
	ctx.lr = 0x8221A64C;
	sub_8220F5C8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r4,r11,13792
	ctx.r4.s64 = ctx.r11.s64 + 13792;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x8221A674;
	sub_82161E08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ea350
	ctx.lr = 0x8221A68C;
	sub_821EA350(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f1,552(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 552, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8221a6a4
	if (ctx.cr6.lt) goto loc_8221A6A4;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x8221A6A4;
	sub_82186190(ctx, base);
loc_8221A6A4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r4,r11,-18492
	ctx.r4.s64 = ctx.r11.s64 + -18492;
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stb r31,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x8221A6D0;
	sub_82161E08(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x8221A6E0;
	sub_821EA350(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stfs f1,556(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 556, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8221a6f8
	if (ctx.cr6.lt) goto loc_8221A6F8;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82186190
	ctx.lr = 0x8221A6F8;
	sub_82186190(ctx, base);
loc_8221A6F8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r4,r11,-18512
	ctx.r4.s64 = ctx.r11.s64 + -18512;
	// stb r31,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r31.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r29,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r29.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stb r31,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x8221A724;
	sub_82161E08(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x8221A734;
	sub_821EA350(ctx, base);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stfs f1,560(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 560, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8221a74c
	if (ctx.cr6.lt) goto loc_8221A74C;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82186190
	ctx.lr = 0x8221A74C;
	sub_82186190(ctx, base);
loc_8221A74C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r29,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r29.u32);
	// li r5,20
	ctx.r5.s64 = 20;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// addi r4,r11,-18536
	ctx.r4.s64 = ctx.r11.s64 + -18536;
	// stb r31,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r31.u8);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r29,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r29.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stb r31,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x8221A778;
	sub_82161E08(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x8221A788;
	sub_821EA350(ctx, base);
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// stfs f1,564(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 564, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8221a7a0
	if (ctx.cr6.lt) goto loc_8221A7A0;
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x82186190
	ctx.lr = 0x8221A7A0;
	sub_82186190(ctx, base);
loc_8221A7A0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r30,536
	ctx.r10.s64 = ctx.r30.s64 + 536;
	// lfs f0,7004(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7004);
	ctx.f0.f64 = double(temp.f32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stfs f0,568(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 568, temp.u32);
loc_8221A7B4:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lfs f0,552(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 552);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221a7b4
	if (!ctx.cr6.eq) goto loc_8221A7B4;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221A7D8"))) PPC_WEAK_FUNC(sub_8221A7D8);
PPC_FUNC_IMPL(__imp__sub_8221A7D8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,564(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8221a828
	if (!ctx.cr6.gt) goto loc_8221A828;
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x8221a820
	if (ctx.cr6.lt) goto loc_8221A820;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
loc_8221A820:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,564(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 564, temp.u32);
loc_8221A828:
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221a840
	if (ctx.cr6.eq) goto loc_8221A840;
	// lfs f0,572(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,560(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 560, temp.u32);
loc_8221A840:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220a000
	ctx.lr = 0x8221A848;
	sub_8220A000(ctx, base);
	// lbz r11,569(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 569);
	// lbz r10,570(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 570);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// lbz r9,568(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 568);
	// lwz r8,172(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lbz r9,571(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 571);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// rlwimi r11,r10,0,29,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x4) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFB);
	// xori r10,r7,1
	ctx.r10.u64 = ctx.r7.u64 ^ 1;
	// rlwinm r11,r11,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// beq cr6,0x8221a8a8
	if (ctx.cr6.eq) goto loc_8221A8A8;
	// lfs f0,564(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	ctx.f0.f64 = double(temp.f32);
	// li r10,8
	ctx.r10.s64 = 8;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x8221a8ac
	if (ctx.cr6.eq) goto loc_8221A8AC;
loc_8221A8A8:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8221A8AC:
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// beq cr6,0x8221a8c8
	if (ctx.cr6.eq) goto loc_8221A8C8;
	// lfs f0,584(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,564(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 564, temp.u32);
loc_8221A8C8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// bne cr6,0x8221a8d8
	if (!ctx.cr6.eq) goto loc_8221A8D8;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8221A8D8:
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// stb r8,568(r31)
	PPC_STORE_U8(ctx.r31.u32 + 568, ctx.r8.u8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stb r8,570(r31)
	PPC_STORE_U8(ctx.r31.u32 + 570, ctx.r8.u8);
	// stb r8,571(r31)
	PPC_STORE_U8(ctx.r31.u32 + 571, ctx.r8.u8);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8221A908"))) PPC_WEAK_FUNC(sub_8221A908);
PPC_FUNC_IMPL(__imp__sub_8221A908) {
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
	// bl 0x8220e4b0
	ctx.lr = 0x8221A920;
	sub_8220E4B0(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-18336
	ctx.r11.s64 = ctx.r11.s64 + -18336;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f0,3544(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stfs f0,560(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 560, temp.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// stfs f0,564(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 564, temp.u32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,572(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 572, temp.u32);
	// addi r10,r10,-18344
	ctx.r10.s64 = ctx.r10.s64 + -18344;
	// stfs f0,576(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 576, temp.u32);
	// addi r9,r9,-18444
	ctx.r9.s64 = ctx.r9.s64 + -18444;
	// stfs f0,580(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 580, temp.u32);
	// addi r8,r8,-18400
	ctx.r8.s64 = ctx.r8.s64 + -18400;
	// stfs f0,584(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 584, temp.u32);
	// addi r7,r7,-18432
	ctx.r7.s64 = ctx.r7.s64 + -18432;
	// addi r6,r6,-18456
	ctx.r6.s64 = ctx.r6.s64 + -18456;
	// stb r11,568(r31)
	PPC_STORE_U8(ctx.r31.u32 + 568, ctx.r11.u8);
	// addi r5,r5,-18468
	ctx.r5.s64 = ctx.r5.s64 + -18468;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// stw r6,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r6.u32);
	// stw r5,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r5.u32);
	// stb r11,569(r31)
	PPC_STORE_U8(ctx.r31.u32 + 569, ctx.r11.u8);
	// stb r11,570(r31)
	PPC_STORE_U8(ctx.r31.u32 + 570, ctx.r11.u8);
	// stb r11,571(r31)
	PPC_STORE_U8(ctx.r31.u32 + 571, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_8221A9C0"))) PPC_WEAK_FUNC(sub_8221A9C0);
PPC_FUNC_IMPL(__imp__sub_8221A9C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8221A9C8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x8220f5c8
	ctx.lr = 0x8221A9DC;
	sub_8220F5C8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r4,r11,-18276
	ctx.r4.s64 = ctx.r11.s64 + -18276;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x8221AA04;
	sub_82161E08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ea350
	ctx.lr = 0x8221AA1C;
	sub_821EA350(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f1,540(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 540, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8221aa34
	if (ctx.cr6.lt) goto loc_8221AA34;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x8221AA34;
	sub_82186190(ctx, base);
loc_8221AA34:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r4,r11,-18296
	ctx.r4.s64 = ctx.r11.s64 + -18296;
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stb r31,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x8221AA60;
	sub_82161E08(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x8221AA70;
	sub_821EA350(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stfs f1,544(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 544, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8221aa88
	if (ctx.cr6.lt) goto loc_8221AA88;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82186190
	ctx.lr = 0x8221AA88;
	sub_82186190(ctx, base);
loc_8221AA88:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r4,r11,-23620
	ctx.r4.s64 = ctx.r11.s64 + -23620;
	// stb r31,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r31.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stb r31,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x8221AAB4;
	sub_82161E08(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x8221AAC4;
	sub_821EA350(ctx, base);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stfs f1,548(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 548, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8221aadc
	if (ctx.cr6.lt) goto loc_8221AADC;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82186190
	ctx.lr = 0x8221AADC;
	sub_82186190(ctx, base);
loc_8221AADC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// li r5,20
	ctx.r5.s64 = 20;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// addi r4,r11,-18320
	ctx.r4.s64 = ctx.r11.s64 + -18320;
	// stb r31,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r31.u8);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r30.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stb r31,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x8221AB08;
	sub_82161E08(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x8221AB18;
	sub_821EA350(ctx, base);
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// stfs f1,552(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 552, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8221ab30
	if (ctx.cr6.lt) goto loc_8221AB30;
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x82186190
	ctx.lr = 0x8221AB30;
	sub_82186190(ctx, base);
loc_8221AB30:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221AB40"))) PPC_WEAK_FUNC(sub_8221AB40);
PPC_FUNC_IMPL(__imp__sub_8221AB40) {
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
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r11,r11,-41
	ctx.r11.s64 = ctx.r11.s64 + -41;
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bgt cr6,0x8221abd0
	if (ctx.cr6.gt) goto loc_8221ABD0;
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// addi r12,r12,-21632
	ctx.r12.s64 = ctx.r12.s64 + -21632;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8221ABD8;
	case 1:
		goto loc_8221ABD0;
	case 2:
		goto loc_8221ABD0;
	case 3:
		goto loc_8221ABD0;
	case 4:
		goto loc_8221ABD8;
	case 5:
		goto loc_8221ABD8;
	case 6:
		goto loc_8221ABD0;
	case 7:
		goto loc_8221ABD8;
	case 8:
		goto loc_8221ABD0;
	case 9:
		goto loc_8221ABD8;
	case 10:
		goto loc_8221ABD0;
	case 11:
		goto loc_8221ABD8;
	case 12:
		goto loc_8221ABD8;
	case 13:
		goto loc_8221ABD0;
	case 14:
		goto loc_8221ABD0;
	case 15:
		goto loc_8221ABD0;
	case 16:
		goto loc_8221ABD0;
	case 17:
		goto loc_8221ABD0;
	case 18:
		goto loc_8221ABD0;
	case 19:
		goto loc_8221ABD8;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-21544(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -21544);
	// lwz r17,-21552(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -21552);
	// lwz r17,-21552(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -21552);
	// lwz r17,-21552(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -21552);
	// lwz r17,-21544(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -21544);
	// lwz r17,-21544(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -21544);
	// lwz r17,-21552(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -21552);
	// lwz r17,-21544(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -21544);
	// lwz r17,-21552(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -21552);
	// lwz r17,-21544(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -21544);
	// lwz r17,-21552(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -21552);
	// lwz r17,-21544(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -21544);
	// lwz r17,-21544(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -21544);
	// lwz r17,-21552(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -21552);
	// lwz r17,-21552(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -21552);
	// lwz r17,-21552(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -21552);
	// lwz r17,-21552(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -21552);
	// lwz r17,-21552(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -21552);
	// lwz r17,-21552(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -21552);
	// lwz r17,-21544(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -21544);
loc_8221ABD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822090e0
	ctx.lr = 0x8221ABD8;
	sub_822090E0(ctx, base);
loc_8221ABD8:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lbz r11,591(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 591);
	// stb r11,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_8221ABF8"))) PPC_WEAK_FUNC(sub_8221ABF8);
PPC_FUNC_IMPL(__imp__sub_8221ABF8) {
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
	// bl 0x822091d8
	ctx.lr = 0x8221AC10;
	sub_822091D8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,585(r11)
	PPC_STORE_U8(ctx.r11.u32 + 585, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_8221AC30"))) PPC_WEAK_FUNC(sub_8221AC30);
PPC_FUNC_IMPL(__imp__sub_8221AC30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,585(r11)
	PPC_STORE_U8(ctx.r11.u32 + 585, ctx.r10.u8);
	// b 0x82209bc0
	sub_82209BC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221AC40"))) PPC_WEAK_FUNC(sub_8221AC40);
PPC_FUNC_IMPL(__imp__sub_8221AC40) {
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
	// bl 0x82209208
	ctx.lr = 0x8221AC58;
	sub_82209208(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,585(r11)
	PPC_STORE_U8(ctx.r11.u32 + 585, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_8221AC78"))) PPC_WEAK_FUNC(sub_8221AC78);
PPC_FUNC_IMPL(__imp__sub_8221AC78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,585(r11)
	PPC_STORE_U8(ctx.r11.u32 + 585, ctx.r10.u8);
	// b 0x82209bc0
	sub_82209BC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221AC88"))) PPC_WEAK_FUNC(sub_8221AC88);
PPC_FUNC_IMPL(__imp__sub_8221AC88) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,584(r10)
	PPC_STORE_U8(ctx.r10.u32 + 584, ctx.r11.u8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r11,227(r10)
	PPC_STORE_U8(ctx.r10.u32 + 227, ctx.r11.u8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r11,231(r10)
	PPC_STORE_U8(ctx.r10.u32 + 231, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221ACA8"))) PPC_WEAK_FUNC(sub_8221ACA8);
PPC_FUNC_IMPL(__imp__sub_8221ACA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r10,591(r9)
	PPC_STORE_U8(ctx.r9.u32 + 591, ctx.r10.u8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r11,231(r10)
	PPC_STORE_U8(ctx.r10.u32 + 231, ctx.r11.u8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r11,584(r10)
	PPC_STORE_U8(ctx.r10.u32 + 584, ctx.r11.u8);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221ACE0"))) PPC_WEAK_FUNC(sub_8221ACE0);
PPC_FUNC_IMPL(__imp__sub_8221ACE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,231(r10)
	PPC_STORE_U8(ctx.r10.u32 + 231, ctx.r11.u8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r11,584(r10)
	PPC_STORE_U8(ctx.r10.u32 + 584, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221ACF8"))) PPC_WEAK_FUNC(sub_8221ACF8);
PPC_FUNC_IMPL(__imp__sub_8221ACF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,56
	ctx.r4.s64 = 56;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r10,591(r9)
	PPC_STORE_U8(ctx.r9.u32 + 591, ctx.r10.u8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r11,584(r10)
	PPC_STORE_U8(ctx.r10.u32 + 584, ctx.r11.u8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r11,227(r10)
	PPC_STORE_U8(ctx.r10.u32 + 227, ctx.r11.u8);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// b 0x82208f48
	sub_82208F48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221AD40"))) PPC_WEAK_FUNC(sub_8221AD40);
PPC_FUNC_IMPL(__imp__sub_8221AD40) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,227(r10)
	PPC_STORE_U8(ctx.r10.u32 + 227, ctx.r11.u8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r11,589(r10)
	PPC_STORE_U8(ctx.r10.u32 + 589, ctx.r11.u8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r11,584(r10)
	PPC_STORE_U8(ctx.r10.u32 + 584, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221AD60"))) PPC_WEAK_FUNC(sub_8221AD60);
PPC_FUNC_IMPL(__imp__sub_8221AD60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,55
	ctx.r4.s64 = 55;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r10,591(r9)
	PPC_STORE_U8(ctx.r9.u32 + 591, ctx.r10.u8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r11,584(r10)
	PPC_STORE_U8(ctx.r10.u32 + 584, ctx.r11.u8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r11,227(r10)
	PPC_STORE_U8(ctx.r10.u32 + 227, ctx.r11.u8);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// b 0x82208f48
	sub_82208F48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221ADA8"))) PPC_WEAK_FUNC(sub_8221ADA8);
PPC_FUNC_IMPL(__imp__sub_8221ADA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,584(r10)
	PPC_STORE_U8(ctx.r10.u32 + 584, ctx.r11.u8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r11,595(r10)
	PPC_STORE_U8(ctx.r10.u32 + 595, ctx.r11.u8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r11,227(r10)
	PPC_STORE_U8(ctx.r10.u32 + 227, ctx.r11.u8);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221ADE0"))) PPC_WEAK_FUNC(sub_8221ADE0);
PPC_FUNC_IMPL(__imp__sub_8221ADE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r10,591(r9)
	PPC_STORE_U8(ctx.r9.u32 + 591, ctx.r10.u8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r11,584(r10)
	PPC_STORE_U8(ctx.r10.u32 + 584, ctx.r11.u8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r11,592(r10)
	PPC_STORE_U8(ctx.r10.u32 + 592, ctx.r11.u8);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221AE20"))) PPC_WEAK_FUNC(sub_8221AE20);
PPC_FUNC_IMPL(__imp__sub_8221AE20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stb r10,592(r11)
	PPC_STORE_U8(ctx.r11.u32 + 592, ctx.r10.u8);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r10,584(r11)
	PPC_STORE_U8(ctx.r11.u32 + 584, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221AE48"))) PPC_WEAK_FUNC(sub_8221AE48);
PPC_FUNC_IMPL(__imp__sub_8221AE48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r4,62
	ctx.r4.s64 = 62;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,584(r10)
	PPC_STORE_U8(ctx.r10.u32 + 584, ctx.r11.u8);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// b 0x82208f48
	sub_82208F48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221AE78"))) PPC_WEAK_FUNC(sub_8221AE78);
PPC_FUNC_IMPL(__imp__sub_8221AE78) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,50
	ctx.r11.s64 = 50;
	// li r8,49
	ctx.r8.s64 = 49;
	// stb r9,233(r10)
	PPC_STORE_U8(ctx.r10.u32 + 233, ctx.r9.u8);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221AEA0"))) PPC_WEAK_FUNC(sub_8221AEA0);
PPC_FUNC_IMPL(__imp__sub_8221AEA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r10,584(r11)
	PPC_STORE_U8(ctx.r11.u32 + 584, ctx.r10.u8);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stb r10,227(r11)
	PPC_STORE_U8(ctx.r11.u32 + 227, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221AED0"))) PPC_WEAK_FUNC(sub_8221AED0);
PPC_FUNC_IMPL(__imp__sub_8221AED0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,227(r10)
	PPC_STORE_U8(ctx.r10.u32 + 227, ctx.r11.u8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r11,584(r10)
	PPC_STORE_U8(ctx.r10.u32 + 584, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221AEE8"))) PPC_WEAK_FUNC(sub_8221AEE8);
PPC_FUNC_IMPL(__imp__sub_8221AEE8) {
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
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x8221b008
	if (ctx.cr6.gt) goto loc_8221B008;
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// addi r12,r12,-20704
	ctx.r12.s64 = ctx.r12.s64 + -20704;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8221AF38;
	case 1:
		goto loc_8221AF58;
	case 2:
		goto loc_8221AF78;
	case 3:
		goto loc_8221AFA4;
	case 4:
		goto loc_8221AFC4;
	case 5:
		goto loc_8221AFF0;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-20680(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20680);
	// lwz r17,-20648(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20648);
	// lwz r17,-20616(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20616);
	// lwz r17,-20572(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20572);
	// lwz r17,-20540(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20540);
	// lwz r17,-20496(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20496);
loc_8221AF38:
	// li r4,62
	ctx.r4.s64 = 62;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82208f48
	ctx.lr = 0x8221AF44;
	sub_82208F48(ctx, base);
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
loc_8221AF58:
	// li r4,44
	ctx.r4.s64 = 44;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82208f48
	ctx.lr = 0x8221AF64;
	sub_82208F48(ctx, base);
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
loc_8221AF78:
	// li r4,45
	ctx.r4.s64 = 45;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82208f48
	ctx.lr = 0x8221AF84;
	sub_82208F48(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,593(r11)
	PPC_STORE_U8(ctx.r11.u32 + 593, ctx.r10.u8);
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
loc_8221AFA4:
	// li r4,47
	ctx.r4.s64 = 47;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82208f48
	ctx.lr = 0x8221AFB0;
	sub_82208F48(ctx, base);
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
loc_8221AFC4:
	// li r4,46
	ctx.r4.s64 = 46;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82208f48
	ctx.lr = 0x8221AFD0;
	sub_82208F48(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,593(r11)
	PPC_STORE_U8(ctx.r11.u32 + 593, ctx.r10.u8);
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
loc_8221AFF0:
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82208f48
	ctx.lr = 0x8221AFFC;
	sub_82208F48(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,594(r11)
	PPC_STORE_U8(ctx.r11.u32 + 594, ctx.r10.u8);
loc_8221B008:
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

__attribute__((alias("__imp__sub_8221B020"))) PPC_WEAK_FUNC(sub_8221B020);
PPC_FUNC_IMPL(__imp__sub_8221B020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r10,584(r11)
	PPC_STORE_U8(ctx.r11.u32 + 584, ctx.r10.u8);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stb r10,227(r11)
	PPC_STORE_U8(ctx.r11.u32 + 227, ctx.r10.u8);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r10,231(r11)
	PPC_STORE_U8(ctx.r11.u32 + 231, ctx.r10.u8);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r10,233(r11)
	PPC_STORE_U8(ctx.r11.u32 + 233, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B060"))) PPC_WEAK_FUNC(sub_8221B060);
PPC_FUNC_IMPL(__imp__sub_8221B060) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,227(r10)
	PPC_STORE_U8(ctx.r10.u32 + 227, ctx.r11.u8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r11,584(r10)
	PPC_STORE_U8(ctx.r10.u32 + 584, ctx.r11.u8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r11,231(r10)
	PPC_STORE_U8(ctx.r10.u32 + 231, ctx.r11.u8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r11,233(r10)
	PPC_STORE_U8(ctx.r10.u32 + 233, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B088"))) PPC_WEAK_FUNC(sub_8221B088);
PPC_FUNC_IMPL(__imp__sub_8221B088) {
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
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x8221b188
	if (ctx.cr6.gt) goto loc_8221B188;
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// addi r12,r12,-20288
	ctx.r12.s64 = ctx.r12.s64 + -20288;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8221B0D8;
	case 1:
		goto loc_8221B0D8;
	case 2:
		goto loc_8221B0F8;
	case 3:
		goto loc_8221B124;
	case 4:
		goto loc_8221B144;
	case 5:
		goto loc_8221B170;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-20264(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20264);
	// lwz r17,-20264(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20264);
	// lwz r17,-20232(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20232);
	// lwz r17,-20188(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20188);
	// lwz r17,-20156(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20156);
	// lwz r17,-20112(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20112);
loc_8221B0D8:
	// li r4,49
	ctx.r4.s64 = 49;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82208f48
	ctx.lr = 0x8221B0E4;
	sub_82208F48(ctx, base);
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
loc_8221B0F8:
	// li r4,50
	ctx.r4.s64 = 50;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82208f48
	ctx.lr = 0x8221B104;
	sub_82208F48(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,593(r11)
	PPC_STORE_U8(ctx.r11.u32 + 593, ctx.r10.u8);
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
loc_8221B124:
	// li r4,51
	ctx.r4.s64 = 51;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82208f48
	ctx.lr = 0x8221B130;
	sub_82208F48(ctx, base);
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
loc_8221B144:
	// li r4,52
	ctx.r4.s64 = 52;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82208f48
	ctx.lr = 0x8221B150;
	sub_82208F48(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,593(r11)
	PPC_STORE_U8(ctx.r11.u32 + 593, ctx.r10.u8);
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
loc_8221B170:
	// li r4,53
	ctx.r4.s64 = 53;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82208f48
	ctx.lr = 0x8221B17C;
	sub_82208F48(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,594(r11)
	PPC_STORE_U8(ctx.r11.u32 + 594, ctx.r10.u8);
loc_8221B188:
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

__attribute__((alias("__imp__sub_8221B1A0"))) PPC_WEAK_FUNC(sub_8221B1A0);
PPC_FUNC_IMPL(__imp__sub_8221B1A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stb r10,584(r11)
	PPC_STORE_U8(ctx.r11.u32 + 584, ctx.r10.u8);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r10,227(r11)
	PPC_STORE_U8(ctx.r11.u32 + 227, ctx.r10.u8);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r10,228(r11)
	PPC_STORE_U8(ctx.r11.u32 + 228, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B1D8"))) PPC_WEAK_FUNC(sub_8221B1D8);
PPC_FUNC_IMPL(__imp__sub_8221B1D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,584(r10)
	PPC_STORE_U8(ctx.r10.u32 + 584, ctx.r11.u8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r11,227(r10)
	PPC_STORE_U8(ctx.r10.u32 + 227, ctx.r11.u8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r11,228(r10)
	PPC_STORE_U8(ctx.r10.u32 + 228, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B1F8"))) PPC_WEAK_FUNC(sub_8221B1F8);
PPC_FUNC_IMPL(__imp__sub_8221B1F8) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221b23c
	if (ctx.cr6.eq) goto loc_8221B23C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stb r9,233(r11)
	PPC_STORE_U8(ctx.r11.u32 + 233, ctx.r9.u8);
loc_8221B23C:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r11,62
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 62, ctx.xer);
	// bne cr6,0x8221b264
	if (!ctx.cr6.eq) goto loc_8221B264;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221b264
	if (ctx.cr6.eq) goto loc_8221B264;
	// li r4,65
	ctx.r4.s64 = 65;
	// bl 0x82208f48
	ctx.lr = 0x8221B264;
	sub_82208F48(ctx, base);
loc_8221B264:
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

__attribute__((alias("__imp__sub_8221B278"))) PPC_WEAK_FUNC(sub_8221B278);
PPC_FUNC_IMPL(__imp__sub_8221B278) {
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
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// ld r10,200(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 200);
	// lwz r30,196(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// rlwinm r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8221b2e0
	if (ctx.cr6.eq) goto loc_8221B2E0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,17
	ctx.r4.s64 = 17;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B2CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221b2e0
	if (ctx.cr6.eq) goto loc_8221B2E0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8221b410
	goto loc_8221B410;
loc_8221B2E0:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x8221b348
	if (ctx.cr6.eq) goto loc_8221B348;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8221b33c
	if (ctx.cr6.eq) goto loc_8221B33C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8221b31c
	if (ctx.cr6.eq) goto loc_8221B31C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8221b348
	if (!ctx.cr6.eq) goto loc_8221B348;
	// li r4,34
	ctx.r4.s64 = 34;
	// b 0x8221b340
	goto loc_8221B340;
loc_8221B31C:
	// li r4,33
	ctx.r4.s64 = 33;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82208f48
	ctx.lr = 0x8221B328;
	sub_82208F48(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,596(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f31,52(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// b 0x8221b348
	goto loc_8221B348;
loc_8221B33C:
	// li r4,32
	ctx.r4.s64 = 32;
loc_8221B340:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82208f48
	ctx.lr = 0x8221B348;
	sub_82208F48(ctx, base);
loc_8221B348:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8221b404
	if (ctx.cr6.eq) goto loc_8221B404;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8221b3c8
	if (ctx.cr6.eq) goto loc_8221B3C8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8221b40c
	if (!ctx.cr6.eq) goto loc_8221B40C;
	// rlwinm r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// beq cr6,0x8221b388
	if (ctx.cr6.eq) goto loc_8221B388;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f31,52(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// bl 0x82209068
	ctx.lr = 0x8221B384;
	sub_82209068(ctx, base);
	// b 0x8221b410
	goto loc_8221B410;
loc_8221B388:
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8221b3bc
	if (!ctx.cr6.gt) goto loc_8221B3BC;
	// lfs f13,604(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 604);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r11,608
	ctx.r10.s64 = ctx.r11.s64 + 608;
	// fnmsubs f0,f13,f30,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f30.f64 - ctx.f0.f64)));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8221b3b4
	if (ctx.cr6.lt) goto loc_8221B3B4;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_8221B3B4:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
loc_8221B3BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82209068
	ctx.lr = 0x8221B3C4;
	sub_82209068(ctx, base);
	// b 0x8221b410
	goto loc_8221B410;
loc_8221B3C8:
	// rlwinm r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8;
	// li r10,3
	ctx.r10.s64 = 3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221b3e8
	if (ctx.cr6.eq) goto loc_8221B3E8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stfs f31,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f31,52(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
loc_8221B3E8:
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x8221b40c
	if (!ctx.cr6.lt) goto loc_8221B40C;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// b 0x8221b40c
	goto loc_8221B40C;
loc_8221B404:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8221B40C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221B410:
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

__attribute__((alias("__imp__sub_8221B430"))) PPC_WEAK_FUNC(sub_8221B430);
PPC_FUNC_IMPL(__imp__sub_8221B430) {
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
	// lfs f13,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8221b464
	if (ctx.cr6.lt) goto loc_8221B464;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
loc_8221B464:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stfs f13,36(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221b4ac
	if (ctx.cr6.eq) goto loc_8221B4AC;
	// lbz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221b494
	if (ctx.cr6.eq) goto loc_8221B494;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8221b4ac
	if (!ctx.cr6.eq) goto loc_8221B4AC;
loc_8221B494:
	// bl 0x82209068
	ctx.lr = 0x8221B498;
	sub_82209068(ctx, base);
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
loc_8221B4AC:
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

__attribute__((alias("__imp__sub_8221B4C0"))) PPC_WEAK_FUNC(sub_8221B4C0);
PPC_FUNC_IMPL(__imp__sub_8221B4C0) {
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
	// lwz r3,572(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 572);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221b514
	if (ctx.cr6.eq) goto loc_8221B514;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221b514
	if (ctx.cr6.eq) goto loc_8221B514;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B4F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8221B514:
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

__attribute__((alias("__imp__sub_8221B528"))) PPC_WEAK_FUNC(sub_8221B528);
PPC_FUNC_IMPL(__imp__sub_8221B528) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 564);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221b5ac
	if (ctx.cr6.eq) goto loc_8221B5AC;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221b5ac
	if (ctx.cr6.eq) goto loc_8221B5AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B57C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 564);
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B59C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221b5b0
	if (!ctx.cr6.eq) goto loc_8221B5B0;
loc_8221B5AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221B5B0:
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

__attribute__((alias("__imp__sub_8221B5D0"))) PPC_WEAK_FUNC(sub_8221B5D0);
PPC_FUNC_IMPL(__imp__sub_8221B5D0) {
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
	// lwz r3,564(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221b61c
	if (ctx.cr6.eq) goto loc_8221B61C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221b61c
	if (ctx.cr6.eq) goto loc_8221B61C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B60C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221b620
	if (!ctx.cr6.eq) goto loc_8221B620;
loc_8221B61C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221B620:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B630"))) PPC_WEAK_FUNC(sub_8221B630);
PPC_FUNC_IMPL(__imp__sub_8221B630) {
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
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82208f60
	ctx.lr = 0x8221B654;
	sub_82208F60(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lbz r11,591(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 591);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// beq cr6,0x8221b6ac
	if (ctx.cr6.eq) goto loc_8221B6AC;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8221b690
	if (ctx.cr6.lt) goto loc_8221B690;
	// cmplwi cr6,r11,42
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 42, ctx.xer);
	// bne cr6,0x8221b738
	if (!ctx.cr6.eq) goto loc_8221B738;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221b738
	if (ctx.cr6.eq) goto loc_8221B738;
	// li r4,43
	ctx.r4.s64 = 43;
	// b 0x8221b734
	goto loc_8221B734;
loc_8221B690:
	// lbz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221b6a4
	if (ctx.cr6.eq) goto loc_8221B6A4;
	// li r4,43
	ctx.r4.s64 = 43;
	// b 0x8221b734
	goto loc_8221B734;
loc_8221B6A4:
	// li r4,42
	ctx.r4.s64 = 42;
	// b 0x8221b734
	goto loc_8221B734;
loc_8221B6AC:
	// addi r11,r11,-41
	ctx.r11.s64 = ctx.r11.s64 + -41;
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bgt cr6,0x8221b738
	if (ctx.cr6.gt) goto loc_8221B738;
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// addi r12,r12,-18736
	ctx.r12.s64 = ctx.r12.s64 + -18736;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8221B720;
	case 1:
		goto loc_8221B730;
	case 2:
		goto loc_8221B730;
	case 3:
		goto loc_8221B738;
	case 4:
		goto loc_8221B720;
	case 5:
		goto loc_8221B720;
	case 6:
		goto loc_8221B738;
	case 7:
		goto loc_8221B720;
	case 8:
		goto loc_8221B738;
	case 9:
		goto loc_8221B720;
	case 10:
		goto loc_8221B738;
	case 11:
		goto loc_8221B720;
	case 12:
		goto loc_8221B720;
	case 13:
		goto loc_8221B738;
	case 14:
		goto loc_8221B738;
	case 15:
		goto loc_8221B738;
	case 16:
		goto loc_8221B738;
	case 17:
		goto loc_8221B738;
	case 18:
		goto loc_8221B738;
	case 19:
		goto loc_8221B720;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-18656(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18656);
	// lwz r17,-18640(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18640);
	// lwz r17,-18640(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18640);
	// lwz r17,-18632(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18632);
	// lwz r17,-18656(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18656);
	// lwz r17,-18656(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18656);
	// lwz r17,-18632(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18632);
	// lwz r17,-18656(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18656);
	// lwz r17,-18632(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18632);
	// lwz r17,-18656(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18656);
	// lwz r17,-18632(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18632);
	// lwz r17,-18656(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18656);
	// lwz r17,-18656(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18656);
	// lwz r17,-18632(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18632);
	// lwz r17,-18632(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18632);
	// lwz r17,-18632(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18632);
	// lwz r17,-18632(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18632);
	// lwz r17,-18632(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18632);
	// lwz r17,-18632(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18632);
	// lwz r17,-18656(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18656);
loc_8221B720:
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221b738
	if (ctx.cr6.eq) goto loc_8221B738;
loc_8221B730:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8221B734:
	// bl 0x82208f48
	ctx.lr = 0x8221B738;
	sub_82208F48(ctx, base);
loc_8221B738:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8220cf80
	ctx.lr = 0x8221B744;
	sub_8220CF80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221b90c
	if (!ctx.cr6.eq) goto loc_8221B90C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r3,572(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 572);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221b784
	if (ctx.cr6.eq) goto loc_8221B784;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221b784
	if (ctx.cr6.eq) goto loc_8221B784;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B780;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8221b788
	goto loc_8221B788;
loc_8221B784:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221B788:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221b7cc
	if (ctx.cr6.eq) goto loc_8221B7CC;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x8221B79C;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,16,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221b7cc
	if (ctx.cr6.eq) goto loc_8221B7CC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,56
	ctx.r4.s64 = 56;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B7C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221b90c
	if (!ctx.cr6.eq) goto loc_8221B90C;
loc_8221B7CC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r3,572(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 572);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221b800
	if (ctx.cr6.eq) goto loc_8221B800;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221b800
	if (ctx.cr6.eq) goto loc_8221B800;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B7FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8221b804
	goto loc_8221B804;
loc_8221B800:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221B804:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221b848
	if (ctx.cr6.eq) goto loc_8221B848;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x8221B818;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,16,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221b848
	if (ctx.cr6.eq) goto loc_8221B848;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,57
	ctx.r4.s64 = 57;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B83C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221b90c
	if (!ctx.cr6.eq) goto loc_8221B90C;
loc_8221B848:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x8221B850;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,16,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221b870
	if (ctx.cr6.eq) goto loc_8221B870;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lbz r10,591(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 591);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r10,591(r11)
	PPC_STORE_U8(ctx.r11.u32 + 591, ctx.r10.u8);
loc_8221B870:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x8221B878;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 13) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221b8c0
	if (ctx.cr6.eq) goto loc_8221B8C0;
	// li r4,17
	ctx.r4.s64 = 17;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82209058
	ctx.lr = 0x8221B890;
	sub_82209058(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221b8c0
	if (ctx.cr6.eq) goto loc_8221B8C0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,60
	ctx.r4.s64 = 60;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B8B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221b90c
	if (!ctx.cr6.eq) goto loc_8221B90C;
loc_8221B8C0:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x8221B8C8;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,24,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221b930
	if (ctx.cr6.eq) goto loc_8221B930;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8221b4c0
	ctx.lr = 0x8221B8DC;
	sub_8221B4C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// beq cr6,0x8221b914
	if (ctx.cr6.eq) goto loc_8221B914;
	// li r4,58
	ctx.r4.s64 = 58;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B900;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221b930
	if (ctx.cr6.eq) goto loc_8221B930;
loc_8221B90C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8221b934
	goto loc_8221B934;
loc_8221B914:
	// li r4,62
	ctx.r4.s64 = 62;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B920;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221b934
	if (!ctx.cr6.eq) goto loc_8221B934;
loc_8221B930:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221B934:
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

__attribute__((alias("__imp__sub_8221B950"))) PPC_WEAK_FUNC(sub_8221B950);
PPC_FUNC_IMPL(__imp__sub_8221B950) {
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
	// bl 0x8220ac18
	ctx.lr = 0x8221B968;
	sub_8220AC18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221bb30
	if (!ctx.cr6.eq) goto loc_8221BB30;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,572(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 572);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221b9a8
	if (ctx.cr6.eq) goto loc_8221B9A8;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221b9a8
	if (ctx.cr6.eq) goto loc_8221B9A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B9A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8221b9ac
	goto loc_8221B9AC;
loc_8221B9A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221B9AC:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221b9f0
	if (ctx.cr6.eq) goto loc_8221B9F0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x8221B9C0;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,16,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221b9f0
	if (ctx.cr6.eq) goto loc_8221B9F0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,56
	ctx.r4.s64 = 56;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B9E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221bb30
	if (!ctx.cr6.eq) goto loc_8221BB30;
loc_8221B9F0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,572(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 572);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221ba24
	if (ctx.cr6.eq) goto loc_8221BA24;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221ba24
	if (ctx.cr6.eq) goto loc_8221BA24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BA20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8221ba28
	goto loc_8221BA28;
loc_8221BA24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221BA28:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221ba6c
	if (ctx.cr6.eq) goto loc_8221BA6C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x8221BA3C;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,16,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221ba6c
	if (ctx.cr6.eq) goto loc_8221BA6C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,57
	ctx.r4.s64 = 57;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BA60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221bb30
	if (!ctx.cr6.eq) goto loc_8221BB30;
loc_8221BA6C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x8221BA74;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,16,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221ba94
	if (ctx.cr6.eq) goto loc_8221BA94;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lbz r10,591(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 591);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r10,591(r11)
	PPC_STORE_U8(ctx.r11.u32 + 591, ctx.r10.u8);
loc_8221BA94:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x8221BA9C;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 13) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221bae4
	if (ctx.cr6.eq) goto loc_8221BAE4;
	// li r4,17
	ctx.r4.s64 = 17;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82209058
	ctx.lr = 0x8221BAB4;
	sub_82209058(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221bae4
	if (ctx.cr6.eq) goto loc_8221BAE4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,60
	ctx.r4.s64 = 60;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BAD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221bb30
	if (!ctx.cr6.eq) goto loc_8221BB30;
loc_8221BAE4:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x8221BAEC;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,24,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221bb64
	if (ctx.cr6.eq) goto loc_8221BB64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8221b4c0
	ctx.lr = 0x8221BB00;
	sub_8221B4C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// beq cr6,0x8221bb48
	if (ctx.cr6.eq) goto loc_8221BB48;
	// li r4,58
	ctx.r4.s64 = 58;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BB24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221bb64
	if (ctx.cr6.eq) goto loc_8221BB64;
loc_8221BB30:
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
loc_8221BB48:
	// li r4,62
	ctx.r4.s64 = 62;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BB54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221bb68
	if (!ctx.cr6.eq) goto loc_8221BB68;
loc_8221BB64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221BB68:
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

__attribute__((alias("__imp__sub_8221BB80"))) PPC_WEAK_FUNC(sub_8221BB80);
PPC_FUNC_IMPL(__imp__sub_8221BB80) {
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
	// bl 0x8220ae28
	ctx.lr = 0x8221BB98;
	sub_8220AE28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221bd60
	if (!ctx.cr6.eq) goto loc_8221BD60;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,572(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 572);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221bbd8
	if (ctx.cr6.eq) goto loc_8221BBD8;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221bbd8
	if (ctx.cr6.eq) goto loc_8221BBD8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BBD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8221bbdc
	goto loc_8221BBDC;
loc_8221BBD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221BBDC:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221bc20
	if (ctx.cr6.eq) goto loc_8221BC20;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x8221BBF0;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,16,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221bc20
	if (ctx.cr6.eq) goto loc_8221BC20;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,56
	ctx.r4.s64 = 56;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BC14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221bd60
	if (!ctx.cr6.eq) goto loc_8221BD60;
loc_8221BC20:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,572(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 572);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221bc54
	if (ctx.cr6.eq) goto loc_8221BC54;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221bc54
	if (ctx.cr6.eq) goto loc_8221BC54;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BC50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8221bc58
	goto loc_8221BC58;
loc_8221BC54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221BC58:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221bc9c
	if (ctx.cr6.eq) goto loc_8221BC9C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x8221BC6C;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,16,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221bc9c
	if (ctx.cr6.eq) goto loc_8221BC9C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,57
	ctx.r4.s64 = 57;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BC90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221bd60
	if (!ctx.cr6.eq) goto loc_8221BD60;
loc_8221BC9C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x8221BCA4;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,16,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221bcc4
	if (ctx.cr6.eq) goto loc_8221BCC4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lbz r10,591(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 591);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r10,591(r11)
	PPC_STORE_U8(ctx.r11.u32 + 591, ctx.r10.u8);
loc_8221BCC4:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x8221BCCC;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 13) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221bd14
	if (ctx.cr6.eq) goto loc_8221BD14;
	// li r4,17
	ctx.r4.s64 = 17;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82209058
	ctx.lr = 0x8221BCE4;
	sub_82209058(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221bd14
	if (ctx.cr6.eq) goto loc_8221BD14;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,60
	ctx.r4.s64 = 60;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BD08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221bd60
	if (!ctx.cr6.eq) goto loc_8221BD60;
loc_8221BD14:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x8221BD1C;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,24,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221bd94
	if (ctx.cr6.eq) goto loc_8221BD94;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8221b4c0
	ctx.lr = 0x8221BD30;
	sub_8221B4C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// beq cr6,0x8221bd78
	if (ctx.cr6.eq) goto loc_8221BD78;
	// li r4,58
	ctx.r4.s64 = 58;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BD54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221bd94
	if (ctx.cr6.eq) goto loc_8221BD94;
loc_8221BD60:
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
loc_8221BD78:
	// li r4,62
	ctx.r4.s64 = 62;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BD84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221bd98
	if (!ctx.cr6.eq) goto loc_8221BD98;
loc_8221BD94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221BD98:
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

__attribute__((alias("__imp__sub_8221BDB0"))) PPC_WEAK_FUNC(sub_8221BDB0);
PPC_FUNC_IMPL(__imp__sub_8221BDB0) {
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
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82208f60
	ctx.lr = 0x8221BDD8;
	sub_82208F60(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r30,196(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// bl 0x82208f60
	ctx.lr = 0x8221BDE8;
	sub_82208F60(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221be74
	if (ctx.cr6.eq) goto loc_8221BE74;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 564);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221be40
	if (ctx.cr6.eq) goto loc_8221BE40;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221be40
	if (ctx.cr6.eq) goto loc_8221BE40;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BE30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8221be44
	if (!ctx.cr6.eq) goto loc_8221BE44;
loc_8221BE40:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221BE44:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221be74
	if (ctx.cr6.eq) goto loc_8221BE74;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,52
	ctx.r4.s64 = 52;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BE68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221bf90
	if (!ctx.cr6.eq) goto loc_8221BF90;
loc_8221BE74:
	// rlwinm r11,r30,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221bf1c
	if (ctx.cr6.eq) goto loc_8221BF1C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 564);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221becc
	if (ctx.cr6.eq) goto loc_8221BECC;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221becc
	if (ctx.cr6.eq) goto loc_8221BECC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BEBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8221bed0
	if (!ctx.cr6.eq) goto loc_8221BED0;
loc_8221BECC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221BED0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221bf1c
	if (ctx.cr6.eq) goto loc_8221BF1C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,53
	ctx.r4.s64 = 53;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BEF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221bf1c
	if (ctx.cr6.eq) goto loc_8221BF1C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// b 0x8221bfc4
	goto loc_8221BFC4;
loc_8221BF1C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x8221BF24;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,16,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221bf44
	if (ctx.cr6.eq) goto loc_8221BF44;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lbz r10,591(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 591);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r10,591(r11)
	PPC_STORE_U8(ctx.r11.u32 + 591, ctx.r10.u8);
loc_8221BF44:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x8221BF4C;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,24,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221bfb8
	if (ctx.cr6.eq) goto loc_8221BFB8;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x8221b4c0
	ctx.lr = 0x8221BF60;
	sub_8221B4C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// beq cr6,0x8221bf98
	if (ctx.cr6.eq) goto loc_8221BF98;
	// li r4,59
	ctx.r4.s64 = 59;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BF84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221bfb8
	if (ctx.cr6.eq) goto loc_8221BFB8;
loc_8221BF90:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8221bfc4
	goto loc_8221BFC4;
loc_8221BF98:
	// li r4,63
	ctx.r4.s64 = 63;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BFA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221bfb8
	if (ctx.cr6.eq) goto loc_8221BFB8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8221bfc4
	goto loc_8221BFC4;
loc_8221BFB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8220b088
	ctx.lr = 0x8221BFC4;
	sub_8220B088(ctx, base);
loc_8221BFC4:
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

__attribute__((alias("__imp__sub_8221BFE0"))) PPC_WEAK_FUNC(sub_8221BFE0);
PPC_FUNC_IMPL(__imp__sub_8221BFE0) {
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
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82208f60
	ctx.lr = 0x8221C008;
	sub_82208F60(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r30,196(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// bl 0x82208f60
	ctx.lr = 0x8221C018;
	sub_82208F60(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c08c
	if (ctx.cr6.eq) goto loc_8221C08C;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,620(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8221c08c
	if (ctx.cr6.gt) goto loc_8221C08C;
	// li r4,5
	ctx.r4.s64 = 5;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8221b5d0
	ctx.lr = 0x8221C044;
	sub_8221B5D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c08c
	if (ctx.cr6.eq) goto loc_8221C08C;
	// li r4,18
	ctx.r4.s64 = 18;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82209058
	ctx.lr = 0x8221C05C;
	sub_82209058(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c08c
	if (ctx.cr6.eq) goto loc_8221C08C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,51
	ctx.r4.s64 = 51;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221C080;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221c218
	if (!ctx.cr6.eq) goto loc_8221C218;
loc_8221C08C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x8221C094;
	sub_82208F60(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c0f0
	if (ctx.cr6.eq) goto loc_8221C0F0;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,624(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8221c0f0
	if (!ctx.cr6.lt) goto loc_8221C0F0;
	// li r4,6
	ctx.r4.s64 = 6;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8221b5d0
	ctx.lr = 0x8221C0C0;
	sub_8221B5D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c0f0
	if (ctx.cr6.eq) goto loc_8221C0F0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,52
	ctx.r4.s64 = 52;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221C0E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221c218
	if (!ctx.cr6.eq) goto loc_8221C218;
loc_8221C0F0:
	// rlwinm r11,r30,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c198
	if (ctx.cr6.eq) goto loc_8221C198;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r3,564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 564);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221c148
	if (ctx.cr6.eq) goto loc_8221C148;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c148
	if (ctx.cr6.eq) goto loc_8221C148;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221C138;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8221c14c
	if (!ctx.cr6.eq) goto loc_8221C14C;
loc_8221C148:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221C14C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c198
	if (ctx.cr6.eq) goto loc_8221C198;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,53
	ctx.r4.s64 = 53;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221C170;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c198
	if (ctx.cr6.eq) goto loc_8221C198;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// b 0x8221c258
	goto loc_8221C258;
loc_8221C198:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8221c240
	if (ctx.cr6.eq) goto loc_8221C240;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x8221C1AC;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,16,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c1cc
	if (ctx.cr6.eq) goto loc_8221C1CC;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lbz r10,591(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 591);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r10,591(r11)
	PPC_STORE_U8(ctx.r11.u32 + 591, ctx.r10.u8);
loc_8221C1CC:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x8221C1D4;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,24,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c240
	if (ctx.cr6.eq) goto loc_8221C240;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x8221b4c0
	ctx.lr = 0x8221C1E8;
	sub_8221B4C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// beq cr6,0x8221c220
	if (ctx.cr6.eq) goto loc_8221C220;
	// li r4,59
	ctx.r4.s64 = 59;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221C20C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c240
	if (ctx.cr6.eq) goto loc_8221C240;
loc_8221C218:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8221c258
	goto loc_8221C258;
loc_8221C220:
	// li r4,63
	ctx.r4.s64 = 63;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221C22C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c240
	if (ctx.cr6.eq) goto loc_8221C240;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8221c258
	goto loc_8221C258;
loc_8221C240:
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8220b2d0
	ctx.lr = 0x8221C258;
	sub_8220B2D0(ctx, base);
loc_8221C258:
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

__attribute__((alias("__imp__sub_8221C278"))) PPC_WEAK_FUNC(sub_8221C278);
PPC_FUNC_IMPL(__imp__sub_8221C278) {
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
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82208f60
	ctx.lr = 0x8221C2A0;
	sub_82208F60(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r30,196(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// bl 0x82208f60
	ctx.lr = 0x8221C2B0;
	sub_82208F60(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c32c
	if (ctx.cr6.eq) goto loc_8221C32C;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,620(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8221c32c
	if (ctx.cr6.gt) goto loc_8221C32C;
	// li r4,5
	ctx.r4.s64 = 5;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8221b5d0
	ctx.lr = 0x8221C2DC;
	sub_8221B5D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c32c
	if (ctx.cr6.eq) goto loc_8221C32C;
	// li r4,18
	ctx.r4.s64 = 18;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82209058
	ctx.lr = 0x8221C2F4;
	sub_82209058(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c32c
	if (ctx.cr6.eq) goto loc_8221C32C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,51
	ctx.r4.s64 = 51;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221C318;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c32c
	if (ctx.cr6.eq) goto loc_8221C32C;
loc_8221C324:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8221c450
	goto loc_8221C450;
loc_8221C32C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x8221C334;
	sub_82208F60(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c390
	if (ctx.cr6.eq) goto loc_8221C390;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,624(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8221c390
	if (!ctx.cr6.lt) goto loc_8221C390;
	// li r4,6
	ctx.r4.s64 = 6;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8221b5d0
	ctx.lr = 0x8221C360;
	sub_8221B5D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c390
	if (ctx.cr6.eq) goto loc_8221C390;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,52
	ctx.r4.s64 = 52;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221C384;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221c324
	if (!ctx.cr6.eq) goto loc_8221C324;
loc_8221C390:
	// rlwinm r11,r30,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c438
	if (ctx.cr6.eq) goto loc_8221C438;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 564);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221c3e8
	if (ctx.cr6.eq) goto loc_8221C3E8;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c3e8
	if (ctx.cr6.eq) goto loc_8221C3E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221C3D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8221c3ec
	if (!ctx.cr6.eq) goto loc_8221C3EC;
loc_8221C3E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221C3EC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c438
	if (ctx.cr6.eq) goto loc_8221C438;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,53
	ctx.r4.s64 = 53;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221C410;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c438
	if (ctx.cr6.eq) goto loc_8221C438;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// b 0x8221c450
	goto loc_8221C450;
loc_8221C438:
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8220ddc8
	ctx.lr = 0x8221C450;
	sub_8220DDC8(ctx, base);
loc_8221C450:
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

extern bool ControllableTeleportDash();

__attribute__((alias("__imp__sub_8221C470"))) PPC_WEAK_FUNC(sub_8221C470);
PPC_FUNC_IMPL(__imp__sub_8221C470) {
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
	// li r30,1
	ctx.r30.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// lfs f1,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stb r30,227(r11)
	if (ControllableTeleportDash()) {
		goto loc_8221C4A0;
	}
	else {
	}
	PPC_STORE_U8(ctx.r11.u32 + 227, ctx.r30.u8);
loc_8221C4A0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stb r30,231(r11)
	PPC_STORE_U8(ctx.r11.u32 + 231, ctx.r30.u8);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stfs f1,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f1,60(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f1,48(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f1,52(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// bl 0x8221b528
	ctx.lr = 0x8221C4C0;
	sub_8221B528(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stb r30,584(r11)
	PPC_STORE_U8(ctx.r11.u32 + 584, ctx.r30.u8);
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

__attribute__((alias("__imp__sub_8221C4E0"))) PPC_WEAK_FUNC(sub_8221C4E0);
PPC_FUNC_IMPL(__imp__sub_8221C4E0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8220a938
	ctx.lr = 0x8221C500;
	sub_8220A938(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c514
	if (ctx.cr6.eq) goto loc_8221C514;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8221c5f4
	goto loc_8221C5F4;
loc_8221C514:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c534
	if (ctx.cr6.eq) goto loc_8221C534;
loc_8221C528:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82209068
	ctx.lr = 0x8221C530;
	sub_82209068(ctx, base);
	// b 0x8221c5f4
	goto loc_8221C5F4;
loc_8221C534:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8221c59c
	if (ctx.cr6.eq) goto loc_8221C59C;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8221c57c
	if (ctx.cr6.eq) goto loc_8221C57C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8221c59c
	if (!ctx.cr6.eq) goto loc_8221C59C;
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82208f48
	ctx.lr = 0x8221C564;
	sub_82208F48(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,616(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 616);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,48(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// b 0x8221c598
	goto loc_8221C598;
loc_8221C57C:
	// li r4,35
	ctx.r4.s64 = 35;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82208f48
	ctx.lr = 0x8221C588;
	sub_82208F48(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
loc_8221C598:
	// stfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
loc_8221C59C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x8221C5A4;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c528
	if (ctx.cr6.eq) goto loc_8221C528;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8221b528
	ctx.lr = 0x8221C5C0;
	sub_8221B528(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c528
	if (ctx.cr6.eq) goto loc_8221C528;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82208f88
	ctx.lr = 0x8221C5D4;
	sub_82208F88(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,612(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 612);
	ctx.f0.f64 = double(temp.f32);
	// li r11,2
	ctx.r11.s64 = 2;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8221c5ec
	if (ctx.cr6.gt) goto loc_8221C5EC;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8221C5EC:
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221C5F4:
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

__attribute__((alias("__imp__sub_8221C610"))) PPC_WEAK_FUNC(sub_8221C610);
PPC_FUNC_IMPL(__imp__sub_8221C610) {
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
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r10,56
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 56, ctx.xer);
	// beq cr6,0x8221c6a8
	if (ctx.cr6.eq) goto loc_8221C6A8;
	// cmpwi cr6,r10,59
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 59, ctx.xer);
	// bne cr6,0x8221c6d0
	if (!ctx.cr6.eq) goto loc_8221C6D0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x8221C64C;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,24,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c680
	if (ctx.cr6.eq) goto loc_8221C680;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,590(r11)
	PPC_STORE_U8(ctx.r11.u32 + 590, ctx.r10.u8);
	// bl 0x822090a0
	ctx.lr = 0x8221C66C;
	sub_822090A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c680
	if (ctx.cr6.eq) goto loc_8221C680;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8221c72c
	goto loc_8221C72C;
loc_8221C680:
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8221b528
	ctx.lr = 0x8221C690;
	sub_8221B528(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221c6d0
	if (!ctx.cr6.eq) goto loc_8221C6D0;
loc_8221C69C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82209068
	ctx.lr = 0x8221C6A4;
	sub_82209068(ctx, base);
	// b 0x8221c72c
	goto loc_8221C72C;
loc_8221C6A8:
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c6d0
	if (ctx.cr6.eq) goto loc_8221C6D0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,59
	ctx.r4.s64 = 59;
	// stb r10,589(r11)
	PPC_STORE_U8(ctx.r11.u32 + 589, ctx.r10.u8);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82208f48
	ctx.lr = 0x8221C6D0;
	sub_82208F48(ctx, base);
loc_8221C6D0:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x8221C6D8;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,14,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 14) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221c69c
	if (!ctx.cr6.eq) goto loc_8221C69C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,572(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 572);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221c718
	if (ctx.cr6.eq) goto loc_8221C718;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c718
	if (ctx.cr6.eq) goto loc_8221C718;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221C714;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8221c71c
	goto loc_8221C71C;
loc_8221C718:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221C71C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c69c
	if (ctx.cr6.eq) goto loc_8221C69C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221C72C:
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

__attribute__((alias("__imp__sub_8221C748"))) PPC_WEAK_FUNC(sub_8221C748);
PPC_FUNC_IMPL(__imp__sub_8221C748) {
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
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// ld r11,200(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 200);
	// rlwinm r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8221c77c
	if (ctx.cr6.eq) goto loc_8221C77C;
	// stb r30,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r30.u8);
loc_8221C77C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8221c7d8
	if (ctx.cr6.lt) goto loc_8221C7D8;
	// beq cr6,0x8221c7a0
	if (ctx.cr6.eq) goto loc_8221C7A0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8221c7fc
	if (!ctx.cr6.lt) goto loc_8221C7FC;
loc_8221C794:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82209068
	ctx.lr = 0x8221C79C;
	sub_82209068(ctx, base);
	// b 0x8221c86c
	goto loc_8221C86C;
loc_8221C7A0:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x8221C7A8;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 15) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221c7fc
	if (!ctx.cr6.eq) goto loc_8221C7FC;
	// lbz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221c7fc
	if (!ctx.cr6.eq) goto loc_8221C7FC;
	// li r4,60
	ctx.r4.s64 = 60;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82208f48
	ctx.lr = 0x8221C7CC;
	sub_82208F48(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x8221c7fc
	goto loc_8221C7FC;
loc_8221C7D8:
	// lwz r11,112(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c7fc
	if (ctx.cr6.eq) goto loc_8221C7FC;
	// li r4,59
	ctx.r4.s64 = 59;
	// stb r30,595(r10)
	PPC_STORE_U8(ctx.r10.u32 + 595, ctx.r30.u8);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82208f48
	ctx.lr = 0x8221C7F8;
	sub_82208F48(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
loc_8221C7FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220aaf8
	ctx.lr = 0x8221C804;
	sub_8220AAF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c818
	if (ctx.cr6.eq) goto loc_8221C818;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8221c86c
	goto loc_8221C86C;
loc_8221C818:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,572(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 572);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221c84c
	if (ctx.cr6.eq) goto loc_8221C84C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c84c
	if (ctx.cr6.eq) goto loc_8221C84C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221C848;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8221c850
	goto loc_8221C850;
loc_8221C84C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221C850:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221c868
	if (!ctx.cr6.eq) goto loc_8221C868;
	// lbz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c794
	if (ctx.cr6.eq) goto loc_8221C794;
loc_8221C868:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221C86C:
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

__attribute__((alias("__imp__sub_8221C888"))) PPC_WEAK_FUNC(sub_8221C888);
PPC_FUNC_IMPL(__imp__sub_8221C888) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r11,37
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 37, ctx.xer);
	// beq cr6,0x8221c8d4
	if (ctx.cr6.eq) goto loc_8221C8D4;
	// cmpwi cr6,r11,39
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 39, ctx.xer);
	// bne cr6,0x8221c8ec
	if (!ctx.cr6.eq) goto loc_8221C8EC;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c8ec
	if (ctx.cr6.eq) goto loc_8221C8EC;
	// li r4,40
	ctx.r4.s64 = 40;
	// b 0x8221c8e8
	goto loc_8221C8E8;
loc_8221C8D4:
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c8ec
	if (ctx.cr6.eq) goto loc_8221C8EC;
	// li r4,38
	ctx.r4.s64 = 38;
loc_8221C8E8:
	// bl 0x82208f48
	ctx.lr = 0x8221C8EC;
	sub_82208F48(ctx, base);
loc_8221C8EC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8221c984
	if (ctx.cr6.eq) goto loc_8221C984;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x8221c984
	if (ctx.cr6.gt) goto loc_8221C984;
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// addi r12,r12,-14044
	ctx.r12.s64 = ctx.r12.s64 + -14044;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_8221C938;
	case 1:
		goto loc_8221C978;
	case 2:
		goto loc_8221C940;
	case 3:
		goto loc_8221C978;
	case 4:
		goto loc_8221C95C;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-14024(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -14024);
	// lwz r17,-13960(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13960);
	// lwz r17,-14016(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -14016);
	// lwz r17,-13960(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13960);
	// lwz r17,-13988(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13988);
loc_8221C938:
	// li r4,37
	ctx.r4.s64 = 37;
	// b 0x8221c97c
	goto loc_8221C97C;
loc_8221C940:
	// li r4,41
	ctx.r4.s64 = 41;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82208f48
	ctx.lr = 0x8221C94C;
	sub_82208F48(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,593(r11)
	PPC_STORE_U8(ctx.r11.u32 + 593, ctx.r10.u8);
	// b 0x8221c984
	goto loc_8221C984;
loc_8221C95C:
	// li r4,41
	ctx.r4.s64 = 41;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82208f48
	ctx.lr = 0x8221C968;
	sub_82208F48(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,594(r11)
	PPC_STORE_U8(ctx.r11.u32 + 594, ctx.r10.u8);
	// b 0x8221c984
	goto loc_8221C984;
loc_8221C978:
	// li r4,39
	ctx.r4.s64 = 39;
loc_8221C97C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82208f48
	ctx.lr = 0x8221C984;
	sub_82208F48(ctx, base);
loc_8221C984:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8221ca4c
	if (ctx.cr6.gt) goto loc_8221CA4C;
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// addi r12,r12,-13908
	ctx.r12.s64 = ctx.r12.s64 + -13908;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8221C9C0;
	case 1:
		goto loc_8221CA6C;
	case 2:
		goto loc_8221CACC;
	case 3:
		goto loc_8221CAF8;
	case 4:
		goto loc_8221CB18;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-13888(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13888);
	// lwz r17,-13716(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13716);
	// lwz r17,-13620(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13620);
	// lwz r17,-13576(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13576);
	// lwz r17,-13544(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13544);
loc_8221C9C0:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8221b4c0
	ctx.lr = 0x8221C9C8;
	sub_8221B4C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221cb0c
	if (ctx.cr6.eq) goto loc_8221CB0C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x8221C9DC;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,16,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221cb0c
	if (!ctx.cr6.eq) goto loc_8221CB0C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x8221C9F0;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,22,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 22) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221ca30
	if (ctx.cr6.eq) goto loc_8221CA30;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82209058
	ctx.lr = 0x8221CA08;
	sub_82209058(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221ca28
	if (ctx.cr6.eq) goto loc_8221CA28;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8221cac4
	if (!ctx.cr6.lt) goto loc_8221CAC4;
loc_8221CA28:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8221ca48
	goto loc_8221CA48;
loc_8221CA30:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x8221CA38;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 23) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221ca4c
	if (ctx.cr6.eq) goto loc_8221CA4C;
loc_8221CA44:
	// li r11,2
	ctx.r11.s64 = 2;
loc_8221CA48:
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8221CA4C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x8221CA54;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 23) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221cb38
	if (ctx.cr6.eq) goto loc_8221CB38;
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// b 0x8221cb40
	goto loc_8221CB40;
loc_8221CA6C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8221b4c0
	ctx.lr = 0x8221CA74;
	sub_8221B4C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221cb0c
	if (ctx.cr6.eq) goto loc_8221CB0C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x8221CA88;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,16,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221cb0c
	if (!ctx.cr6.eq) goto loc_8221CB0C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x8221CA9C;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,22,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 22) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221ca4c
	if (ctx.cr6.eq) goto loc_8221CA4C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8221cac4
	if (!ctx.cr6.lt) goto loc_8221CAC4;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8221ca48
	goto loc_8221CA48;
loc_8221CAC4:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x8221ca48
	goto loc_8221CA48;
loc_8221CACC:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8221b4c0
	ctx.lr = 0x8221CAD4;
	sub_8221B4C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221cb0c
	if (ctx.cr6.eq) goto loc_8221CB0C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221ca30
	if (ctx.cr6.eq) goto loc_8221CA30;
	// b 0x8221ca44
	goto loc_8221CA44;
loc_8221CAF8:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8221b4c0
	ctx.lr = 0x8221CB00;
	sub_8221B4C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221ca28
	if (!ctx.cr6.eq) goto loc_8221CA28;
loc_8221CB0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82209068
	ctx.lr = 0x8221CB14;
	sub_82209068(ctx, base);
	// b 0x8221cb48
	goto loc_8221CB48;
loc_8221CB18:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8221b4c0
	ctx.lr = 0x8221CB20;
	sub_8221B4C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221ca4c
	if (!ctx.cr6.eq) goto loc_8221CA4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82209068
	ctx.lr = 0x8221CB34;
	sub_82209068(ctx, base);
	// b 0x8221cb48
	goto loc_8221CB48;
loc_8221CB38:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
loc_8221CB40:
	// stfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221CB48:
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

__attribute__((alias("__imp__sub_8221CB60"))) PPC_WEAK_FUNC(sub_8221CB60);
PPC_FUNC_IMPL(__imp__sub_8221CB60) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r11,62
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 62, ctx.xer);
	// bne cr6,0x8221cba4
	if (!ctx.cr6.eq) goto loc_8221CBA4;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221cba4
	if (ctx.cr6.eq) goto loc_8221CBA4;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82208f48
	ctx.lr = 0x8221CBA4;
	sub_82208F48(ctx, base);
loc_8221CBA4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8221cca8
	if (ctx.cr6.gt) goto loc_8221CCA8;
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// addi r12,r12,-13368
	ctx.r12.s64 = ctx.r12.s64 + -13368;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8221CBD8;
	case 1:
		goto loc_8221CC3C;
	case 2:
		goto loc_8221CC74;
	case 3:
		goto loc_8221CC8C;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-13352(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13352);
	// lwz r17,-13252(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13252);
	// lwz r17,-13196(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13196);
	// lwz r17,-13172(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13172);
loc_8221CBD8:
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// bl 0x82208f60
	ctx.lr = 0x8221CBEC;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,22,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 22) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221cc1c
	if (ctx.cr6.eq) goto loc_8221CC1C;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82208f48
	ctx.lr = 0x8221CC04;
	sub_82208F48(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r10,587(r11)
	PPC_STORE_U8(ctx.r11.u32 + 587, ctx.r10.u8);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// b 0x8221cca8
	goto loc_8221CCA8;
loc_8221CC1C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8221cca8
	if (ctx.cr6.gt) goto loc_8221CCA8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x8221cca8
	goto loc_8221CCA8;
loc_8221CC3C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x8221CC44;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,22,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 22) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221cca8
	if (ctx.cr6.eq) goto loc_8221CCA8;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82208f48
	ctx.lr = 0x8221CC5C;
	sub_82208F48(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r10,588(r11)
	PPC_STORE_U8(ctx.r11.u32 + 588, ctx.r10.u8);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// b 0x8221cca8
	goto loc_8221CCA8;
loc_8221CC74:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,3
	ctx.r9.s64 = 3;
	// stb r10,227(r11)
	PPC_STORE_U8(ctx.r11.u32 + 227, ctx.r10.u8);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// b 0x8221cca8
	goto loc_8221CCA8;
loc_8221CC8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8221b430
	ctx.lr = 0x8221CC98;
	sub_8221B430(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221ccac
	if (!ctx.cr6.eq) goto loc_8221CCAC;
loc_8221CCA8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221CCAC:
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

__attribute__((alias("__imp__sub_8221CCC8"))) PPC_WEAK_FUNC(sub_8221CCC8);
PPC_FUNC_IMPL(__imp__sub_8221CCC8) {
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
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// beq cr6,0x8221cd88
	if (ctx.cr6.eq) goto loc_8221CD88;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221cd78
	if (!ctx.cr6.eq) goto loc_8221CD78;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,65
	ctx.r9.s64 = 65;
	// li r8,63
	ctx.r8.s64 = 63;
	// li r7,67
	ctx.r7.s64 = 67;
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stb r10,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r10.u8);
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// stb r6,233(r11)
	PPC_STORE_U8(ctx.r11.u32 + 233, ctx.r6.u8);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8221cd6c
	if (ctx.cr6.lt) goto loc_8221CD6C;
	// bne cr6,0x8221cd78
	if (!ctx.cr6.eq) goto loc_8221CD78;
	// li r4,63
	ctx.r4.s64 = 63;
	// b 0x8221cd70
	goto loc_8221CD70;
loc_8221CD6C:
	// li r4,62
	ctx.r4.s64 = 62;
loc_8221CD70:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82208f48
	ctx.lr = 0x8221CD78;
	sub_82208F48(ctx, base);
loc_8221CD78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8221cb60
	ctx.lr = 0x8221CD84;
	sub_8221CB60(ctx, base);
	// b 0x8221ce8c
	goto loc_8221CE8C;
loc_8221CD88:
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8221cdb0
	if (!ctx.cr6.eq) goto loc_8221CDB0;
	// li r11,50
	ctx.r11.s64 = 50;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,49
	ctx.r10.s64 = 49;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stb r30,233(r9)
	PPC_STORE_U8(ctx.r9.u32 + 233, ctx.r30.u8);
loc_8221CDB0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8221ce00
	if (ctx.cr6.eq) goto loc_8221CE00;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8221cdec
	if (ctx.cr6.eq) goto loc_8221CDEC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8221ce8c
	if (!ctx.cr6.eq) goto loc_8221CE8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8221b430
	ctx.lr = 0x8221CDD8;
	sub_8221B430(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221ce8c
	if (ctx.cr6.eq) goto loc_8221CE8C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8221ce90
	goto loc_8221CE90;
loc_8221CDEC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r30,227(r11)
	PPC_STORE_U8(ctx.r11.u32 + 227, ctx.r30.u8);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// b 0x8221ce8c
	goto loc_8221CE8C;
loc_8221CE00:
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// bl 0x82208f60
	ctx.lr = 0x8221CE14;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,22,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 22) & 0x1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221ce40
	if (ctx.cr6.eq) goto loc_8221CE40;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82208f48
	ctx.lr = 0x8221CE2C;
	sub_82208F48(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r30,587(r11)
	PPC_STORE_U8(ctx.r11.u32 + 587, ctx.r30.u8);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// b 0x8221ce8c
	goto loc_8221CE8C;
loc_8221CE40:
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,632(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 632);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8221ce8c
	if (ctx.cr6.gt) goto loc_8221CE8C;
	// li r4,19
	ctx.r4.s64 = 19;
	// bl 0x82209058
	ctx.lr = 0x8221CE58;
	sub_82209058(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221ce8c
	if (ctx.cr6.eq) goto loc_8221CE8C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,61
	ctx.r4.s64 = 61;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221CE7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221ce90
	if (!ctx.cr6.eq) goto loc_8221CE90;
loc_8221CE8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221CE90:
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

__attribute__((alias("__imp__sub_8221CEB0"))) PPC_WEAK_FUNC(sub_8221CEB0);
PPC_FUNC_IMPL(__imp__sub_8221CEB0) {
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
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82208f60
	ctx.lr = 0x8221CED8;
	sub_82208F60(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// lwz r30,196(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	// blt cr6,0x8221cfbc
	if (ctx.cr6.lt) goto loc_8221CFBC;
	// beq cr6,0x8221cef8
	if (ctx.cr6.eq) goto loc_8221CEF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8221cfc8
	goto loc_8221CFC8;
loc_8221CEF8:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x8221CF00;
	sub_82208F60(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221cf54
	if (ctx.cr6.eq) goto loc_8221CF54;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8221b5d0
	ctx.lr = 0x8221CF1C;
	sub_8221B5D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221cf54
	if (ctx.cr6.eq) goto loc_8221CF54;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,52
	ctx.r4.s64 = 52;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221CF40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221cf54
	if (ctx.cr6.eq) goto loc_8221CF54;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8221cfc8
	goto loc_8221CFC8;
loc_8221CF54:
	// rlwinm r11,r30,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221cfbc
	if (ctx.cr6.eq) goto loc_8221CFBC;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8221b5d0
	ctx.lr = 0x8221CF70;
	sub_8221B5D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221cfbc
	if (ctx.cr6.eq) goto loc_8221CFBC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,53
	ctx.r4.s64 = 53;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221CF94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221cfbc
	if (ctx.cr6.eq) goto loc_8221CFBC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// b 0x8221cfc8
	goto loc_8221CFC8;
loc_8221CFBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8220d450
	ctx.lr = 0x8221CFC8;
	sub_8220D450(ctx, base);
loc_8221CFC8:
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

__attribute__((alias("__imp__sub_8221CFE8"))) PPC_WEAK_FUNC(sub_8221CFE8);
PPC_FUNC_IMPL(__imp__sub_8221CFE8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x8221d02c
	if (ctx.cr6.eq) goto loc_8221D02C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D024;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_8221D02C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x8221d178
	if (ctx.cr6.gt) goto loc_8221D178;
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// addi r12,r12,-12204
	ctx.r12.s64 = ctx.r12.s64 + -12204;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8221D06C;
	case 1:
		goto loc_8221D088;
	case 2:
		goto loc_8221D0D8;
	case 3:
		goto loc_8221D114;
	case 4:
		goto loc_8221D15C;
	case 5:
		goto loc_8221D0F4;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-12180(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12180);
	// lwz r17,-12152(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12152);
	// lwz r17,-12072(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12072);
	// lwz r17,-12012(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12012);
	// lwz r17,-11940(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11940);
	// lwz r17,-12044(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12044);
loc_8221D06C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221d088
	if (ctx.cr6.eq) goto loc_8221D088;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8221D088:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x8221D090;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,22,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 22) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221d178
	if (ctx.cr6.eq) goto loc_8221D178;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82209058
	ctx.lr = 0x8221D0A8;
	sub_82209058(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221d0c8
	if (ctx.cr6.eq) goto loc_8221D0C8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8221d0d0
	if (!ctx.cr6.lt) goto loc_8221D0D0;
loc_8221D0C8:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8221d174
	goto loc_8221D174;
loc_8221D0D0:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x8221d174
	goto loc_8221D174;
loc_8221D0D8:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x8221D0E0;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,24,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221d0f4
	if (ctx.cr6.eq) goto loc_8221D0F4;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8221d174
	goto loc_8221D174;
loc_8221D0F4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221d178
	if (ctx.cr6.eq) goto loc_8221D178;
loc_8221D108:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82209068
	ctx.lr = 0x8221D110;
	sub_82209068(ctx, base);
	// b 0x8221d1f8
	goto loc_8221D1F8;
loc_8221D114:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x8221D11C;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,22,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 22) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221d178
	if (ctx.cr6.eq) goto loc_8221D178;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82209058
	ctx.lr = 0x8221D134;
	sub_82209058(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221d154
	if (ctx.cr6.eq) goto loc_8221D154;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8221d0d0
	if (!ctx.cr6.lt) goto loc_8221D0D0;
loc_8221D154:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x8221d174
	goto loc_8221D174;
loc_8221D15C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x8221D164;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,24,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221d0f4
	if (ctx.cr6.eq) goto loc_8221D0F4;
	// li r11,2
	ctx.r11.s64 = 2;
loc_8221D174:
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8221D178:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,572(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 572);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221d1b8
	if (ctx.cr6.eq) goto loc_8221D1B8;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221d1b8
	if (ctx.cr6.eq) goto loc_8221D1B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D1A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// b 0x8221d1bc
	goto loc_8221D1BC;
loc_8221D1B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221D1BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221d108
	if (ctx.cr6.eq) goto loc_8221D108;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x8221D1D0;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 23) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221d1e8
	if (ctx.cr6.eq) goto loc_8221D1E8;
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// b 0x8221d1f0
	goto loc_8221D1F0;
loc_8221D1E8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
loc_8221D1F0:
	// stfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221D1F8:
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

__attribute__((alias("__imp__sub_8221D210"))) PPC_WEAK_FUNC(sub_8221D210);
PPC_FUNC_IMPL(__imp__sub_8221D210) {
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
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r6,r11,12716
	ctx.r6.s64 = ctx.r11.s64 + 12716;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,30176
	ctx.r5.s64 = ctx.r11.s64 + 30176;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x826df418
	ctx.lr = 0x8221D24C;
	sub_826DF418(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq cr6,0x8221d264
	if (ctx.cr6.eq) goto loc_8221D264;
	// bl 0x82160140
	ctx.lr = 0x8221D264;
	sub_82160140(ctx, base);
loc_8221D264:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221d288
	if (!ctx.cr6.eq) goto loc_8221D288;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221d280
	if (ctx.cr6.eq) goto loc_8221D280;
	// bl 0x821601b8
	ctx.lr = 0x8221D280;
	sub_821601B8(ctx, base);
loc_8221D280:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8221D288:
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

__attribute__((alias("__imp__sub_8221D2A8"))) PPC_WEAK_FUNC(sub_8221D2A8);
PPC_FUNC_IMPL(__imp__sub_8221D2A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8221D2B0;
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lbz r10,591(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 591);
	// lbz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 584);
	// lbz r9,560(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 560);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8221d338
	if (ctx.cr6.eq) goto loc_8221D338;
	// lwz r3,564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r11,560(r31)
	PPC_STORE_U8(ctx.r31.u32 + 560, ctx.r11.u8);
	// beq cr6,0x8221d310
	if (ctx.cr6.eq) goto loc_8221D310;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221d338
	if (ctx.cr6.eq) goto loc_8221D338;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221d338
	if (ctx.cr6.eq) goto loc_8221D338;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x8221d330
	goto loc_8221D330;
loc_8221D310:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221d338
	if (ctx.cr6.eq) goto loc_8221D338;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221d338
	if (ctx.cr6.eq) goto loc_8221D338;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
loc_8221D330:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D338;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221D338:
	// lbz r11,585(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 585);
	// lbz r9,561(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 561);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8221d3a8
	if (ctx.cr6.eq) goto loc_8221D3A8;
	// lwz r3,564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r11,561(r31)
	PPC_STORE_U8(ctx.r31.u32 + 561, ctx.r11.u8);
	// beq cr6,0x8221d380
	if (ctx.cr6.eq) goto loc_8221D380;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221d3a8
	if (ctx.cr6.eq) goto loc_8221D3A8;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221d3a8
	if (ctx.cr6.eq) goto loc_8221D3A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// b 0x8221d3a0
	goto loc_8221D3A0;
loc_8221D380:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221d3a8
	if (ctx.cr6.eq) goto loc_8221D3A8;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221d3a8
	if (ctx.cr6.eq) goto loc_8221D3A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
loc_8221D3A0:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D3A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221D3A8:
	// lbz r11,591(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 591);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221d3d4
	if (ctx.cr6.eq) goto loc_8221D3D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82208f60
	ctx.lr = 0x8221D3C4;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 15) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221d3d4
	if (ctx.cr6.eq) goto loc_8221D3D4;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8221D3D4:
	// lbz r11,591(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 591);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221d404
	if (ctx.cr6.eq) goto loc_8221D404;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221d404
	if (!ctx.cr6.eq) goto loc_8221D404;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221b4c0
	ctx.lr = 0x8221D3F4;
	sub_8221B4C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221d404
	if (!ctx.cr6.eq) goto loc_8221D404;
	// stb r30,591(r31)
	PPC_STORE_U8(ctx.r31.u32 + 591, ctx.r30.u8);
loc_8221D404:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8220a000
	ctx.lr = 0x8221D410;
	sub_8220A000(ctx, base);
	// lbz r11,595(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 595);
	// lbz r10,592(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 592);
	// clrlwi r7,r29,24
	ctx.r7.u64 = ctx.r29.u32 & 0xFF;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// lbz r9,589(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 589);
	// lbz r5,586(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 586);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lbz r6,593(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 593);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// lbz r8,591(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 591);
	// cntlzw r5,r5
	ctx.r5.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// lbz r4,590(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 590);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lbz r3,588(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 588);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// stb r30,586(r31)
	PPC_STORE_U8(ctx.r31.u32 + 586, ctx.r30.u8);
	// rlwimi r11,r10,0,25,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x40) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFBF);
	// stb r30,588(r31)
	PPC_STORE_U8(ctx.r31.u32 + 588, ctx.r30.u8);
	// subfe r10,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lbz r9,587(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 587);
	// stb r30,587(r31)
	PPC_STORE_U8(ctx.r31.u32 + 587, ctx.r30.u8);
	// rlwimi r11,r10,0,28,28
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x8) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF7);
	// lbz r10,594(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 594);
	// stb r30,590(r31)
	PPC_STORE_U8(ctx.r31.u32 + 590, ctx.r30.u8);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// stb r30,593(r31)
	PPC_STORE_U8(ctx.r31.u32 + 593, ctx.r30.u8);
	// stb r30,594(r31)
	PPC_STORE_U8(ctx.r31.u32 + 594, ctx.r30.u8);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// rlwimi r11,r10,0,22,22
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x200) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFDFF);
	// lwz r10,172(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r6,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r6.s64;
	// rlwimi r11,r9,0,30,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x2) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// rlwinm r9,r5,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// subfe r6,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// subfic r7,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r7.s64;
	// subfe r7,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r8,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r8.s64;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r11,r11,1610
	ctx.r11.u64 = ctx.r11.u64 & 1610;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r9,r6,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100;
	// subfic r6,r4,0
	ctx.xer.ca = ctx.r4.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r4.s64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r9,r7,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80;
	// subfe r7,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r9,r8,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20;
	// subfic r8,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r3.s64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r9,r7,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x10;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r9,r8,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221D508"))) PPC_WEAK_FUNC(sub_8221D508);
PPC_FUNC_IMPL(__imp__sub_8221D508) {
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
	// bl 0x8220e4b0
	ctx.lr = 0x8221D520;
	sub_8220E4B0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r11,r11,-18232
	ctx.r11.s64 = ctx.r11.s64 + -18232;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r10,r10,-18112
	ctx.r10.s64 = ctx.r10.s64 + -18112;
	// addi r9,r9,-18124
	ctx.r9.s64 = ctx.r9.s64 + -18124;
	// addi r8,r8,-18180
	ctx.r8.s64 = ctx.r8.s64 + -18180;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r7,-18212
	ctx.r7.s64 = ctx.r7.s64 + -18212;
	// addi r6,r6,-18244
	ctx.r6.s64 = ctx.r6.s64 + -18244;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// addi r5,r5,-18256
	ctx.r5.s64 = ctx.r5.s64 + -18256;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,560(r31)
	PPC_STORE_U8(ctx.r31.u32 + 560, ctx.r11.u8);
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// stw r6,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r6.u32);
	// stw r5,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r5.u32);
	// stb r11,561(r31)
	PPC_STORE_U8(ctx.r31.u32 + 561, ctx.r11.u8);
	// stw r11,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r11.u32);
	// stw r11,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r11.u32);
	// stw r11,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r11.u32);
	// stw r11,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r11.u32);
	// stfs f0,596(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 596, temp.u32);
	// stfs f0,600(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 600, temp.u32);
	// stw r11,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r11.u32);
	// stfs f0,604(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 604, temp.u32);
	// stb r11,584(r31)
	PPC_STORE_U8(ctx.r31.u32 + 584, ctx.r11.u8);
	// stfs f0,608(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 608, temp.u32);
	// stb r11,585(r31)
	PPC_STORE_U8(ctx.r31.u32 + 585, ctx.r11.u8);
	// stfs f0,612(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 612, temp.u32);
	// stb r11,586(r31)
	PPC_STORE_U8(ctx.r31.u32 + 586, ctx.r11.u8);
	// stfs f0,616(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 616, temp.u32);
	// stb r11,587(r31)
	PPC_STORE_U8(ctx.r31.u32 + 587, ctx.r11.u8);
	// stfs f0,628(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 628, temp.u32);
	// stb r11,588(r31)
	PPC_STORE_U8(ctx.r31.u32 + 588, ctx.r11.u8);
	// stfs f0,632(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 632, temp.u32);
	// stb r11,589(r31)
	PPC_STORE_U8(ctx.r31.u32 + 589, ctx.r11.u8);
	// stb r11,590(r31)
	PPC_STORE_U8(ctx.r31.u32 + 590, ctx.r11.u8);
	// stb r11,591(r31)
	PPC_STORE_U8(ctx.r31.u32 + 591, ctx.r11.u8);
	// stb r11,592(r31)
	PPC_STORE_U8(ctx.r31.u32 + 592, ctx.r11.u8);
	// stb r11,593(r31)
	PPC_STORE_U8(ctx.r31.u32 + 593, ctx.r11.u8);
	// stb r11,594(r31)
	PPC_STORE_U8(ctx.r31.u32 + 594, ctx.r11.u8);
	// stb r11,595(r31)
	PPC_STORE_U8(ctx.r31.u32 + 595, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_8221D608"))) PPC_WEAK_FUNC(sub_8221D608);
PPC_FUNC_IMPL(__imp__sub_8221D608) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-144
	ctx.r3.s64 = ctx.r3.s64 + -144;
	// b 0x8221d628
	sub_8221D628(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221D610"))) PPC_WEAK_FUNC(sub_8221D610);
PPC_FUNC_IMPL(__imp__sub_8221D610) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-148
	ctx.r3.s64 = ctx.r3.s64 + -148;
	// b 0x8221d628
	sub_8221D628(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221D618"))) PPC_WEAK_FUNC(sub_8221D618);
PPC_FUNC_IMPL(__imp__sub_8221D618) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-36
	ctx.r3.s64 = ctx.r3.s64 + -36;
	// b 0x8221d628
	sub_8221D628(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221D620"))) PPC_WEAK_FUNC(sub_8221D620);
PPC_FUNC_IMPL(__imp__sub_8221D620) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x8221d628
	sub_8221D628(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221D628"))) PPC_WEAK_FUNC(sub_8221D628);
PPC_FUNC_IMPL(__imp__sub_8221D628) {
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
	// lwz r3,576(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221d654
	if (ctx.cr6.eq) goto loc_8221D654;
	// bl 0x821601b8
	ctx.lr = 0x8221D654;
	sub_821601B8(ctx, base);
loc_8221D654:
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221d664
	if (ctx.cr6.eq) goto loc_8221D664;
	// bl 0x821601b8
	ctx.lr = 0x8221D664;
	sub_821601B8(ctx, base);
loc_8221D664:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82206e70
	ctx.lr = 0x8221D66C;
	sub_82206E70(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221d684
	if (ctx.cr6.eq) goto loc_8221D684;
	// bl 0x82186190
	ctx.lr = 0x8221D680;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8221D684:
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

__attribute__((alias("__imp__sub_8221D6A0"))) PPC_WEAK_FUNC(sub_8221D6A0);
PPC_FUNC_IMPL(__imp__sub_8221D6A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8221D6A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8220f330
	ctx.lr = 0x8221D6B8;
	sub_8220F330(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8221d6d4
	if (ctx.cr6.lt) goto loc_8221D6D4;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8221d6d8
	goto loc_8221D6D8;
loc_8221D6D4:
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
loc_8221D6D8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8221d7bc
	if (ctx.cr6.eq) goto loc_8221D7BC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,13988
	ctx.r10.s64 = ctx.r11.s64 + 13988;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8221D6EC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8221d710
	if (ctx.cr6.eq) goto loc_8221D710;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8221d6ec
	if (ctx.cr6.eq) goto loc_8221D6EC;
loc_8221D710:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8221d750
	if (!ctx.cr6.eq) goto loc_8221D750;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8221d210
	ctx.lr = 0x8221D734;
	sub_8221D210(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r28,528
	ctx.r3.s64 = ctx.r28.s64 + 528;
	// bl 0x8221f3c8
	ctx.lr = 0x8221D740;
	sub_8221F3C8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221d750
	if (ctx.cr6.eq) goto loc_8221D750;
	// bl 0x821601b8
	ctx.lr = 0x8221D750;
	sub_821601B8(ctx, base);
loc_8221D750:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-26368
	ctx.r10.s64 = ctx.r11.s64 + -26368;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8221D75C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8221d780
	if (ctx.cr6.eq) goto loc_8221D780;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8221d75c
	if (ctx.cr6.eq) goto loc_8221D75C;
loc_8221D780:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8221d7bc
	if (!ctx.cr6.eq) goto loc_8221D7BC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82208198
	ctx.lr = 0x8221D7A0;
	sub_82208198(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r28,536
	ctx.r3.s64 = ctx.r28.s64 + 536;
	// bl 0x8221f3c8
	ctx.lr = 0x8221D7AC;
	sub_8221F3C8(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221d7bc
	if (ctx.cr6.eq) goto loc_8221D7BC;
	// bl 0x821601b8
	ctx.lr = 0x8221D7BC;
	sub_821601B8(ctx, base);
loc_8221D7BC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221D7C8"))) PPC_WEAK_FUNC(sub_8221D7C8);
PPC_FUNC_IMPL(__imp__sub_8221D7C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8221D7D0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x8220f5c8
	ctx.lr = 0x8221D7E4;
	sub_8220F5C8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,17
	ctx.r5.s64 = 17;
	// addi r4,r11,-26292
	ctx.r4.s64 = ctx.r11.s64 + -26292;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// stw r31,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r31.u32);
	// stw r30,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r30.u32);
	// stb r31,340(r1)
	PPC_STORE_U8(ctx.r1.u32 + 340, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x8221D80C;
	sub_82161E08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ea350
	ctx.lr = 0x8221D824;
	sub_821EA350(ctx, base);
	// lwz r11,360(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// stfs f1,564(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 564, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8221d83c
	if (ctx.cr6.lt) goto loc_8221D83C;
	// lwz r3,340(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// bl 0x82186190
	ctx.lr = 0x8221D83C;
	sub_82186190(ctx, base);
loc_8221D83C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r30.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r31,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r31.u32);
	// addi r4,r11,-26312
	ctx.r4.s64 = ctx.r11.s64 + -26312;
	// stb r31,340(r1)
	PPC_STORE_U8(ctx.r1.u32 + 340, ctx.r31.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stb r31,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x8221D868;
	sub_82161E08(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x8221D878;
	sub_821EA350(ctx, base);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stfs f1,568(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 568, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8221d890
	if (ctx.cr6.lt) goto loc_8221D890;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82186190
	ctx.lr = 0x8221D890;
	sub_82186190(ctx, base);
loc_8221D890:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// li r5,17
	ctx.r5.s64 = 17;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// addi r4,r11,-26332
	ctx.r4.s64 = ctx.r11.s64 + -26332;
	// stb r31,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r31.u8);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stw r30,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r30.u32);
	// stw r31,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r31.u32);
	// stb r31,276(r1)
	PPC_STORE_U8(ctx.r1.u32 + 276, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x8221D8BC;
	sub_82161E08(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x8221D8CC;
	sub_821EA350(ctx, base);
	// lwz r11,296(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// stfs f1,572(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 572, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8221d8e4
	if (ctx.cr6.lt) goto loc_8221D8E4;
	// lwz r3,276(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// bl 0x82186190
	ctx.lr = 0x8221D8E4;
	sub_82186190(ctx, base);
loc_8221D8E4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r30.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r31,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r31.u32);
	// addi r4,r11,-26352
	ctx.r4.s64 = ctx.r11.s64 + -26352;
	// stb r31,276(r1)
	PPC_STORE_U8(ctx.r1.u32 + 276, ctx.r31.u8);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stw r30,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r30.u32);
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// stb r31,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x8221D910;
	sub_82161E08(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x8221D920;
	sub_821EA350(ctx, base);
	// lwz r11,232(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// stfs f1,576(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 576, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8221d938
	if (ctx.cr6.lt) goto loc_8221D938;
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// bl 0x82186190
	ctx.lr = 0x8221D938;
	sub_82186190(ctx, base);
loc_8221D938:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r30.u32);
	// li r5,19
	ctx.r5.s64 = 19;
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// addi r4,r11,-18004
	ctx.r4.s64 = ctx.r11.s64 + -18004;
	// stb r31,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r31.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x8221D964;
	sub_82161E08(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x8221D974;
	sub_821EA350(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f1,580(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 580, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8221d98c
	if (ctx.cr6.lt) goto loc_8221D98C;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x8221D98C;
	sub_82186190(ctx, base);
loc_8221D98C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// li r5,18
	ctx.r5.s64 = 18;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r4,r11,-18024
	ctx.r4.s64 = ctx.r11.s64 + -18024;
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stb r31,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x8221D9B8;
	sub_82161E08(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x8221D9C8;
	sub_821EA350(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stfs f1,584(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 584, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8221d9e0
	if (ctx.cr6.lt) goto loc_8221D9E0;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82186190
	ctx.lr = 0x8221D9E0;
	sub_82186190(ctx, base);
loc_8221D9E0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// li r5,17
	ctx.r5.s64 = 17;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r4,r11,-18044
	ctx.r4.s64 = ctx.r11.s64 + -18044;
	// stb r31,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r31.u8);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r30.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stb r31,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x8221DA0C;
	sub_82161E08(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x8221DA1C;
	sub_821EA350(ctx, base);
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// stfs f1,588(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 588, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8221da34
	if (ctx.cr6.lt) goto loc_8221DA34;
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x82186190
	ctx.lr = 0x8221DA34;
	sub_82186190(ctx, base);
loc_8221DA34:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r30.u32);
	// li r5,13
	ctx.r5.s64 = 13;
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// addi r4,r11,-18060
	ctx.r4.s64 = ctx.r11.s64 + -18060;
	// stb r31,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r31.u8);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r30,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r30.u32);
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r31.u32);
	// stb r31,244(r1)
	PPC_STORE_U8(ctx.r1.u32 + 244, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x8221DA60;
	sub_82161E08(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x8221DA70;
	sub_821EA350(ctx, base);
	// lwz r11,264(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// stfs f1,592(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 592, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8221da88
	if (ctx.cr6.lt) goto loc_8221DA88;
	// lwz r3,244(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// bl 0x82186190
	ctx.lr = 0x8221DA88;
	sub_82186190(ctx, base);
loc_8221DA88:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r30.u32);
	// li r5,25
	ctx.r5.s64 = 25;
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r31.u32);
	// addi r4,r11,-18088
	ctx.r4.s64 = ctx.r11.s64 + -18088;
	// stb r31,244(r1)
	PPC_STORE_U8(ctx.r1.u32 + 244, ctx.r31.u8);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stw r30,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r30.u32);
	// stw r31,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r31.u32);
	// stb r31,308(r1)
	PPC_STORE_U8(ctx.r1.u32 + 308, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x8221DAB4;
	sub_82161E08(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x8221DAC4;
	sub_821EA350(ctx, base);
	// lwz r11,328(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// stfs f1,596(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 596, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8221dadc
	if (ctx.cr6.lt) goto loc_8221DADC;
	// lwz r3,308(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// bl 0x82186190
	ctx.lr = 0x8221DADC;
	sub_82186190(ctx, base);
loc_8221DADC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r30.u32);
	// li r5,18
	ctx.r5.s64 = 18;
	// stw r31,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r31.u32);
	// addi r4,r11,-18108
	ctx.r4.s64 = ctx.r11.s64 + -18108;
	// stb r31,308(r1)
	PPC_STORE_U8(ctx.r1.u32 + 308, ctx.r31.u8);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// stw r30,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r30.u32);
	// stw r31,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r31.u32);
	// stb r31,372(r1)
	PPC_STORE_U8(ctx.r1.u32 + 372, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x8221DB08;
	sub_82161E08(ctx, base);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x8221DB18;
	sub_821EA350(ctx, base);
	// lwz r11,392(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	// stfs f1,600(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 600, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8221db30
	if (ctx.cr6.lt) goto loc_8221DB30;
	// lwz r3,372(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// bl 0x82186190
	ctx.lr = 0x8221DB30;
	sub_82186190(ctx, base);
loc_8221DB30:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221DB40"))) PPC_WEAK_FUNC(sub_8221DB40);
PPC_FUNC_IMPL(__imp__sub_8221DB40) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// addi r11,r11,-17848
	ctx.r11.s64 = ctx.r11.s64 + -17848;
	// addi r10,r10,-17856
	ctx.r10.s64 = ctx.r10.s64 + -17856;
	// addi r9,r9,-17868
	ctx.r9.s64 = ctx.r9.s64 + -17868;
	// addi r8,r8,-17924
	ctx.r8.s64 = ctx.r8.s64 + -17924;
	// addi r30,r31,36
	ctx.r30.s64 = ctx.r31.s64 + 36;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// bl 0x8221ed88
	ctx.lr = 0x8221DB94;
	sub_8221ED88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221ed78
	ctx.lr = 0x8221DB9C;
	sub_8221ED78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221f0e8
	ctx.lr = 0x8221DBA4;
	sub_8221F0E8(ctx, base);
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

__attribute__((alias("__imp__sub_8221DBC0"))) PPC_WEAK_FUNC(sub_8221DBC0);
PPC_FUNC_IMPL(__imp__sub_8221DBC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,5020
	ctx.r3.s64 = ctx.r11.s64 + 5020;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221DBD0"))) PPC_WEAK_FUNC(sub_8221DBD0);
PPC_FUNC_IMPL(__imp__sub_8221DBD0) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221DBFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221DC14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221DC2C;
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

__attribute__((alias("__imp__sub_8221DC48"))) PPC_WEAK_FUNC(sub_8221DC48);
PPC_FUNC_IMPL(__imp__sub_8221DC48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8221DC58"))) PPC_WEAK_FUNC(sub_8221DC58);
PPC_FUNC_IMPL(__imp__sub_8221DC58) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,56(r3)
	PPC_STORE_U8(ctx.r3.u32 + 56, ctx.r11.u8);
	// stb r10,57(r3)
	PPC_STORE_U8(ctx.r3.u32 + 57, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221DC70"))) PPC_WEAK_FUNC(sub_8221DC70);
PPC_FUNC_IMPL(__imp__sub_8221DC70) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,58(r3)
	PPC_STORE_U8(ctx.r3.u32 + 58, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221DC80"))) PPC_WEAK_FUNC(sub_8221DC80);
PPC_FUNC_IMPL(__imp__sub_8221DC80) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221DC88"))) PPC_WEAK_FUNC(sub_8221DC88);
PPC_FUNC_IMPL(__imp__sub_8221DC88) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-36
	ctx.r3.s64 = ctx.r3.s64 + -36;
	// b 0x8221dd60
	sub_8221DD60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221DC90"))) PPC_WEAK_FUNC(sub_8221DC90);
PPC_FUNC_IMPL(__imp__sub_8221DC90) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x8221dd60
	sub_8221DD60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221DC98"))) PPC_WEAK_FUNC(sub_8221DC98);
PPC_FUNC_IMPL(__imp__sub_8221DC98) {
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
	// bl 0x8221f0e8
	ctx.lr = 0x8221DCB8;
	sub_8221F0E8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221dcd0
	if (ctx.cr6.eq) goto loc_8221DCD0;
	// bl 0x82186190
	ctx.lr = 0x8221DCCC;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8221DCD0:
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

__attribute__((alias("__imp__sub_8221DCE8"))) PPC_WEAK_FUNC(sub_8221DCE8);
PPC_FUNC_IMPL(__imp__sub_8221DCE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8221DCF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8221f1b8
	ctx.lr = 0x8221DCFC;
	sub_8221F1B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r31,36
	ctx.r30.s64 = ctx.r31.s64 + 36;
	// addi r11,r11,14116
	ctx.r11.s64 = ctx.r11.s64 + 14116;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x8221ed78
	ctx.lr = 0x8221DD14;
	sub_8221ED78(ctx, base);
	// addi r29,r31,40
	ctx.r29.s64 = ctx.r31.s64 + 40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221ed88
	ctx.lr = 0x8221DD20;
	sub_8221ED88(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r11,r11,-17848
	ctx.r11.s64 = ctx.r11.s64 + -17848;
	// addi r10,r10,-17856
	ctx.r10.s64 = ctx.r10.s64 + -17856;
	// addi r9,r9,-17868
	ctx.r9.s64 = ctx.r9.s64 + -17868;
	// addi r8,r8,-17924
	ctx.r8.s64 = ctx.r8.s64 + -17924;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221DD60"))) PPC_WEAK_FUNC(sub_8221DD60);
PPC_FUNC_IMPL(__imp__sub_8221DD60) {
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
	// bl 0x8221db40
	ctx.lr = 0x8221DD80;
	sub_8221DB40(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221dd98
	if (ctx.cr6.eq) goto loc_8221DD98;
	// bl 0x82186190
	ctx.lr = 0x8221DD94;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8221DD98:
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

__attribute__((alias("__imp__sub_8221DDB0"))) PPC_WEAK_FUNC(sub_8221DDB0);
PPC_FUNC_IMPL(__imp__sub_8221DDB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// addi r11,r11,-17804
	ctx.r11.s64 = ctx.r11.s64 + -17804;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221DDC8"))) PPC_WEAK_FUNC(sub_8221DDC8);
PPC_FUNC_IMPL(__imp__sub_8221DDC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-17832
	ctx.r11.s64 = ctx.r11.s64 + -17832;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221DDD8"))) PPC_WEAK_FUNC(sub_8221DDD8);
PPC_FUNC_IMPL(__imp__sub_8221DDD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r7,r11,30
	ctx.r7.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8221ddf4
	if (!ctx.cr6.eq) goto loc_8221DDF4;
	// twi 31,r0,22
loc_8221DDF4:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8221de14
	if (ctx.cr6.lt) goto loc_8221DE14;
	// twi 31,r0,22
loc_8221DE14:
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8221de24
	if (ctx.cr6.gt) goto loc_8221DE24;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_8221DE24:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221DE40"))) PPC_WEAK_FUNC(sub_8221DE40);
PPC_FUNC_IMPL(__imp__sub_8221DE40) {
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
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,12912
	ctx.r4.s64 = ctx.r11.s64 + 12912;
	// bl 0x826de850
	ctx.lr = 0x8221DE64;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221de78
	if (!ctx.cr6.eq) goto loc_8221DE78;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221DE78:
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

__attribute__((alias("__imp__sub_8221DE90"))) PPC_WEAK_FUNC(sub_8221DE90);
PPC_FUNC_IMPL(__imp__sub_8221DE90) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-17832
	ctx.r11.s64 = ctx.r11.s64 + -17832;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8221dec4
	if (ctx.cr6.eq) goto loc_8221DEC4;
	// bl 0x82186190
	ctx.lr = 0x8221DEC0;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8221DEC4:
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

__attribute__((alias("__imp__sub_8221DED8"))) PPC_WEAK_FUNC(sub_8221DED8);
PPC_FUNC_IMPL(__imp__sub_8221DED8) {
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
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,84(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq cr6,0x8221df08
	if (ctx.cr6.eq) goto loc_8221DF08;
	// bl 0x82160140
	ctx.lr = 0x8221DF08;
	sub_82160140(ctx, base);
loc_8221DF08:
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

__attribute__((alias("__imp__sub_8221DF20"))) PPC_WEAK_FUNC(sub_8221DF20);
PPC_FUNC_IMPL(__imp__sub_8221DF20) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,52(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r11,r3,-32
	ctx.r11.s64 = ctx.r3.s64 + -32;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// blt cr6,0x8221df94
	if (ctx.cr6.lt) goto loc_8221DF94;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221df48
	if (!ctx.cr6.eq) goto loc_8221DF48;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x8221df54
	goto loc_8221DF54;
loc_8221DF48:
	// lwz r7,72(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// subf r10,r10,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r10.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
loc_8221DF54:
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8221df94
	if (!ctx.cr6.lt) goto loc_8221DF94;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8221df7c
	if (ctx.cr6.eq) goto loc_8221DF7C;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8221df80
	if (ctx.cr6.lt) goto loc_8221DF80;
loc_8221DF7C:
	// twi 31,r0,22
loc_8221DF80:
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8221df98
	if (!ctx.cr6.eq) goto loc_8221DF98;
loc_8221DF94:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8221DF98:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221dfb0
	if (ctx.cr6.eq) goto loc_8221DFB0;
	// stw r4,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r4.u32);
	// stb r9,56(r3)
	PPC_STORE_U8(ctx.r3.u32 + 56, ctx.r9.u8);
	// stb r9,57(r3)
	PPC_STORE_U8(ctx.r3.u32 + 57, ctx.r9.u8);
loc_8221DFB0:
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221DFD0"))) PPC_WEAK_FUNC(sub_8221DFD0);
PPC_FUNC_IMPL(__imp__sub_8221DFD0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-32
	ctx.r11.s64 = ctx.r3.s64 + -32;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x8221e034
	if (ctx.cr6.lt) goto loc_8221E034;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8221dff4
	if (ctx.cr6.eq) goto loc_8221DFF4;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
loc_8221DFF4:
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8221e034
	if (!ctx.cr6.lt) goto loc_8221E034;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8221e01c
	if (ctx.cr6.eq) goto loc_8221E01C;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8221e020
	if (ctx.cr6.lt) goto loc_8221E020;
loc_8221E01C:
	// twi 31,r0,22
loc_8221E020:
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8221e038
	if (!ctx.cr6.eq) goto loc_8221E038;
loc_8221E034:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221E038:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r4.u32);
	// stb r11,56(r3)
	PPC_STORE_U8(ctx.r3.u32 + 56, ctx.r11.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,57(r3)
	PPC_STORE_U8(ctx.r3.u32 + 57, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221E060"))) PPC_WEAK_FUNC(sub_8221E060);
PPC_FUNC_IMPL(__imp__sub_8221E060) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,52(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r11,r3,-32
	ctx.r11.s64 = ctx.r3.s64 + -32;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// blt cr6,0x8221e0d4
	if (ctx.cr6.lt) goto loc_8221E0D4;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221e088
	if (!ctx.cr6.eq) goto loc_8221E088;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x8221e094
	goto loc_8221E094;
loc_8221E088:
	// lwz r7,72(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// subf r10,r10,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r10.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
loc_8221E094:
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8221e0d4
	if (!ctx.cr6.lt) goto loc_8221E0D4;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8221e0bc
	if (ctx.cr6.eq) goto loc_8221E0BC;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8221e0c0
	if (ctx.cr6.lt) goto loc_8221E0C0;
loc_8221E0BC:
	// twi 31,r0,22
loc_8221E0C0:
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8221e0d8
	if (!ctx.cr6.eq) goto loc_8221E0D8;
loc_8221E0D4:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8221E0D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221e0f8
	if (ctx.cr6.eq) goto loc_8221E0F8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r4.u32);
	// stb r9,56(r3)
	PPC_STORE_U8(ctx.r3.u32 + 56, ctx.r9.u8);
	// stb r9,57(r3)
	PPC_STORE_U8(ctx.r3.u32 + 57, ctx.r9.u8);
	// stb r11,58(r3)
	PPC_STORE_U8(ctx.r3.u32 + 58, ctx.r11.u8);
loc_8221E0F8:
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221E118"))) PPC_WEAK_FUNC(sub_8221E118);
PPC_FUNC_IMPL(__imp__sub_8221E118) {
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
	ctx.lr = 0x8221E148;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221e174
	if (ctx.cr6.eq) goto loc_8221E174;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,-17756
	ctx.r10.s64 = ctx.r11.s64 + -17756;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8221e178
	goto loc_8221E178;
loc_8221E174:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221E178:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x8221e1c4
	if (!ctx.cr6.eq) goto loc_8221E1C4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8221e1a4
	if (ctx.cr6.eq) goto loc_8221E1A4;
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
	ctx.lr = 0x8221E1A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221E1A4:
	// lis r10,-32077
	ctx.r10.s64 = -2102198272;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,2788
	ctx.r11.s64 = ctx.r11.s64 + 2788;
	// lwz r10,12760(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12760);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x821e0968
	ctx.lr = 0x8221E1C4;
	sub_821E0968(ctx, base);
loc_8221E1C4:
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

__attribute__((alias("__imp__sub_8221E1E0"))) PPC_WEAK_FUNC(sub_8221E1E0);
PPC_FUNC_IMPL(__imp__sub_8221E1E0) {
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
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x8221e260
	if (ctx.cr6.lt) goto loc_8221E260;
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221e214
	if (!ctx.cr6.eq) goto loc_8221E214;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8221e220
	goto loc_8221E220;
loc_8221E214:
	// lwz r10,72(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_8221E220:
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8221e260
	if (!ctx.cr6.lt) goto loc_8221E260;
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221e248
	if (ctx.cr6.eq) goto loc_8221E248;
	// lwz r10,72(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8221e24c
	if (ctx.cr6.lt) goto loc_8221E24C;
loc_8221E248:
	// twi 31,r0,22
loc_8221E24C:
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8221e264
	if (!ctx.cr6.eq) goto loc_8221E264;
loc_8221E260:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8221E264:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221e2e8
	if (ctx.cr6.eq) goto loc_8221E2E8;
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221e290
	if (ctx.cr6.eq) goto loc_8221E290;
	// lwz r10,72(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8221e294
	if (ctx.cr6.lt) goto loc_8221E294;
loc_8221E290:
	// twi 31,r0,22
loc_8221E294:
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bne cr6,0x8221e2ac
	if (!ctx.cr6.eq) goto loc_8221E2AC;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_8221E2AC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221E2B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq cr6,0x8221e2d4
	if (ctx.cr6.eq) goto loc_8221E2D4;
	// bl 0x82160140
	ctx.lr = 0x8221E2D4;
	sub_82160140(ctx, base);
loc_8221E2D4:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221e2f0
	if (ctx.cr6.eq) goto loc_8221E2F0;
	// bl 0x821601b8
	ctx.lr = 0x8221E2E4;
	sub_821601B8(ctx, base);
	// b 0x8221e2f0
	goto loc_8221E2F0;
loc_8221E2E8:
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_8221E2F0:
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

__attribute__((alias("__imp__sub_8221E308"))) PPC_WEAK_FUNC(sub_8221E308);
PPC_FUNC_IMPL(__imp__sub_8221E308) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221e31c
	if (!ctx.cr6.eq) goto loc_8221E31C;
	// twi 31,r0,22
loc_8221E31C:
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x8221e32c
	if (ctx.cr6.gt) goto loc_8221E32C;
	// twi 31,r0,22
loc_8221E32C:
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8221e34c
	if (ctx.cr6.lt) goto loc_8221E34C;
	// twi 31,r0,22
loc_8221E34C:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8221e35c
	if (ctx.cr6.gt) goto loc_8221E35C;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_8221E35C:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221E378"))) PPC_WEAK_FUNC(sub_8221E378);
PPC_FUNC_IMPL(__imp__sub_8221E378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8221E380;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221e41c
	if (!ctx.cr6.eq) goto loc_8221E41C;
loc_8221E3A0:
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221e408
	if (!ctx.cr6.eq) goto loc_8221E408;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r10,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8221e3d0
	if (ctx.cr6.gt) goto loc_8221E3D0;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
loc_8221E3D0:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,3,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x8;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221e3f4
	if (ctx.cr6.eq) goto loc_8221E3F4;
	// bl 0x821601b8
	ctx.lr = 0x8221E3F4;
	sub_821601B8(ctx, base);
loc_8221E3F4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bne 0x8221e408
	if (!ctx.cr0.eq) goto loc_8221E408;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
loc_8221E408:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8221e3a0
	if (ctx.cr6.eq) goto loc_8221E3A0;
loc_8221E41C:
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8221e454
	if (ctx.cr6.eq) goto loc_8221E454;
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_8221E42C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8221e44c
	if (ctx.cr6.eq) goto loc_8221E44C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82186190
	ctx.lr = 0x8221E44C;
	sub_82186190(ctx, base);
loc_8221E44C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8221e42c
	if (!ctx.cr6.eq) goto loc_8221E42C;
loc_8221E454:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221e464
	if (ctx.cr6.eq) goto loc_8221E464;
	// bl 0x82186190
	ctx.lr = 0x8221E464;
	sub_82186190(ctx, base);
loc_8221E464:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221E478"))) PPC_WEAK_FUNC(sub_8221E478);
PPC_FUNC_IMPL(__imp__sub_8221E478) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8221e4ac
	if (ctx.cr6.eq) goto loc_8221E4AC;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221e4ac
	if (ctx.cr6.eq) goto loc_8221E4AC;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221e4ac
	if (ctx.cr6.eq) goto loc_8221E4AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8221E4AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221E4B8"))) PPC_WEAK_FUNC(sub_8221E4B8);
PPC_FUNC_IMPL(__imp__sub_8221E4B8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221E4C8"))) PPC_WEAK_FUNC(sub_8221E4C8);
PPC_FUNC_IMPL(__imp__sub_8221E4C8) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-17736
	ctx.r11.s64 = ctx.r11.s64 + -17736;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8221e378
	ctx.lr = 0x8221E4F8;
	sub_8221E378(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221e508
	if (ctx.cr6.eq) goto loc_8221E508;
	// bl 0x821601b8
	ctx.lr = 0x8221E508;
	sub_821601B8(ctx, base);
loc_8221E508:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221e520
	if (ctx.cr6.eq) goto loc_8221E520;
	// bl 0x82186190
	ctx.lr = 0x8221E51C;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8221E520:
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

__attribute__((alias("__imp__sub_8221E538"))) PPC_WEAK_FUNC(sub_8221E538);
PPC_FUNC_IMPL(__imp__sub_8221E538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8221E540;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221e580
	if (!ctx.cr6.eq) goto loc_8221E580;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8221e580
	if (ctx.cr6.gt) goto loc_8221E580;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822211b8
	ctx.lr = 0x8221E580;
	sub_822211B8(ctx, base);
loc_8221E580:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r29,r11,r9
	ctx.r29.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r29,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8221e5a0
	if (ctx.cr6.gt) goto loc_8221E5A0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_8221E5A0:
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221e5c4
	if (!ctx.cr6.eq) goto loc_8221E5C4;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82186158
	ctx.lr = 0x8221E5BC;
	sub_82186158(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stwx r3,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u32);
loc_8221E5C4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r29,3,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0x8;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221e5f8
	if (ctx.cr6.eq) goto loc_8221E5F8;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// beq cr6,0x8221e5f8
	if (ctx.cr6.eq) goto loc_8221E5F8;
	// bl 0x82160140
	ctx.lr = 0x8221E5F8;
	sub_82160140(ctx, base);
loc_8221E5F8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221E610"))) PPC_WEAK_FUNC(sub_8221E610);
PPC_FUNC_IMPL(__imp__sub_8221E610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8221E618;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lbz r11,90(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 90);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221e688
	if (ctx.cr6.eq) goto loc_8221E688;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stb r29,90(r31)
	PPC_STORE_U8(ctx.r31.u32 + 90, ctx.r29.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8221e67c
	if (!ctx.cr6.gt) goto loc_8221E67C;
	// addi r11,r31,92
	ctx.r11.s64 = ctx.r31.s64 + 92;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8221e65c
	if (!ctx.cr6.gt) goto loc_8221E65C;
	// twi 31,r0,22
loc_8221E65C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// bl 0x8221e308
	ctx.lr = 0x8221E674;
	sub_8221E308(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_8221E67C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82391a58
	ctx.lr = 0x8221E688;
	sub_82391A58(ctx, base);
loc_8221E688:
	// lbz r11,89(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 89);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221e730
	if (ctx.cr6.eq) goto loc_8221E730;
	// addi r30,r31,92
	ctx.r30.s64 = ctx.r31.s64 + 92;
	// stb r29,89(r31)
	PPC_STORE_U8(ctx.r31.u32 + 89, ctx.r29.u8);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8221e6b8
	if (!ctx.cr6.gt) goto loc_8221E6B8;
	// twi 31,r0,22
loc_8221E6B8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x8221ddd8
	ctx.lr = 0x8221E6C8;
	sub_8221DDD8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221e718
	if (!ctx.cr6.eq) goto loc_8221E718;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// bgt cr6,0x8221e708
	if (ctx.cr6.gt) goto loc_8221E708;
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
loc_8221E708:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// bne 0x8221e718
	if (!ctx.cr0.eq) goto loc_8221E718;
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
loc_8221E718:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221E730;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221E730:
	// lbz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221e7c8
	if (ctx.cr6.eq) goto loc_8221E7C8;
	// addi r30,r31,80
	ctx.r30.s64 = ctx.r31.s64 + 80;
	// stb r29,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r29.u8);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824584d0
	ctx.lr = 0x8221E750;
	sub_824584D0(ctx, base);
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r5,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// bl 0x8221e1e0
	ctx.lr = 0x8221E764;
	sub_8221E1E0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221e7b8
	if (ctx.cr6.eq) goto loc_8221E7B8;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8221e7b8
	if (ctx.cr6.eq) goto loc_8221E7B8;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r30,112(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// beq cr6,0x8221e79c
	if (ctx.cr6.eq) goto loc_8221E79C;
	// bl 0x82160140
	ctx.lr = 0x8221E79C;
	sub_82160140(ctx, base);
loc_8221E79C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221E7B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221E7B8:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221e7c8
	if (ctx.cr6.eq) goto loc_8221E7C8;
	// bl 0x821601b8
	ctx.lr = 0x8221E7C8;
	sub_821601B8(ctx, base);
loc_8221E7C8:
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x8221e84c
	if (ctx.cr6.eq) goto loc_8221E84C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r5,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r5.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8221e1e0
	ctx.lr = 0x8221E7E8;
	sub_8221E1E0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221e83c
	if (ctx.cr6.eq) goto loc_8221E83C;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8221e83c
	if (ctx.cr6.eq) goto loc_8221E83C;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r30,112(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// beq cr6,0x8221e820
	if (ctx.cr6.eq) goto loc_8221E820;
	// bl 0x82160140
	ctx.lr = 0x8221E820;
	sub_82160140(ctx, base);
loc_8221E820:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221E83C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221E83C:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221e84c
	if (ctx.cr6.eq) goto loc_8221E84C;
	// bl 0x821601b8
	ctx.lr = 0x8221E84C;
	sub_821601B8(ctx, base);
loc_8221E84C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221E858"))) PPC_WEAK_FUNC(sub_8221E858);
PPC_FUNC_IMPL(__imp__sub_8221E858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8221E860;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-17736
	ctx.r11.s64 = ctx.r11.s64 + -17736;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r27,r31,32
	ctx.r27.s64 = ctx.r31.s64 + 32;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r4,r11,-17944
	ctx.r4.s64 = ctx.r11.s64 + -17944;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// bl 0x8221f1b8
	ctx.lr = 0x8221E8A8;
	sub_8221F1B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,-17980
	ctx.r11.s64 = ctx.r11.s64 + -17980;
	// addi r10,r10,-17664
	ctx.r10.s64 = ctx.r10.s64 + -17664;
	// addi r9,r9,-17704
	ctx.r9.s64 = ctx.r9.s64 + -17704;
	// addi r29,r31,64
	ctx.r29.s64 = ctx.r31.s64 + 64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x8222fce8
	ctx.lr = 0x8221E8E4;
	sub_8222FCE8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stb r30,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r30.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r30,89(r31)
	PPC_STORE_U8(ctx.r31.u32 + 89, ctx.r30.u8);
	// stb r30,90(r31)
	PPC_STORE_U8(ctx.r31.u32 + 90, ctx.r30.u8);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221E91C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r31,112
	ctx.r11.s64 = ctx.r31.s64 + 112;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// beq cr6,0x8221e93c
	if (ctx.cr6.eq) goto loc_8221E93C;
	// bl 0x82160140
	ctx.lr = 0x8221E93C;
	sub_82160140(ctx, base);
loc_8221E93C:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221e94c
	if (ctx.cr6.eq) goto loc_8221E94C;
	// bl 0x821601b8
	ctx.lr = 0x8221E94C;
	sub_821601B8(ctx, base);
loc_8221E94C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8221e960
	if (!ctx.cr6.gt) goto loc_8221E960;
	// twi 31,r0,22
loc_8221E960:
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8221e974
	if (!ctx.cr6.gt) goto loc_8221E974;
	// twi 31,r0,22
loc_8221E974:
	// cmplw cr6,r29,r29
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8221e980
	if (ctx.cr6.eq) goto loc_8221E980;
	// twi 31,r0,22
loc_8221E980:
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
	// beq cr6,0x8221e9c4
	if (ctx.cr6.eq) goto loc_8221E9C4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8221e9a8
	if (ctx.cr6.lt) goto loc_8221E9A8;
	// twi 31,r0,22
loc_8221E9A8:
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8221e9bc
	if (ctx.cr6.lt) goto loc_8221E9BC;
	// twi 31,r0,22
loc_8221E9BC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x8221e960
	goto loc_8221E960;
loc_8221E9C4:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8221ea28
	if (ctx.cr6.eq) goto loc_8221EA28;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_8221E9D8:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// beq cr6,0x8221ea04
	if (ctx.cr6.eq) goto loc_8221EA04;
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r7,r11,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r11.s64;
	// srawi r7,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 2;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8221ea08
	if (ctx.cr6.lt) goto loc_8221EA08;
loc_8221EA04:
	// twi 31,r0,22
loc_8221EA08:
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8221e9d8
	if (!ctx.cr6.eq) goto loc_8221E9D8;
loc_8221EA28:
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x82186158
	ctx.lr = 0x8221EA30;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221ea48
	if (ctx.cr6.eq) goto loc_8221EA48;
	// li r4,40
	ctx.r4.s64 = 40;
	// bl 0x82596278
	ctx.lr = 0x8221EA40;
	sub_82596278(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8221ea4c
	goto loc_8221EA4C;
loc_8221EA48:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8221EA4C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8221e118
	ctx.lr = 0x8221EA64;
	sub_8221E118(ctx, base);
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221ead4
	if (ctx.cr6.eq) goto loc_8221EAD4;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
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
	// beq cr6,0x8221ea9c
	if (ctx.cr6.eq) goto loc_8221EA9C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// b 0x8221ead4
	goto loc_8221EAD4;
loc_8221EA9C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221EAB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bne 0x8221ead4
	if (!ctx.cr0.eq) goto loc_8221EAD4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221EAD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221EAD4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// bl 0x8221df20
	ctx.lr = 0x8221EAE0;
	sub_8221DF20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221EAF0"))) PPC_WEAK_FUNC(sub_8221EAF0);
PPC_FUNC_IMPL(__imp__sub_8221EAF0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x8221eb98
	sub_8221EB98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221EAF8"))) PPC_WEAK_FUNC(sub_8221EAF8);
PPC_FUNC_IMPL(__imp__sub_8221EAF8) {
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
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221eb20
	if (ctx.cr6.eq) goto loc_8221EB20;
	// bl 0x821601b8
	ctx.lr = 0x8221EB20;
	sub_821601B8(ctx, base);
loc_8221EB20:
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x828a4fc0
	ctx.lr = 0x8221EB28;
	sub_828A4FC0(ctx, base);
	// addi r30,r31,64
	ctx.r30.s64 = ctx.r31.s64 + 64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221eb3c
	if (ctx.cr6.eq) goto loc_8221EB3C;
	// bl 0x82186190
	ctx.lr = 0x8221EB3C;
	sub_82186190(ctx, base);
loc_8221EB3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// beq cr6,0x8221eb58
	if (ctx.cr6.eq) goto loc_8221EB58;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
loc_8221EB58:
	// bl 0x8221f0e8
	ctx.lr = 0x8221EB5C;
	sub_8221F0E8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// addi r11,r11,-17736
	ctx.r11.s64 = ctx.r11.s64 + -17736;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8221e378
	ctx.lr = 0x8221EB70;
	sub_8221E378(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221eb80
	if (ctx.cr6.eq) goto loc_8221EB80;
	// bl 0x821601b8
	ctx.lr = 0x8221EB80;
	sub_821601B8(ctx, base);
loc_8221EB80:
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

__attribute__((alias("__imp__sub_8221EB98"))) PPC_WEAK_FUNC(sub_8221EB98);
PPC_FUNC_IMPL(__imp__sub_8221EB98) {
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
	// bl 0x8221eaf8
	ctx.lr = 0x8221EBB8;
	sub_8221EAF8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221ebd0
	if (ctx.cr6.eq) goto loc_8221EBD0;
	// bl 0x82186190
	ctx.lr = 0x8221EBCC;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8221EBD0:
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

__attribute__((alias("__imp__sub_8221EBE8"))) PPC_WEAK_FUNC(sub_8221EBE8);
PPC_FUNC_IMPL(__imp__sub_8221EBE8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221ec34
	if (ctx.cr6.eq) goto loc_8221EC34;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221ec34
	if (ctx.cr6.eq) goto loc_8221EC34;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221EC34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221EC34:
	// addi r31,r30,-32
	ctx.r31.s64 = ctx.r30.s64 + -32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221e610
	ctx.lr = 0x8221EC40;
	sub_8221E610(ctx, base);
	// lwz r4,80(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8221ec7c
	if (ctx.cr6.eq) goto loc_8221EC7C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221ec7c
	if (ctx.cr6.eq) goto loc_8221EC7C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221ec7c
	if (ctx.cr6.eq) goto loc_8221EC7C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221EC7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221EC7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221e610
	ctx.lr = 0x8221EC84;
	sub_8221E610(ctx, base);
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221ecb4
	if (ctx.cr6.eq) goto loc_8221ECB4;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221ecb4
	if (ctx.cr6.eq) goto loc_8221ECB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221ECB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221ECB4:
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

__attribute__((alias("__imp__sub_8221ECD0"))) PPC_WEAK_FUNC(sub_8221ECD0);
PPC_FUNC_IMPL(__imp__sub_8221ECD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8221ECD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8221e538
	ctx.lr = 0x8221ECF4;
	sub_8221E538(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221ed2c
	if (ctx.cr6.eq) goto loc_8221ED2C;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221ed2c
	if (ctx.cr6.eq) goto loc_8221ED2C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221ed2c
	if (ctx.cr6.eq) goto loc_8221ED2C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221ED2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221ED2C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221ed48
	if (ctx.cr6.eq) goto loc_8221ED48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82160140
	ctx.lr = 0x8221ED48;
	sub_82160140(ctx, base);
loc_8221ED48:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221ed58
	if (ctx.cr6.eq) goto loc_8221ED58;
	// bl 0x821601b8
	ctx.lr = 0x8221ED58;
	sub_821601B8(ctx, base);
loc_8221ED58:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221ed6c
	if (ctx.cr6.eq) goto loc_8221ED6C;
	// bl 0x821601b8
	ctx.lr = 0x8221ED6C;
	sub_821601B8(ctx, base);
loc_8221ED6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221ED78"))) PPC_WEAK_FUNC(sub_8221ED78);
PPC_FUNC_IMPL(__imp__sub_8221ED78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-17632
	ctx.r11.s64 = ctx.r11.s64 + -17632;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221ED88"))) PPC_WEAK_FUNC(sub_8221ED88);
PPC_FUNC_IMPL(__imp__sub_8221ED88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-17620
	ctx.r11.s64 = ctx.r11.s64 + -17620;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221ED98"))) PPC_WEAK_FUNC(sub_8221ED98);
PPC_FUNC_IMPL(__imp__sub_8221ED98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-17564
	ctx.r11.s64 = ctx.r11.s64 + -17564;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221EDA8"))) PPC_WEAK_FUNC(sub_8221EDA8);
PPC_FUNC_IMPL(__imp__sub_8221EDA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-17552
	ctx.r11.s64 = ctx.r11.s64 + -17552;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221EDB8"))) PPC_WEAK_FUNC(sub_8221EDB8);
PPC_FUNC_IMPL(__imp__sub_8221EDB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-17540
	ctx.r11.s64 = ctx.r11.s64 + -17540;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221EDC8"))) PPC_WEAK_FUNC(sub_8221EDC8);
PPC_FUNC_IMPL(__imp__sub_8221EDC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-17528
	ctx.r11.s64 = ctx.r11.s64 + -17528;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221EDD8"))) PPC_WEAK_FUNC(sub_8221EDD8);
PPC_FUNC_IMPL(__imp__sub_8221EDD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-17516
	ctx.r11.s64 = ctx.r11.s64 + -17516;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221EDE8"))) PPC_WEAK_FUNC(sub_8221EDE8);
PPC_FUNC_IMPL(__imp__sub_8221EDE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-17504
	ctx.r11.s64 = ctx.r11.s64 + -17504;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221EDF8"))) PPC_WEAK_FUNC(sub_8221EDF8);
PPC_FUNC_IMPL(__imp__sub_8221EDF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-17492
	ctx.r11.s64 = ctx.r11.s64 + -17492;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221EE08"))) PPC_WEAK_FUNC(sub_8221EE08);
PPC_FUNC_IMPL(__imp__sub_8221EE08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-17480
	ctx.r11.s64 = ctx.r11.s64 + -17480;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221EE18"))) PPC_WEAK_FUNC(sub_8221EE18);
PPC_FUNC_IMPL(__imp__sub_8221EE18) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-17632
	ctx.r11.s64 = ctx.r11.s64 + -17632;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8221ee4c
	if (ctx.cr6.eq) goto loc_8221EE4C;
	// bl 0x82186190
	ctx.lr = 0x8221EE48;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8221EE4C:
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

__attribute__((alias("__imp__sub_8221EE60"))) PPC_WEAK_FUNC(sub_8221EE60);
PPC_FUNC_IMPL(__imp__sub_8221EE60) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-17620
	ctx.r11.s64 = ctx.r11.s64 + -17620;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8221ee94
	if (ctx.cr6.eq) goto loc_8221EE94;
	// bl 0x82186190
	ctx.lr = 0x8221EE90;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8221EE94:
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

__attribute__((alias("__imp__sub_8221EEA8"))) PPC_WEAK_FUNC(sub_8221EEA8);
PPC_FUNC_IMPL(__imp__sub_8221EEA8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-17564
	ctx.r11.s64 = ctx.r11.s64 + -17564;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8221eedc
	if (ctx.cr6.eq) goto loc_8221EEDC;
	// bl 0x82186190
	ctx.lr = 0x8221EED8;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8221EEDC:
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

__attribute__((alias("__imp__sub_8221EEF0"))) PPC_WEAK_FUNC(sub_8221EEF0);
PPC_FUNC_IMPL(__imp__sub_8221EEF0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-17552
	ctx.r11.s64 = ctx.r11.s64 + -17552;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8221ef24
	if (ctx.cr6.eq) goto loc_8221EF24;
	// bl 0x82186190
	ctx.lr = 0x8221EF20;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8221EF24:
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

__attribute__((alias("__imp__sub_8221EF38"))) PPC_WEAK_FUNC(sub_8221EF38);
PPC_FUNC_IMPL(__imp__sub_8221EF38) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-17540
	ctx.r11.s64 = ctx.r11.s64 + -17540;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8221ef6c
	if (ctx.cr6.eq) goto loc_8221EF6C;
	// bl 0x82186190
	ctx.lr = 0x8221EF68;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8221EF6C:
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

__attribute__((alias("__imp__sub_8221EF80"))) PPC_WEAK_FUNC(sub_8221EF80);
PPC_FUNC_IMPL(__imp__sub_8221EF80) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-17528
	ctx.r11.s64 = ctx.r11.s64 + -17528;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8221efb4
	if (ctx.cr6.eq) goto loc_8221EFB4;
	// bl 0x82186190
	ctx.lr = 0x8221EFB0;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8221EFB4:
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

__attribute__((alias("__imp__sub_8221EFC8"))) PPC_WEAK_FUNC(sub_8221EFC8);
PPC_FUNC_IMPL(__imp__sub_8221EFC8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-17516
	ctx.r11.s64 = ctx.r11.s64 + -17516;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8221effc
	if (ctx.cr6.eq) goto loc_8221EFFC;
	// bl 0x82186190
	ctx.lr = 0x8221EFF8;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8221EFFC:
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

__attribute__((alias("__imp__sub_8221F010"))) PPC_WEAK_FUNC(sub_8221F010);
PPC_FUNC_IMPL(__imp__sub_8221F010) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-17504
	ctx.r11.s64 = ctx.r11.s64 + -17504;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8221f044
	if (ctx.cr6.eq) goto loc_8221F044;
	// bl 0x82186190
	ctx.lr = 0x8221F040;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8221F044:
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

__attribute__((alias("__imp__sub_8221F058"))) PPC_WEAK_FUNC(sub_8221F058);
PPC_FUNC_IMPL(__imp__sub_8221F058) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-17492
	ctx.r11.s64 = ctx.r11.s64 + -17492;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8221f08c
	if (ctx.cr6.eq) goto loc_8221F08C;
	// bl 0x82186190
	ctx.lr = 0x8221F088;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8221F08C:
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

__attribute__((alias("__imp__sub_8221F0A0"))) PPC_WEAK_FUNC(sub_8221F0A0);
PPC_FUNC_IMPL(__imp__sub_8221F0A0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-17480
	ctx.r11.s64 = ctx.r11.s64 + -17480;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8221f0d4
	if (ctx.cr6.eq) goto loc_8221F0D4;
	// bl 0x82186190
	ctx.lr = 0x8221F0D0;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8221F0D4:
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

__attribute__((alias("__imp__sub_8221F0E8"))) PPC_WEAK_FUNC(sub_8221F0E8);
PPC_FUNC_IMPL(__imp__sub_8221F0E8) {
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
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,-17464
	ctx.r11.s64 = ctx.r11.s64 + -17464;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8221f11c
	if (ctx.cr6.lt) goto loc_8221F11C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x8221F11C;
	sub_82186190(ctx, base);
loc_8221F11C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8221F148"))) PPC_WEAK_FUNC(sub_8221F148);
PPC_FUNC_IMPL(__imp__sub_8221F148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8221F150;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-17464
	ctx.r11.s64 = ctx.r11.s64 + -17464;
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8221f180
	if (ctx.cr6.lt) goto loc_8221F180;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x8221F180;
	sub_82186190(ctx, base);
loc_8221F180:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// clrlwi r9,r29,31
	ctx.r9.u64 = ctx.r29.u32 & 0x1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// beq cr6,0x8221f1ac
	if (ctx.cr6.eq) goto loc_8221F1AC;
	// bl 0x82186190
	ctx.lr = 0x8221F1A8;
	sub_82186190(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8221F1AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221F1B8"))) PPC_WEAK_FUNC(sub_8221F1B8);
PPC_FUNC_IMPL(__imp__sub_8221F1B8) {
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r10,-17464
	ctx.r10.s64 = ctx.r10.s64 + -17464;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,15
	ctx.r8.s64 = 15;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// stb r9,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r9.u8);
loc_8221F1F8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8221f1f8
	if (!ctx.cr6.eq) goto loc_8221F1F8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x8221F218;
	sub_82161E08(ctx, base);
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

__attribute__((alias("__imp__sub_8221F230"))) PPC_WEAK_FUNC(sub_8221F230);
PPC_FUNC_IMPL(__imp__sub_8221F230) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,80(r3)
	PPC_STORE_U8(ctx.r3.u32 + 80, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221F248"))) PPC_WEAK_FUNC(sub_8221F248);
PPC_FUNC_IMPL(__imp__sub_8221F248) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8221F258"))) PPC_WEAK_FUNC(sub_8221F258);
PPC_FUNC_IMPL(__imp__sub_8221F258) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8221F268"))) PPC_WEAK_FUNC(sub_8221F268);
PPC_FUNC_IMPL(__imp__sub_8221F268) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8221F278"))) PPC_WEAK_FUNC(sub_8221F278);
PPC_FUNC_IMPL(__imp__sub_8221F278) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8221F288"))) PPC_WEAK_FUNC(sub_8221F288);
PPC_FUNC_IMPL(__imp__sub_8221F288) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8221F298"))) PPC_WEAK_FUNC(sub_8221F298);
PPC_FUNC_IMPL(__imp__sub_8221F298) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8221F2A8"))) PPC_WEAK_FUNC(sub_8221F2A8);
PPC_FUNC_IMPL(__imp__sub_8221F2A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8221F2B8"))) PPC_WEAK_FUNC(sub_8221F2B8);
PPC_FUNC_IMPL(__imp__sub_8221F2B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8221F2C8"))) PPC_WEAK_FUNC(sub_8221F2C8);
PPC_FUNC_IMPL(__imp__sub_8221F2C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8221F2D8"))) PPC_WEAK_FUNC(sub_8221F2D8);
PPC_FUNC_IMPL(__imp__sub_8221F2D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8221F2E8"))) PPC_WEAK_FUNC(sub_8221F2E8);
PPC_FUNC_IMPL(__imp__sub_8221F2E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8221F2F8"))) PPC_WEAK_FUNC(sub_8221F2F8);
PPC_FUNC_IMPL(__imp__sub_8221F2F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8221F308"))) PPC_WEAK_FUNC(sub_8221F308);
PPC_FUNC_IMPL(__imp__sub_8221F308) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8221F318"))) PPC_WEAK_FUNC(sub_8221F318);
PPC_FUNC_IMPL(__imp__sub_8221F318) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8221F328"))) PPC_WEAK_FUNC(sub_8221F328);
PPC_FUNC_IMPL(__imp__sub_8221F328) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8221F338"))) PPC_WEAK_FUNC(sub_8221F338);
PPC_FUNC_IMPL(__imp__sub_8221F338) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8221F348"))) PPC_WEAK_FUNC(sub_8221F348);
PPC_FUNC_IMPL(__imp__sub_8221F348) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8221F358"))) PPC_WEAK_FUNC(sub_8221F358);
PPC_FUNC_IMPL(__imp__sub_8221F358) {
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
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,13152
	ctx.r4.s64 = ctx.r11.s64 + 13152;
	// bl 0x826de850
	ctx.lr = 0x8221F37C;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221f390
	if (!ctx.cr6.eq) goto loc_8221F390;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221F390:
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

__attribute__((alias("__imp__sub_8221F3A8"))) PPC_WEAK_FUNC(sub_8221F3A8);
PPC_FUNC_IMPL(__imp__sub_8221F3A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-17436
	ctx.r11.s64 = ctx.r11.s64 + -17436;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821601b8
	sub_821601B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221F3C4"))) PPC_WEAK_FUNC(sub_8221F3C4);
PPC_FUNC_IMPL(__imp__sub_8221F3C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221F3C8"))) PPC_WEAK_FUNC(sub_8221F3C8);
PPC_FUNC_IMPL(__imp__sub_8221F3C8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r30,4(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221f3fc
	if (ctx.cr6.eq) goto loc_8221F3FC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82160140
	ctx.lr = 0x8221F3FC;
	sub_82160140(ctx, base);
loc_8221F3FC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221f40c
	if (ctx.cr6.eq) goto loc_8221F40C;
	// bl 0x821601b8
	ctx.lr = 0x8221F40C;
	sub_821601B8(ctx, base);
loc_8221F40C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_8221F430"))) PPC_WEAK_FUNC(sub_8221F430);
PPC_FUNC_IMPL(__imp__sub_8221F430) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// xor r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	// and r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 & ctx.r4.u64;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221F470"))) PPC_WEAK_FUNC(sub_8221F470);
PPC_FUNC_IMPL(__imp__sub_8221F470) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// xor r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	// and r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 & ctx.r4.u64;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221F4B0"))) PPC_WEAK_FUNC(sub_8221F4B0);
PPC_FUNC_IMPL(__imp__sub_8221F4B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r4,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// xor r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	// and r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 & ctx.r4.u64;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// stw r8,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221F4F0"))) PPC_WEAK_FUNC(sub_8221F4F0);
PPC_FUNC_IMPL(__imp__sub_8221F4F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r4,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r4.u32);
	// xor r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	// and r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 & ctx.r4.u64;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// stw r8,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221F530"))) PPC_WEAK_FUNC(sub_8221F530);
PPC_FUNC_IMPL(__imp__sub_8221F530) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r4,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r4.u32);
	// xor r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	// and r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 & ctx.r4.u64;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// stw r8,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r8.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221F570"))) PPC_WEAK_FUNC(sub_8221F570);
PPC_FUNC_IMPL(__imp__sub_8221F570) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r4,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r4.u32);
	// xor r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	// and r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 & ctx.r4.u64;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// stw r8,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r8.u32);
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221F5B0"))) PPC_WEAK_FUNC(sub_8221F5B0);
PPC_FUNC_IMPL(__imp__sub_8221F5B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r10,r4,4,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xF;
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// stw r4,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r4.u32);
	// xor r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	// and r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 & ctx.r4.u64;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// stw r8,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r8.u32);
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221F5F8"))) PPC_WEAK_FUNC(sub_8221F5F8);
PPC_FUNC_IMPL(__imp__sub_8221F5F8) {
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
	ctx.lr = 0x8221F628;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221f654
	if (ctx.cr6.eq) goto loc_8221F654;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,-17456
	ctx.r10.s64 = ctx.r11.s64 + -17456;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8221f658
	goto loc_8221F658;
loc_8221F654:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221F658:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x8221f68c
	if (!ctx.cr6.eq) goto loc_8221F68C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82186190
	ctx.lr = 0x8221F66C;
	sub_82186190(ctx, base);
	// lis r10,-32077
	ctx.r10.s64 = -2102198272;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,2788
	ctx.r11.s64 = ctx.r11.s64 + 2788;
	// lwz r10,12984(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12984);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x821e0968
	ctx.lr = 0x8221F68C;
	sub_821E0968(ctx, base);
loc_8221F68C:
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

__attribute__((alias("__imp__sub_8221F6A8"))) PPC_WEAK_FUNC(sub_8221F6A8);
PPC_FUNC_IMPL(__imp__sub_8221F6A8) {
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
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r6,r11,29708
	ctx.r6.s64 = ctx.r11.s64 + 29708;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,30176
	ctx.r5.s64 = ctx.r11.s64 + 30176;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x826df418
	ctx.lr = 0x8221F6E4;
	sub_826DF418(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq cr6,0x8221f6fc
	if (ctx.cr6.eq) goto loc_8221F6FC;
	// bl 0x82160140
	ctx.lr = 0x8221F6FC;
	sub_82160140(ctx, base);
loc_8221F6FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221f720
	if (!ctx.cr6.eq) goto loc_8221F720;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221f718
	if (ctx.cr6.eq) goto loc_8221F718;
	// bl 0x821601b8
	ctx.lr = 0x8221F718;
	sub_821601B8(ctx, base);
loc_8221F718:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8221F720:
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

__attribute__((alias("__imp__sub_8221F740"))) PPC_WEAK_FUNC(sub_8221F740);
PPC_FUNC_IMPL(__imp__sub_8221F740) {
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
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r6,r11,-11120
	ctx.r6.s64 = ctx.r11.s64 + -11120;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,30176
	ctx.r5.s64 = ctx.r11.s64 + 30176;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x826df418
	ctx.lr = 0x8221F77C;
	sub_826DF418(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq cr6,0x8221f794
	if (ctx.cr6.eq) goto loc_8221F794;
	// bl 0x82160140
	ctx.lr = 0x8221F794;
	sub_82160140(ctx, base);
loc_8221F794:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221f7b8
	if (!ctx.cr6.eq) goto loc_8221F7B8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221f7b0
	if (ctx.cr6.eq) goto loc_8221F7B0;
	// bl 0x821601b8
	ctx.lr = 0x8221F7B0;
	sub_821601B8(ctx, base);
loc_8221F7B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8221F7B8:
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

__attribute__((alias("__imp__sub_8221F7D8"))) PPC_WEAK_FUNC(sub_8221F7D8);
PPC_FUNC_IMPL(__imp__sub_8221F7D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-17436
	ctx.r11.s64 = ctx.r11.s64 + -17436;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221F7F8"))) PPC_WEAK_FUNC(sub_8221F7F8);
PPC_FUNC_IMPL(__imp__sub_8221F7F8) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-17436
	ctx.r11.s64 = ctx.r11.s64 + -17436;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221f830
	if (ctx.cr6.eq) goto loc_8221F830;
	// bl 0x821601b8
	ctx.lr = 0x8221F830;
	sub_821601B8(ctx, base);
loc_8221F830:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221f848
	if (ctx.cr6.eq) goto loc_8221F848;
	// bl 0x82186190
	ctx.lr = 0x8221F844;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8221F848:
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

__attribute__((alias("__imp__sub_8221F860"))) PPC_WEAK_FUNC(sub_8221F860);
PPC_FUNC_IMPL(__imp__sub_8221F860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x8221F868;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// std r5,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r5.u64);
	// std r6,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r6.u64);
	// std r7,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r7.u64);
	// lwz r31,172(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r30,180(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8221f8bc
	if (ctx.cr6.eq) goto loc_8221F8BC;
	// lwz r29,204(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r28,200(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r27,192(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
loc_8221F89C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x8221F8B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8221f89c
	if (!ctx.cr6.eq) goto loc_8221F89C;
loc_8221F8BC:
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// stw r9,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r9.u32);
	// stw r8,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r8.u32);
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

