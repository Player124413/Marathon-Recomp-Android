#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_823CAE48"))) PPC_WEAK_FUNC(sub_823CAE48);
PPC_FUNC_IMPL(__imp__sub_823CAE48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-2080
	ctx.r3.s64 = ctx.r11.s64 + -2080;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CAE58"))) PPC_WEAK_FUNC(sub_823CAE58);
PPC_FUNC_IMPL(__imp__sub_823CAE58) {
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
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// ori r9,r9,16
	ctx.r9.u64 = ctx.r9.u64 | 16;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x823caed0
	if (!ctx.cr6.eq) goto loc_823CAED0;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r9,r11,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823cae98
	if (!ctx.cr6.eq) goto loc_823CAE98;
	// rlwinm r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823caed0
	if (ctx.cr6.eq) goto loc_823CAED0;
loc_823CAE98:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lfs f0,52(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ori r11,r11,32842
	ctx.r11.u64 = ctx.r11.u64 | 32842;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bl 0x821677d0
	ctx.lr = 0x823CAEBC;
	sub_821677D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CAED0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823CAED0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CAEE8"))) PPC_WEAK_FUNC(sub_823CAEE8);
PPC_FUNC_IMPL(__imp__sub_823CAEE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r11,-2052
	ctx.r10.s64 = ctx.r11.s64 + -2052;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// lvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// stb r8,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r8.u8);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CAF30"))) PPC_WEAK_FUNC(sub_823CAF30);
PPC_FUNC_IMPL(__imp__sub_823CAF30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x823CAF38;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// ori r11,r11,32842
	ctx.r11.u64 = ctx.r11.u64 | 32842;
	// addi r25,r31,16
	ctx.r25.s64 = ctx.r31.s64 + 16;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// lfs f0,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stb r27,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r27.u8);
	// bl 0x825d2200
	ctx.lr = 0x823CAF78;
	sub_825D2200(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82393060
	ctx.lr = 0x823CAF88;
	sub_82393060(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x823a0ec0
	ctx.lr = 0x823CAF90;
	sub_823A0EC0(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fdivs f31,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 / ctx.f1.f64));
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cafa4
	if (ctx.cr6.eq) goto loc_823CAFA4;
	// bl 0x821601b8
	ctx.lr = 0x823CAFA4;
	sub_821601B8(ctx, base);
loc_823CAFA4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stfs f31,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82393060
	ctx.lr = 0x823CAFB4;
	sub_82393060(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r30,r31,44
	ctx.r30.s64 = ctx.r31.s64 + 44;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823cafd4
	if (ctx.cr6.eq) goto loc_823CAFD4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82160140
	ctx.lr = 0x823CAFD4;
	sub_82160140(ctx, base);
loc_823CAFD4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cafe4
	if (ctx.cr6.eq) goto loc_823CAFE4;
	// bl 0x821601b8
	ctx.lr = 0x823CAFE4;
	sub_821601B8(ctx, base);
loc_823CAFE4:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823caff8
	if (ctx.cr6.eq) goto loc_823CAFF8;
	// bl 0x821601b8
	ctx.lr = 0x823CAFF8;
	sub_821601B8(ctx, base);
loc_823CAFF8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821677d0
	ctx.lr = 0x823CB000;
	sub_821677D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CB014;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cb1b0
	if (ctx.cr6.eq) goto loc_823CB1B0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stb r27,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r27.u8);
	// lfs f11,-2332(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2332);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x823cb054
	if (ctx.cr6.lt) goto loc_823CB054;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r27,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r27.u8);
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
loc_823CB054:
	// lfs f13,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// ble cr6,0x823cb06c
	if (!ctx.cr6.gt) goto loc_823CB06C;
	// fsubs f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
loc_823CB06C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x823cb09c
	if (ctx.cr6.gt) goto loc_823CB09C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r27,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r27.u8);
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
loc_823CB09C:
	// lbz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
	// fadds f12,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cb0e4
	if (ctx.cr6.eq) goto loc_823CB0E4;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x823cb0e0
	if (!ctx.cr6.lt) goto loc_823CB0E0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,-2344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2344);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x823cb0d8
	if (ctx.cr6.lt) goto loc_823CB0D8;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x823cb0e4
	if (ctx.cr6.lt) goto loc_823CB0E4;
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// b 0x823cb0dc
	goto loc_823CB0DC;
loc_823CB0D8:
	// fcmpu cr6,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
loc_823CB0DC:
	// bge cr6,0x823cb0e4
	if (!ctx.cr6.lt) goto loc_823CB0E4;
loc_823CB0E0:
	// stb r27,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r27.u8);
loc_823CB0E4:
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82186158
	ctx.lr = 0x823CB0EC;
	sub_82186158(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823cb11c
	if (ctx.cr6.eq) goto loc_823CB11C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823907b8
	ctx.lr = 0x823CB104;
	sub_823907B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// bl 0x824414c0
	ctx.lr = 0x823CB114;
	sub_824414C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823cb120
	goto loc_823CB120;
loc_823CB11C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_823CB120:
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
	// bl 0x823a6728
	ctx.lr = 0x823CB138;
	sub_823A6728(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82391500
	ctx.lr = 0x823CB144;
	sub_82391500(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cb154
	if (ctx.cr6.eq) goto loc_823CB154;
	// bl 0x821601b8
	ctx.lr = 0x823CB154;
	sub_821601B8(ctx, base);
loc_823CB154:
	// clrlwi r11,r26,31
	ctx.r11.u64 = ctx.r26.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823cb170
	if (ctx.cr6.eq) goto loc_823CB170;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cb170
	if (ctx.cr6.eq) goto loc_823CB170;
	// bl 0x82581e38
	ctx.lr = 0x823CB170;
	sub_82581E38(ctx, base);
loc_823CB170:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82393060
	ctx.lr = 0x823CB17C;
	sub_82393060(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CB194;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cb1b8
	if (ctx.cr6.eq) goto loc_823CB1B8;
	// bl 0x821601b8
	ctx.lr = 0x823CB1A4;
	sub_821601B8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
loc_823CB1B0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
loc_823CB1B8:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CB1C8"))) PPC_WEAK_FUNC(sub_823CB1C8);
PPC_FUNC_IMPL(__imp__sub_823CB1C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x823CB1D0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lbz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823cb2ec
	if (!ctx.cr6.eq) goto loc_823CB2EC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82393060
	ctx.lr = 0x823CB200;
	sub_82393060(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CB214;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cb23c
	if (ctx.cr6.eq) goto loc_823CB23C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821677d0
	ctx.lr = 0x823CB228;
	sub_821677D0(ctx, base);
	// bl 0x8239a988
	ctx.lr = 0x823CB22C;
	sub_8239A988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x823cb240
	if (!ctx.cr6.eq) goto loc_823CB240;
loc_823CB23C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_823CB240:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cb254
	if (ctx.cr6.eq) goto loc_823CB254;
	// bl 0x821601b8
	ctx.lr = 0x823CB254;
	sub_821601B8(ctx, base);
loc_823CB254:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cb26c
	if (ctx.cr6.eq) goto loc_823CB26C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r11.u8);
	// b 0x823cb2ec
	goto loc_823CB2EC;
loc_823CB26C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82393060
	ctx.lr = 0x823CB278;
	sub_82393060(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CB28C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// beq cr6,0x823cb2b0
	if (ctx.cr6.eq) goto loc_823CB2B0;
	// bl 0x821601b8
	ctx.lr = 0x823CB2B0;
	sub_821601B8(ctx, base);
loc_823CB2B0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cb2ec
	if (ctx.cr6.eq) goto loc_823CB2EC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82393060
	ctx.lr = 0x823CB2C8;
	sub_82393060(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x823a0ec0
	ctx.lr = 0x823CB2D0;
	sub_823A0EC0(ctx, base);
	// lfs f0,52(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// fmadds f0,f1,f31,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfs f0,52(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 52, temp.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cb2ec
	if (ctx.cr6.eq) goto loc_823CB2EC;
	// bl 0x821601b8
	ctx.lr = 0x823CB2EC;
	sub_821601B8(ctx, base);
loc_823CB2EC:
	// lbz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823cb450
	if (!ctx.cr6.eq) goto loc_823CB450;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823906d0
	ctx.lr = 0x823CB304;
	sub_823906D0(ctx, base);
	// addi r4,r29,44
	ctx.r4.s64 = ctx.r29.s64 + 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82391500
	ctx.lr = 0x823CB310;
	sub_82391500(ctx, base);
	// lbz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cb448
	if (ctx.cr6.eq) goto loc_823CB448;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,36(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// li r3,32
	ctx.r3.s64 = 32;
	// lfs f13,-2332(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2332);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x823cb388
	if (ctx.cr6.lt) goto loc_823CB388;
	// bl 0x82186158
	ctx.lr = 0x823CB338;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cb358
	if (ctx.cr6.eq) goto loc_823CB358;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,-2340
	ctx.r5.s64 = ctx.r11.s64 + -2340;
	// bl 0x823a90a0
	ctx.lr = 0x823CB350;
	sub_823A90A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823cb35c
	goto loc_823CB35C;
loc_823CB358:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_823CB35C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stb r28,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x823c9998
	ctx.lr = 0x823CB374;
	sub_823C9998(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82393ba0
	ctx.lr = 0x823CB380;
	sub_82393BA0(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x823cb43c
	goto loc_823CB43C;
loc_823CB388:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,-2344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2344);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x823cb3ec
	if (ctx.cr6.lt) goto loc_823CB3EC;
	// bl 0x82186158
	ctx.lr = 0x823CB39C;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cb3bc
	if (ctx.cr6.eq) goto loc_823CB3BC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,-2352
	ctx.r5.s64 = ctx.r11.s64 + -2352;
	// bl 0x823a90a0
	ctx.lr = 0x823CB3B4;
	sub_823A90A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823cb3c0
	goto loc_823CB3C0;
loc_823CB3BC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_823CB3C0:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stb r28,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x823c9998
	ctx.lr = 0x823CB3D8;
	sub_823C9998(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82393ba0
	ctx.lr = 0x823CB3E4;
	sub_82393BA0(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x823cb43c
	goto loc_823CB43C;
loc_823CB3EC:
	// bl 0x82186158
	ctx.lr = 0x823CB3F0;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cb410
	if (ctx.cr6.eq) goto loc_823CB410;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,-15512
	ctx.r5.s64 = ctx.r11.s64 + -15512;
	// bl 0x823a90a0
	ctx.lr = 0x823CB408;
	sub_823A90A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823cb414
	goto loc_823CB414;
loc_823CB410:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_823CB414:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// stb r28,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x823c9998
	ctx.lr = 0x823CB42C;
	sub_823C9998(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82393ba0
	ctx.lr = 0x823CB438;
	sub_82393BA0(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_823CB43C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cb448
	if (ctx.cr6.eq) goto loc_823CB448;
	// bl 0x821601b8
	ctx.lr = 0x823CB448;
	sub_821601B8(ctx, base);
loc_823CB448:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82392980
	ctx.lr = 0x823CB450;
	sub_82392980(ctx, base);
loc_823CB450:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CB460"))) PPC_WEAK_FUNC(sub_823CB460);
PPC_FUNC_IMPL(__imp__sub_823CB460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-2028
	ctx.r3.s64 = ctx.r11.s64 + -2028;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CB470"))) PPC_WEAK_FUNC(sub_823CB470);
PPC_FUNC_IMPL(__imp__sub_823CB470) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,32840
	ctx.r11.u64 = ctx.r11.u64 | 32840;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821677d0
	ctx.lr = 0x823CB4A0;
	sub_821677D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CB4B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x823cb4c8
	if (!ctx.cr6.eq) goto loc_823CB4C8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_823CB4C8:
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_823CB4E0"))) PPC_WEAK_FUNC(sub_823CB4E0);
PPC_FUNC_IMPL(__imp__sub_823CB4E0) {
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
	// bl 0x821677d0
	ctx.lr = 0x823CB504;
	sub_821677D0(ctx, base);
	// bl 0x8239a988
	ctx.lr = 0x823CB508;
	sub_8239A988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cb51c
	if (ctx.cr6.eq) goto loc_823CB51C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r11.u8);
loc_823CB51C:
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823cb530
	if (!ctx.cr6.eq) goto loc_823CB530;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82392980
	ctx.lr = 0x823CB530;
	sub_82392980(ctx, base);
loc_823CB530:
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

__attribute__((alias("__imp__sub_823CB548"))) PPC_WEAK_FUNC(sub_823CB548);
PPC_FUNC_IMPL(__imp__sub_823CB548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-1996
	ctx.r11.s64 = ctx.r11.s64 + -1996;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CB568"))) PPC_WEAK_FUNC(sub_823CB568);
PPC_FUNC_IMPL(__imp__sub_823CB568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-1972
	ctx.r3.s64 = ctx.r11.s64 + -1972;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CB578"))) PPC_WEAK_FUNC(sub_823CB578);
PPC_FUNC_IMPL(__imp__sub_823CB578) {
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
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r11,32841
	ctx.r11.u64 = ctx.r11.u64 | 32841;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821677d0
	ctx.lr = 0x823CB5A8;
	sub_821677D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CB5BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x823cb5d0
	if (!ctx.cr6.eq) goto loc_823CB5D0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_823CB5D0:
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_823CB5E8"))) PPC_WEAK_FUNC(sub_823CB5E8);
PPC_FUNC_IMPL(__imp__sub_823CB5E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-1944
	ctx.r11.s64 = ctx.r11.s64 + -1944;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CB608"))) PPC_WEAK_FUNC(sub_823CB608);
PPC_FUNC_IMPL(__imp__sub_823CB608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-1920
	ctx.r3.s64 = ctx.r11.s64 + -1920;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CB618"))) PPC_WEAK_FUNC(sub_823CB618);
PPC_FUNC_IMPL(__imp__sub_823CB618) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stb r30,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r30.u8);
	// lfs f0,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f0,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,32838
	ctx.r11.u64 = ctx.r11.u64 | 32838;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821677d0
	ctx.lr = 0x823CB67C;
	sub_821677D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CB690;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cb6b0
	if (ctx.cr6.eq) goto loc_823CB6B0;
	// lbz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823cb6b0
	if (!ctx.cr6.eq) goto loc_823CB6B0;
	// stb r30,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r30.u8);
	// b 0x823cb6b8
	goto loc_823CB6B8;
loc_823CB6B0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
loc_823CB6B8:
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

__attribute__((alias("__imp__sub_823CB6D0"))) PPC_WEAK_FUNC(sub_823CB6D0);
PPC_FUNC_IMPL(__imp__sub_823CB6D0) {
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
	// bl 0x821677d0
	ctx.lr = 0x823CB6F4;
	sub_821677D0(ctx, base);
	// bl 0x8239a988
	ctx.lr = 0x823CB6F8;
	sub_8239A988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cb70c
	if (ctx.cr6.eq) goto loc_823CB70C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,48(r30)
	PPC_STORE_U8(ctx.r30.u32 + 48, ctx.r11.u8);
loc_823CB70C:
	// lbz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 48);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823cb720
	if (!ctx.cr6.eq) goto loc_823CB720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82392980
	ctx.lr = 0x823CB720;
	sub_82392980(ctx, base);
loc_823CB720:
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

__attribute__((alias("__imp__sub_823CB738"))) PPC_WEAK_FUNC(sub_823CB738);
PPC_FUNC_IMPL(__imp__sub_823CB738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f1,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f2,68(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// addi r11,r11,-1888
	ctx.r11.s64 = ctx.r11.s64 + -1888;
	// stfs f3,72(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stw r5,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r5.u32);
	// stw r6,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r6.u32);
	// stw r7,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r7.u32);
	// stb r10,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, ctx.r10.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CB768"))) PPC_WEAK_FUNC(sub_823CB768);
PPC_FUNC_IMPL(__imp__sub_823CB768) {
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
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CB798;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cb7ac
	if (ctx.cr6.eq) goto loc_823CB7AC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823cb7b8
	goto loc_823CB7B8;
loc_823CB7AC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c88b8
	ctx.lr = 0x823CB7B8;
	sub_822C88B8(ctx, base);
loc_823CB7B8:
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

__attribute__((alias("__imp__sub_823CB7D0"))) PPC_WEAK_FUNC(sub_823CB7D0);
PPC_FUNC_IMPL(__imp__sub_823CB7D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-1824
	ctx.r3.s64 = ctx.r11.s64 + -1824;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CB7E0"))) PPC_WEAK_FUNC(sub_823CB7E0);
PPC_FUNC_IMPL(__imp__sub_823CB7E0) {
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
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cb814
	if (ctx.cr6.eq) goto loc_823CB814;
	// bl 0x825813a0
	ctx.lr = 0x823CB80C;
	sub_825813A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_823CB814:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821677d0
	ctx.lr = 0x823CB81C;
	sub_821677D0(ctx, base);
	// bl 0x8239b0c8
	ctx.lr = 0x823CB820;
	sub_8239B0C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821677d0
	ctx.lr = 0x823CB828;
	sub_821677D0(ctx, base);
	// bl 0x8239aed8
	ctx.lr = 0x823CB82C;
	sub_8239AED8(ctx, base);
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

__attribute__((alias("__imp__sub_823CB848"))) PPC_WEAK_FUNC(sub_823CB848);
PPC_FUNC_IMPL(__imp__sub_823CB848) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x823cb850
	sub_823CB850(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CB850"))) PPC_WEAK_FUNC(sub_823CB850);
PPC_FUNC_IMPL(__imp__sub_823CB850) {
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
	// bl 0x822c9020
	ctx.lr = 0x823CB870;
	sub_822C9020(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cb888
	if (ctx.cr6.eq) goto loc_823CB888;
	// bl 0x82186190
	ctx.lr = 0x823CB884;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823CB888:
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

__attribute__((alias("__imp__sub_823CB8A0"))) PPC_WEAK_FUNC(sub_823CB8A0);
PPC_FUNC_IMPL(__imp__sub_823CB8A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82594160
	ctx.lr = 0x823CB8C0;
	sub_82594160(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f1,8232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8232);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825d3010
	ctx.lr = 0x823CB8D0;
	sub_825D3010(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x822c8c00
	ctx.lr = 0x823CB8DC;
	sub_822C8C00(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CB8F0"))) PPC_WEAK_FUNC(sub_823CB8F0);
PPC_FUNC_IMPL(__imp__sub_823CB8F0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82594160
	ctx.lr = 0x823CB920;
	sub_82594160(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f1,8232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8232);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825d3010
	ctx.lr = 0x823CB930;
	sub_825D3010(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x822c8c00
	ctx.lr = 0x823CB93C;
	sub_822C8C00(ctx, base);
	// lfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x823cb974
	if (!ctx.cr6.gt) goto loc_823CB974;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821677d0
	ctx.lr = 0x823CB95C;
	sub_821677D0(ctx, base);
	// bl 0x8239a988
	ctx.lr = 0x823CB960;
	sub_8239A988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823cb974
	if (!ctx.cr6.eq) goto loc_823CB974;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82392980
	ctx.lr = 0x823CB974;
	sub_82392980(ctx, base);
loc_823CB974:
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

__attribute__((alias("__imp__sub_823CB990"))) PPC_WEAK_FUNC(sub_823CB990);
PPC_FUNC_IMPL(__imp__sub_823CB990) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// li r6,66
	ctx.r6.s64 = 66;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82394d08
	ctx.lr = 0x823CB9C4;
	sub_82394D08(ctx, base);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x823cb9dc
	if (ctx.cr6.lt) goto loc_823CB9DC;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x823cb9e0
	goto loc_823CB9E0;
loc_823CB9DC:
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_823CB9E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82394c58
	ctx.lr = 0x823CB9E8;
	sub_82394C58(ctx, base);
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

__attribute__((alias("__imp__sub_823CBA00"))) PPC_WEAK_FUNC(sub_823CBA00);
PPC_FUNC_IMPL(__imp__sub_823CBA00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x823CBA08;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f0,4(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// ori r11,r11,32845
	ctx.r11.u64 = ctx.r11.u64 | 32845;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x821677d0
	ctx.lr = 0x823CBA4C;
	sub_821677D0(ctx, base);
	// bl 0x8239b0c8
	ctx.lr = 0x823CBA50;
	sub_8239B0C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821677d0
	ctx.lr = 0x823CBA58;
	sub_821677D0(ctx, base);
	// bl 0x8239b040
	ctx.lr = 0x823CBA5C;
	sub_8239B040(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821677d0
	ctx.lr = 0x823CBA64;
	sub_821677D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CBA78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cbb5c
	if (ctx.cr6.eq) goto loc_823CBB5C;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cbb5c
	if (ctx.cr6.eq) goto loc_823CBB5C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821677d0
	ctx.lr = 0x823CBA98;
	sub_821677D0(ctx, base);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x82399ec0
	ctx.lr = 0x823CBAA0;
	sub_82399EC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r26,72
	ctx.r3.s64 = ctx.r26.s64 + 72;
	// bl 0x82303258
	ctx.lr = 0x823CBAAC;
	sub_82303258(ctx, base);
	// li r3,208
	ctx.r3.s64 = 208;
	// bl 0x82186158
	ctx.lr = 0x823CBAB4;
	sub_82186158(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823cbb30
	if (ctx.cr6.eq) goto loc_823CBB30;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82629338
	ctx.lr = 0x823CBAC8;
	sub_82629338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cbad4
	if (ctx.cr6.eq) goto loc_823CBAD4;
	// addi r27,r3,32
	ctx.r27.s64 = ctx.r3.s64 + 32;
loc_823CBAD4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82391468
	ctx.lr = 0x823CBAE0;
	sub_82391468(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// bl 0x82629338
	ctx.lr = 0x823CBAF0;
	sub_82629338(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lfs f1,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,14096(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14096);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x822c9538
	ctx.lr = 0x823CBB0C;
	sub_822C9538(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r27,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r27.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-1836
	ctx.r11.s64 = ctx.r11.s64 + -1836;
	// addi r10,r10,-1848
	ctx.r10.s64 = ctx.r10.s64 + -1848;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// b 0x823cbb34
	goto loc_823CBB34;
loc_823CBB30:
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
loc_823CBB34:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// stw r9,76(r26)
	PPC_STORE_U32(ctx.r26.u32 + 76, ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823cbb54
	if (ctx.cr6.eq) goto loc_823CBB54;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cbb54
	if (ctx.cr6.eq) goto loc_823CBB54;
	// bl 0x821601b8
	ctx.lr = 0x823CBB54;
	sub_821601B8(ctx, base);
loc_823CBB54:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823cb8a0
	ctx.lr = 0x823CBB5C;
	sub_823CB8A0(ctx, base);
loc_823CBB5C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CBB68"))) PPC_WEAK_FUNC(sub_823CBB68);
PPC_FUNC_IMPL(__imp__sub_823CBB68) {
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
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// ori r10,r10,4118
	ctx.r10.u64 = ctx.r10.u64 | 4118;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x823cbb9c
	if (ctx.cr6.eq) goto loc_823CBB9C;
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
loc_823CBB9C:
	// bl 0x823cb990
	ctx.lr = 0x823CBBA0;
	sub_823CB990(ctx, base);
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
}

__attribute__((alias("__imp__sub_823CBBB8"))) PPC_WEAK_FUNC(sub_823CBBB8);
PPC_FUNC_IMPL(__imp__sub_823CBBB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x823CBBC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-1796
	ctx.r10.s64 = ctx.r11.s64 + -1796;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// li r9,15
	ctx.r9.s64 = 15;
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stw r9,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r9.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stb r11,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r11.u8);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// beq cr6,0x823cbc4c
	if (ctx.cr6.eq) goto loc_823CBC4C;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_823CBC28:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823cbc28
	if (!ctx.cr6.eq) goto loc_823CBC28;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x823CBC4C;
	sub_82161E08(ctx, base);
loc_823CBC4C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823cbc84
	if (ctx.cr6.eq) goto loc_823CBC84;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_823CBC5C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823cbc5c
	if (!ctx.cr6.eq) goto loc_823CBC5C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x823CBC84;
	sub_82161E08(ctx, base);
loc_823CBC84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CBC90"))) PPC_WEAK_FUNC(sub_823CBC90);
PPC_FUNC_IMPL(__imp__sub_823CBC90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x823CBC98;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,72(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cbcb0
	if (ctx.cr6.eq) goto loc_823CBCB0;
	// bl 0x82581e38
	ctx.lr = 0x823CBCB0;
	sub_82581E38(ctx, base);
loc_823CBCB0:
	// addi r29,r28,40
	ctx.r29.s64 = ctx.r28.s64 + 40;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x823cbcc8
	if (ctx.cr6.lt) goto loc_823CBCC8;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x823CBCC8;
	sub_82186190(ctx, base);
loc_823CBCC8:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// addi r31,r28,12
	ctx.r31.s64 = ctx.r28.s64 + 12;
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
	// stw r27,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r27.u32);
	// stb r30,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r30.u8);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x823cbcf4
	if (ctx.cr6.lt) goto loc_823CBCF4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x823CBCF4;
	sub_82186190(ctx, base);
loc_823CBCF4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// addi r11,r11,-14980
	ctx.r11.s64 = ctx.r11.s64 + -14980;
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CBD18"))) PPC_WEAK_FUNC(sub_823CBD18);
PPC_FUNC_IMPL(__imp__sub_823CBD18) {
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
	// bl 0x823cbc90
	ctx.lr = 0x823CBD38;
	sub_823CBC90(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cbd50
	if (ctx.cr6.eq) goto loc_823CBD50;
	// bl 0x82186190
	ctx.lr = 0x823CBD4C;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823CBD50:
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

__attribute__((alias("__imp__sub_823CBD68"))) PPC_WEAK_FUNC(sub_823CBD68);
PPC_FUNC_IMPL(__imp__sub_823CBD68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-1772
	ctx.r3.s64 = ctx.r11.s64 + -1772;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CBD78"))) PPC_WEAK_FUNC(sub_823CBD78);
PPC_FUNC_IMPL(__imp__sub_823CBD78) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ori r11,r11,32839
	ctx.r11.u64 = ctx.r11.u64 | 32839;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821677d0
	ctx.lr = 0x823CBDC0;
	sub_821677D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CBDD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x823cbde8
	if (!ctx.cr6.eq) goto loc_823CBDE8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_823CBDE8:
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_823CBE00"))) PPC_WEAK_FUNC(sub_823CBE00);
PPC_FUNC_IMPL(__imp__sub_823CBE00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f3,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f1,16(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// addi r11,r11,-1744
	ctx.r11.s64 = ctx.r11.s64 + -1744;
	// stfs f2,20(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CBE28"))) PPC_WEAK_FUNC(sub_823CBE28);
PPC_FUNC_IMPL(__imp__sub_823CBE28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-1720
	ctx.r3.s64 = ctx.r11.s64 + -1720;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CBE38"))) PPC_WEAK_FUNC(sub_823CBE38);
PPC_FUNC_IMPL(__imp__sub_823CBE38) {
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
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// ori r11,r11,32848
	ctx.r11.u64 = ctx.r11.u64 | 32848;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821677d0
	ctx.lr = 0x823CBE58;
	sub_821677D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CBE6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CBE80"))) PPC_WEAK_FUNC(sub_823CBE80);
PPC_FUNC_IMPL(__imp__sub_823CBE80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,-1696
	ctx.r11.s64 = ctx.r11.s64 + -1696;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CBE90"))) PPC_WEAK_FUNC(sub_823CBE90);
PPC_FUNC_IMPL(__imp__sub_823CBE90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-1672
	ctx.r3.s64 = ctx.r11.s64 + -1672;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CBEA0"))) PPC_WEAK_FUNC(sub_823CBEA0);
PPC_FUNC_IMPL(__imp__sub_823CBEA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,-1652
	ctx.r11.s64 = ctx.r11.s64 + -1652;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stfs f1,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,14088(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// stfs f2,20(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f3,24(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stb r9,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r9.u8);
	// stfs f4,32(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f5,36(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CBEE0"))) PPC_WEAK_FUNC(sub_823CBEE0);
PPC_FUNC_IMPL(__imp__sub_823CBEE0) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82393060
	ctx.lr = 0x823CBF04;
	sub_82393060(ctx, base);
	// lfs f1,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8243a8a8
	ctx.lr = 0x823CBF10;
	sub_8243A8A8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cbf20
	if (ctx.cr6.eq) goto loc_823CBF20;
	// bl 0x821601b8
	ctx.lr = 0x823CBF20;
	sub_821601B8(ctx, base);
loc_823CBF20:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82393060
	ctx.lr = 0x823CBF2C;
	sub_82393060(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CBF44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cbf54
	if (ctx.cr6.eq) goto loc_823CBF54;
	// bl 0x821601b8
	ctx.lr = 0x823CBF54;
	sub_821601B8(ctx, base);
loc_823CBF54:
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

__attribute__((alias("__imp__sub_823CBF70"))) PPC_WEAK_FUNC(sub_823CBF70);
PPC_FUNC_IMPL(__imp__sub_823CBF70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x823CBF78;
	__savegprlr_29(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x823cbfe8
	if (ctx.cr6.lt) goto loc_823CBFE8;
	// bne cr6,0x823cc15c
	if (!ctx.cr6.eq) goto loc_823CC15C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82393060
	ctx.lr = 0x823CBFA4;
	sub_82393060(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CBFB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cbfcc
	if (ctx.cr6.eq) goto loc_823CBFCC;
	// bl 0x821601b8
	ctx.lr = 0x823CBFCC;
	sub_821601B8(ctx, base);
loc_823CBFCC:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cc15c
	if (ctx.cr6.eq) goto loc_823CC15C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823CBFDC:
	// bl 0x82392980
	ctx.lr = 0x823CBFE0;
	sub_82392980(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_823CBFE8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82393060
	ctx.lr = 0x823CBFF4;
	sub_82393060(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CC008;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823cc034
	if (!ctx.cr6.eq) goto loc_823CC034;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x823906d0
	ctx.lr = 0x823CC020;
	sub_823906D0(ctx, base);
	// lfs f0,36(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x823cc038
	if (ctx.cr6.gt) goto loc_823CC038;
loc_823CC034:
	// li r11,1
	ctx.r11.s64 = 1;
loc_823CC038:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cc04c
	if (ctx.cr6.eq) goto loc_823CC04C;
	// bl 0x821601b8
	ctx.lr = 0x823CC04C;
	sub_821601B8(ctx, base);
loc_823CC04C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cc15c
	if (ctx.cr6.eq) goto loc_823CC15C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82393060
	ctx.lr = 0x823CC064;
	sub_82393060(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CC078;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cc088
	if (ctx.cr6.eq) goto loc_823CC088;
	// bl 0x821601b8
	ctx.lr = 0x823CC088;
	sub_821601B8(ctx, base);
loc_823CC088:
	// lbz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cbfdc
	if (ctx.cr6.eq) goto loc_823CBFDC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f13,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x822210f8
	ctx.lr = 0x823CC0CC;
	sub_822210F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d2bc0
	ctx.lr = 0x823CC0E8;
	sub_825D2BC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82166e50
	ctx.lr = 0x823CC0F8;
	sub_82166E50(ctx, base);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82390b10
	ctx.lr = 0x823CC10C;
	sub_82390B10(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x825c5560
	ctx.lr = 0x823CC120;
	sub_825C5560(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82393060
	ctx.lr = 0x823CC12C;
	sub_82393060(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CC144;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cc154
	if (ctx.cr6.eq) goto loc_823CC154;
	// bl 0x821601b8
	ctx.lr = 0x823CC154;
	sub_821601B8(ctx, base);
loc_823CC154:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
loc_823CC15C:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CC168"))) PPC_WEAK_FUNC(sub_823CC168);
PPC_FUNC_IMPL(__imp__sub_823CC168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-1628
	ctx.r3.s64 = ctx.r11.s64 + -1628;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CC178"))) PPC_WEAK_FUNC(sub_823CC178);
PPC_FUNC_IMPL(__imp__sub_823CC178) {
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
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r11,32847
	ctx.r11.u64 = ctx.r11.u64 | 32847;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821677d0
	ctx.lr = 0x823CC1A0;
	sub_821677D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CC1B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_823CC1D0"))) PPC_WEAK_FUNC(sub_823CC1D0);
PPC_FUNC_IMPL(__imp__sub_823CC1D0) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823cc20c
	if (ctx.cr6.eq) goto loc_823CC20C;
	// bl 0x821677d0
	ctx.lr = 0x823CC1F8;
	sub_821677D0(ctx, base);
	// bl 0x8239a988
	ctx.lr = 0x823CC1FC;
	sub_8239A988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cc210
	if (ctx.cr6.eq) goto loc_823CC210;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823CC20C:
	// bl 0x82392980
	ctx.lr = 0x823CC210;
	sub_82392980(ctx, base);
loc_823CC210:
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

__attribute__((alias("__imp__sub_823CC228"))) PPC_WEAK_FUNC(sub_823CC228);
PPC_FUNC_IMPL(__imp__sub_823CC228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,-1604
	ctx.r11.s64 = ctx.r11.s64 + -1604;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CC238"))) PPC_WEAK_FUNC(sub_823CC238);
PPC_FUNC_IMPL(__imp__sub_823CC238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-1580
	ctx.r3.s64 = ctx.r11.s64 + -1580;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CC248"))) PPC_WEAK_FUNC(sub_823CC248);
PPC_FUNC_IMPL(__imp__sub_823CC248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-1556
	ctx.r11.s64 = ctx.r11.s64 + -1556;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CC268"))) PPC_WEAK_FUNC(sub_823CC268);
PPC_FUNC_IMPL(__imp__sub_823CC268) {
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
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cc294
	if (ctx.cr6.eq) goto loc_823CC294;
	// bl 0x82581e38
	ctx.lr = 0x823CC294;
	sub_82581E38(ctx, base);
loc_823CC294:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r11,r11,-14980
	ctx.r11.s64 = ctx.r11.s64 + -14980;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x823cc2b8
	if (ctx.cr6.eq) goto loc_823CC2B8;
	// bl 0x82186190
	ctx.lr = 0x823CC2B4;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823CC2B8:
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

__attribute__((alias("__imp__sub_823CC2D0"))) PPC_WEAK_FUNC(sub_823CC2D0);
PPC_FUNC_IMPL(__imp__sub_823CC2D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x823CC2D8;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x823cc3f8
	if (ctx.cr6.lt) goto loc_823CC3F8;
	// bne cr6,0x823cc458
	if (!ctx.cr6.eq) goto loc_823CC458;
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// fmuls f31,f0,f1
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// bl 0x82594160
	ctx.lr = 0x823CC314;
	sub_82594160(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8218c228
	ctx.lr = 0x823CC320;
	sub_8218C228(ctx, base);
	// addi r31,r30,16
	ctx.r31.s64 = ctx.r30.s64 + 16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x825d3bc8
	ctx.lr = 0x823CC334;
	sub_825D3BC8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825d22a0
	ctx.lr = 0x823CC33C;
	sub_825D22A0(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x823cc350
	if (!ctx.cr6.gt) goto loc_823CC350;
	// fmr f29,f30
	ctx.f29.f64 = ctx.f30.f64;
	// b 0x823cc354
	goto loc_823CC354;
loc_823CC350:
	// fmr f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f31.f64;
loc_823CC354:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x825d2260
	ctx.lr = 0x823CC360;
	sub_825D2260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x825d2350
	ctx.lr = 0x823CC370;
	sub_825D2350(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v13,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp v0,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx v0,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x822210f8
	ctx.lr = 0x823CC38C;
	sub_822210F8(ctx, base);
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
	// lvx128 v0,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lvx128 v12,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stvx v12,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v12,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stvx v12,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82391448
	ctx.lr = 0x823CC3D4;
	sub_82391448(ctx, base);
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x823cc458
	if (!ctx.cr6.gt) goto loc_823CC458;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82392980
	ctx.lr = 0x823CC3E4;
	sub_82392980(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
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
loc_823CC3F8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82393060
	ctx.lr = 0x823CC404;
	sub_82393060(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CC418;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cc42c
	if (ctx.cr6.eq) goto loc_823CC42C;
	// bl 0x821601b8
	ctx.lr = 0x823CC42C;
	sub_821601B8(ctx, base);
loc_823CC42C:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cc458
	if (ctx.cr6.eq) goto loc_823CC458;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822210f8
	ctx.lr = 0x823CC440;
	sub_822210F8(ctx, base);
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// li r10,1
	ctx.r10.s64 = 1;
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_823CC458:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
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

__attribute__((alias("__imp__sub_823CC470"))) PPC_WEAK_FUNC(sub_823CC470);
PPC_FUNC_IMPL(__imp__sub_823CC470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x823CC478;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ori r11,r11,32852
	ctx.r11.u64 = ctx.r11.u64 | 32852;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x821677d0
	ctx.lr = 0x823CC4A8;
	sub_821677D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CC4BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cc4d0
	if (ctx.cr6.eq) goto loc_823CC4D0;
	// bl 0x82659610
	ctx.lr = 0x823CC4D0;
	sub_82659610(ctx, base);
loc_823CC4D0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x823cc4e8
	if (ctx.cr6.eq) goto loc_823CC4E8;
	// bl 0x82581e38
	ctx.lr = 0x823CC4E8;
	sub_82581E38(ctx, base);
loc_823CC4E8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82393060
	ctx.lr = 0x823CC4F4;
	sub_82393060(ctx, base);
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8243a8a8
	ctx.lr = 0x823CC500;
	sub_8243A8A8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cc510
	if (ctx.cr6.eq) goto loc_823CC510;
	// bl 0x821601b8
	ctx.lr = 0x823CC510;
	sub_821601B8(ctx, base);
loc_823CC510:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82594160
	ctx.lr = 0x823CC51C;
	sub_82594160(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825d1e60
	ctx.lr = 0x823CC528;
	sub_825D1E60(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r31,32
	ctx.r5.s64 = ctx.r31.s64 + 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x823909d8
	ctx.lr = 0x823CC544;
	sub_823909D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82393060
	ctx.lr = 0x823CC554;
	sub_82393060(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CC56C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cc57c
	if (ctx.cr6.eq) goto loc_823CC57C;
	// bl 0x821601b8
	ctx.lr = 0x823CC57C;
	sub_821601B8(ctx, base);
loc_823CC57C:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cc58c
	if (ctx.cr6.eq) goto loc_823CC58C;
	// bl 0x82581e38
	ctx.lr = 0x823CC58C;
	sub_82581E38(ctx, base);
loc_823CC58C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CC598"))) PPC_WEAK_FUNC(sub_823CC598);
PPC_FUNC_IMPL(__imp__sub_823CC598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-1532
	ctx.r3.s64 = ctx.r11.s64 + -1532;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CC5A8"))) PPC_WEAK_FUNC(sub_823CC5A8);
PPC_FUNC_IMPL(__imp__sub_823CC5A8) {
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
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r11,r11,32849
	ctx.r11.u64 = ctx.r11.u64 | 32849;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821677d0
	ctx.lr = 0x823CC5D0;
	sub_821677D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CC5E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cc5f8
	if (ctx.cr6.eq) goto loc_823CC5F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82392980
	ctx.lr = 0x823CC5F8;
	sub_82392980(ctx, base);
loc_823CC5F8:
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

__attribute__((alias("__imp__sub_823CC610"))) PPC_WEAK_FUNC(sub_823CC610);
PPC_FUNC_IMPL(__imp__sub_823CC610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-1508
	ctx.r3.s64 = ctx.r11.s64 + -1508;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CC620"))) PPC_WEAK_FUNC(sub_823CC620);
PPC_FUNC_IMPL(__imp__sub_823CC620) {
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
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r11,r11,32851
	ctx.r11.u64 = ctx.r11.u64 | 32851;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821677d0
	ctx.lr = 0x823CC648;
	sub_821677D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CC65C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82392980
	ctx.lr = 0x823CC664;
	sub_82392980(ctx, base);
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

__attribute__((alias("__imp__sub_823CC678"))) PPC_WEAK_FUNC(sub_823CC678);
PPC_FUNC_IMPL(__imp__sub_823CC678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,-1488
	ctx.r11.s64 = ctx.r11.s64 + -1488;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CC688"))) PPC_WEAK_FUNC(sub_823CC688);
PPC_FUNC_IMPL(__imp__sub_823CC688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,-1460
	ctx.r11.s64 = ctx.r11.s64 + -1460;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CC698"))) PPC_WEAK_FUNC(sub_823CC698);
PPC_FUNC_IMPL(__imp__sub_823CC698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-1436
	ctx.r3.s64 = ctx.r11.s64 + -1436;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CC6A8"))) PPC_WEAK_FUNC(sub_823CC6A8);
PPC_FUNC_IMPL(__imp__sub_823CC6A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x823CC6B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r29,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cc6d4
	if (ctx.cr6.eq) goto loc_823CC6D4;
	// bl 0x82631328
	ctx.lr = 0x823CC6D4;
	sub_82631328(ctx, base);
loc_823CC6D4:
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r29,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cc6e8
	if (ctx.cr6.eq) goto loc_823CC6E8;
	// bl 0x82581e38
	ctx.lr = 0x823CC6E8;
	sub_82581E38(ctx, base);
loc_823CC6E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821677d0
	ctx.lr = 0x823CC6F0;
	sub_821677D0(ctx, base);
	// bl 0x82399ef8
	ctx.lr = 0x823CC6F4;
	sub_82399EF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cc710
	if (ctx.cr6.eq) goto loc_823CC710;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821677d0
	ctx.lr = 0x823CC708;
	sub_821677D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82399ec8
	ctx.lr = 0x823CC710;
	sub_82399EC8(ctx, base);
loc_823CC710:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e0968
	ctx.lr = 0x823CC71C;
	sub_821E0968(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821677d0
	ctx.lr = 0x823CC724;
	sub_821677D0(ctx, base);
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,23440
	ctx.r6.s64 = ctx.r11.s64 + 23440;
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,9176
	ctx.r5.s64 = ctx.r11.s64 + 9176;
	// bl 0x826df418
	ctx.lr = 0x823CC740;
	sub_826DF418(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82426410
	ctx.lr = 0x823CC748;
	sub_82426410(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CC750"))) PPC_WEAK_FUNC(sub_823CC750);
PPC_FUNC_IMPL(__imp__sub_823CC750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x823CC758;
	__savegprlr_27(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x823c4220
	ctx.lr = 0x823CC768;
	sub_823C4220(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823900e0
	ctx.lr = 0x823CC770;
	sub_823900E0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r5,r11,-1396
	ctx.r5.s64 = ctx.r11.s64 + -1396;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-3660
	ctx.r4.s64 = ctx.r11.s64 + -3660;
	// bl 0x825fe210
	ctx.lr = 0x823CC788;
	sub_825FE210(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822210f8
	ctx.lr = 0x823CC794;
	sub_822210F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f13,22004(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22004);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x825d3bb0
	ctx.lr = 0x823CC7F4;
	sub_825D3BB0(ctx, base);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d2bc0
	ctx.lr = 0x823CC810;
	sub_825D2BC0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x825d2cb0
	ctx.lr = 0x823CC820;
	sub_825D2CB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82168c48
	ctx.lr = 0x823CC830;
	sub_82168C48(ctx, base);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825fe5b0
	ctx.lr = 0x823CC844;
	sub_825FE5B0(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823cc858
	if (ctx.cr6.eq) goto loc_823CC858;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x823CC858;
	sub_82659610(ctx, base);
loc_823CC858:
	// lwz r3,44(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// stw r30,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cc86c
	if (ctx.cr6.eq) goto loc_823CC86C;
	// bl 0x82631328
	ctx.lr = 0x823CC86C;
	sub_82631328(ctx, base);
loc_823CC86C:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cc87c
	if (ctx.cr6.eq) goto loc_823CC87C;
	// bl 0x82631328
	ctx.lr = 0x823CC87C;
	sub_82631328(ctx, base);
loc_823CC87C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82392f68
	ctx.lr = 0x823CC888;
	sub_82392F68(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cc940
	if (ctx.cr6.eq) goto loc_823CC940;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cc940
	if (ctx.cr6.eq) goto loc_823CC940;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,45
	ctx.r4.s64 = 45;
	// addi r5,r11,-1416
	ctx.r5.s64 = ctx.r11.s64 + -1416;
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CC8C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822210f8
	ctx.lr = 0x823CC8CC;
	sub_822210F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CC908;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823cc91c
	if (ctx.cr6.eq) goto loc_823CC91C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x823CC91C;
	sub_82659610(ctx, base);
loc_823CC91C:
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// stw r31,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cc930
	if (ctx.cr6.eq) goto loc_823CC930;
	// bl 0x82581e38
	ctx.lr = 0x823CC930;
	sub_82581E38(ctx, base);
loc_823CC930:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cc940
	if (ctx.cr6.eq) goto loc_823CC940;
	// bl 0x82581e38
	ctx.lr = 0x823CC940;
	sub_82581E38(ctx, base);
loc_823CC940:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f13,40(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,52(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 52, temp.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f0,28580(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28580);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 64, temp.u32);
	// stw r10,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r10.u32);
	// stb r10,60(r29)
	PPC_STORE_U8(ctx.r29.u32 + 60, ctx.r10.u8);
	// beq cr6,0x823cc970
	if (ctx.cr6.eq) goto loc_823CC970;
	// bl 0x821601b8
	ctx.lr = 0x823CC970;
	sub_821601B8(ctx, base);
loc_823CC970:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CC978"))) PPC_WEAK_FUNC(sub_823CC978);
PPC_FUNC_IMPL(__imp__sub_823CC978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x823CC980;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f0,52(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x823cca88
	if (ctx.cr6.gt) goto loc_823CCA88;
	// lbz r11,60(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823cca68
	if (!ctx.cr6.eq) goto loc_823CCA68;
	// lfs f0,64(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,64(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 64, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x823cca68
	if (ctx.cr6.gt) goto loc_823CCA68;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,60(r27)
	PPC_STORE_U8(ctx.r27.u32 + 60, ctx.r11.u8);
	// bl 0x82209050
	ctx.lr = 0x823CC9DC;
	sub_82209050(ctx, base);
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,23488
	ctx.r6.s64 = ctx.r11.s64 + 23488;
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,9132
	ctx.r5.s64 = ctx.r11.s64 + 9132;
	// bl 0x826df418
	ctx.lr = 0x823CC9F8;
	sub_826DF418(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x822210f8
	ctx.lr = 0x823CCA0C;
	sub_822210F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82391468
	ctx.lr = 0x823CCA1C;
	sub_82391468(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82629338
	ctx.lr = 0x823CCA28;
	sub_82629338(ctx, base);
	// bl 0x82581090
	ctx.lr = 0x823CCA2C;
	sub_82581090(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r30,68
	ctx.r7.s64 = ctx.r30.s64 + 68;
	// addi r6,r30,72
	ctx.r6.s64 = ctx.r30.s64 + 72;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822951b8
	ctx.lr = 0x823CCA48;
	sub_822951B8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cca58
	if (ctx.cr6.eq) goto loc_823CCA58;
	// bl 0x821601b8
	ctx.lr = 0x823CCA58;
	sub_821601B8(ctx, base);
loc_823CCA58:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cca68
	if (ctx.cr6.eq) goto loc_823CCA68;
	// bl 0x82581e38
	ctx.lr = 0x823CCA68;
	sub_82581E38(ctx, base);
loc_823CCA68:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823c4198
	ctx.lr = 0x823CCA78;
	sub_823C4198(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_823CCA88:
	// lwz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x823ccaa8
	if (!ctx.cr6.eq) goto loc_823CCAA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821677d0
	ctx.lr = 0x823CCA9C;
	sub_821677D0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82399ec8
	ctx.lr = 0x823CCAA4;
	sub_82399EC8(ctx, base);
	// b 0x823ccab0
	goto loc_823CCAB0;
loc_823CCAA8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,56(r27)
	PPC_STORE_U32(ctx.r27.u32 + 56, ctx.r11.u32);
loc_823CCAB0:
	// lfs f0,52(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,52(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 52, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x823ccad4
	if (ctx.cr6.gt) goto loc_823CCAD4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821677d0
	ctx.lr = 0x823CCACC;
	sub_821677D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82399ec8
	ctx.lr = 0x823CCAD4;
	sub_82399EC8(ctx, base);
loc_823CCAD4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CCAE8"))) PPC_WEAK_FUNC(sub_823CCAE8);
PPC_FUNC_IMPL(__imp__sub_823CCAE8) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-18444
	ctx.r4.s64 = ctx.r11.s64 + -18444;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5424);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c42c8
	ctx.lr = 0x823CCB18;
	sub_823C42C8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f31,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r11,-1376
	ctx.r10.s64 = ctx.r11.s64 + -1376;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,3544(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stb r11,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_823CCB68"))) PPC_WEAK_FUNC(sub_823CCB68);
PPC_FUNC_IMPL(__imp__sub_823CCB68) {
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
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ccb90
	if (ctx.cr6.eq) goto loc_823CCB90;
	// bl 0x82581e38
	ctx.lr = 0x823CCB90;
	sub_82581E38(ctx, base);
loc_823CCB90:
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ccba0
	if (ctx.cr6.eq) goto loc_823CCBA0;
	// bl 0x82631328
	ctx.lr = 0x823CCBA0;
	sub_82631328(ctx, base);
loc_823CCBA0:
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x823ccbb8
	if (ctx.cr6.lt) goto loc_823CCBB8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x823CCBB8;
	sub_82186190(ctx, base);
loc_823CCBB8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// addi r11,r11,-14980
	ctx.r11.s64 = ctx.r11.s64 + -14980;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_823CCBF0"))) PPC_WEAK_FUNC(sub_823CCBF0);
PPC_FUNC_IMPL(__imp__sub_823CCBF0) {
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
	// bl 0x823ccb68
	ctx.lr = 0x823CCC10;
	sub_823CCB68(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ccc28
	if (ctx.cr6.eq) goto loc_823CCC28;
	// bl 0x82186190
	ctx.lr = 0x823CCC24;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823CCC28:
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

__attribute__((alias("__imp__sub_823CCC40"))) PPC_WEAK_FUNC(sub_823CCC40);
PPC_FUNC_IMPL(__imp__sub_823CCC40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-1352
	ctx.r3.s64 = ctx.r11.s64 + -1352;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CCC50"))) PPC_WEAK_FUNC(sub_823CCC50);
PPC_FUNC_IMPL(__imp__sub_823CCC50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-1328
	ctx.r11.s64 = ctx.r11.s64 + -1328;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CCC70"))) PPC_WEAK_FUNC(sub_823CCC70);
PPC_FUNC_IMPL(__imp__sub_823CCC70) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x823ccd00
	if (ctx.cr6.eq) goto loc_823CCD00;
	// fsubs f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x823cccb4
	if (ctx.cr6.gt) goto loc_823CCCB4;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
loc_823CCCB4:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x823ccd20
	if (!ctx.cr6.eq) goto loc_823CCD20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821677d0
	ctx.lr = 0x823CCCCC;
	sub_821677D0(ctx, base);
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,23440
	ctx.r6.s64 = ctx.r11.s64 + 23440;
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,9176
	ctx.r5.s64 = ctx.r11.s64 + 9176;
	// bl 0x826df418
	ctx.lr = 0x823CCCE8;
	sub_826DF418(ctx, base);
	// bl 0x82426550
	ctx.lr = 0x823CCCEC;
	sub_82426550(ctx, base);
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
loc_823CCD00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821677d0
	ctx.lr = 0x823CCD08;
	sub_821677D0(ctx, base);
	// bl 0x8239a988
	ctx.lr = 0x823CCD0C;
	sub_8239A988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ccd20
	if (ctx.cr6.eq) goto loc_823CCD20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82392980
	ctx.lr = 0x823CCD20;
	sub_82392980(ctx, base);
loc_823CCD20:
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

__attribute__((alias("__imp__sub_823CCD38"))) PPC_WEAK_FUNC(sub_823CCD38);
PPC_FUNC_IMPL(__imp__sub_823CCD38) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,5024(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5024);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,61446
	ctx.r11.u64 = ctx.r11.u64 | 61446;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821677d0
	ctx.lr = 0x823CCD70;
	sub_821677D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CCD84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82392f68
	ctx.lr = 0x823CCD90;
	sub_82392F68(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ccdd4
	if (ctx.cr6.eq) goto loc_823CCDD4;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ccdd4
	if (ctx.cr6.eq) goto loc_823CCDD4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,45
	ctx.r4.s64 = 45;
	// addi r5,r11,-1304
	ctx.r5.s64 = ctx.r11.s64 + -1304;
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CCDC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823932d8
	ctx.lr = 0x823CCDD4;
	sub_823932D8(ctx, base);
loc_823CCDD4:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ccde4
	if (ctx.cr6.eq) goto loc_823CCDE4;
	// bl 0x821601b8
	ctx.lr = 0x823CCDE4;
	sub_821601B8(ctx, base);
loc_823CCDE4:
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

__attribute__((alias("__imp__sub_823CCDF8"))) PPC_WEAK_FUNC(sub_823CCDF8);
PPC_FUNC_IMPL(__imp__sub_823CCDF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-1288
	ctx.r3.s64 = ctx.r11.s64 + -1288;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CCE08"))) PPC_WEAK_FUNC(sub_823CCE08);
PPC_FUNC_IMPL(__imp__sub_823CCE08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// addi r11,r11,-1256
	ctx.r11.s64 = ctx.r11.s64 + -1256;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CCE30"))) PPC_WEAK_FUNC(sub_823CCE30);
PPC_FUNC_IMPL(__imp__sub_823CCE30) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cce5c
	if (ctx.cr6.eq) goto loc_823CCE5C;
	// bl 0x82581e38
	ctx.lr = 0x823CCE5C;
	sub_82581E38(ctx, base);
loc_823CCE5C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cce6c
	if (ctx.cr6.eq) goto loc_823CCE6C;
	// bl 0x82631328
	ctx.lr = 0x823CCE6C;
	sub_82631328(ctx, base);
loc_823CCE6C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r11,r11,-14980
	ctx.r11.s64 = ctx.r11.s64 + -14980;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x823cce90
	if (ctx.cr6.eq) goto loc_823CCE90;
	// bl 0x82186190
	ctx.lr = 0x823CCE8C;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823CCE90:
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

__attribute__((alias("__imp__sub_823CCEA8"))) PPC_WEAK_FUNC(sub_823CCEA8);
PPC_FUNC_IMPL(__imp__sub_823CCEA8) {
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
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r11,61445
	ctx.r11.u64 = ctx.r11.u64 | 61445;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821677d0
	ctx.lr = 0x823CCED4;
	sub_821677D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CCEE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// beq cr6,0x823ccf00
	if (ctx.cr6.eq) goto loc_823CCF00;
	// bl 0x82631328
	ctx.lr = 0x823CCF00;
	sub_82631328(ctx, base);
loc_823CCF00:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ccf14
	if (ctx.cr6.eq) goto loc_823CCF14;
	// bl 0x82581e38
	ctx.lr = 0x823CCF14;
	sub_82581E38(ctx, base);
loc_823CCF14:
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

__attribute__((alias("__imp__sub_823CCF30"))) PPC_WEAK_FUNC(sub_823CCF30);
PPC_FUNC_IMPL(__imp__sub_823CCF30) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ccfa8
	if (ctx.cr6.eq) goto loc_823CCFA8;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ccfa8
	if (ctx.cr6.eq) goto loc_823CCFA8;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823ccfa8
	if (ctx.cr6.eq) goto loc_823CCFA8;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ccfa8
	if (ctx.cr6.eq) goto loc_823CCFA8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82594160
	ctx.lr = 0x823CCF8C;
	sub_82594160(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CCFA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823CCFA8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821677d0
	ctx.lr = 0x823CCFB0;
	sub_821677D0(ctx, base);
	// bl 0x8239a988
	ctx.lr = 0x823CCFB4;
	sub_8239A988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ccfc8
	if (ctx.cr6.eq) goto loc_823CCFC8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82392980
	ctx.lr = 0x823CCFC8;
	sub_82392980(ctx, base);
loc_823CCFC8:
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

__attribute__((alias("__imp__sub_823CCFE0"))) PPC_WEAK_FUNC(sub_823CCFE0);
PPC_FUNC_IMPL(__imp__sub_823CCFE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x823CCFE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ori r11,r11,61444
	ctx.r11.u64 = ctx.r11.u64 | 61444;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stb r11,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r11.u8);
	// bl 0x821677d0
	ctx.lr = 0x823CD01C;
	sub_821677D0(ctx, base);
	// bl 0x8239b8d8
	ctx.lr = 0x823CD020;
	sub_8239B8D8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x823cd08c
	if (ctx.cr6.lt) goto loc_823CD08C;
	// beq cr6,0x823cd060
	if (ctx.cr6.eq) goto loc_823CD060;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x823cd0bc
	if (!ctx.cr6.lt) goto loc_823CD0BC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821677d0
	ctx.lr = 0x823CD040;
	sub_821677D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r11,-1180
	ctx.r4.s64 = ctx.r11.s64 + -1180;
	// bl 0x8239a598
	ctx.lr = 0x823CD054;
	sub_8239A598(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,12836
	ctx.r4.s64 = ctx.r11.s64 + 12836;
	// b 0x823cd0b0
	goto loc_823CD0B0;
loc_823CD060:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821677d0
	ctx.lr = 0x823CD068;
	sub_821677D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r11,-1192
	ctx.r4.s64 = ctx.r11.s64 + -1192;
	// bl 0x8239a598
	ctx.lr = 0x823CD07C;
	sub_8239A598(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r11,-29712
	ctx.r4.s64 = ctx.r11.s64 + -29712;
	// b 0x823cd0b4
	goto loc_823CD0B4;
loc_823CD08C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821677d0
	ctx.lr = 0x823CD094;
	sub_821677D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r11,-1204
	ctx.r4.s64 = ctx.r11.s64 + -1204;
	// bl 0x8239a598
	ctx.lr = 0x823CD0A8;
	sub_8239A598(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-31724
	ctx.r4.s64 = ctx.r11.s64 + -31724;
loc_823CD0B0:
	// li r5,4
	ctx.r5.s64 = 4;
loc_823CD0B4:
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82161e08
	ctx.lr = 0x823CD0BC;
	sub_82161E08(ctx, base);
loc_823CD0BC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821677d0
	ctx.lr = 0x823CD0C4;
	sub_821677D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-1208
	ctx.r4.s64 = ctx.r11.s64 + -1208;
	// bl 0x82399ec0
	ctx.lr = 0x823CD0D0;
	sub_82399EC0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823cd0e0
	if (ctx.cr6.eq) goto loc_823CD0E0;
	// bl 0x82659610
	ctx.lr = 0x823CD0E0;
	sub_82659610(ctx, base);
loc_823CD0E0:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cd0f4
	if (ctx.cr6.eq) goto loc_823CD0F4;
	// bl 0x82581e38
	ctx.lr = 0x823CD0F4;
	sub_82581E38(ctx, base);
loc_823CD0F4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cd1b8
	if (ctx.cr6.eq) goto loc_823CD1B8;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cd1b8
	if (ctx.cr6.eq) goto loc_823CD1B8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82391468
	ctx.lr = 0x823CD11C;
	sub_82391468(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CD130;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cd144
	if (ctx.cr6.eq) goto loc_823CD144;
	// bl 0x821601b8
	ctx.lr = 0x823CD144;
	sub_821601B8(ctx, base);
loc_823CD144:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CD158;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823cd1b8
	if (ctx.cr6.eq) goto loc_823CD1B8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-1220
	ctx.r5.s64 = ctx.r11.s64 + -1220;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-3660
	ctx.r4.s64 = ctx.r11.s64 + -3660;
	// bl 0x825fe210
	ctx.lr = 0x823CD178;
	sub_825FE210(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82594160
	ctx.lr = 0x823CD188;
	sub_82594160(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825fe5b0
	ctx.lr = 0x823CD19C;
	sub_825FE5B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82224c78
	ctx.lr = 0x823CD1A8;
	sub_82224C78(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cd1b8
	if (ctx.cr6.eq) goto loc_823CD1B8;
	// bl 0x82631328
	ctx.lr = 0x823CD1B8;
	sub_82631328(ctx, base);
loc_823CD1B8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821677d0
	ctx.lr = 0x823CD1C0;
	sub_821677D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CD1D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82392f68
	ctx.lr = 0x823CD1E0;
	sub_82392F68(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cd224
	if (ctx.cr6.eq) goto loc_823CD224;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cd224
	if (ctx.cr6.eq) goto loc_823CD224;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,45
	ctx.r4.s64 = 45;
	// addi r5,r11,-1232
	ctx.r5.s64 = ctx.r11.s64 + -1232;
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CD218;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823932d8
	ctx.lr = 0x823CD224;
	sub_823932D8(ctx, base);
loc_823CD224:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cd234
	if (ctx.cr6.eq) goto loc_823CD234;
	// bl 0x821601b8
	ctx.lr = 0x823CD234;
	sub_821601B8(ctx, base);
loc_823CD234:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x823cd248
	if (ctx.cr6.lt) goto loc_823CD248;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x82186190
	ctx.lr = 0x823CD248;
	sub_82186190(ctx, base);
loc_823CD248:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CD250"))) PPC_WEAK_FUNC(sub_823CD250);
PPC_FUNC_IMPL(__imp__sub_823CD250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-1168
	ctx.r3.s64 = ctx.r11.s64 + -1168;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CD260"))) PPC_WEAK_FUNC(sub_823CD260);
PPC_FUNC_IMPL(__imp__sub_823CD260) {
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
	// bl 0x823c4220
	ctx.lr = 0x823CD280;
	sub_823C4220(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,-1152(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stb r10,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r10.u8);
	// bl 0x821677d0
	ctx.lr = 0x823CD29C;
	sub_821677D0(ctx, base);
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,23440
	ctx.r6.s64 = ctx.r11.s64 + 23440;
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,9176
	ctx.r5.s64 = ctx.r11.s64 + 9176;
	// bl 0x826df418
	ctx.lr = 0x823CD2B8;
	sub_826DF418(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82426410
	ctx.lr = 0x823CD2C0;
	sub_82426410(ctx, base);
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

__attribute__((alias("__imp__sub_823CD2D8"))) PPC_WEAK_FUNC(sub_823CD2D8);
PPC_FUNC_IMPL(__imp__sub_823CD2D8) {
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
	// bl 0x821e0968
	ctx.lr = 0x823CD2F0;
	sub_821E0968(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82629338
	ctx.lr = 0x823CD2F8;
	sub_82629338(ctx, base);
	// bl 0x825813a0
	ctx.lr = 0x823CD2FC;
	sub_825813A0(ctx, base);
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

__attribute__((alias("__imp__sub_823CD310"))) PPC_WEAK_FUNC(sub_823CD310);
PPC_FUNC_IMPL(__imp__sub_823CD310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x823CD318;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lbz r11,40(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823cd3f0
	if (!ctx.cr6.eq) goto loc_823CD3F0;
	// lfs f0,44(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f0,44(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 44, temp.u32);
	// lfs f13,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x823cd3f0
	if (ctx.cr6.gt) goto loc_823CD3F0;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,40(r27)
	PPC_STORE_U8(ctx.r27.u32 + 40, ctx.r11.u8);
	// bl 0x82209050
	ctx.lr = 0x823CD364;
	sub_82209050(ctx, base);
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,23488
	ctx.r6.s64 = ctx.r11.s64 + 23488;
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,9132
	ctx.r5.s64 = ctx.r11.s64 + 9132;
	// bl 0x826df418
	ctx.lr = 0x823CD380;
	sub_826DF418(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x822210f8
	ctx.lr = 0x823CD394;
	sub_822210F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82391468
	ctx.lr = 0x823CD3A4;
	sub_82391468(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82629338
	ctx.lr = 0x823CD3B0;
	sub_82629338(ctx, base);
	// bl 0x82581090
	ctx.lr = 0x823CD3B4;
	sub_82581090(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r30,68
	ctx.r7.s64 = ctx.r30.s64 + 68;
	// addi r6,r30,72
	ctx.r6.s64 = ctx.r30.s64 + 72;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822951b8
	ctx.lr = 0x823CD3D0;
	sub_822951B8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cd3e0
	if (ctx.cr6.eq) goto loc_823CD3E0;
	// bl 0x821601b8
	ctx.lr = 0x823CD3E0;
	sub_821601B8(ctx, base);
loc_823CD3E0:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cd3f0
	if (ctx.cr6.eq) goto loc_823CD3F0;
	// bl 0x82581e38
	ctx.lr = 0x823CD3F0;
	sub_82581E38(ctx, base);
loc_823CD3F0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823c4198
	ctx.lr = 0x823CD400;
	sub_823C4198(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CD410"))) PPC_WEAK_FUNC(sub_823CD410);
PPC_FUNC_IMPL(__imp__sub_823CD410) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-1120
	ctx.r4.s64 = ctx.r11.s64 + -1120;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5424(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5424);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c42c8
	ctx.lr = 0x823CD438;
	sub_823C42C8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-1144
	ctx.r11.s64 = ctx.r11.s64 + -1144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_823CD468"))) PPC_WEAK_FUNC(sub_823CD468);
PPC_FUNC_IMPL(__imp__sub_823CD468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-1108
	ctx.r3.s64 = ctx.r11.s64 + -1108;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CD478"))) PPC_WEAK_FUNC(sub_823CD478);
PPC_FUNC_IMPL(__imp__sub_823CD478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x826dfb88
	ctx.lr = 0x823CD48C;
	__savefpr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f28,f2
	ctx.f28.f64 = ctx.f2.f64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825d3bc8
	ctx.lr = 0x823CD4B0;
	sub_825D3BC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f31,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f29,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f29.f64 = double(temp.f32);
	// stfs f29,92(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x825d22a0
	ctx.lr = 0x823CD4E0;
	sub_825D22A0(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f29,108(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lfs f13,3548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f30.f64));
	// fdivs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x825d2350
	ctx.lr = 0x823CD520;
	sub_825D2350(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d3bb0
	ctx.lr = 0x823CD530;
	sub_825D3BB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x826dfbd4
	ctx.lr = 0x823CD540;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CD550"))) PPC_WEAK_FUNC(sub_823CD550);
PPC_FUNC_IMPL(__imp__sub_823CD550) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x826e0460
	ctx.lr = 0x823CD584;
	sub_826E0460(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f31,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f30,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f30.f64 = double(temp.f32);
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x825d2200
	ctx.lr = 0x823CD5B8;
	sub_825D2200(ctx, base);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x826e0460
	ctx.lr = 0x823CD5C8;
	sub_826E0460(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// frsp f1,f29
	ctx.f1.f64 = double(float(ctx.f29.f64));
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// frsp f29,f0
	ctx.f29.f64 = double(float(ctx.f0.f64));
	// bl 0x825d20b0
	ctx.lr = 0x823CD5F0;
	sub_825D20B0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f30,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f30,124(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f0,8232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8232);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f29,f0
	ctx.f1.f64 = double(float(ctx.f29.f64 + ctx.f0.f64));
	// bl 0x825d20b0
	ctx.lr = 0x823CD618;
	sub_825D20B0(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d1d68
	ctx.lr = 0x823CD628;
	sub_825D1D68(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

__attribute__((alias("__imp__sub_823CD650"))) PPC_WEAK_FUNC(sub_823CD650);
PPC_FUNC_IMPL(__imp__sub_823CD650) {
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
	// lfs f2,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f1,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826e0460
	ctx.lr = 0x823CD670;
	sub_826E0460(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,3544(r11)
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
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x825d20b0
	ctx.lr = 0x823CD6A0;
	sub_825D20B0(ctx, base);
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

__attribute__((alias("__imp__sub_823CD6B8"))) PPC_WEAK_FUNC(sub_823CD6B8);
PPC_FUNC_IMPL(__imp__sub_823CD6B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f2,8(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// addi r11,r11,-1080
	ctx.r11.s64 = ctx.r11.s64 + -1080;
	// stfs f3,12(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stb r10,96(r3)
	PPC_STORE_U8(ctx.r3.u32 + 96, ctx.r10.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CD6E0"))) PPC_WEAK_FUNC(sub_823CD6E0);
PPC_FUNC_IMPL(__imp__sub_823CD6E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x823CD6E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82629338
	ctx.lr = 0x823CD6FC;
	sub_82629338(ctx, base);
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,23844
	ctx.r6.s64 = ctx.r11.s64 + 23844;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,2352
	ctx.r5.s64 = ctx.r11.s64 + 2352;
	// bl 0x826df418
	ctx.lr = 0x823CD718;
	sub_826DF418(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821677d0
	ctx.lr = 0x823CD724;
	sub_821677D0(ctx, base);
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,23792
	ctx.r6.s64 = ctx.r11.s64 + 23792;
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,9176
	ctx.r5.s64 = ctx.r11.s64 + 9176;
	// bl 0x826df418
	ctx.lr = 0x823CD740;
	sub_826DF418(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82404d68
	ctx.lr = 0x823CD750;
	sub_82404D68(ctx, base);
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cd778
	if (ctx.cr6.eq) goto loc_823CD778;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82408550
	ctx.lr = 0x823CD768;
	sub_82408550(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82390590
	ctx.lr = 0x823CD770;
	sub_82390590(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_823CD778:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-3084
	ctx.r4.s64 = ctx.r11.s64 + -3084;
	// bl 0x82409068
	ctx.lr = 0x823CD784;
	sub_82409068(ctx, base);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r10,r31,80
	ctx.r10.s64 = ctx.r31.s64 + 80;
	// addi r11,r11,-4576
	ctx.r11.s64 = ctx.r11.s64 + -4576;
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v13,v13,24
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xE7));
	// vpermwi128 v0,v0,24
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xE7));
	// vcmpeqfp. v0,v0,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	ctx.cr6.setFromMask(simde_mm_load_ps(ctx.v0.f32), 0xF);
	// mfocrf r11,2
	ctx.r11.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r11,r11,25,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cd7d8
	if (ctx.cr6.eq) goto loc_823CD7D8;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823cd650
	ctx.lr = 0x823CD7C4;
	sub_823CD650(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822210f8
	ctx.lr = 0x823CD7D0;
	sub_822210F8(ctx, base);
	// lvx128 v0,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_823CD7D8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82390590
	ctx.lr = 0x823CD7E0;
	sub_82390590(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CD7E8"))) PPC_WEAK_FUNC(sub_823CD7E8);
PPC_FUNC_IMPL(__imp__sub_823CD7E8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82390580
	ctx.lr = 0x823CD80C;
	sub_82390580(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821677d0
	ctx.lr = 0x823CD814;
	sub_821677D0(ctx, base);
	// bl 0x8239b0c8
	ctx.lr = 0x823CD818;
	sub_8239B0C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821677d0
	ctx.lr = 0x823CD820;
	sub_821677D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6448(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6448);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8239c420
	ctx.lr = 0x823CD82C;
	sub_8239C420(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821677d0
	ctx.lr = 0x823CD834;
	sub_821677D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,-14536
	ctx.r4.s64 = ctx.r11.s64 + -14536;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8239a598
	ctx.lr = 0x823CD84C;
	sub_8239A598(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822210f8
	ctx.lr = 0x823CD854;
	sub_822210F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// addi r9,r31,64
	ctx.r9.s64 = ctx.r31.s64 + 64;
	// addi r8,r31,80
	ctx.r8.s64 = ctx.r31.s64 + 80;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lvx128 v0,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r11,r11,-4608
	ctx.r11.s64 = ctx.r11.s64 + -4608;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,-4576
	ctx.r11.s64 = ctx.r11.s64 + -4576;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// bl 0x82629338
	ctx.lr = 0x823CD8AC;
	sub_82629338(ctx, base);
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,23844
	ctx.r6.s64 = ctx.r11.s64 + 23844;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,2352
	ctx.r5.s64 = ctx.r11.s64 + 2352;
	// bl 0x826df418
	ctx.lr = 0x823CD8C8;
	sub_826DF418(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
	// bl 0x82404d68
	ctx.lr = 0x823CD8D8;
	sub_82404D68(ctx, base);
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

__attribute__((alias("__imp__sub_823CD8F0"))) PPC_WEAK_FUNC(sub_823CD8F0);
PPC_FUNC_IMPL(__imp__sub_823CD8F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x823CD8F8;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82629338
	ctx.lr = 0x823CD918;
	sub_82629338(ctx, base);
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,23844
	ctx.r6.s64 = ctx.r11.s64 + 23844;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,2352
	ctx.r5.s64 = ctx.r11.s64 + 2352;
	// bl 0x826df418
	ctx.lr = 0x823CD934;
	sub_826DF418(ctx, base);
	// addi r26,r31,48
	ctx.r26.s64 = ctx.r31.s64 + 48;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// addi r27,r31,32
	ctx.r27.s64 = ctx.r31.s64 + 32;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lvx128 v0,r0,r26
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r26.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v13,r0,r27
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x823cda74
	if (ctx.cr6.lt) goto loc_823CDA74;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x823cda10
	if (ctx.cr6.gt) goto loc_823CDA10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821677d0
	ctx.lr = 0x823CD984;
	sub_821677D0(ctx, base);
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,23792
	ctx.r6.s64 = ctx.r11.s64 + 23792;
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,9176
	ctx.r5.s64 = ctx.r11.s64 + 9176;
	// bl 0x826df418
	ctx.lr = 0x823CD9A0;
	sub_826DF418(ctx, base);
	// lwz r11,128(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lfs f2,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f13,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x823cd478
	ctx.lr = 0x823CD9DC;
	sub_823CD478(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r6,r10,-3044
	ctx.r6.s64 = ctx.r10.s64 + -3044;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r31,80
	ctx.r9.s64 = ctx.r31.s64 + 80;
	// addi r5,r10,-3660
	ctx.r5.s64 = ctx.r10.s64 + -3660;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r10,-3084
	ctx.r4.s64 = ctx.r10.s64 + -3084;
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82408ef0
	ctx.lr = 0x823CDA0C;
	sub_82408EF0(ctx, base);
	// b 0x823cda24
	goto loc_823CDA24;
loc_823CDA10:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,14096(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14096);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f30,f0,f13
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_823CDA24:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82392bb8
	ctx.lr = 0x823CDA2C;
	sub_82392BB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82393658
	ctx.lr = 0x823CDA38;
	sub_82393658(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82393060
	ctx.lr = 0x823CDA48;
	sub_82393060(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CDA60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,244(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cdd48
	if (ctx.cr6.eq) goto loc_823CDD48;
	// bl 0x821601b8
	ctx.lr = 0x823CDA70;
	sub_821601B8(ctx, base);
	// b 0x823cdd48
	goto loc_823CDD48;
loc_823CDA74:
	// addi r29,r31,80
	ctx.r29.s64 = ctx.r31.s64 + 80;
	// lfs f13,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fnmsubs f0,f0,f30,f13
	ctx.f0.f64 = double(float(-(ctx.f0.f64 * ctx.f30.f64 - ctx.f13.f64)));
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x825d2350
	ctx.lr = 0x823CDA98;
	sub_825D2350(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vaddfp v0,v0,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x823cd550
	ctx.lr = 0x823CDAC0;
	sub_823CD550(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lfs f0,-29804(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29804);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,2120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f30.f64 = double(temp.f32);
	// stfs f30,132(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,140(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x825d20b0
	ctx.lr = 0x823CDB0C;
	sub_825D20B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x825d1d08
	ctx.lr = 0x823CDB18;
	sub_825D1D08(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x823914a0
	ctx.lr = 0x823CDB24;
	sub_823914A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82447bb8
	ctx.lr = 0x823CDB30;
	sub_82447BB8(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cdb40
	if (ctx.cr6.eq) goto loc_823CDB40;
	// bl 0x82581e38
	ctx.lr = 0x823CDB40;
	sub_82581E38(ctx, base);
loc_823CDB40:
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82447b88
	ctx.lr = 0x823CDB4C;
	sub_82447B88(ctx, base);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r26
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r26.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x824473b0
	ctx.lr = 0x823CDB68;
	sub_824473B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cdd44
	if (ctx.cr6.eq) goto loc_823CDD44;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f30,188(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lfs f0,13952(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13952);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// bl 0x82399d38
	ctx.lr = 0x823CDB94;
	sub_82399D38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x825d3bb0
	ctx.lr = 0x823CDBA4;
	sub_825D3BB0(ctx, base);
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r26
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r26.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x823cd650
	ctx.lr = 0x823CDBBC;
	sub_823CD650(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r27
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82391448
	ctx.lr = 0x823CDBD4;
	sub_82391448(ctx, base);
	// lwz r11,224(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 224);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823cdcbc
	if (!ctx.cr6.eq) goto loc_823CDCBC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
	// bl 0x82209050
	ctx.lr = 0x823CDBF0;
	sub_82209050(ctx, base);
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,20832
	ctx.r6.s64 = ctx.r11.s64 + 20832;
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,9132
	ctx.r5.s64 = ctx.r11.s64 + 9132;
	// bl 0x826df418
	ctx.lr = 0x823CDC0C;
	sub_826DF418(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82399d38
	ctx.lr = 0x823CDC20;
	sub_82399D38(ctx, base);
	// lis r10,-32072
	ctx.r10.s64 = -2101870592;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-4608
	ctx.r10.s64 = ctx.r10.s64 + -4608;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82391468
	ctx.lr = 0x823CDC50;
	sub_82391468(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82629338
	ctx.lr = 0x823CDC5C;
	sub_82629338(ctx, base);
	// bl 0x82581090
	ctx.lr = 0x823CDC60;
	sub_82581090(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// addi r7,r31,68
	ctx.r7.s64 = ctx.r31.s64 + 68;
	// addi r6,r31,88
	ctx.r6.s64 = ctx.r31.s64 + 88;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822951b8
	ctx.lr = 0x823CDC7C;
	sub_822951B8(ctx, base);
	// lwz r3,276(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cdc8c
	if (ctx.cr6.eq) goto loc_823CDC8C;
	// bl 0x821601b8
	ctx.lr = 0x823CDC8C;
	sub_821601B8(ctx, base);
loc_823CDC8C:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cdc9c
	if (ctx.cr6.eq) goto loc_823CDC9C;
	// bl 0x82581e38
	ctx.lr = 0x823CDC9C;
	sub_82581E38(ctx, base);
loc_823CDC9C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82392980
	ctx.lr = 0x823CDCA4;
	sub_82392980(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x822834a8
	ctx.lr = 0x823CDCAC;
	sub_822834A8(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_823CDCBC:
	// bl 0x82390590
	ctx.lr = 0x823CDCC0;
	sub_82390590(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823906d0
	ctx.lr = 0x823CDCCC;
	sub_823906D0(ctx, base);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r11,-4576
	ctx.r5.s64 = ctx.r11.s64 + -4576;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823905f0
	ctx.lr = 0x823CDCE4;
	sub_823905F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82394d08
	ctx.lr = 0x823CDD00;
	sub_82394D08(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cdd14
	if (ctx.cr6.eq) goto loc_823CDD14;
	// bl 0x82581e38
	ctx.lr = 0x823CDD14;
	sub_82581E38(ctx, base);
loc_823CDD14:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823cdd2c
	if (!ctx.cr6.eq) goto loc_823CDD2C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82393c90
	ctx.lr = 0x823CDD2C;
	sub_82393C90(ctx, base);
loc_823CDD2C:
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x822834a8
	ctx.lr = 0x823CDD34;
	sub_822834A8(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_823CDD44:
	// bl 0x822834a8
	ctx.lr = 0x823CDD48;
	sub_822834A8(ctx, base);
loc_823CDD48:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r5,r31,64
	ctx.r5.s64 = ctx.r31.s64 + 64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r26
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r26.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d1d68
	ctx.lr = 0x823CDD64;
	sub_825D1D68(ctx, base);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r27
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82391448
	ctx.lr = 0x823CDD7C;
	sub_82391448(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CDD90"))) PPC_WEAK_FUNC(sub_823CDD90);
PPC_FUNC_IMPL(__imp__sub_823CDD90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-1052
	ctx.r3.s64 = ctx.r11.s64 + -1052;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CDDA0"))) PPC_WEAK_FUNC(sub_823CDDA0);
PPC_FUNC_IMPL(__imp__sub_823CDDA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f2,8(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// addi r11,r11,-1024
	ctx.r11.s64 = ctx.r11.s64 + -1024;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// stw r10,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CDDC8"))) PPC_WEAK_FUNC(sub_823CDDC8);
PPC_FUNC_IMPL(__imp__sub_823CDDC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x823CDDD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r31,r29,88
	ctx.r31.s64 = ctx.r29.s64 + 88;
loc_823CDDE0:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cddf4
	if (ctx.cr6.eq) goto loc_823CDDF4;
	// bl 0x82631328
	ctx.lr = 0x823CDDF4;
	sub_82631328(ctx, base);
loc_823CDDF4:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x823cdde0
	if (!ctx.cr6.lt) goto loc_823CDDE0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,-14980
	ctx.r11.s64 = ctx.r11.s64 + -14980;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CDE18"))) PPC_WEAK_FUNC(sub_823CDE18);
PPC_FUNC_IMPL(__imp__sub_823CDE18) {
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
	// bl 0x823cddc8
	ctx.lr = 0x823CDE38;
	sub_823CDDC8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cde50
	if (ctx.cr6.eq) goto loc_823CDE50;
	// bl 0x82186190
	ctx.lr = 0x823CDE4C;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823CDE50:
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

__attribute__((alias("__imp__sub_823CDE68"))) PPC_WEAK_FUNC(sub_823CDE68);
PPC_FUNC_IMPL(__imp__sub_823CDE68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x823CDE70;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82629338
	ctx.lr = 0x823CDE8C;
	sub_82629338(ctx, base);
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,23844
	ctx.r6.s64 = ctx.r11.s64 + 23844;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,2352
	ctx.r5.s64 = ctx.r11.s64 + 2352;
	// bl 0x826df418
	ctx.lr = 0x823CDEA8;
	sub_826DF418(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821677d0
	ctx.lr = 0x823CDEB4;
	sub_821677D0(ctx, base);
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,23792
	ctx.r6.s64 = ctx.r11.s64 + 23792;
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,9176
	ctx.r5.s64 = ctx.r11.s64 + 9176;
	// bl 0x826df418
	ctx.lr = 0x823CDED0;
	sub_826DF418(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82390580
	ctx.lr = 0x823CDED8;
	sub_82390580(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821677d0
	ctx.lr = 0x823CDEE0;
	sub_821677D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6448(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6448);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8239c420
	ctx.lr = 0x823CDEEC;
	sub_8239C420(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821677d0
	ctx.lr = 0x823CDEF4;
	sub_821677D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,-14536
	ctx.r4.s64 = ctx.r11.s64 + -14536;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8239a598
	ctx.lr = 0x823CDF10;
	sub_8239A598(ctx, base);
	// lwz r11,128(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r29,r30,32
	ctx.r29.s64 = ctx.r30.s64 + 32;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,14088(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f30.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f30,140(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stvx v0,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,2188(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2188);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// bl 0x825d3bb0
	ctx.lr = 0x823CDF68;
	sub_825D3BB0(ctx, base);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stfs f30,124(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r11,r11,-4608
	ctx.r11.s64 = ctx.r11.s64 + -4608;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-9776(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9776);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x825d3bb0
	ctx.lr = 0x823CDFB4;
	sub_825D3BB0(ctx, base);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r30,64
	ctx.r10.s64 = ctx.r30.s64 + 64;
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82391448
	ctx.lr = 0x823CDFF4;
	sub_82391448(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823900e0
	ctx.lr = 0x823CDFFC;
	sub_823900E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823ce0f0
	if (ctx.cr6.eq) goto loc_823CE0F0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x825d2cb0
	ctx.lr = 0x823CE014;
	sub_825D2CB0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r5,r11,-988
	ctx.r5.s64 = ctx.r11.s64 + -988;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r27,r11,-3660
	ctx.r27.s64 = ctx.r11.s64 + -3660;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x825fe210
	ctx.lr = 0x823CE034;
	sub_825FE210(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x825fe5b0
	ctx.lr = 0x823CE048;
	sub_825FE5B0(ctx, base);
	// lwz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823ce05c
	if (ctx.cr6.eq) goto loc_823CE05C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82659610
	ctx.lr = 0x823CE05C;
	sub_82659610(ctx, base);
loc_823CE05C:
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// stw r28,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ce070
	if (ctx.cr6.eq) goto loc_823CE070;
	// bl 0x82631328
	ctx.lr = 0x823CE070;
	sub_82631328(ctx, base);
loc_823CE070:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ce080
	if (ctx.cr6.eq) goto loc_823CE080;
	// bl 0x82631328
	ctx.lr = 0x823CE080;
	sub_82631328(ctx, base);
loc_823CE080:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x825d2cb0
	ctx.lr = 0x823CE08C;
	sub_825D2CB0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r5,r11,-1000
	ctx.r5.s64 = ctx.r11.s64 + -1000;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825fe210
	ctx.lr = 0x823CE0A4;
	sub_825FE210(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825fe5b0
	ctx.lr = 0x823CE0B8;
	sub_825FE5B0(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823ce0cc
	if (ctx.cr6.eq) goto loc_823CE0CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x823CE0CC;
	sub_82659610(ctx, base);
loc_823CE0CC:
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// stw r31,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ce0e0
	if (ctx.cr6.eq) goto loc_823CE0E0;
	// bl 0x82631328
	ctx.lr = 0x823CE0E0;
	sub_82631328(ctx, base);
loc_823CE0E0:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ce0f0
	if (ctx.cr6.eq) goto loc_823CE0F0;
	// bl 0x82631328
	ctx.lr = 0x823CE0F0;
	sub_82631328(ctx, base);
loc_823CE0F0:
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stb r11,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r11.u8);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CE110"))) PPC_WEAK_FUNC(sub_823CE110);
PPC_FUNC_IMPL(__imp__sub_823CE110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x823CE118;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821677d0
	ctx.lr = 0x823CE12C;
	sub_821677D0(ctx, base);
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,23792
	ctx.r6.s64 = ctx.r11.s64 + 23792;
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,9176
	ctx.r5.s64 = ctx.r11.s64 + 9176;
	// bl 0x826df418
	ctx.lr = 0x823CE148;
	sub_826DF418(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-3084
	ctx.r4.s64 = ctx.r11.s64 + -3084;
	// bl 0x82409068
	ctx.lr = 0x823CE154;
	sub_82409068(ctx, base);
	// addi r31,r31,80
	ctx.r31.s64 = ctx.r31.s64 + 80;
	// li r30,2
	ctx.r30.s64 = 2;
	// li r28,0
	ctx.r28.s64 = 0;
loc_823CE160:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ce174
	if (ctx.cr6.eq) goto loc_823CE174;
	// bl 0x82631328
	ctx.lr = 0x823CE174;
	sub_82631328(ctx, base);
loc_823CE174:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x823ce160
	if (!ctx.cr6.eq) goto loc_823CE160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82390590
	ctx.lr = 0x823CE18C;
	sub_82390590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CE198"))) PPC_WEAK_FUNC(sub_823CE198);
PPC_FUNC_IMPL(__imp__sub_823CE198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x823CE1A0;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// li r12,-80
	ctx.r12.s64 = -80;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f0,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x823ce234
	if (ctx.cr6.lt) goto loc_823CE234;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f0,12(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x823ce37c
	if (ctx.cr6.gt) goto loc_823CE37C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821677d0
	ctx.lr = 0x823CE1E8;
	sub_821677D0(ctx, base);
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,23792
	ctx.r6.s64 = ctx.r11.s64 + 23792;
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,9176
	ctx.r5.s64 = ctx.r11.s64 + 9176;
	// bl 0x826df418
	ctx.lr = 0x823CE204;
	sub_826DF418(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82408550
	ctx.lr = 0x823CE210;
	sub_82408550(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r11,-3044
	ctx.r6.s64 = ctx.r11.s64 + -3044;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-3660
	ctx.r5.s64 = ctx.r11.s64 + -3660;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-3084
	ctx.r4.s64 = ctx.r11.s64 + -3084;
	// bl 0x82408ef0
	ctx.lr = 0x823CE230;
	sub_82408EF0(ctx, base);
	// b 0x823ce37c
	goto loc_823CE37C;
loc_823CE234:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822210f8
	ctx.lr = 0x823CE23C;
	sub_822210F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r29,64
	ctx.r4.s64 = ctx.r29.s64 + 64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r27,r11,16
	ctx.r27.s64 = ctx.r11.s64 + 16;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lvx128 v127,r0,r27
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v127,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d2350
	ctx.lr = 0x823CE260;
	sub_825D2350(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lfs f13,52(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// vaddfp128 v127,v127,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v127.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v127.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v127,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x823ce2ac
	if (!ctx.cr6.lt) goto loc_823CE2AC;
	// addi r11,r29,48
	ctx.r11.s64 = ctx.r29.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r27
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82392980
	ctx.lr = 0x823CE298;
	sub_82392980(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// li r0,-80
	ctx.r0.s64 = -80;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_823CE2AC:
	// lbz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ce378
	if (!ctx.cr6.eq) goto loc_823CE378;
	// lfs f13,36(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x823ce378
	if (ctx.cr6.gt) goto loc_823CE378;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82209050
	ctx.lr = 0x823CE2CC;
	sub_82209050(ctx, base);
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,20832
	ctx.r6.s64 = ctx.r11.s64 + 20832;
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,9132
	ctx.r5.s64 = ctx.r11.s64 + 9132;
	// bl 0x826df418
	ctx.lr = 0x823CE2E8;
	sub_826DF418(ctx, base);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r10,r29,32
	ctx.r10.s64 = ctx.r29.s64 + 32;
	// addi r11,r11,-4608
	ctx.r11.s64 = ctx.r11.s64 + -4608;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,0
	ctx.r11.s64 = 0;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82391468
	ctx.lr = 0x823CE324;
	sub_82391468(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82629338
	ctx.lr = 0x823CE330;
	sub_82629338(ctx, base);
	// bl 0x82581090
	ctx.lr = 0x823CE334;
	sub_82581090(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r30,68
	ctx.r7.s64 = ctx.r30.s64 + 68;
	// addi r6,r30,88
	ctx.r6.s64 = ctx.r30.s64 + 88;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822951b8
	ctx.lr = 0x823CE350;
	sub_822951B8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ce360
	if (ctx.cr6.eq) goto loc_823CE360;
	// bl 0x821601b8
	ctx.lr = 0x823CE360;
	sub_821601B8(ctx, base);
loc_823CE360:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ce370
	if (ctx.cr6.eq) goto loc_823CE370;
	// bl 0x82581e38
	ctx.lr = 0x823CE370;
	sub_82581E38(ctx, base);
loc_823CE370:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,16(r29)
	PPC_STORE_U8(ctx.r29.u32 + 16, ctx.r11.u8);
loc_823CE378:
	// stvx128 v127,r0,r27
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_823CE37C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82392bb8
	ctx.lr = 0x823CE384;
	sub_82392BB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82393658
	ctx.lr = 0x823CE390;
	sub_82393658(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82393060
	ctx.lr = 0x823CE3A0;
	sub_82393060(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CE3B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ce3c8
	if (ctx.cr6.eq) goto loc_823CE3C8;
	// bl 0x821601b8
	ctx.lr = 0x823CE3C8;
	sub_821601B8(ctx, base);
loc_823CE3C8:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// li r0,-80
	ctx.r0.s64 = -80;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CE3E0"))) PPC_WEAK_FUNC(sub_823CE3E0);
PPC_FUNC_IMPL(__imp__sub_823CE3E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-976
	ctx.r3.s64 = ctx.r11.s64 + -976;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CE3F0"))) PPC_WEAK_FUNC(sub_823CE3F0);
PPC_FUNC_IMPL(__imp__sub_823CE3F0) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// ori r10,r10,32859
	ctx.r10.u64 = ctx.r10.u64 | 32859;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x821677d0
	ctx.lr = 0x823CE43C;
	sub_821677D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CE450;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CE460"))) PPC_WEAK_FUNC(sub_823CE460);
PPC_FUNC_IMPL(__imp__sub_823CE460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f2,8(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// addi r11,r11,-944
	ctx.r11.s64 = ctx.r11.s64 + -944;
	// stfs f3,12(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f4,16(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f5,20(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CE488"))) PPC_WEAK_FUNC(sub_823CE488);
PPC_FUNC_IMPL(__imp__sub_823CE488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-920
	ctx.r3.s64 = ctx.r11.s64 + -920;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CE498"))) PPC_WEAK_FUNC(sub_823CE498);
PPC_FUNC_IMPL(__imp__sub_823CE498) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// ori r9,r9,32860
	ctx.r9.u64 = ctx.r9.u64 | 32860;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x823ce4ec
	if (ctx.cr6.lt) goto loc_823CE4EC;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x823ce4f0
	goto loc_823CE4F0;
loc_823CE4EC:
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
loc_823CE4F0:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x821677d0
	ctx.lr = 0x823CE4FC;
	sub_821677D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CE510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CE520"))) PPC_WEAK_FUNC(sub_823CE520);
PPC_FUNC_IMPL(__imp__sub_823CE520) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r10,-888
	ctx.r10.s64 = ctx.r10.s64 + -888;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,15
	ctx.r7.s64 = 15;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stfs f2,8(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f3,12(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stfs f4,16(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// stw r7,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r7.u32);
	// stb r8,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r8.u8);
loc_823CE570:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823ce570
	if (!ctx.cr6.eq) goto loc_823CE570;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x823CE594;
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

__attribute__((alias("__imp__sub_823CE5B0"))) PPC_WEAK_FUNC(sub_823CE5B0);
PPC_FUNC_IMPL(__imp__sub_823CE5B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b4
	ctx.lr = 0x823CE5B8;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826dfb84
	ctx.lr = 0x823CE5C0;
	__savefpr_27(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// bl 0x82597c60
	ctx.lr = 0x823CE5E8;
	sub_82597C60(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r10,r10,-772
	ctx.r10.s64 = ctx.r10.s64 + -772;
	// lfs f28,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f28.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,-820
	ctx.r11.s64 = ctx.r11.s64 + -820;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r24,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r24.u32);
	// stw r24,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r24.u32);
	// stfs f28,124(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// beq cr6,0x823ce62c
	if (ctx.cr6.eq) goto loc_823CE62C;
	// bl 0x82659610
	ctx.lr = 0x823CE62C;
	sub_82659610(ctx, base);
loc_823CE62C:
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r28,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r28.u32);
	// stw r24,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r24.u32);
	// stw r24,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r24.u32);
	// stw r24,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r24.u32);
	// stw r24,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r24.u32);
	// stw r24,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r24.u32);
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r3.u32);
	// beq cr6,0x823ce65c
	if (ctx.cr6.eq) goto loc_823CE65C;
	// bl 0x82659610
	ctx.lr = 0x823CE65C;
	sub_82659610(ctx, base);
loc_823CE65C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r28,404(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r24,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r24.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,-9944(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9944);
	ctx.f0.f64 = double(temp.f32);
	// li r11,40
	ctx.r11.s64 = 40;
	// stfs f0,252(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// bl 0x82620360
	ctx.lr = 0x823CE688;
	sub_82620360(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823ce69c
	if (ctx.cr6.eq) goto loc_823CE69C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x823CE69C;
	sub_82659610(ctx, base);
loc_823CE69C:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ce6b0
	if (ctx.cr6.eq) goto loc_823CE6B0;
	// bl 0x82581e38
	ctx.lr = 0x823CE6B0;
	sub_82581E38(ctx, base);
loc_823CE6B0:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ce6c0
	if (ctx.cr6.eq) goto loc_823CE6C0;
	// bl 0x82581e38
	ctx.lr = 0x823CE6C0;
	sub_82581E38(ctx, base);
loc_823CE6C0:
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x823ce728
	if (!ctx.cr6.gt) goto loc_823CE728;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// subf r7,r29,r27
	ctx.r7.s64 = ctx.r27.s64 - ctx.r29.s64;
	// subf r6,r29,r26
	ctx.r6.s64 = ctx.r26.s64 - ctx.r29.s64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
loc_823CE6E0:
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lvx128 v0,r7,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lvx128 v12,r6,r11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// addi r5,r10,16
	ctx.r5.s64 = ctx.r10.s64 + 16;
	// addi r4,r10,32
	ctx.r4.s64 = ctx.r10.s64 + 32;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// stvx v0,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v13,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v12,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne cr6,0x823ce6e0
	if (!ctx.cr6.eq) goto loc_823CE6E0;
loc_823CE728:
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// lis r10,1023
	ctx.r10.s64 = 67043328;
	// li r26,-1
	ctx.r26.s64 = -1;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// lwz r11,24080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24080);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// rlwinm r3,r11,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// ble cr6,0x823ce750
	if (!ctx.cr6.gt) goto loc_823CE750;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_823CE750:
	// bl 0x82186158
	ctx.lr = 0x823CE754;
	sub_82186158(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// bl 0x82186190
	ctx.lr = 0x823CE764;
	sub_82186190(ctx, base);
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// lvx128 v0,r0,r27
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r8,r11,-16
	ctx.r8.s64 = ctx.r11.s64 + -16;
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,120(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm r11,r9,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x823ce828
	if (!ctx.cr6.gt) goto loc_823CE828;
	// li r29,64
	ctx.r29.s64 = 64;
loc_823CE7AC:
	// extsw r10,r30
	ctx.r10.s64 = ctx.r30.s32;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f13,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// bl 0x82620228
	ctx.lr = 0x823CE7E8;
	sub_82620228(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823ce7ac
	if (ctx.cr6.lt) goto loc_823CE7AC;
loc_823CE828:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f27,14088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f27.f64 = double(temp.f32);
	// ble cr6,0x823ce8f0
	if (!ctx.cr6.gt) goto loc_823CE8F0;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_823CE844:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stfs f28,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stfs f27,148(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f28,152(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r4,r5,16
	ctx.r4.s64 = ctx.r5.s64 + 16;
	// stfs f27,156(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x825d3bc8
	ctx.lr = 0x823CE868;
	sub_825D3BC8(ctx, base);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// stfs f28,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stfs f28,164(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f27,168(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f27,172(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bl 0x825c5560
	ctx.lr = 0x823CE88C;
	sub_825C5560(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// extsw r10,r29
	ctx.r10.s64 = ctx.r29.s32;
	// lvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823ce844
	if (ctx.cr6.lt) goto loc_823CE844;
loc_823CE8F0:
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r5,r11,-836
	ctx.r5.s64 = ctx.r11.s64 + -836;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CE910;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823ce924
	if (ctx.cr6.eq) goto loc_823CE924;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x823CE924;
	sub_82659610(ctx, base);
loc_823CE924:
	// lwz r3,244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// stw r30,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ce938
	if (ctx.cr6.eq) goto loc_823CE938;
	// bl 0x82581e38
	ctx.lr = 0x823CE938;
	sub_82581E38(ctx, base);
loc_823CE938:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ce948
	if (ctx.cr6.eq) goto loc_823CE948;
	// bl 0x82581e38
	ctx.lr = 0x823CE948;
	sub_82581E38(ctx, base);
loc_823CE948:
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// ori r30,r10,65535
	ctx.r30.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x823ce964
	if (!ctx.cr6.gt) goto loc_823CE964;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_823CE964:
	// bl 0x82186158
	ctx.lr = 0x823CE968;
	sub_82186158(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// bl 0x82186190
	ctx.lr = 0x823CE978;
	sub_82186190(ctx, base);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x823ce98c
	if (!ctx.cr6.gt) goto loc_823CE98C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_823CE98C:
	// bl 0x82186158
	ctx.lr = 0x823CE990;
	sub_82186158(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// bl 0x82186190
	ctx.lr = 0x823CE9A0;
	sub_82186190(ctx, base);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x823ce9b4
	if (!ctx.cr6.gt) goto loc_823CE9B4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_823CE9B4:
	// bl 0x82186158
	ctx.lr = 0x823CE9B8;
	sub_82186158(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// bl 0x82186190
	ctx.lr = 0x823CE9C8;
	sub_82186190(ctx, base);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x823ce9dc
	if (!ctx.cr6.gt) goto loc_823CE9DC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_823CE9DC:
	// bl 0x82186158
	ctx.lr = 0x823CE9E0;
	sub_82186158(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// bl 0x82186190
	ctx.lr = 0x823CE9F0;
	sub_82186190(ctx, base);
	// lis r10,1092
	ctx.r10.s64 = 71565312;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// ori r9,r10,17476
	ctx.r9.u64 = ctx.r10.u64 | 17476;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// mulli r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 * 60;
	// ble cr6,0x823cea2c
	if (!ctx.cr6.gt) goto loc_823CEA2C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_823CEA2C:
	// bl 0x82186158
	ctx.lr = 0x823CEA30;
	sub_82186158(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823cea6c
	if (ctx.cr6.eq) goto loc_823CEA6C;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x823cea64
	if (ctx.cr6.lt) goto loc_823CEA64;
loc_823CEA4C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259a550
	ctx.lr = 0x823CEA54;
	sub_8259A550(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,60
	ctx.r29.s64 = ctx.r29.s64 + 60;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x823cea4c
	if (!ctx.cr6.lt) goto loc_823CEA4C;
loc_823CEA64:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x823cea70
	goto loc_823CEA70;
loc_823CEA6C:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_823CEA70:
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// bl 0x82186190
	ctx.lr = 0x823CEA7C;
	sub_82186190(ctx, base);
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x823d6390
	ctx.lr = 0x823CEA84;
	sub_823D6390(ctx, base);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823ceb58
	if (!ctx.cr6.gt) goto loc_823CEB58;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lis r28,-32251
	ctx.r28.s64 = -2113601536;
	// lfs f30,5024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5024);
	ctx.f30.f64 = double(temp.f32);
loc_823CEAA8:
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// lfs f0,-29804(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -29804);
	ctx.f0.f64 = double(temp.f32);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// frsp f31,f13
	ctx.f31.f64 = double(float(ctx.f13.f64));
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x826e0590
	ctx.lr = 0x823CEAE8;
	sub_826E0590(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// stfsx f0,r11,r30
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, temp.u32);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lfs f0,-29804(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -29804);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x826e0668
	ctx.lr = 0x823CEB24;
	sub_826E0668(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// stfs f28,8(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823ceaa8
	if (ctx.cr6.lt) goto loc_823CEAA8;
loc_823CEB58:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f28,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stfs f27,96(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r8,r31,208
	ctx.r8.s64 = ctx.r31.s64 + 208;
	// stfs f27,100(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f27,104(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r10,r31,224
	ctx.r10.s64 = ctx.r31.s64 + 224;
	// stfs f27,108(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f0,3548(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3548);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,5524(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5524);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stvx v0,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cec34
	if (ctx.cr6.eq) goto loc_823CEC34;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cec34
	if (ctx.cr6.eq) goto loc_823CEC34;
	// bl 0x82598918
	ctx.lr = 0x823CEBE0;
	sub_82598918(ctx, base);
	// fcmpu cr6,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// ble cr6,0x823cec00
	if (!ctx.cr6.gt) goto loc_823CEC00;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5144);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r12,248
	ctx.r12.s64 = 248;
	// stfiwx f0,r31,r12
	PPC_STORE_U32(ctx.r31.u32 + ctx.r12.u32, ctx.f0.u32);
loc_823CEC00:
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x823d63a0
	ctx.lr = 0x823CEC08;
	sub_823D63A0(ctx, base);
	// fcmpu cr6,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ble cr6,0x823cec38
	if (!ctx.cr6.gt) goto loc_823CEC38;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-840(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -840);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,252(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826dfbd0
	ctx.lr = 0x823CEC30;
	__restfpr_27(ctx, base);
	// b 0x826de904
	__restgprlr_23(ctx, base);
	return;
loc_823CEC34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823CEC38:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826dfbd0
	ctx.lr = 0x823CEC44;
	__restfpr_27(ctx, base);
	// b 0x826de904
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CEC48"))) PPC_WEAK_FUNC(sub_823CEC48);
PPC_FUNC_IMPL(__imp__sub_823CEC48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823cefc8
	sub_823CEFC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CEC50"))) PPC_WEAK_FUNC(sub_823CEC50);
PPC_FUNC_IMPL(__imp__sub_823CEC50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-864
	ctx.r3.s64 = ctx.r11.s64 + -864;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CEC60"))) PPC_WEAK_FUNC(sub_823CEC60);
PPC_FUNC_IMPL(__imp__sub_823CEC60) {
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
	// lwz r3,244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cec84
	if (ctx.cr6.eq) goto loc_823CEC84;
	// bl 0x82581e38
	ctx.lr = 0x823CEC84;
	sub_82581E38(ctx, base);
loc_823CEC84:
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cec94
	if (ctx.cr6.eq) goto loc_823CEC94;
	// bl 0x82581e38
	ctx.lr = 0x823CEC94;
	sub_82581E38(ctx, base);
loc_823CEC94:
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// bl 0x82186190
	ctx.lr = 0x823CEC9C;
	sub_82186190(ctx, base);
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// bl 0x82186190
	ctx.lr = 0x823CECA4;
	sub_82186190(ctx, base);
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// bl 0x82186190
	ctx.lr = 0x823CECAC;
	sub_82186190(ctx, base);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// bl 0x82186190
	ctx.lr = 0x823CECB4;
	sub_82186190(ctx, base);
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// bl 0x82186190
	ctx.lr = 0x823CECBC;
	sub_82186190(ctx, base);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ceccc
	if (ctx.cr6.eq) goto loc_823CECCC;
	// bl 0x82581e38
	ctx.lr = 0x823CECCC;
	sub_82581E38(ctx, base);
loc_823CECCC:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cecdc
	if (ctx.cr6.eq) goto loc_823CECDC;
	// bl 0x82581e38
	ctx.lr = 0x823CECDC;
	sub_82581E38(ctx, base);
loc_823CECDC:
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82186190
	ctx.lr = 0x823CECE4;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82597cf8
	ctx.lr = 0x823CECEC;
	sub_82597CF8(ctx, base);
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

__attribute__((alias("__imp__sub_823CED00"))) PPC_WEAK_FUNC(sub_823CED00);
PPC_FUNC_IMPL(__imp__sub_823CED00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x823CED08;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cee74
	if (ctx.cr6.eq) goto loc_823CEE74;
	// lwz r10,248(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823ced30
	if (ctx.cr6.lt) goto loc_823CED30;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823CED30:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ced54
	if (ctx.cr6.eq) goto loc_823CED54;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// bl 0x82186190
	ctx.lr = 0x823CED4C;
	sub_82186190(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_823CED54:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x8259b040
	ctx.lr = 0x823CED64;
	sub_8259B040(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x8259b088
	ctx.lr = 0x823CED74;
	sub_8259B088(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x8259afe0
	ctx.lr = 0x823CED84;
	sub_8259AFE0(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x8259afc0
	ctx.lr = 0x823CED9C;
	sub_8259AFC0(ctx, base);
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r4,r11,-18576
	ctx.r4.s64 = ctx.r11.s64 + -18576;
	// lwz r3,44(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// bl 0x8259aec8
	ctx.lr = 0x823CEDB0;
	sub_8259AEC8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259d7d0
	ctx.lr = 0x823CEDB8;
	sub_8259D7D0(ctx, base);
	// addi r10,r31,224
	ctx.r10.s64 = ctx.r31.s64 + 224;
	// lfs f0,208(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lfs f0,212(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r30,136(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lfs f0,216(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r28,8(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lfs f0,220(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// li r5,68
	ctx.r5.s64 = 68;
	// lwz r27,4(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// stw r29,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r29.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r28,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r28.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// stw r27,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r27.u32);
	// stw r6,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r6.u32);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// bl 0x826df680
	ctx.lr = 0x823CEE3C;
	sub_826DF680(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x8259a7f0
	ctx.lr = 0x823CEE50;
	sub_8259A7F0(ctx, base);
	// li r5,15
	ctx.r5.s64 = 15;
	// lwz r8,240(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r7,192(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lwz r6,196(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x8259a5e0
	ctx.lr = 0x823CEE6C;
	sub_8259A5E0(ctx, base);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x8259a608
	ctx.lr = 0x823CEE74;
	sub_8259A608(ctx, base);
loc_823CEE74:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CEE80"))) PPC_WEAK_FUNC(sub_823CEE80);
PPC_FUNC_IMPL(__imp__sub_823CEE80) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,112(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v12,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// ble cr6,0x823ceebc
	if (!ctx.cr6.gt) goto loc_823CEEBC;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_823CEEA0:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// vminfp v13,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// vmaxfp v12,v12,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)));
	// bne cr6,0x823ceea0
	if (!ctx.cr6.eq) goto loc_823CEEA0;
loc_823CEEBC:
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// stvx v13,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1
	ctx.r3.s64 = 1;
	// stvx v12,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CEED0"))) PPC_WEAK_FUNC(sub_823CEED0);
PPC_FUNC_IMPL(__imp__sub_823CEED0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r10,120(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ble cr6,0x823cef4c
	if (!ctx.cr6.gt) goto loc_823CEF4C;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_823CEF1C:
	// lvx128 v12,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// vminfp v0,v0,v12
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lvx128 v12,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// vmaxfp v13,v13,v12
	simde_mm_store_ps(ctx.v13.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)));
	// stvx v13,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne cr6,0x823cef1c
	if (!ctx.cr6.eq) goto loc_823CEF1C;
loc_823CEF4C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825d3bc8
	ctx.lr = 0x823CEF5C;
	sub_825D3BC8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825d2200
	ctx.lr = 0x823CEF64;
	sub_825D2200(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825d3bb0
	ctx.lr = 0x823CEF78;
	sub_825D3BB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f31,3548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825d2350
	ctx.lr = 0x823CEF90;
	sub_825D2350(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// fmuls f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f31.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_823CEFC8"))) PPC_WEAK_FUNC(sub_823CEFC8);
PPC_FUNC_IMPL(__imp__sub_823CEFC8) {
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
	// bl 0x823cec60
	ctx.lr = 0x823CEFE8;
	sub_823CEC60(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cf000
	if (ctx.cr6.eq) goto loc_823CF000;
	// bl 0x82186190
	ctx.lr = 0x823CEFFC;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823CF000:
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

__attribute__((alias("__imp__sub_823CF018"))) PPC_WEAK_FUNC(sub_823CF018);
PPC_FUNC_IMPL(__imp__sub_823CF018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8ac
	ctx.lr = 0x823CF020;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x826dfb84
	ctx.lr = 0x823CF028;
	__savefpr_27(ctx, base);
	// li r12,-160
	ctx.r12.s64 = -160;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// stfs f29,588(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 588, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,120(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// stw r31,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r31.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823cf07c
	if (!ctx.cr6.gt) goto loc_823CF07C;
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
loc_823CF05C:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// ble cr6,0x823cf080
	if (!ctx.cr6.gt) goto loc_823CF080;
	// lwz r8,120(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823cf05c
	if (ctx.cr6.lt) goto loc_823CF05C;
loc_823CF07C:
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
loc_823CF080:
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// ble cr6,0x823cfb2c
	if (!ctx.cr6.gt) goto loc_823CFB2C;
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r10,248(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// subf. r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// blt 0x823cf0ac
	if (ctx.cr0.lt) goto loc_823CF0AC;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
loc_823CF0AC:
	// rlwinm r10,r11,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r9,r31,144
	ctx.r9.s64 = ctx.r31.s64 + 144;
	// addi r8,r31,160
	ctx.r8.s64 = ctx.r31.s64 + 160;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// lvx128 v0,r10,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bgt cr6,0x823cfb28
	if (ctx.cr6.gt) goto loc_823CFB28;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r21,-32076
	ctx.r21.s64 = -2102132736;
	// li r30,-1
	ctx.r30.s64 = -1;
	// lfs f30,14088(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14088);
	ctx.f30.f64 = double(temp.f32);
	// lfs f28,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,3548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f27.f64 = double(temp.f32);
loc_823CF110:
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm r11,r24,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 6) & 0xFFFFFFC0;
	// cmpw cr6,r24,r23
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r23.s32, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne cr6,0x823cf12c
	if (!ctx.cr6.eq) goto loc_823CF12C;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// b 0x823cf140
	goto loc_823CF140;
loc_823CF12C:
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f27.f64;
	// addi r5,r11,96
	ctx.r5.s64 = ctx.r11.s64 + 96;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x825d2160
	ctx.lr = 0x823CF140;
	sub_825D2160(ctx, base);
loc_823CF140:
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// ble cr6,0x823cf284
	if (!ctx.cr6.gt) goto loc_823CF284;
	// vspltisw v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x0)));
	// vupkd3d128 v0,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// vspltw128 v127,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v127.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x0));
loc_823CF16C:
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x825d2bc0
	ctx.lr = 0x823CF184;
	sub_825D2BC0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823CF194:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x823cf194
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CF194;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// lvx128 v0,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v13,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// vor128 v11,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// vspltw v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vor128 v10,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// lwz r31,580(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// lwz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lvx128 v9,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// rlwinm r29,r28,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lvx128 v8,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// vmaddfp v13,v8,v13,v9
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// lvx128 v7,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// lvx128 v6,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// vmaddfp v13,v12,v7,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v9,v0,v6,v13
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vspltw v12,v9,3
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0x0));
	// vrefp v13,v12
	simde_mm_store_ps(ctx.v13.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v12.f32)));
	// vnmsubfp v11,v12,v13,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v11.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v13,v11,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v10,v12,v0,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v10.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v12,v0,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v0,v10,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v12,v13,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vmulfp128 v0,v9,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v12.f32)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d2260
	ctx.lr = 0x823CF250;
	sub_825D2260(ctx, base);
	// lwz r10,188(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// lvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r10,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823cf16c
	if (ctx.cr6.lt) goto loc_823CF16C;
	// lfs f29,588(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	ctx.f29.f64 = double(temp.f32);
	// lwz r23,112(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r22,92(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r24,84(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_823CF284:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823cf384
	if (!ctx.cr6.gt) goto loc_823CF384;
	// rlwinm r27,r24,6,0,25
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 6) & 0xFFFFFFC0;
	// li r26,0
	ctx.r26.s64 = 0;
loc_823CF29C:
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmpw cr6,r24,r23
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r23.s32, ctx.xer);
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lvx128 v0,r27,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r27.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp v0,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne cr6,0x823cf34c
	if (!ctx.cr6.eq) goto loc_823CF34C;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x823cf2d8
	if (ctx.cr6.eq) goto loc_823CF2D8;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lfs f31,-16(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	ctx.f31.f64 = double(temp.f32);
	// b 0x823cf2dc
	goto loc_823CF2DC;
loc_823CF2D8:
	// fmr f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f28.f64;
loc_823CF2DC:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// add r28,r27,r11
	ctx.r28.u64 = ctx.r27.u64 + ctx.r11.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r28,16
	ctx.r4.s64 = ctx.r28.s64 + 16;
	// bl 0x825d3bc8
	ctx.lr = 0x823CF2F4;
	sub_825D3BC8(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// fsubs f1,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f29.f64 - ctx.f31.f64));
	// bl 0x825d2350
	ctx.lr = 0x823CF304;
	sub_825D2350(ctx, base);
	// lfs f0,48(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// fdivs f1,f30,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 / ctx.f0.f64));
	// bl 0x825d2350
	ctx.lr = 0x823CF31C;
	sub_825D2350(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// add r4,r27,r11
	ctx.r4.u64 = ctx.r27.u64 + ctx.r11.u64;
	// bl 0x825d3bb0
	ctx.lr = 0x823CF330;
	sub_825D3BB0(ctx, base);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp v0,v0,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// b 0x823cf36c
	goto loc_823CF36C;
loc_823CF34C:
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// add r10,r27,r10
	ctx.r10.u64 = ctx.r27.u64 + ctx.r10.u64;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp v0,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
loc_823CF36C:
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823cf29c
	if (ctx.cr6.lt) goto loc_823CF29C;
loc_823CF384:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823cf620
	if (!ctx.cr6.gt) goto loc_823CF620;
	// lwz r11,24084(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24084);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// clrlwi r27,r11,31
	ctx.r27.u64 = ctx.r11.u32 & 0x1;
	// mulli r11,r29,60
	ctx.r11.s64 = ctx.r29.s64 * 60;
loc_823CF3A4:
	// lwz r8,140(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823cf3b8
	if (ctx.cr6.lt) goto loc_823CF3B8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_823CF3B8:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x823cf604
	if (ctx.cr6.eq) goto loc_823CF604;
	// lwz r7,180(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r6,196(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// addi r8,r11,180
	ctx.r8.s64 = ctx.r11.s64 + 180;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r5,r8,-60
	ctx.r5.s64 = ctx.r8.s64 + -60;
	// addi r4,r8,60
	ctx.r4.s64 = ctx.r8.s64 + 60;
	// addi r3,r8,120
	ctx.r3.s64 = ctx.r8.s64 + 120;
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r29,6
	ctx.r29.s64 = ctx.r29.s64 + 6;
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lwz r6,184(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lwz r7,196(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lfs f0,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 60, temp.u32);
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 64, temp.u32);
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 68, temp.u32);
	// lwz r7,184(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lwz r6,196(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lfs f0,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lwz r7,180(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r6,196(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lfs f0,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lwz r7,180(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r6,196(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 + ctx.r6.u64;
	// lfs f0,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lwz r7,184(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lwz r6,196(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r6,r3,r6
	ctx.r6.u64 = ctx.r3.u64 + ctx.r6.u64;
	// lfs f0,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lwz r7,188(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r6,196(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lfs f0,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 20, temp.u32);
	// lwz r6,188(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r7,196(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lfs f0,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 72, temp.u32);
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 76, temp.u32);
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 80, temp.u32);
	// lwz r7,188(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r6,196(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lfs f0,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 20, temp.u32);
	// lwz r7,188(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r6,196(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lfs f0,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 16, temp.u32);
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 20, temp.u32);
	// lwz r8,188(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r7,196(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// lfs f0,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// lfs f0,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 16, temp.u32);
	// lfs f0,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 20, temp.u32);
	// lwz r7,188(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r8,196(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 16, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 20, temp.u32);
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r30.u32);
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, ctx.r30.u32);
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 144, ctx.r30.u32);
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,204(r10)
	PPC_STORE_U32(ctx.r10.u32 + 204, ctx.r30.u32);
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,264(r10)
	PPC_STORE_U32(ctx.r10.u32 + 264, ctx.r30.u32);
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,360
	ctx.r11.s64 = ctx.r11.s64 + 360;
	// stw r30,324(r10)
	PPC_STORE_U32(ctx.r10.u32 + 324, ctx.r30.u32);
loc_823CF604:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// addi r8,r28,-1
	ctx.r8.s64 = ctx.r28.s64 + -1;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823cf3a4
	if (ctx.cr6.lt) goto loc_823CF3A4;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
loc_823CF620:
	// cmpw cr6,r24,r22
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r22.s32, ctx.xer);
	// bne cr6,0x823cf898
	if (!ctx.cr6.eq) goto loc_823CF898;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm r10,r24,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r9,140(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lvx128 v0,r10,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ble cr6,0x823cf898
	if (!ctx.cr6.gt) goto loc_823CF898;
	// lfs f0,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// mulli r11,r29,60
	ctx.r11.s64 = ctx.r29.s64 * 60;
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f12,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
loc_823CF660:
	// lwz r9,140(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823cf674
	if (ctx.cr6.lt) goto loc_823CF674;
	// li r10,0
	ctx.r10.s64 = 0;
loc_823CF674:
	// lwz r7,196(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r11,180
	ctx.r9.s64 = ctx.r11.s64 + 180;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r4,r9,-60
	ctx.r4.s64 = ctx.r9.s64 + -60;
	// addi r3,r9,60
	ctx.r3.s64 = ctx.r9.s64 + 60;
	// addi r28,r9,120
	ctx.r28.s64 = ctx.r9.s64 + 120;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stfs f12,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// addi r29,r29,6
	ctx.r29.s64 = ctx.r29.s64 + 6;
	// stfs f13,4(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// stfs f0,8(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// lwz r6,180(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r7,196(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lfs f11,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,60(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 60, temp.u32);
	// lfs f11,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,64(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 64, temp.u32);
	// lfs f11,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,68(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 68, temp.u32);
	// lwz r7,180(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r6,196(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,0(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f11,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,4(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f11,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lwz r7,196(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stfs f12,0(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f13,4(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// stfs f0,8(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// lwz r7,196(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// stfs f12,0(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f13,4(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// stfs f0,8(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// lwz r7,180(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r6,196(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 + ctx.r28.u64;
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,0(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f11,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,4(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f11,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lwz r7,188(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r6,196(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// lfs f11,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// lfs f11,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,20(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 20, temp.u32);
	// lwz r6,188(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r7,196(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lfs f11,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,72(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 72, temp.u32);
	// lfs f11,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,76(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 76, temp.u32);
	// lfs f11,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,80(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 80, temp.u32);
	// lwz r7,188(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r6,196(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r4,r5,-1
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// lfs f11,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// lfs f11,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,20(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 20, temp.u32);
	// lwz r7,188(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r6,196(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lfs f11,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// lfs f11,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,20(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// lwz r9,188(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r7,196(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// lfs f11,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// lfs f11,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 16, temp.u32);
	// lfs f11,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,20(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 20, temp.u32);
	// lwz r7,188(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r9,196(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// lfs f11,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,20(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r30.u32);
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, ctx.r30.u32);
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 144, ctx.r30.u32);
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,204(r10)
	PPC_STORE_U32(ctx.r10.u32 + 204, ctx.r30.u32);
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,264(r10)
	PPC_STORE_U32(ctx.r10.u32 + 264, ctx.r30.u32);
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,360
	ctx.r11.s64 = ctx.r11.s64 + 360;
	// stw r30,324(r10)
	PPC_STORE_U32(ctx.r10.u32 + 324, ctx.r30.u32);
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823cf660
	if (ctx.cr6.lt) goto loc_823CF660;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
loc_823CF898:
	// cmpw cr6,r24,r23
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r23.s32, ctx.xer);
	// bne cr6,0x823cfb18
	if (!ctx.cr6.eq) goto loc_823CFB18;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823cfb18
	if (!ctx.cr6.gt) goto loc_823CFB18;
	// rlwinm r27,r24,6,0,25
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 6) & 0xFFFFFFC0;
	// mulli r11,r29,60
	ctx.r11.s64 = ctx.r29.s64 * 60;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
loc_823CF8BC:
	// lwz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r8,140(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// add r9,r27,r9
	ctx.r9.u64 = ctx.r27.u64 + ctx.r9.u64;
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blt cr6,0x823cf8e8
	if (ctx.cr6.lt) goto loc_823CF8E8;
	// li r4,0
	ctx.r4.s64 = 0;
loc_823CF8E8:
	// lwz r7,184(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// addi r9,r11,180
	ctx.r9.s64 = ctx.r11.s64 + 180;
	// lwz r8,196(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lfs f13,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f12,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r8,r4,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r9,-60
	ctx.r4.s64 = ctx.r9.s64 + -60;
	// addi r3,r9,60
	ctx.r3.s64 = ctx.r9.s64 + 60;
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r28,r9,120
	ctx.r28.s64 = ctx.r9.s64 + 120;
	// stfs f11,0(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// lfs f11,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r29,r29,6
	ctx.r29.s64 = ctx.r29.s64 + 6;
	// stfs f11,4(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f11,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lwz r7,196(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stfs f0,60(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 60, temp.u32);
	// stfs f13,64(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 64, temp.u32);
	// stfs f12,68(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 68, temp.u32);
	// lwz r7,196(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f13,4(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// stfs f12,8(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// lwz r7,184(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lwz r6,196(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,0(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f11,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,4(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f11,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lwz r7,184(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lwz r6,196(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,0(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f11,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,4(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f11,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lwz r7,196(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 + ctx.r28.u64;
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f13,4(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// stfs f12,8(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// lwz r7,188(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r6,196(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lfs f0,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 20, temp.u32);
	// lwz r6,188(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r7,196(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lfs f0,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 72, temp.u32);
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 76, temp.u32);
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 80, temp.u32);
	// lwz r7,188(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r6,196(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r4,r5,-1
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// lfs f0,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 20, temp.u32);
	// lwz r7,188(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r6,196(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lfs f0,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// lwz r9,188(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r7,196(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// lfs f0,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 16, temp.u32);
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 20, temp.u32);
	// lwz r9,188(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r7,196(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r8,r7,r28
	ctx.r8.u64 = ctx.r7.u64 + ctx.r28.u64;
	// lfs f0,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 16, temp.u32);
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 20, temp.u32);
	// lwz r9,196(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r30,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r30.u32);
	// lwz r9,196(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r30,84(r9)
	PPC_STORE_U32(ctx.r9.u32 + 84, ctx.r30.u32);
	// lwz r9,196(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r30,144(r9)
	PPC_STORE_U32(ctx.r9.u32 + 144, ctx.r30.u32);
	// lwz r9,196(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r30,204(r9)
	PPC_STORE_U32(ctx.r9.u32 + 204, ctx.r30.u32);
	// lwz r9,196(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r30,264(r9)
	PPC_STORE_U32(ctx.r9.u32 + 264, ctx.r30.u32);
	// lwz r9,196(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,360
	ctx.r11.s64 = ctx.r11.s64 + 360;
	// stw r30,324(r9)
	PPC_STORE_U32(ctx.r9.u32 + 324, ctx.r30.u32);
	// lwz r9,140(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823cf8bc
	if (ctx.cr6.lt) goto loc_823CF8BC;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
loc_823CFB18:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmpw cr6,r24,r23
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r23.s32, ctx.xer);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// ble cr6,0x823cf110
	if (!ctx.cr6.gt) goto loc_823CF110;
loc_823CFB28:
	// stw r29,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r29.u32);
loc_823CFB2C:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// li r0,-160
	ctx.r0.s64 = -160;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x826dfbd0
	ctx.lr = 0x823CFB40;
	__restfpr_27(ctx, base);
	// b 0x826de8fc
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CFB48"))) PPC_WEAK_FUNC(sub_823CFB48);
PPC_FUNC_IMPL(__imp__sub_823CFB48) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,124(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f13,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x823cfb78
	if (!ctx.cr6.lt) goto loc_823CFB78;
	// li r10,0
	ctx.r10.s64 = 0;
loc_823CFB78:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cfb94
	if (ctx.cr6.eq) goto loc_823CFB94;
	// lwz r11,248(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r11.u32);
	// b 0x823cfba0
	goto loc_823CFBA0;
loc_823CFB94:
	// lfs f13,252(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
loc_823CFBA0:
	// lwz r10,248(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823cfbb4
	if (ctx.cr6.lt) goto loc_823CFBB4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823CFBB4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cfbd8
	if (ctx.cr6.eq) goto loc_823CFBD8;
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
loc_823CFBD8:
	// lfs f1,124(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823cf018
	ctx.lr = 0x823CFBE0;
	sub_823CF018(ctx, base);
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

__attribute__((alias("__imp__sub_823CFBF8"))) PPC_WEAK_FUNC(sub_823CFBF8);
PPC_FUNC_IMPL(__imp__sub_823CFBF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x823CFC00;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cfd34
	if (ctx.cr6.eq) goto loc_823CFD34;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x8259b040
	ctx.lr = 0x823CFC24;
	sub_8259B040(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x8259b088
	ctx.lr = 0x823CFC34;
	sub_8259B088(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x8259afe0
	ctx.lr = 0x823CFC44;
	sub_8259AFE0(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x8259afc0
	ctx.lr = 0x823CFC5C;
	sub_8259AFC0(ctx, base);
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r4,r11,-18576
	ctx.r4.s64 = ctx.r11.s64 + -18576;
	// lwz r3,44(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// bl 0x8259aec8
	ctx.lr = 0x823CFC70;
	sub_8259AEC8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259d7d0
	ctx.lr = 0x823CFC78;
	sub_8259D7D0(ctx, base);
	// addi r10,r31,208
	ctx.r10.s64 = ctx.r31.s64 + 208;
	// lfs f0,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lfs f0,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r30,112(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lfs f0,200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r28,8(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lfs f0,204(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// li r5,68
	ctx.r5.s64 = 68;
	// lwz r27,4(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// stw r29,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r29.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r28,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r28.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// stw r27,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r27.u32);
	// stw r6,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r6.u32);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// bl 0x826df680
	ctx.lr = 0x823CFCFC;
	sub_826DF680(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x8259a7f0
	ctx.lr = 0x823CFD10;
	sub_8259A7F0(ctx, base);
	// li r5,15
	ctx.r5.s64 = 15;
	// lwz r8,224(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r7,184(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lwz r6,188(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x8259a5e0
	ctx.lr = 0x823CFD2C;
	sub_8259A5E0(ctx, base);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x8259a608
	ctx.lr = 0x823CFD34;
	sub_8259A608(ctx, base);
loc_823CFD34:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CFD40"))) PPC_WEAK_FUNC(sub_823CFD40);
PPC_FUNC_IMPL(__imp__sub_823CFD40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x823CFD48;
	__savegprlr_26(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82597c60
	ctx.lr = 0x823CFD70;
	sub_82597C60(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f31,164(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
	// addi r11,r11,-696
	ctx.r11.s64 = ctx.r11.s64 + -696;
	// stw r26,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r26.u32);
	// addi r10,r10,-724
	ctx.r10.s64 = ctx.r10.s64 + -724;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r3.u32);
	// beq cr6,0x823cfdc0
	if (ctx.cr6.eq) goto loc_823CFDC0;
	// bl 0x82659610
	ctx.lr = 0x823CFDC0;
	sub_82659610(ctx, base);
loc_823CFDC0:
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-836
	ctx.r5.s64 = ctx.r11.s64 + -836;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CFDE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823cfdf8
	if (ctx.cr6.eq) goto loc_823CFDF8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82659610
	ctx.lr = 0x823CFDF8;
	sub_82659610(ctx, base);
loc_823CFDF8:
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// stw r28,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cfe0c
	if (ctx.cr6.eq) goto loc_823CFE0C;
	// bl 0x82581e38
	ctx.lr = 0x823CFE0C;
	sub_82581E38(ctx, base);
loc_823CFE0C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cfe1c
	if (ctx.cr6.eq) goto loc_823CFE1C;
	// bl 0x82581e38
	ctx.lr = 0x823CFE1C;
	sub_82581E38(ctx, base);
loc_823CFE1C:
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// li r29,-1
	ctx.r29.s64 = -1;
	// ori r28,r10,65535
	ctx.r28.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x823cfe3c
	if (!ctx.cr6.gt) goto loc_823CFE3C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_823CFE3C:
	// bl 0x82186158
	ctx.lr = 0x823CFE40;
	sub_82186158(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// bl 0x82186190
	ctx.lr = 0x823CFE50;
	sub_82186190(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x823cfe64
	if (!ctx.cr6.gt) goto loc_823CFE64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_823CFE64:
	// bl 0x82186158
	ctx.lr = 0x823CFE68;
	sub_82186158(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// bl 0x82186190
	ctx.lr = 0x823CFE78;
	sub_82186190(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x823cfe8c
	if (!ctx.cr6.gt) goto loc_823CFE8C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_823CFE8C:
	// bl 0x82186158
	ctx.lr = 0x823CFE90;
	sub_82186158(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// bl 0x82186190
	ctx.lr = 0x823CFEA0;
	sub_82186190(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x823cfeb4
	if (!ctx.cr6.gt) goto loc_823CFEB4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_823CFEB4:
	// bl 0x82186158
	ctx.lr = 0x823CFEB8;
	sub_82186158(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// bl 0x82186190
	ctx.lr = 0x823CFEC8;
	sub_82186190(ctx, base);
	// lis r10,1092
	ctx.r10.s64 = 71565312;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// ori r9,r10,17476
	ctx.r9.u64 = ctx.r10.u64 | 17476;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, ctx.xer);
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// mulli r3,r28,60
	ctx.r3.s64 = ctx.r28.s64 * 60;
	// ble cr6,0x823cfef8
	if (!ctx.cr6.gt) goto loc_823CFEF8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_823CFEF8:
	// bl 0x82186158
	ctx.lr = 0x823CFEFC;
	sub_82186158(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823cff38
	if (ctx.cr6.eq) goto loc_823CFF38;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x823cff30
	if (ctx.cr6.lt) goto loc_823CFF30;
loc_823CFF18:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8259a550
	ctx.lr = 0x823CFF20;
	sub_8259A550(ctx, base);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r27,r27,60
	ctx.r27.s64 = ctx.r27.s64 + 60;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge cr6,0x823cff18
	if (!ctx.cr6.lt) goto loc_823CFF18;
loc_823CFF30:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x823cff3c
	goto loc_823CFF3C;
loc_823CFF38:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_823CFF3C:
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// bl 0x82186190
	ctx.lr = 0x823CFF48;
	sub_82186190(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f29,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f29.f64 = double(temp.f32);
	// ble cr6,0x823d0024
	if (!ctx.cr6.gt) goto loc_823D0024;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r28,-32251
	ctx.r28.s64 = -2113601536;
	// lfs f30,5024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5024);
	ctx.f30.f64 = double(temp.f32);
loc_823CFF6C:
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lfs f0,-29804(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -29804);
	ctx.f0.f64 = double(temp.f32);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f31,f13
	ctx.f31.f64 = double(float(ctx.f13.f64));
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x826e0590
	ctx.lr = 0x823CFFAC;
	sub_826E0590(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// lfs f0,164(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsx f0,r30,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, temp.u32);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lfs f0,-29804(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -29804);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x826e0668
	ctx.lr = 0x823CFFEC;
	sub_826E0668(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// lfs f0,164(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// stfs f29,8(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823cff6c
	if (ctx.cr6.lt) goto loc_823CFF6C;
loc_823D0024:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stfs f29,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r8,r31,192
	ctx.r8.s64 = ctx.r31.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,14088(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r31,208
	ctx.r10.s64 = ctx.r31.s64 + 208;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f0,3548(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3548);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,5524(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5524);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stvx v0,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-80(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D00B0"))) PPC_WEAK_FUNC(sub_823D00B0);
PPC_FUNC_IMPL(__imp__sub_823D00B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823d0240
	sub_823D0240(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D00B8"))) PPC_WEAK_FUNC(sub_823D00B8);
PPC_FUNC_IMPL(__imp__sub_823D00B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-748
	ctx.r3.s64 = ctx.r11.s64 + -748;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D00C8"))) PPC_WEAK_FUNC(sub_823D00C8);
PPC_FUNC_IMPL(__imp__sub_823D00C8) {
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
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d00ec
	if (ctx.cr6.eq) goto loc_823D00EC;
	// bl 0x82581e38
	ctx.lr = 0x823D00EC;
	sub_82581E38(ctx, base);
loc_823D00EC:
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d00fc
	if (ctx.cr6.eq) goto loc_823D00FC;
	// bl 0x82581e38
	ctx.lr = 0x823D00FC;
	sub_82581E38(ctx, base);
loc_823D00FC:
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// bl 0x82186190
	ctx.lr = 0x823D0104;
	sub_82186190(ctx, base);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// bl 0x82186190
	ctx.lr = 0x823D010C;
	sub_82186190(ctx, base);
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// bl 0x82186190
	ctx.lr = 0x823D0114;
	sub_82186190(ctx, base);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x82186190
	ctx.lr = 0x823D011C;
	sub_82186190(ctx, base);
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x82186190
	ctx.lr = 0x823D0124;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82597cf8
	ctx.lr = 0x823D012C;
	sub_82597CF8(ctx, base);
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

__attribute__((alias("__imp__sub_823D0140"))) PPC_WEAK_FUNC(sub_823D0140);
PPC_FUNC_IMPL(__imp__sub_823D0140) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,144
	ctx.r11.s64 = ctx.r3.s64 + 144;
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// addi r10,r3,128
	ctx.r10.s64 = ctx.r3.s64 + 128;
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,-32
	ctx.r11.s64 = ctx.r1.s64 + -32;
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vminfp v0,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// addi r10,r11,144
	ctx.r10.s64 = ctx.r11.s64 + 144;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// vmaxfp v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,28(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v13,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D01B0"))) PPC_WEAK_FUNC(sub_823D01B0);
PPC_FUNC_IMPL(__imp__sub_823D01B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x823D01B8;
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
	// addi r30,r3,128
	ctx.r30.s64 = ctx.r3.s64 + 128;
	// addi r29,r3,144
	ctx.r29.s64 = ctx.r3.s64 + 144;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x825d3bc8
	ctx.lr = 0x823D01E0;
	sub_825D3BC8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825d2200
	ctx.lr = 0x823D01E8;
	sub_825D2200(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825d3bb0
	ctx.lr = 0x823D01FC;
	sub_825D3BB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f31,3548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825d2350
	ctx.lr = 0x823D0214;
	sub_825D2350(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fmuls f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f31.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D0240"))) PPC_WEAK_FUNC(sub_823D0240);
PPC_FUNC_IMPL(__imp__sub_823D0240) {
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
	// bl 0x823d00c8
	ctx.lr = 0x823D0260;
	sub_823D00C8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d0278
	if (ctx.cr6.eq) goto loc_823D0278;
	// bl 0x82186190
	ctx.lr = 0x823D0274;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823D0278:
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

__attribute__((alias("__imp__sub_823D0290"))) PPC_WEAK_FUNC(sub_823D0290);
PPC_FUNC_IMPL(__imp__sub_823D0290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x823D0298;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// li r12,-80
	ctx.r12.s64 = -80;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r5,r31,128
	ctx.r5.s64 = ctx.r31.s64 + 128;
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// lfs f31,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r31,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r31.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f30,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f30.f64 = double(temp.f32);
	// stfs f30,116(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f30,124(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x825d3bc8
	ctx.lr = 0x823D02E4;
	sub_825D3BC8(ctx, base);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stfs f31,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f30,136(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stfs f30,140(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x825c5560
	ctx.lr = 0x823D0308;
	sub_825C5560(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ble cr6,0x823d042c
	if (!ctx.cr6.gt) goto loc_823D042C;
	// vspltisw v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x0)));
	// vupkd3d128 v0,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// vspltw128 v127,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v127.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x0));
loc_823D0328:
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x825d2bc0
	ctx.lr = 0x823D0340;
	sub_825D2BC0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823D0350:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x823d0350
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D0350;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// lvx128 v0,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v13,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// vor128 v11,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// vspltw v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vor128 v10,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// lwz r31,420(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lvx128 v9,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// rlwinm r30,r29,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lvx128 v8,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// vmaddfp v13,v8,v13,v9
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// lvx128 v7,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v6,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// vmaddfp v13,v12,v7,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v9,v0,v6,v13
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vspltw v12,v9,3
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0x0));
	// vrefp v13,v12
	simde_mm_store_ps(ctx.v13.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v12.f32)));
	// vnmsubfp v11,v12,v13,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v11.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v13,v11,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v10,v12,v0,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v10.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v12,v0,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v0,v10,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v12,v13,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vmulfp128 v0,v9,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v12.f32)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d2260
	ctx.lr = 0x823D040C;
	sub_825D2260(ctx, base);
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// lvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r10,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823d0328
	if (ctx.cr6.lt) goto loc_823D0328;
loc_823D042C:
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823d048c
	if (!ctx.cr6.gt) goto loc_823D048C;
	// addi r8,r31,128
	ctx.r8.s64 = ctx.r31.s64 + 128;
	// addi r7,r31,144
	ctx.r7.s64 = ctx.r31.s64 + 144;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823D0448:
	// lwz r10,172(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp v0,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lvx128 v0,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823d0448
	if (ctx.cr6.lt) goto loc_823D0448;
loc_823D048C:
	// lwz r8,160(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x823d0718
	if (!ctx.cr6.gt) goto loc_823D0718;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
loc_823D04AC:
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823d04bc
	if (ctx.cr6.lt) goto loc_823D04BC;
	// li r7,0
	ctx.r7.s64 = 0;
loc_823D04BC:
	// lwz r6,172(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// rlwinm r8,r7,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r5,188(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// addi r7,r10,180
	ctx.r7.s64 = ctx.r10.s64 + 180;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// addi r30,r7,-60
	ctx.r30.s64 = ctx.r7.s64 + -60;
	// addi r29,r7,60
	ctx.r29.s64 = ctx.r7.s64 + 60;
	// addi r28,r7,120
	ctx.r28.s64 = ctx.r7.s64 + 120;
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lwz r5,176(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r6,188(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 60, temp.u32);
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 64, temp.u32);
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 68, temp.u32);
	// lwz r6,176(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r5,188(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// lfs f0,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lwz r6,172(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r5,188(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 + ctx.r7.u64;
	// lfs f0,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lwz r6,172(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r5,188(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + ctx.r29.u64;
	// lfs f0,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lwz r6,176(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r5,188(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 + ctx.r28.u64;
	// lfs f0,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lwz r6,180(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r5,188(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// lfs f0,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// lwz r5,180(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r6,188(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 72, temp.u32);
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stfs f0,76(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 76, temp.u32);
	// addi r4,r4,6
	ctx.r4.s64 = ctx.r4.s64 + 6;
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 80, temp.u32);
	// lwz r6,180(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r5,188(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// addi r30,r3,-1
	ctx.r30.s64 = ctx.r3.s64 + -1;
	// lfs f0,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// lwz r6,180(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r5,188(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// lfs f0,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 16, temp.u32);
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 20, temp.u32);
	// lwz r7,180(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r6,188(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r6,r6,r29
	ctx.r6.u64 = ctx.r6.u64 + ctx.r29.u64;
	// lfs f0,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 20, temp.u32);
	// lwz r6,180(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r7,188(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 + ctx.r28.u64;
	// lfs f0,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// lfs f0,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 16, temp.u32);
	// lfs f0,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 20, temp.u32);
	// lwz r8,188(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r11,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r11.u32);
	// lwz r8,188(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r11,84(r8)
	PPC_STORE_U32(ctx.r8.u32 + 84, ctx.r11.u32);
	// lwz r8,188(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r11,144(r8)
	PPC_STORE_U32(ctx.r8.u32 + 144, ctx.r11.u32);
	// lwz r8,188(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r11,204(r8)
	PPC_STORE_U32(ctx.r8.u32 + 204, ctx.r11.u32);
	// lwz r8,188(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r11,264(r8)
	PPC_STORE_U32(ctx.r8.u32 + 264, ctx.r11.u32);
	// lwz r8,188(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r10,360
	ctx.r10.s64 = ctx.r10.s64 + 360;
	// stw r11,324(r8)
	PPC_STORE_U32(ctx.r8.u32 + 324, ctx.r11.u32);
	// lwz r8,160(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823d04ac
	if (ctx.cr6.lt) goto loc_823D04AC;
loc_823D0718:
	// lwz r8,160(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x823d0988
	if (!ctx.cr6.gt) goto loc_823D0988;
	// addi r9,r31,128
	ctx.r9.s64 = ctx.r31.s64 + 128;
	// mulli r10,r4,60
	ctx.r10.s64 = ctx.r4.s64 * 60;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
loc_823D0734:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823d0744
	if (ctx.cr6.lt) goto loc_823D0744;
	// li r5,0
	ctx.r5.s64 = 0;
loc_823D0744:
	// lwz r7,188(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// rlwinm r8,r5,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r5,r10,r7
	ctx.r5.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r7,r10,180
	ctx.r7.s64 = ctx.r10.s64 + 180;
	// addi r29,r7,-60
	ctx.r29.s64 = ctx.r7.s64 + -60;
	// addi r28,r7,60
	ctx.r28.s64 = ctx.r7.s64 + 60;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addi r27,r7,120
	ctx.r27.s64 = ctx.r7.s64 + 120;
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r5,188(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 60, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 64, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 68, temp.u32);
	// lwz r5,172(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r3,r29,r3
	ctx.r3.u64 = ctx.r29.u64 + ctx.r3.u64;
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lwz r5,188(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lfs f0,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lwz r5,188(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lfs f0,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r5,r28,r5
	ctx.r5.u64 = ctx.r28.u64 + ctx.r5.u64;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lwz r5,172(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r3,r27,r3
	ctx.r3.u64 = ctx.r27.u64 + ctx.r3.u64;
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lwz r5,180(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r5,188(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 72, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 76, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 80, temp.u32);
	// lwz r5,180(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r3,r29,r3
	ctx.r3.u64 = ctx.r29.u64 + ctx.r3.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r4,r4,6
	ctx.r4.s64 = ctx.r4.s64 + 6;
	// addi r29,r30,-1
	ctx.r29.s64 = ctx.r30.s64 + -1;
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lwz r5,180(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 16, temp.u32);
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 20, temp.u32);
	// lwz r7,180(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r5,188(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r5,r28,r5
	ctx.r5.u64 = ctx.r28.u64 + ctx.r5.u64;
	// lfs f0,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// lwz r5,180(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r7,188(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r7,r27,r7
	ctx.r7.u64 = ctx.r27.u64 + ctx.r7.u64;
	// lfs f0,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// lfs f0,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 16, temp.u32);
	// lfs f0,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 20, temp.u32);
	// lwz r8,188(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r11,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r11.u32);
	// lwz r8,188(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r11,84(r8)
	PPC_STORE_U32(ctx.r8.u32 + 84, ctx.r11.u32);
	// lwz r8,188(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r11,144(r8)
	PPC_STORE_U32(ctx.r8.u32 + 144, ctx.r11.u32);
	// lwz r8,188(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r11,204(r8)
	PPC_STORE_U32(ctx.r8.u32 + 204, ctx.r11.u32);
	// lwz r8,188(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r11,264(r8)
	PPC_STORE_U32(ctx.r8.u32 + 264, ctx.r11.u32);
	// lwz r8,188(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r10,r10,360
	ctx.r10.s64 = ctx.r10.s64 + 360;
	// stw r11,324(r8)
	PPC_STORE_U32(ctx.r8.u32 + 324, ctx.r11.u32);
	// lwz r8,160(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmpw cr6,r29,r8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823d0734
	if (ctx.cr6.lt) goto loc_823D0734;
loc_823D0988:
	// lwz r7,160(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x823d0bf4
	if (!ctx.cr6.gt) goto loc_823D0BF4;
	// addi r9,r31,144
	ctx.r9.s64 = ctx.r31.s64 + 144;
	// mulli r10,r4,60
	ctx.r10.s64 = ctx.r4.s64 * 60;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
loc_823D09A4:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x823d09b4
	if (ctx.cr6.lt) goto loc_823D09B4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_823D09B4:
	// lwz r5,176(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// addi r7,r10,180
	ctx.r7.s64 = ctx.r10.s64 + 180;
	// lwz r6,188(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r4,r10,r6
	ctx.r4.u64 = ctx.r10.u64 + ctx.r6.u64;
	// rlwinm r6,r30,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r30,r7,-60
	ctx.r30.s64 = ctx.r7.s64 + -60;
	// addi r29,r7,60
	ctx.r29.s64 = ctx.r7.s64 + 60;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r28,r7,120
	ctx.r28.s64 = ctx.r7.s64 + 120;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lwz r5,188(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lfs f0,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stfs f0,60(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 60, temp.u32);
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 64, temp.u32);
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 68, temp.u32);
	// lwz r5,188(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lfs f0,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r5,r30,r5
	ctx.r5.u64 = ctx.r30.u64 + ctx.r5.u64;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lwz r5,176(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r4,188(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lwz r5,176(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r4,188(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r4,r29,r4
	ctx.r4.u64 = ctx.r29.u64 + ctx.r4.u64;
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lwz r5,188(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lfs f0,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r5,r28,r5
	ctx.r5.u64 = ctx.r28.u64 + ctx.r5.u64;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lwz r5,180(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r4,188(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lwz r4,180(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r5,188(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 72, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 76, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 80, temp.u32);
	// lwz r5,180(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r4,188(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r4,r30,r4
	ctx.r4.u64 = ctx.r30.u64 + ctx.r4.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r30,r3,-1
	ctx.r30.s64 = ctx.r3.s64 + -1;
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lwz r5,180(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r4,188(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 16, temp.u32);
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 20, temp.u32);
	// lwz r7,180(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r5,188(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r5,r29,r5
	ctx.r5.u64 = ctx.r29.u64 + ctx.r5.u64;
	// lfs f0,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// lwz r7,180(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r5,188(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r6,r28,r5
	ctx.r6.u64 = ctx.r28.u64 + ctx.r5.u64;
	// lfs f0,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 20, temp.u32);
	// lwz r7,188(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r11,24(r7)
	PPC_STORE_U32(ctx.r7.u32 + 24, ctx.r11.u32);
	// lwz r7,188(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r11,84(r7)
	PPC_STORE_U32(ctx.r7.u32 + 84, ctx.r11.u32);
	// lwz r7,188(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r11,144(r7)
	PPC_STORE_U32(ctx.r7.u32 + 144, ctx.r11.u32);
	// lwz r7,188(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r11,204(r7)
	PPC_STORE_U32(ctx.r7.u32 + 204, ctx.r11.u32);
	// lwz r7,188(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r11,264(r7)
	PPC_STORE_U32(ctx.r7.u32 + 264, ctx.r11.u32);
	// lwz r7,188(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r10,r10,360
	ctx.r10.s64 = ctx.r10.s64 + 360;
	// stw r11,324(r7)
	PPC_STORE_U32(ctx.r7.u32 + 324, ctx.r11.u32);
	// lwz r7,160(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x823d09a4
	if (ctx.cr6.lt) goto loc_823D09A4;
loc_823D0BF4:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// li r0,-80
	ctx.r0.s64 = -80;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D0C10"))) PPC_WEAK_FUNC(sub_823D0C10);
PPC_FUNC_IMPL(__imp__sub_823D0C10) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,128
	ctx.r11.s64 = ctx.r3.s64 + 128;
	// lvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r3,144
	ctx.r10.s64 = ctx.r3.s64 + 144;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x823d0290
	sub_823D0290(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D0C30"))) PPC_WEAK_FUNC(sub_823D0C30);
PPC_FUNC_IMPL(__imp__sub_823D0C30) {
	PPC_FUNC_PROLOGUE();
	// b 0x825813a0
	sub_825813A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D0C38"))) PPC_WEAK_FUNC(sub_823D0C38);
PPC_FUNC_IMPL(__imp__sub_823D0C38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,96(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D0C48"))) PPC_WEAK_FUNC(sub_823D0C48);
PPC_FUNC_IMPL(__imp__sub_823D0C48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D0C58"))) PPC_WEAK_FUNC(sub_823D0C58);
PPC_FUNC_IMPL(__imp__sub_823D0C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x823D0C60;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stvx v0,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// beq cr6,0x823d0ca8
	if (ctx.cr6.eq) goto loc_823D0CA8;
	// bl 0x82659610
	ctx.lr = 0x823D0CA8;
	sub_82659610(ctx, base);
loc_823D0CA8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// beq cr6,0x823d0cbc
	if (ctx.cr6.eq) goto loc_823D0CBC;
	// bl 0x82659610
	ctx.lr = 0x823D0CBC;
	sub_82659610(ctx, base);
loc_823D0CBC:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// beq cr6,0x823d0cd0
	if (ctx.cr6.eq) goto loc_823D0CD0;
	// bl 0x82659610
	ctx.lr = 0x823D0CD0;
	sub_82659610(ctx, base);
loc_823D0CD0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// beq cr6,0x823d0cf4
	if (ctx.cr6.eq) goto loc_823D0CF4;
	// bl 0x82659610
	ctx.lr = 0x823D0CF4;
	sub_82659610(ctx, base);
loc_823D0CF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D0D00"))) PPC_WEAK_FUNC(sub_823D0D00);
PPC_FUNC_IMPL(__imp__sub_823D0D00) {
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
	// lfs f0,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// bl 0x823d6478
	ctx.lr = 0x823D0D28;
	sub_823D6478(ctx, base);
	// lfs f0,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x823d0d48
	if (!ctx.cr6.gt) goto loc_823D0D48;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D0D48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823D0D48:
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

__attribute__((alias("__imp__sub_823D0D60"))) PPC_WEAK_FUNC(sub_823D0D60);
PPC_FUNC_IMPL(__imp__sub_823D0D60) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addis r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -65536;
	// addic. r11,r11,-12
	ctx.xer.ca = ctx.r11.u32 > 11;
	ctx.r11.s64 = ctx.r11.s64 + -12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823d0db4
	if (ctx.cr0.eq) goto loc_823D0DB4;
	// cmplwi cr6,r11,4088
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4088, ctx.xer);
	// beq cr6,0x823d0d98
	if (ctx.cr6.eq) goto loc_823D0D98;
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
loc_823D0D98:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823D0DB4:
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// bl 0x825813a0
	ctx.lr = 0x823D0DBC;
	sub_825813A0(ctx, base);
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
}

__attribute__((alias("__imp__sub_823D0DD0"))) PPC_WEAK_FUNC(sub_823D0DD0);
PPC_FUNC_IMPL(__imp__sub_823D0DD0) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82581500
	ctx.lr = 0x823D0DF0;
	sub_82581500(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r11,r11,-624
	ctx.r11.s64 = ctx.r11.s64 + -624;
	// addi r9,r9,-636
	ctx.r9.s64 = ctx.r9.s64 + -636;
	// addi r10,r31,76
	ctx.r10.s64 = ctx.r31.s64 + 76;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// beq cr6,0x823d0e30
	if (ctx.cr6.eq) goto loc_823D0E30;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_823D0E30:
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
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_823D0E70"))) PPC_WEAK_FUNC(sub_823D0E70);
PPC_FUNC_IMPL(__imp__sub_823D0E70) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x823d1280
	sub_823D1280(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D0E78"))) PPC_WEAK_FUNC(sub_823D0E78);
PPC_FUNC_IMPL(__imp__sub_823D0E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-652
	ctx.r3.s64 = ctx.r11.s64 + -652;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D0E88"))) PPC_WEAK_FUNC(sub_823D0E88);
PPC_FUNC_IMPL(__imp__sub_823D0E88) {
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
	// addi r4,r4,76
	ctx.r4.s64 = ctx.r4.s64 + 76;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8262b468
	ctx.lr = 0x823D0EA4;
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

__attribute__((alias("__imp__sub_823D0EC0"))) PPC_WEAK_FUNC(sub_823D0EC0);
PPC_FUNC_IMPL(__imp__sub_823D0EC0) {
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
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,76
	ctx.r4.s64 = ctx.r31.s64 + 76;
	// bl 0x8262b468
	ctx.lr = 0x823D0EE0;
	sub_8262B468(ctx, base);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823d0f80
	if (ctx.cr6.eq) goto loc_823D0F80;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d0f80
	if (ctx.cr6.eq) goto loc_823D0F80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D0F10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d0f70
	if (ctx.cr6.eq) goto loc_823D0F70;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d0f70
	if (ctx.cr6.eq) goto loc_823D0F70;
	// addi r4,r31,100
	ctx.r4.s64 = ctx.r31.s64 + 100;
	// bl 0x821609d0
	ctx.lr = 0x823D0F34;
	sub_821609D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d0f48
	if (ctx.cr6.eq) goto loc_823D0F48;
	// bl 0x821601b8
	ctx.lr = 0x823D0F48;
	sub_821601B8(ctx, base);
loc_823D0F48:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d0f58
	if (ctx.cr6.eq) goto loc_823D0F58;
	// bl 0x821601b8
	ctx.lr = 0x823D0F58;
	sub_821601B8(ctx, base);
loc_823D0F58:
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
loc_823D0F70:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d0f80
	if (ctx.cr6.eq) goto loc_823D0F80;
	// bl 0x821601b8
	ctx.lr = 0x823D0F80;
	sub_821601B8(ctx, base);
loc_823D0F80:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d0f90
	if (ctx.cr6.eq) goto loc_823D0F90;
	// bl 0x821601b8
	ctx.lr = 0x823D0F90;
	sub_821601B8(ctx, base);
loc_823D0F90:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_823D0FA8"))) PPC_WEAK_FUNC(sub_823D0FA8);
PPC_FUNC_IMPL(__imp__sub_823D0FA8) {
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
	// bl 0x823d0ec0
	ctx.lr = 0x823D0FC8;
	sub_823D0EC0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d0ff4
	if (ctx.cr6.eq) goto loc_823D0FF4;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// ori r11,r11,15
	ctx.r11.u64 = ctx.r11.u64 | 15;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D0FF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823D0FF4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// bl 0x823d0ec0
	ctx.lr = 0x823D1004;
	sub_823D0EC0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d1030
	if (ctx.cr6.eq) goto loc_823D1030;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D1030;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823D1030:
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

__attribute__((alias("__imp__sub_823D1048"))) PPC_WEAK_FUNC(sub_823D1048);
PPC_FUNC_IMPL(__imp__sub_823D1048) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-624
	ctx.r11.s64 = ctx.r11.s64 + -624;
	// addi r10,r10,-636
	ctx.r10.s64 = ctx.r10.s64 + -636;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// bl 0x823d0ec0
	ctx.lr = 0x823D1078;
	sub_823D0EC0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d10a4
	if (ctx.cr6.eq) goto loc_823D10A4;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// ori r11,r11,15
	ctx.r11.u64 = ctx.r11.u64 | 15;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D10A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823D10A4:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d10b4
	if (ctx.cr6.eq) goto loc_823D10B4;
	// bl 0x82581e38
	ctx.lr = 0x823D10B4;
	sub_82581E38(ctx, base);
loc_823D10B4:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d10c4
	if (ctx.cr6.eq) goto loc_823D10C4;
	// bl 0x82581e38
	ctx.lr = 0x823D10C4;
	sub_82581E38(ctx, base);
loc_823D10C4:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d10f0
	if (ctx.cr6.eq) goto loc_823D10F0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bne 0x823d10f0
	if (!ctx.cr0.eq) goto loc_823D10F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D10F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823D10F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581670
	ctx.lr = 0x823D10F8;
	sub_82581670(ctx, base);
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

__attribute__((alias("__imp__sub_823D1110"))) PPC_WEAK_FUNC(sub_823D1110);
PPC_FUNC_IMPL(__imp__sub_823D1110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x823D1118;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,32(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823d1138
	if (ctx.cr6.eq) goto loc_823D1138;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x823D1138;
	sub_82659610(ctx, base);
loc_823D1138:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d114c
	if (ctx.cr6.eq) goto loc_823D114C;
	// bl 0x82581e38
	ctx.lr = 0x823D114C;
	sub_82581E38(ctx, base);
loc_823D114C:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d1168
	if (ctx.cr6.eq) goto loc_823D1168;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d1174
	if (!ctx.cr6.eq) goto loc_823D1174;
loc_823D1168:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_823D1174:
	// lwz r30,36(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823d1188
	if (ctx.cr6.eq) goto loc_823D1188;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x823D1188;
	sub_82659610(ctx, base);
loc_823D1188:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d119c
	if (ctx.cr6.eq) goto loc_823D119C;
	// bl 0x82581e38
	ctx.lr = 0x823D119C;
	sub_82581E38(ctx, base);
loc_823D119C:
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// addi r4,r29,48
	ctx.r4.s64 = ctx.r29.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x823d0fa8
	ctx.lr = 0x823D11B0;
	sub_823D0FA8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D11C0"))) PPC_WEAK_FUNC(sub_823D11C0);
PPC_FUNC_IMPL(__imp__sub_823D11C0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823d0ec0
	ctx.lr = 0x823D11DC;
	sub_823D0EC0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d1264
	if (ctx.cr6.eq) goto loc_823D1264;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
	// ori r11,r11,6
	ctx.r11.u64 = ctx.r11.u64 | 6;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D120C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d1264
	if (ctx.cr6.eq) goto loc_823D1264;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,12298
	ctx.r11.u64 = ctx.r11.u64 | 12298;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D1244;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d1264
	if (!ctx.cr6.eq) goto loc_823D1264;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r3,1
	ctx.r3.s64 = 1;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x823d1268
	goto loc_823D1268;
loc_823D1264:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823D1268:
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

__attribute__((alias("__imp__sub_823D1280"))) PPC_WEAK_FUNC(sub_823D1280);
PPC_FUNC_IMPL(__imp__sub_823D1280) {
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
	// bl 0x823d1048
	ctx.lr = 0x823D12A0;
	sub_823D1048(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d12b8
	if (ctx.cr6.eq) goto loc_823D12B8;
	// bl 0x82186190
	ctx.lr = 0x823D12B4;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823D12B8:
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

__attribute__((alias("__imp__sub_823D12D0"))) PPC_WEAK_FUNC(sub_823D12D0);
PPC_FUNC_IMPL(__imp__sub_823D12D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b0
	ctx.lr = 0x823D12D8;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// addi r4,r11,4068
	ctx.r4.s64 = ctx.r11.s64 + 4068;
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// stb r31,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// bl 0x82161e08
	ctx.lr = 0x823D1324;
	sub_82161E08(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D1338;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82276a08
	ctx.lr = 0x823D1348;
	sub_82276A08(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x823d135c
	if (ctx.cr6.lt) goto loc_823D135C;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82186190
	ctx.lr = 0x823D135C;
	sub_82186190(ctx, base);
loc_823D135C:
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stb r31,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r31.u8);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq cr6,0x823d13b8
	if (ctx.cr6.eq) goto loc_823D13B8;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d13b8
	if (ctx.cr6.eq) goto loc_823D13B8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823d13b8
	if (ctx.cr6.eq) goto loc_823D13B8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823d4318
	ctx.lr = 0x823D139C;
	sub_823D4318(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823032b8
	ctx.lr = 0x823D13A8;
	sub_823032B8(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d13b8
	if (ctx.cr6.eq) goto loc_823D13B8;
	// bl 0x82581e38
	ctx.lr = 0x823D13B8;
	sub_82581E38(ctx, base);
loc_823D13B8:
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823d0c58
	ctx.lr = 0x823D13DC;
	sub_823D0C58(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d13ec
	if (ctx.cr6.eq) goto loc_823D13EC;
	// bl 0x82581e38
	ctx.lr = 0x823D13EC;
	sub_82581E38(ctx, base);
loc_823D13EC:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d13fc
	if (ctx.cr6.eq) goto loc_823D13FC;
	// bl 0x82581e38
	ctx.lr = 0x823D13FC;
	sub_82581E38(ctx, base);
loc_823D13FC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826de900
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D1408"))) PPC_WEAK_FUNC(sub_823D1408);
PPC_FUNC_IMPL(__imp__sub_823D1408) {
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
	// bl 0x82160440
	ctx.lr = 0x823D1428;
	sub_82160440(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-576
	ctx.r11.s64 = ctx.r11.s64 + -576;
	// addi r10,r10,-588
	ctx.r10.s64 = ctx.r10.s64 + -588;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lfs f0,3544(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r9,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stw r8,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_823D1488"))) PPC_WEAK_FUNC(sub_823D1488);
PPC_FUNC_IMPL(__imp__sub_823D1488) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x823d15a8
	sub_823D15A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D1490"))) PPC_WEAK_FUNC(sub_823D1490);
PPC_FUNC_IMPL(__imp__sub_823D1490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-608
	ctx.r3.s64 = ctx.r11.s64 + -608;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D14A0"))) PPC_WEAK_FUNC(sub_823D14A0);
PPC_FUNC_IMPL(__imp__sub_823D14A0) {
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
	// lfs f0,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// bl 0x823d6478
	ctx.lr = 0x823D14C8;
	sub_823D6478(ctx, base);
	// lfs f0,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x823d14e8
	if (!ctx.cr6.gt) goto loc_823D14E8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D14E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823D14E8:
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

__attribute__((alias("__imp__sub_823D1500"))) PPC_WEAK_FUNC(sub_823D1500);
PPC_FUNC_IMPL(__imp__sub_823D1500) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D1508"))) PPC_WEAK_FUNC(sub_823D1508);
PPC_FUNC_IMPL(__imp__sub_823D1508) {
	PPC_FUNC_PROLOGUE();
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// ori r10,r10,4100
	ctx.r10.u64 = ctx.r10.u64 | 4100;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x823d1524
	if (ctx.cr6.eq) goto loc_823D1524;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823D1524:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D1538"))) PPC_WEAK_FUNC(sub_823D1538);
PPC_FUNC_IMPL(__imp__sub_823D1538) {
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
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// addi r8,r11,2596
	ctx.r8.s64 = ctx.r11.s64 + 2596;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x823d12d0
	ctx.lr = 0x823D1570;
	sub_823D12D0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d1580
	if (ctx.cr6.eq) goto loc_823D1580;
	// bl 0x82581e38
	ctx.lr = 0x823D1580;
	sub_82581E38(ctx, base);
loc_823D1580:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d1590
	if (ctx.cr6.eq) goto loc_823D1590;
	// bl 0x82581e38
	ctx.lr = 0x823D1590;
	sub_82581E38(ctx, base);
loc_823D1590:
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

__attribute__((alias("__imp__sub_823D15A8"))) PPC_WEAK_FUNC(sub_823D15A8);
PPC_FUNC_IMPL(__imp__sub_823D15A8) {
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
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d15d4
	if (ctx.cr6.eq) goto loc_823D15D4;
	// bl 0x82581e38
	ctx.lr = 0x823D15D4;
	sub_82581E38(ctx, base);
loc_823D15D4:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d15e4
	if (ctx.cr6.eq) goto loc_823D15E4;
	// bl 0x82581e38
	ctx.lr = 0x823D15E4;
	sub_82581E38(ctx, base);
loc_823D15E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82160560
	ctx.lr = 0x823D15EC;
	sub_82160560(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d1604
	if (ctx.cr6.eq) goto loc_823D1604;
	// bl 0x82186190
	ctx.lr = 0x823D1600;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823D1604:
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

__attribute__((alias("__imp__sub_823D1620"))) PPC_WEAK_FUNC(sub_823D1620);
PPC_FUNC_IMPL(__imp__sub_823D1620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x823D1628;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,32(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823d1648
	if (ctx.cr6.eq) goto loc_823D1648;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x823D1648;
	sub_82659610(ctx, base);
loc_823D1648:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d165c
	if (ctx.cr6.eq) goto loc_823D165C;
	// bl 0x82581e38
	ctx.lr = 0x823D165C;
	sub_82581E38(ctx, base);
loc_823D165C:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d1678
	if (ctx.cr6.eq) goto loc_823D1678;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d1684
	if (!ctx.cr6.eq) goto loc_823D1684;
loc_823D1678:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_823D1684:
	// lwz r30,36(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823d1698
	if (ctx.cr6.eq) goto loc_823D1698;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x823D1698;
	sub_82659610(ctx, base);
loc_823D1698:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d16ac
	if (ctx.cr6.eq) goto loc_823D16AC;
	// bl 0x82581e38
	ctx.lr = 0x823D16AC;
	sub_82581E38(ctx, base);
loc_823D16AC:
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D16C0"))) PPC_WEAK_FUNC(sub_823D16C0);
PPC_FUNC_IMPL(__imp__sub_823D16C0) {
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
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823d0e88
	ctx.lr = 0x823D16E0;
	sub_823D0E88(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D16FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821609d0
	ctx.lr = 0x823D1708;
	sub_821609D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d171c
	if (ctx.cr6.eq) goto loc_823D171C;
	// bl 0x821601b8
	ctx.lr = 0x823D171C;
	sub_821601B8(ctx, base);
loc_823D171C:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d172c
	if (ctx.cr6.eq) goto loc_823D172C;
	// bl 0x821601b8
	ctx.lr = 0x823D172C;
	sub_821601B8(ctx, base);
loc_823D172C:
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

__attribute__((alias("__imp__sub_823D1748"))) PPC_WEAK_FUNC(sub_823D1748);
PPC_FUNC_IMPL(__imp__sub_823D1748) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D1760"))) PPC_WEAK_FUNC(sub_823D1760);
PPC_FUNC_IMPL(__imp__sub_823D1760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,304(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 304, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D1768"))) PPC_WEAK_FUNC(sub_823D1768);
PPC_FUNC_IMPL(__imp__sub_823D1768) {
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
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x823d17cc
	if (!ctx.cr6.lt) goto loc_823D17CC;
	// bl 0x823d16c0
	ctx.lr = 0x823D178C;
	sub_823D16C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d17b8
	if (ctx.cr6.eq) goto loc_823D17B8;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// ori r11,r11,32814
	ctx.r11.u64 = ctx.r11.u64 | 32814;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D17B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823D17B8:
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// bl 0x825813a0
	ctx.lr = 0x823D17CC;
	sub_825813A0(ctx, base);
loc_823D17CC:
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

__attribute__((alias("__imp__sub_823D17E0"))) PPC_WEAK_FUNC(sub_823D17E0);
PPC_FUNC_IMPL(__imp__sub_823D17E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r10,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r10.u32);
	// stb r9,308(r3)
	PPC_STORE_U8(ctx.r3.u32 + 308, ctx.r9.u8);
	// lwz r10,112(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// lfs f13,5424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5424);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// stfs f13,304(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 304, temp.u32);
	// stw r11,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r11.u32);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D1838"))) PPC_WEAK_FUNC(sub_823D1838);
PPC_FUNC_IMPL(__imp__sub_823D1838) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r4,24
	ctx.r30.s64 = ctx.r4.s64 + 24;
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// stb r11,44(r4)
	PPC_STORE_U8(ctx.r4.u32 + 44, ctx.r11.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825951f0
	ctx.lr = 0x823D1868;
	sub_825951F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82595500
	ctx.lr = 0x823D187C;
	sub_82595500(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// beq cr6,0x823d189c
	if (ctx.cr6.eq) goto loc_823D189C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x823d18ac
	if (!ctx.cr6.lt) goto loc_823D18AC;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x823d18a8
	goto loc_823D18A8;
loc_823D189C:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bge cr6,0x823d18ac
	if (!ctx.cr6.lt) goto loc_823D18AC;
	// li r11,5
	ctx.r11.s64 = 5;
loc_823D18A8:
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_823D18AC:
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

__attribute__((alias("__imp__sub_823D18C8"))) PPC_WEAK_FUNC(sub_823D18C8);
PPC_FUNC_IMPL(__imp__sub_823D18C8) {
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
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 | 23;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D18FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D1910"))) PPC_WEAK_FUNC(sub_823D1910);
PPC_FUNC_IMPL(__imp__sub_823D1910) {
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
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,24480
	ctx.r4.s64 = ctx.r11.s64 + 24480;
	// bl 0x826de850
	ctx.lr = 0x823D1934;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d1948
	if (!ctx.cr6.eq) goto loc_823D1948;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823D1948:
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

__attribute__((alias("__imp__sub_823D1960"))) PPC_WEAK_FUNC(sub_823D1960);
PPC_FUNC_IMPL(__imp__sub_823D1960) {
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
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,24696
	ctx.r4.s64 = ctx.r11.s64 + 24696;
	// bl 0x826de850
	ctx.lr = 0x823D1984;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d1998
	if (!ctx.cr6.eq) goto loc_823D1998;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823D1998:
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

__attribute__((alias("__imp__sub_823D19B0"))) PPC_WEAK_FUNC(sub_823D19B0);
PPC_FUNC_IMPL(__imp__sub_823D19B0) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d1a2c
	if (ctx.cr6.eq) goto loc_823D1A2C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d1a2c
	if (ctx.cr6.eq) goto loc_823D1A2C;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82617ea8
	ctx.lr = 0x823D1A00;
	sub_82617EA8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lfs f1,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82442f00
	ctx.lr = 0x823D1A1C;
	sub_82442F00(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d1a2c
	if (ctx.cr6.eq) goto loc_823D1A2C;
	// bl 0x82581e38
	ctx.lr = 0x823D1A2C;
	sub_82581E38(ctx, base);
loc_823D1A2C:
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

__attribute__((alias("__imp__sub_823D1A48"))) PPC_WEAK_FUNC(sub_823D1A48);
PPC_FUNC_IMPL(__imp__sub_823D1A48) {
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
	// lwz r4,156(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823d1aa8
	if (ctx.cr6.eq) goto loc_823D1AA8;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d1aa8
	if (ctx.cr6.eq) goto loc_823D1AA8;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D1A8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// lvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_823D1AA8:
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

__attribute__((alias("__imp__sub_823D1AC0"))) PPC_WEAK_FUNC(sub_823D1AC0);
PPC_FUNC_IMPL(__imp__sub_823D1AC0) {
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
	ctx.lr = 0x823D1AF0;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d1b1c
	if (ctx.cr6.eq) goto loc_823D1B1C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,-520
	ctx.r10.s64 = ctx.r11.s64 + -520;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x823d1b20
	goto loc_823D1B20;
loc_823D1B1C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823D1B20:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x823d1b54
	if (!ctx.cr6.eq) goto loc_823D1B54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82186190
	ctx.lr = 0x823D1B34;
	sub_82186190(ctx, base);
	// lis r10,-32076
	ctx.r10.s64 = -2102132736;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,2788
	ctx.r11.s64 = ctx.r11.s64 + 2788;
	// lwz r10,24268(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24268);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x821e0968
	ctx.lr = 0x823D1B54;
	sub_821E0968(ctx, base);
loc_823D1B54:
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

__attribute__((alias("__imp__sub_823D1B70"))) PPC_WEAK_FUNC(sub_823D1B70);
PPC_FUNC_IMPL(__imp__sub_823D1B70) {
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
	ctx.lr = 0x823D1BA0;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d1bcc
	if (ctx.cr6.eq) goto loc_823D1BCC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,-500
	ctx.r10.s64 = ctx.r11.s64 + -500;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x823d1bd0
	goto loc_823D1BD0;
loc_823D1BCC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823D1BD0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x823d1c1c
	if (!ctx.cr6.eq) goto loc_823D1C1C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823d1bfc
	if (ctx.cr6.eq) goto loc_823D1BFC;
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
	ctx.lr = 0x823D1BFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823D1BFC:
	// lis r10,-32076
	ctx.r10.s64 = -2102132736;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,2788
	ctx.r11.s64 = ctx.r11.s64 + 2788;
	// lwz r10,24268(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24268);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x821e0968
	ctx.lr = 0x823D1C1C;
	sub_821E0968(ctx, base);
loc_823D1C1C:
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

__attribute__((alias("__imp__sub_823D1C38"))) PPC_WEAK_FUNC(sub_823D1C38);
PPC_FUNC_IMPL(__imp__sub_823D1C38) {
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
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x823d1c7c
	if (!ctx.cr6.lt) goto loc_823D1C7C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,-18444
	ctx.r4.s64 = ctx.r11.s64 + -18444;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823d19b0
	ctx.lr = 0x823D1C70;
	sub_823D19B0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_823D1C7C:
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

__attribute__((alias("__imp__sub_823D1C90"))) PPC_WEAK_FUNC(sub_823D1C90);
PPC_FUNC_IMPL(__imp__sub_823D1C90) {
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
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x823d1e20
	if (!ctx.cr6.lt) goto loc_823D1E20;
	// lwz r3,148(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d1ce4
	if (ctx.cr6.eq) goto loc_823D1CE4;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d1ce4
	if (ctx.cr6.eq) goto loc_823D1CE4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82442638
	ctx.lr = 0x823D1CDC;
	sub_82442638(ctx, base);
	// lwz r3,148(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// bl 0x82442df0
	ctx.lr = 0x823D1CE4;
	sub_82442DF0(ctx, base);
loc_823D1CE4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-484
	ctx.r4.s64 = ctx.r11.s64 + -484;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823d19b0
	ctx.lr = 0x823D1D00;
	sub_823D19B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82581078
	ctx.lr = 0x823D1D08;
	sub_82581078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d1e14
	if (ctx.cr6.eq) goto loc_823D1E14;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D1D20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823d1e14
	if (ctx.cr6.eq) goto loc_823D1E14;
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d1e14
	if (ctx.cr6.eq) goto loc_823D1E14;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d1e14
	if (ctx.cr6.eq) goto loc_823D1E14;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lhz r4,316(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 316);
	// addi r5,r11,-15900
	ctx.r5.s64 = ctx.r11.s64 + -15900;
	// bl 0x825fddf8
	ctx.lr = 0x823D1D58;
	sub_825FDDF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825fe028
	ctx.lr = 0x823D1D68;
	sub_825FE028(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d1e14
	if (ctx.cr6.eq) goto loc_823D1E14;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d1e04
	if (ctx.cr6.eq) goto loc_823D1E04;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82186158
	ctx.lr = 0x823D1D8C;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d1da4
	if (ctx.cr6.eq) goto loc_823D1DA4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8261ff08
	ctx.lr = 0x823D1D9C;
	sub_8261FF08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823d1da8
	goto loc_823D1DA8;
loc_823D1DA4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823D1DA8:
	// addi r31,r30,320
	ctx.r31.s64 = ctx.r30.s64 + 320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822775a0
	ctx.lr = 0x823D1DB4;
	sub_822775A0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d1e04
	if (ctx.cr6.eq) goto loc_823D1E04;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d1e04
	if (ctx.cr6.eq) goto loc_823D1E04;
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// beq cr6,0x823d1de8
	if (ctx.cr6.eq) goto loc_823D1DE8;
	// bl 0x82659610
	ctx.lr = 0x823D1DE8;
	sub_82659610(ctx, base);
loc_823D1DE8:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825944c8
	ctx.lr = 0x823D1DF4;
	sub_825944C8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d1e04
	if (ctx.cr6.eq) goto loc_823D1E04;
	// bl 0x82581e38
	ctx.lr = 0x823D1E04;
	sub_82581E38(ctx, base);
loc_823D1E04:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d1e14
	if (ctx.cr6.eq) goto loc_823D1E14;
	// bl 0x82631328
	ctx.lr = 0x823D1E14;
	sub_82631328(ctx, base);
loc_823D1E14:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r11.u32);
	// stw r11,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r11.u32);
loc_823D1E20:
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

__attribute__((alias("__imp__sub_823D1E38"))) PPC_WEAK_FUNC(sub_823D1E38);
PPC_FUNC_IMPL(__imp__sub_823D1E38) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x823d2008
	if (!ctx.cr6.lt) goto loc_823D2008;
	// lwz r4,156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D1E78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r31,288
	ctx.r11.s64 = ctx.r31.s64 + 288;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d1eb8
	if (ctx.cr6.eq) goto loc_823D1EB8;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d1eb8
	if (ctx.cr6.eq) goto loc_823D1EB8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,8156(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8156);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82442638
	ctx.lr = 0x823D1EB0;
	sub_82442638(ctx, base);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x82442df0
	ctx.lr = 0x823D1EB8;
	sub_82442DF0(ctx, base);
loc_823D1EB8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-460
	ctx.r4.s64 = ctx.r11.s64 + -460;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823d19b0
	ctx.lr = 0x823D1ED8;
	sub_823D19B0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,5424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5424);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,304(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// bl 0x82581078
	ctx.lr = 0x823D1EF0;
	sub_82581078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d1ffc
	if (ctx.cr6.eq) goto loc_823D1FFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D1F08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823d1ffc
	if (ctx.cr6.eq) goto loc_823D1FFC;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d1ffc
	if (ctx.cr6.eq) goto loc_823D1FFC;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d1ffc
	if (ctx.cr6.eq) goto loc_823D1FFC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lhz r4,316(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 316);
	// addi r5,r11,-476
	ctx.r5.s64 = ctx.r11.s64 + -476;
	// bl 0x825fddf8
	ctx.lr = 0x823D1F40;
	sub_825FDDF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825fe028
	ctx.lr = 0x823D1F50;
	sub_825FE028(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d1ffc
	if (ctx.cr6.eq) goto loc_823D1FFC;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d1fec
	if (ctx.cr6.eq) goto loc_823D1FEC;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82186158
	ctx.lr = 0x823D1F74;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d1f8c
	if (ctx.cr6.eq) goto loc_823D1F8C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8261ff08
	ctx.lr = 0x823D1F84;
	sub_8261FF08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823d1f90
	goto loc_823D1F90;
loc_823D1F8C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823D1F90:
	// addi r30,r31,320
	ctx.r30.s64 = ctx.r31.s64 + 320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822775a0
	ctx.lr = 0x823D1F9C;
	sub_822775A0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d1fec
	if (ctx.cr6.eq) goto loc_823D1FEC;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d1fec
	if (ctx.cr6.eq) goto loc_823D1FEC;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// beq cr6,0x823d1fd0
	if (ctx.cr6.eq) goto loc_823D1FD0;
	// bl 0x82659610
	ctx.lr = 0x823D1FD0;
	sub_82659610(ctx, base);
loc_823D1FD0:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825944c8
	ctx.lr = 0x823D1FDC;
	sub_825944C8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d1fec
	if (ctx.cr6.eq) goto loc_823D1FEC;
	// bl 0x82581e38
	ctx.lr = 0x823D1FEC;
	sub_82581E38(ctx, base);
loc_823D1FEC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d1ffc
	if (ctx.cr6.eq) goto loc_823D1FFC;
	// bl 0x82631328
	ctx.lr = 0x823D1FFC;
	sub_82631328(ctx, base);
loc_823D1FFC:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_823D2008:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_823D2028"))) PPC_WEAK_FUNC(sub_823D2028);
PPC_FUNC_IMPL(__imp__sub_823D2028) {
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
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bge cr6,0x823d20bc
	if (!ctx.cr6.lt) goto loc_823D20BC;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d2078
	if (ctx.cr6.eq) goto loc_823D2078;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d2078
	if (ctx.cr6.eq) goto loc_823D2078;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,8156(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8156);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82442638
	ctx.lr = 0x823D2070;
	sub_82442638(ctx, base);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x82442df0
	ctx.lr = 0x823D2078;
	sub_82442DF0(ctx, base);
loc_823D2078:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,-452
	ctx.r4.s64 = ctx.r11.s64 + -452;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823d19b0
	ctx.lr = 0x823D2094;
	sub_823D19B0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r10.u32);
	// beq cr6,0x823d20b0
	if (ctx.cr6.eq) goto loc_823D20B0;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x82581e38
	ctx.lr = 0x823D20B0;
	sub_82581E38(ctx, base);
loc_823D20B0:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_823D20BC:
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

__attribute__((alias("__imp__sub_823D20D0"))) PPC_WEAK_FUNC(sub_823D20D0);
PPC_FUNC_IMPL(__imp__sub_823D20D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x823D20D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,240(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d2110
	if (ctx.cr6.eq) goto loc_823D2110;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d2110
	if (ctx.cr6.eq) goto loc_823D2110;
	// bl 0x8228f6f0
	ctx.lr = 0x823D2104;
	sub_8228F6F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d2298
	if (!ctx.cr6.eq) goto loc_823D2298;
loc_823D2110:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d1500
	ctx.lr = 0x823D2118;
	sub_823D1500(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823d2298
	if (ctx.cr6.eq) goto loc_823D2298;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82214520
	ctx.lr = 0x823D2130;
	sub_82214520(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d2298
	if (ctx.cr6.eq) goto loc_823D2298;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821eb680
	ctx.lr = 0x823D2140;
	sub_821EB680(ctx, base);
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x823d2160
	if (ctx.cr6.eq) goto loc_823D2160;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// b 0x823d2188
	goto loc_823D2188;
loc_823D2160:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823d63c0
	ctx.lr = 0x823D2168;
	sub_823D63C0(ctx, base);
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bge cr6,0x823d2188
	if (!ctx.cr6.lt) goto loc_823D2188;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r11.u32);
loc_823D2188:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822102c8
	ctx.lr = 0x823D2190;
	sub_822102C8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// bl 0x82595500
	ctx.lr = 0x823D21A4;
	sub_82595500(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d21c8
	if (ctx.cr6.eq) goto loc_823D21C8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x823d21d4
	goto loc_823D21D4;
loc_823D21C8:
	// lwz r4,156(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_823D21D4:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D21DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x823d6398
	ctx.lr = 0x823D21F0;
	sub_823D6398(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,156(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// stfs f1,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D2228;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x825d2bc0
	ctx.lr = 0x823D2234;
	sub_825D2BC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82166e50
	ctx.lr = 0x823D2244;
	sub_82166E50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825951f0
	ctx.lr = 0x823D2264;
	sub_825951F0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D2280;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82595180
	ctx.lr = 0x823D2288;
	sub_82595180(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d2298
	if (ctx.cr6.eq) goto loc_823D2298;
	// bl 0x82581e38
	ctx.lr = 0x823D2298;
	sub_82581E38(ctx, base);
loc_823D2298:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D22A0"))) PPC_WEAK_FUNC(sub_823D22A0);
PPC_FUNC_IMPL(__imp__sub_823D22A0) {
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
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r10,4104
	ctx.r10.u64 = ctx.r10.u64 | 4104;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x823d2344
	if (ctx.cr6.gt) goto loc_823D2344;
	// beq cr6,0x823d2334
	if (ctx.cr6.eq) goto loc_823D2334;
	// addis r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -65536;
	// addic. r11,r11,-7
	ctx.xer.ca = ctx.r11.u32 > 6;
	ctx.r11.s64 = ctx.r11.s64 + -7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823d2324
	if (ctx.cr0.eq) goto loc_823D2324;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x823d22fc
	if (ctx.cr6.eq) goto loc_823D22FC;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x823d2360
	if (!ctx.cr6.eq) goto loc_823D2360;
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
	// bl 0x823d20d0
	ctx.lr = 0x823D22F8;
	sub_823D20D0(ctx, base);
	// b 0x823d23fc
	goto loc_823D23FC;
loc_823D22FC:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r31,-32
	ctx.r11.s64 = ctx.r31.s64 + -32;
	// rlwinm r10,r10,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d23fc
	if (ctx.cr6.eq) goto loc_823D23FC;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823d23fc
	if (ctx.cr6.eq) goto loc_823D23FC;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// b 0x823d23ec
	goto loc_823D23EC;
loc_823D2324:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
	// bl 0x823d1a48
	ctx.lr = 0x823D2330;
	sub_823D1A48(ctx, base);
	// b 0x823d23fc
	goto loc_823D23FC;
loc_823D2334:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
	// bl 0x823d17e0
	ctx.lr = 0x823D2340;
	sub_823D17E0(ctx, base);
	// b 0x823d23fc
	goto loc_823D23FC;
loc_823D2344:
	// addis r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -65536;
	// addic. r11,r11,-4105
	ctx.xer.ca = ctx.r11.u32 > 4104;
	ctx.r11.s64 = ctx.r11.s64 + -4105;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823d23c8
	if (ctx.cr0.eq) goto loc_823D23C8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x823d23b8
	if (ctx.cr6.eq) goto loc_823D23B8;
	// cmplwi cr6,r11,28709
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28709, ctx.xer);
	// beq cr6,0x823d23ac
	if (ctx.cr6.eq) goto loc_823D23AC;
loc_823D2360:
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d239c
	if (ctx.cr6.eq) goto loc_823D239C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d239c
	if (ctx.cr6.eq) goto loc_823D239C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D2390;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d23fc
	if (!ctx.cr6.eq) goto loc_823D23FC;
loc_823D239C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d1508
	ctx.lr = 0x823D23A8;
	sub_823D1508(ctx, base);
	// b 0x823d2400
	goto loc_823D2400;
loc_823D23AC:
	// addi r11,r31,-32
	ctx.r11.s64 = ctx.r31.s64 + -32;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// b 0x823d23ec
	goto loc_823D23EC;
loc_823D23B8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
	// bl 0x823d1838
	ctx.lr = 0x823D23C4;
	sub_823D1838(ctx, base);
	// b 0x823d23fc
	goto loc_823D23FC;
loc_823D23C8:
	// addi r11,r31,-32
	ctx.r11.s64 = ctx.r31.s64 + -32;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,308(r11)
	PPC_STORE_U8(ctx.r11.u32 + 308, ctx.r10.u8);
	// lis r10,-32079
	ctx.r10.s64 = -2102329344;
	// lwz r10,2596(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2596);
	// stw r10,312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 312, ctx.r10.u32);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x823d23fc
	if (ctx.cr6.eq) goto loc_823D23FC;
loc_823D23EC:
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bge cr6,0x823d23fc
	if (!ctx.cr6.lt) goto loc_823D23FC;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
loc_823D23FC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_823D2400:
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

__attribute__((alias("__imp__sub_823D2418"))) PPC_WEAK_FUNC(sub_823D2418);
PPC_FUNC_IMPL(__imp__sub_823D2418) {
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
	// bl 0x823d1ac0
	ctx.lr = 0x823D2448;
	sub_823D1AC0(ctx, base);
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
	// beq cr6,0x823d2474
	if (ctx.cr6.eq) goto loc_823D2474;
	// bl 0x821601b8
	ctx.lr = 0x823D2474;
	sub_821601B8(ctx, base);
loc_823D2474:
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

__attribute__((alias("__imp__sub_823D2488"))) PPC_WEAK_FUNC(sub_823D2488);
PPC_FUNC_IMPL(__imp__sub_823D2488) {
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
	// bl 0x823d1b70
	ctx.lr = 0x823D24B8;
	sub_823D1B70(ctx, base);
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
	// beq cr6,0x823d24e4
	if (ctx.cr6.eq) goto loc_823D24E4;
	// bl 0x821601b8
	ctx.lr = 0x823D24E4;
	sub_821601B8(ctx, base);
loc_823D24E4:
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

__attribute__((alias("__imp__sub_823D24F8"))) PPC_WEAK_FUNC(sub_823D24F8);
PPC_FUNC_IMPL(__imp__sub_823D24F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x823D2500;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x823d1620
	ctx.lr = 0x823D2514;
	sub_823D1620(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d2be4
	if (ctx.cr6.eq) goto loc_823D2BE4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82581078
	ctx.lr = 0x823D2528;
	sub_82581078(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r3,240
	ctx.r3.s64 = 240;
	// bl 0x82186158
	ctx.lr = 0x823D2534;
	sub_82186158(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,8016
	ctx.r29.s64 = ctx.r11.s64 + 8016;
	// beq cr6,0x823d2554
	if (ctx.cr6.eq) goto loc_823D2554;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82594ed0
	ctx.lr = 0x823D254C;
	sub_82594ED0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x823d2558
	goto loc_823D2558;
loc_823D2554:
	// li r31,0
	ctx.r31.s64 = 0;
loc_823D2558:
	// addi r30,r26,128
	ctx.r30.s64 = ctx.r26.s64 + 128;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823d256c
	if (ctx.cr6.eq) goto loc_823D256C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x823D256C;
	sub_82659610(ctx, base);
loc_823D256C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d2580
	if (ctx.cr6.eq) goto loc_823D2580;
	// bl 0x82581e38
	ctx.lr = 0x823D2580;
	sub_82581E38(ctx, base);
loc_823D2580:
	// li r3,240
	ctx.r3.s64 = 240;
	// bl 0x82186158
	ctx.lr = 0x823D2588;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d25a0
	if (ctx.cr6.eq) goto loc_823D25A0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82594ed0
	ctx.lr = 0x823D2598;
	sub_82594ED0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x823d25a4
	goto loc_823D25A4;
loc_823D25A0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_823D25A4:
	// addi r27,r26,132
	ctx.r27.s64 = ctx.r26.s64 + 132;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823d25b8
	if (ctx.cr6.eq) goto loc_823D25B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x823D25B8;
	sub_82659610(ctx, base);
loc_823D25B8:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d25cc
	if (ctx.cr6.eq) goto loc_823D25CC;
	// bl 0x82581e38
	ctx.lr = 0x823D25CC;
	sub_82581E38(ctx, base);
loc_823D25CC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x823d2b78
	if (ctx.cr6.eq) goto loc_823D2B78;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d2b78
	if (ctx.cr6.eq) goto loc_823D2B78;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d2b78
	if (ctx.cr6.eq) goto loc_823D2B78;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d2b78
	if (ctx.cr6.eq) goto loc_823D2B78;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d2b78
	if (ctx.cr6.eq) goto loc_823D2B78;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x825d2bc0
	ctx.lr = 0x823D2620;
	sub_825D2BC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r28,16
	ctx.r4.s64 = ctx.r28.s64 + 16;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x825d2cb0
	ctx.lr = 0x823D2630;
	sub_825D2CB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82168c48
	ctx.lr = 0x823D2640;
	sub_82168C48(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82594698
	ctx.lr = 0x823D264C;
	sub_82594698(ctx, base);
	// lwz r3,32(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// bl 0x823d6390
	ctx.lr = 0x823D2654;
	sub_823D6390(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fneg f2,f0
	ctx.f2.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x825d2cf0
	ctx.lr = 0x823D266C;
	sub_825D2CF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82594698
	ctx.lr = 0x823D2678;
	sub_82594698(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825949f0
	ctx.lr = 0x823D2684;
	sub_825949F0(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D269C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r31,r26,108
	ctx.r31.s64 = ctx.r26.s64 + 108;
	// addi r5,r11,-17360
	ctx.r5.s64 = ctx.r11.s64 + -17360;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82617e68
	ctx.lr = 0x823D26B4;
	sub_82617E68(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823d26fc
	if (ctx.cr6.eq) goto loc_823D26FC;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d26fc
	if (ctx.cr6.eq) goto loc_823D26FC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82598548
	ctx.lr = 0x823D26E0;
	sub_82598548(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r26,120
	ctx.r3.s64 = ctx.r26.s64 + 120;
	// bl 0x823032b8
	ctx.lr = 0x823D26EC;
	sub_823032B8(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d26fc
	if (ctx.cr6.eq) goto loc_823D26FC;
	// bl 0x82581e38
	ctx.lr = 0x823D26FC;
	sub_82581E38(ctx, base);
loc_823D26FC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,-12640
	ctx.r5.s64 = ctx.r11.s64 + -12640;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82617e68
	ctx.lr = 0x823D2710;
	sub_82617E68(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823d283c
	if (ctx.cr6.eq) goto loc_823D283C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d283c
	if (ctx.cr6.eq) goto loc_823D283C;
	// lwz r11,120(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d283c
	if (ctx.cr6.eq) goto loc_823D283C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d283c
	if (ctx.cr6.eq) goto loc_823D283C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82598548
	ctx.lr = 0x823D2758;
	sub_82598548(ctx, base);
	// addi r29,r26,124
	ctx.r29.s64 = ctx.r26.s64 + 124;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823032b8
	ctx.lr = 0x823D2768;
	sub_823032B8(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d2778
	if (ctx.cr6.eq) goto loc_823D2778;
	// bl 0x82581e38
	ctx.lr = 0x823D2778;
	sub_82581E38(ctx, base);
loc_823D2778:
	// lwz r11,120(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 120);
	// lwz r31,36(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823d28a8
	if (ctx.cr6.eq) goto loc_823D28A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x823D2790;
	sub_82659610(ctx, base);
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
loc_823D2798:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// xori r30,r11,1
	ctx.r30.u64 = ctx.r11.u64 ^ 1;
	// beq cr6,0x823d27b8
	if (ctx.cr6.eq) goto loc_823D27B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581e38
	ctx.lr = 0x823D27B8;
	sub_82581E38(ctx, base);
loc_823D27B8:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d283c
	if (ctx.cr6.eq) goto loc_823D283C;
	// lwz r11,120(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 120);
	// lwz r31,36(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823d27dc
	if (ctx.cr6.eq) goto loc_823D27DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x823D27DC;
	sub_82659610(ctx, base);
loc_823D27DC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-13440
	ctx.r4.s64 = ctx.r11.s64 + -13440;
	// bl 0x82594020
	ctx.lr = 0x823D27EC;
	sub_82594020(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823d2800
	if (ctx.cr6.eq) goto loc_823D2800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581e38
	ctx.lr = 0x823D2800;
	sub_82581E38(ctx, base);
loc_823D2800:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823d283c
	if (ctx.cr6.eq) goto loc_823D283C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// beq cr6,0x823d2820
	if (ctx.cr6.eq) goto loc_823D2820;
	// bl 0x82659610
	ctx.lr = 0x823D2820;
	sub_82659610(ctx, base);
loc_823D2820:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825949f0
	ctx.lr = 0x823D282C;
	sub_825949F0(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d283c
	if (ctx.cr6.eq) goto loc_823D283C;
	// bl 0x82581e38
	ctx.lr = 0x823D283C;
	sub_82581E38(ctx, base);
loc_823D283C:
	// addi r29,r26,120
	ctx.r29.s64 = ctx.r26.s64 + 120;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d2af4
	if (ctx.cr6.eq) goto loc_823D2AF4;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d2af4
	if (ctx.cr6.eq) goto loc_823D2AF4;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// beq cr6,0x823d2870
	if (ctx.cr6.eq) goto loc_823D2870;
	// bl 0x82659610
	ctx.lr = 0x823D2870;
	sub_82659610(ctx, base);
loc_823D2870:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x825949f0
	ctx.lr = 0x823D287C;
	sub_825949F0(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d288c
	if (ctx.cr6.eq) goto loc_823D288C;
	// bl 0x82581e38
	ctx.lr = 0x823D288C;
	sub_82581E38(ctx, base);
loc_823D288C:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82186158
	ctx.lr = 0x823D2894;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d28b0
	if (ctx.cr6.eq) goto loc_823D28B0;
	// bl 0x82597e30
	ctx.lr = 0x823D28A0;
	sub_82597E30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823d28b4
	goto loc_823D28B4;
loc_823D28A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823d2798
	goto loc_823D2798;
loc_823D28B0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823D28B4:
	// addi r31,r26,136
	ctx.r31.s64 = ctx.r26.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82303258
	ctx.lr = 0x823D28C0;
	sub_82303258(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d2934
	if (ctx.cr6.eq) goto loc_823D2934;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d2934
	if (ctx.cr6.eq) goto loc_823D2934;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82598110
	ctx.lr = 0x823D28E4;
	sub_82598110(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82597bf8
	ctx.lr = 0x823D28F0;
	sub_82597BF8(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D290C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D2924;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d2934
	if (ctx.cr6.eq) goto loc_823D2934;
	// bl 0x821601b8
	ctx.lr = 0x823D2934;
	sub_821601B8(ctx, base);
loc_823D2934:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82186158
	ctx.lr = 0x823D293C;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d2950
	if (ctx.cr6.eq) goto loc_823D2950;
	// bl 0x82597e30
	ctx.lr = 0x823D2948;
	sub_82597E30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823d2954
	goto loc_823D2954;
loc_823D2950:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823D2954:
	// addi r30,r26,140
	ctx.r30.s64 = ctx.r26.s64 + 140;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82303258
	ctx.lr = 0x823D2960;
	sub_82303258(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d2a00
	if (ctx.cr6.eq) goto loc_823D2A00;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d2a00
	if (ctx.cr6.eq) goto loc_823D2A00;
	// addi r31,r26,124
	ctx.r31.s64 = ctx.r26.s64 + 124;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82598110
	ctx.lr = 0x823D2988;
	sub_82598110(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// beq cr6,0x823d29a0
	if (ctx.cr6.eq) goto loc_823D29A0;
	// bl 0x82659610
	ctx.lr = 0x823D29A0;
	sub_82659610(ctx, base);
loc_823D29A0:
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82597bf8
	ctx.lr = 0x823D29AC;
	sub_82597BF8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d29bc
	if (ctx.cr6.eq) goto loc_823D29BC;
	// bl 0x82581e38
	ctx.lr = 0x823D29BC;
	sub_82581E38(ctx, base);
loc_823D29BC:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D29D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D29F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d2a00
	if (ctx.cr6.eq) goto loc_823D2A00;
	// bl 0x821601b8
	ctx.lr = 0x823D2A00;
	sub_821601B8(ctx, base);
loc_823D2A00:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82186158
	ctx.lr = 0x823D2A08;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d2a1c
	if (ctx.cr6.eq) goto loc_823D2A1C;
	// bl 0x82597e30
	ctx.lr = 0x823D2A14;
	sub_82597E30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823d2a20
	goto loc_823D2A20;
loc_823D2A1C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823D2A20:
	// addi r31,r26,144
	ctx.r31.s64 = ctx.r26.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82303258
	ctx.lr = 0x823D2A2C;
	sub_82303258(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d2aa0
	if (ctx.cr6.eq) goto loc_823D2AA0;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d2aa0
	if (ctx.cr6.eq) goto loc_823D2AA0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82598110
	ctx.lr = 0x823D2A50;
	sub_82598110(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82597bf8
	ctx.lr = 0x823D2A5C;
	sub_82597BF8(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D2A78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D2A90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d2aa0
	if (ctx.cr6.eq) goto loc_823D2AA0;
	// bl 0x821601b8
	ctx.lr = 0x823D2AA0;
	sub_821601B8(ctx, base);
loc_823D2AA0:
	// lwz r11,148(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d2af4
	if (ctx.cr6.eq) goto loc_823D2AF4;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d2af4
	if (ctx.cr6.eq) goto loc_823D2AF4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// beq cr6,0x823d2ad4
	if (ctx.cr6.eq) goto loc_823D2AD4;
	// bl 0x82659610
	ctx.lr = 0x823D2AD4;
	sub_82659610(ctx, base);
loc_823D2AD4:
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// lwz r3,148(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 148);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82442648
	ctx.lr = 0x823D2AE4;
	sub_82442648(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d2af4
	if (ctx.cr6.eq) goto loc_823D2AF4;
	// bl 0x82581e38
	ctx.lr = 0x823D2AF4;
	sub_82581E38(ctx, base);
loc_823D2AF4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d2bc4
	if (ctx.cr6.eq) goto loc_823D2BC4;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d2bc4
	if (ctx.cr6.eq) goto loc_823D2BC4;
	// lwz r11,148(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d2bc4
	if (ctx.cr6.eq) goto loc_823D2BC4;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d2bc4
	if (ctx.cr6.eq) goto loc_823D2BC4;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D2B40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d2b58
	if (ctx.cr6.eq) goto loc_823D2B58;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-444
	ctx.r4.s64 = ctx.r11.s64 + -444;
	// bl 0x825fc9f8
	ctx.lr = 0x823D2B54;
	sub_825FC9F8(ctx, base);
	// sth r3,316(r26)
	PPC_STORE_U16(ctx.r26.u32 + 316, ctx.r3.u16);
loc_823D2B58:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d2b68
	if (ctx.cr6.eq) goto loc_823D2B68;
	// bl 0x82581e38
	ctx.lr = 0x823D2B68;
	sub_82581E38(ctx, base);
loc_823D2B68:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d2b78
	if (ctx.cr6.eq) goto loc_823D2B78;
	// bl 0x82581e38
	ctx.lr = 0x823D2B78;
	sub_82581E38(ctx, base);
loc_823D2B78:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f31,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x82186158
	ctx.lr = 0x823D2BA8;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d2bf4
	if (ctx.cr6.eq) goto loc_823D2BF4;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x823d80a0
	ctx.lr = 0x823D2BBC;
	sub_823D80A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823d2bf8
	goto loc_823D2BF8;
loc_823D2BC4:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d2bd4
	if (ctx.cr6.eq) goto loc_823D2BD4;
	// bl 0x82581e38
	ctx.lr = 0x823D2BD4;
	sub_82581E38(ctx, base);
loc_823D2BD4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d2be4
	if (ctx.cr6.eq) goto loc_823D2BE4;
	// bl 0x82581e38
	ctx.lr = 0x823D2BE4;
	sub_82581E38(ctx, base);
loc_823D2BE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
loc_823D2BF4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823D2BF8:
	// addi r3,r26,324
	ctx.r3.s64 = ctx.r26.s64 + 324;
	// bl 0x823d2418
	ctx.lr = 0x823D2C00;
	sub_823D2418(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D2C10"))) PPC_WEAK_FUNC(sub_823D2C10);
PPC_FUNC_IMPL(__imp__sub_823D2C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x823D2C18;
	__savegprlr_27(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// bl 0x823d1500
	ctx.lr = 0x823D2C30;
	sub_823D1500(ctx, base);
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D2C4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8218c228
	ctx.lr = 0x823D2C58;
	sub_8218C228(ctx, base);
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D2C74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x825d1e60
	ctx.lr = 0x823D2C80;
	sub_825D1E60(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r6,r31,32
	ctx.r6.s64 = ctx.r31.s64 + 32;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lvx128 v0,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x823d66f8
	ctx.lr = 0x823D2CB0;
	sub_823D66F8(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823d2cc4
	if (ctx.cr6.eq) goto loc_823D2CC4;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82659610
	ctx.lr = 0x823D2CC4;
	sub_82659610(ctx, base);
loc_823D2CC4:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d2cdc
	if (ctx.cr6.eq) goto loc_823D2CDC;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82581e38
	ctx.lr = 0x823D2CDC;
	sub_82581E38(ctx, base);
loc_823D2CDC:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d2cf0
	if (ctx.cr6.eq) goto loc_823D2CF0;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82581e38
	ctx.lr = 0x823D2CF0;
	sub_82581E38(ctx, base);
loc_823D2CF0:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d2ddc
	if (ctx.cr6.eq) goto loc_823D2DDC;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d2ddc
	if (ctx.cr6.eq) goto loc_823D2DDC;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82186158
	ctx.lr = 0x823D2D14;
	sub_82186158(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823d2d38
	if (ctx.cr6.eq) goto loc_823D2D38;
	// bl 0x82595b78
	ctx.lr = 0x823D2D24;
	sub_82595B78(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-540
	ctx.r11.s64 = ctx.r11.s64 + -540;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x823d2d3c
	goto loc_823D2D3C;
loc_823D2D38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823D2D3C:
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d2d4c
	if (ctx.cr6.eq) goto loc_823D2D4C;
	// bl 0x82659610
	ctx.lr = 0x823D2D4C;
	sub_82659610(ctx, base);
loc_823D2D4C:
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D2D64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d2d74
	if (ctx.cr6.eq) goto loc_823D2D74;
	// bl 0x82581e38
	ctx.lr = 0x823D2D74;
	sub_82581E38(ctx, base);
loc_823D2D74:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x823d0e88
	ctx.lr = 0x823D2D80;
	sub_823D0E88(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D2D9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,60(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D2DB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d2dc8
	if (ctx.cr6.eq) goto loc_823D2DC8;
	// bl 0x82581e38
	ctx.lr = 0x823D2DC8;
	sub_82581E38(ctx, base);
loc_823D2DC8:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d2dd8
	if (ctx.cr6.eq) goto loc_823D2DD8;
	// bl 0x821601b8
	ctx.lr = 0x823D2DD8;
	sub_821601B8(ctx, base);
loc_823D2DD8:
	// li r28,1
	ctx.r28.s64 = 1;
loc_823D2DDC:
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82186158
	ctx.lr = 0x823D2DE4;
	sub_82186158(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823d2e38
	if (ctx.cr6.eq) goto loc_823D2E38;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823d0e88
	ctx.lr = 0x823D2DFC;
	sub_823D0E88(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// beq cr6,0x823d2e24
	if (ctx.cr6.eq) goto loc_823D2E24;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_823D2E24:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82292510
	ctx.lr = 0x823D2E30;
	sub_82292510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823d2e3c
	goto loc_823D2E3C;
loc_823D2E38:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823D2E3C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r31,r31,240
	ctx.r31.s64 = ctx.r31.s64 + 240;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x823d1b70
	ctx.lr = 0x823D2E5C;
	sub_823D1B70(ctx, base);
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
	// beq cr6,0x823d2e88
	if (ctx.cr6.eq) goto loc_823D2E88;
	// bl 0x821601b8
	ctx.lr = 0x823D2E88;
	sub_821601B8(ctx, base);
loc_823D2E88:
	// clrlwi r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823d2ea4
	if (ctx.cr6.eq) goto loc_823D2EA4;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d2ea4
	if (ctx.cr6.eq) goto loc_823D2EA4;
	// bl 0x821601b8
	ctx.lr = 0x823D2EA4;
	sub_821601B8(ctx, base);
loc_823D2EA4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d2ec4
	if (ctx.cr6.eq) goto loc_823D2EC4;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// clrlwi r3,r28,31
	ctx.r3.u64 = ctx.r28.u32 & 0x1;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d2ec8
	if (!ctx.cr6.eq) goto loc_823D2EC8;
loc_823D2EC4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_823D2EC8:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D2ED0"))) PPC_WEAK_FUNC(sub_823D2ED0);
PPC_FUNC_IMPL(__imp__sub_823D2ED0) {
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
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x823d2f70
	if (!ctx.cr6.lt) goto loc_823D2F70;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d2f20
	if (ctx.cr6.eq) goto loc_823D2F20;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d2f20
	if (ctx.cr6.eq) goto loc_823D2F20;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82442638
	ctx.lr = 0x823D2F18;
	sub_82442638(ctx, base);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x82442df0
	ctx.lr = 0x823D2F20;
	sub_82442DF0(ctx, base);
loc_823D2F20:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,12940
	ctx.r4.s64 = ctx.r11.s64 + 12940;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823d19b0
	ctx.lr = 0x823D2F3C;
	sub_823D19B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d2c10
	ctx.lr = 0x823D2F44;
	sub_823D2C10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d2f5c
	if (ctx.cr6.eq) goto loc_823D2F5C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// b 0x823d2f6c
	goto loc_823D2F6C;
loc_823D2F5C:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x823d2f70
	if (!ctx.cr6.lt) goto loc_823D2F70;
	// li r11,6
	ctx.r11.s64 = 6;
loc_823D2F6C:
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_823D2F70:
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

__attribute__((alias("__imp__sub_823D2F88"))) PPC_WEAK_FUNC(sub_823D2F88);
PPC_FUNC_IMPL(__imp__sub_823D2F88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x823D2F90;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-992(r1)
	ea = -992 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,304(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x823d2fdc
	if (!ctx.cr6.gt) goto loc_823D2FDC;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,304(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x823d2fdc
	if (ctx.cr6.gt) goto loc_823D2FDC;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bge cr6,0x823d2fdc
	if (!ctx.cr6.lt) goto loc_823D2FDC;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_823D2FDC:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x823d302c
	if (ctx.cr6.eq) goto loc_823D302C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x823d3234
	if (ctx.cr6.gt) goto loc_823D3234;
	// lis r12,-32195
	ctx.r12.s64 = -2109931520;
	// addi r12,r12,12304
	ctx.r12.s64 = ctx.r12.s64 + 12304;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_823D3024;
	case 1:
		goto loc_823D3204;
	case 2:
		goto loc_823D3210;
	case 3:
		goto loc_823D321C;
	case 4:
		goto loc_823D3228;
	default:
		__builtin_unreachable();
	}
	// lwz r17,12324(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12324);
	// lwz r17,12804(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12804);
	// lwz r17,12816(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12816);
	// lwz r17,12828(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12828);
	// lwz r17,12840(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12840);
loc_823D3024:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d1c38
	ctx.lr = 0x823D302C;
	sub_823D1C38(ctx, base);
loc_823D302C:
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d33a8
	if (ctx.cr6.eq) goto loc_823D33A8;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d33a8
	if (ctx.cr6.eq) goto loc_823D33A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D305C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823d33a8
	if (ctx.cr6.eq) goto loc_823D33A8;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d33a8
	if (ctx.cr6.eq) goto loc_823D33A8;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D308C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x823d3258
	if (ctx.cr6.eq) goto loc_823D3258;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x823d33a8
	if (!ctx.cr6.eq) goto loc_823D33A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d1500
	ctx.lr = 0x823D30A8;
	sub_823D1500(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r29,r31,272
	ctx.r29.s64 = ctx.r31.s64 + 272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x82595500
	ctx.lr = 0x823D30C4;
	sub_82595500(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d324c
	if (ctx.cr6.eq) goto loc_823D324C;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D30E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d63a8
	ctx.lr = 0x823D30F0;
	sub_823D63A8(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lwz r3,324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// fmuls f1,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// bl 0x823d83c8
	ctx.lr = 0x823D3104;
	sub_823D83C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d63a0
	ctx.lr = 0x823D310C;
	sub_823D63A0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stfs f31,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f1,136(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d2bc0
	ctx.lr = 0x823D3140;
	sub_825D2BC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82166e50
	ctx.lr = 0x823D3150;
	sub_82166E50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r31,256
	ctx.r4.s64 = ctx.r31.s64 + 256;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d2350
	ctx.lr = 0x823D316C;
	sub_825D2350(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d3bb0
	ctx.lr = 0x823D318C;
	sub_825D3BB0(ctx, base);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D31B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d33a8
	if (ctx.cr6.eq) goto loc_823D33A8;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d33a8
	if (ctx.cr6.eq) goto loc_823D33A8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x825d2bc0
	ctx.lr = 0x823D31DC;
	sub_825D2BC0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x825d2cb0
	ctx.lr = 0x823D31EC;
	sub_825D2CB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82168c48
	ctx.lr = 0x823D31FC;
	sub_82168C48(ctx, base);
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// b 0x823d33a0
	goto loc_823D33A0;
loc_823D3204:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d2ed0
	ctx.lr = 0x823D320C;
	sub_823D2ED0(ctx, base);
	// b 0x823d302c
	goto loc_823D302C;
loc_823D3210:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d1c90
	ctx.lr = 0x823D3218;
	sub_823D1C90(ctx, base);
	// b 0x823d302c
	goto loc_823D302C;
loc_823D321C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d1e38
	ctx.lr = 0x823D3224;
	sub_823D1E38(ctx, base);
	// b 0x823d302c
	goto loc_823D302C;
loc_823D3228:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d2028
	ctx.lr = 0x823D3230;
	sub_823D2028(ctx, base);
	// b 0x823d302c
	goto loc_823D302C;
loc_823D3234:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d1768
	ctx.lr = 0x823D323C;
	sub_823D1768(ctx, base);
	// addi r1,r1,992
	ctx.r1.s64 = ctx.r1.s64 + 992;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_823D324C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d2028
	ctx.lr = 0x823D3254;
	sub_823D2028(ctx, base);
	// b 0x823d33a8
	goto loc_823D33A8;
loc_823D3258:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,6
	ctx.r11.u64 = ctx.r11.u64 | 6;
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// bl 0x823d16c0
	ctx.lr = 0x823D326C;
	sub_823D16C0(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D3284;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x825d2bc0
	ctx.lr = 0x823D3290;
	sub_825D2BC0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x825d2cb0
	ctx.lr = 0x823D32A0;
	sub_825D2CB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82168c48
	ctx.lr = 0x823D32B0;
	sub_82168C48(ctx, base);
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x825d4398
	ctx.lr = 0x823D32BC;
	sub_825D4398(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82166e50
	ctx.lr = 0x823D32CC;
	sub_82166E50(ctx, base);
	// lfs f2,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826e0460
	ctx.lr = 0x823D32D8;
	sub_826E0460(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// lfs f0,3548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x825d35a0
	ctx.lr = 0x823D32F0;
	sub_825D35A0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d2bc0
	ctx.lr = 0x823D3310;
	sub_825D2BC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82168c48
	ctx.lr = 0x823D3320;
	sub_82168C48(ctx, base);
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x825d1e60
	ctx.lr = 0x823D332C;
	sub_825D1E60(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D3354;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d33a8
	if (ctx.cr6.eq) goto loc_823D33A8;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d33a8
	if (ctx.cr6.eq) goto loc_823D33A8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x825d2bc0
	ctx.lr = 0x823D337C;
	sub_825D2BC0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x825d2cb0
	ctx.lr = 0x823D338C;
	sub_825D2CB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82168c48
	ctx.lr = 0x823D339C;
	sub_82168C48(ctx, base);
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
loc_823D33A0:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// bl 0x82594698
	ctx.lr = 0x823D33A8;
	sub_82594698(ctx, base);
loc_823D33A8:
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x824427f0
	ctx.lr = 0x823D33B4;
	sub_824427F0(ctx, base);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x82442860
	ctx.lr = 0x823D33BC;
	sub_82442860(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d3408
	if (ctx.cr6.eq) goto loc_823D3408;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x823d3234
	if (ctx.cr6.gt) goto loc_823D3234;
	// lis r12,-32195
	ctx.r12.s64 = -2109931520;
	// addi r12,r12,13292
	ctx.r12.s64 = ctx.r12.s64 + 13292;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_823D3408;
	case 1:
		goto loc_823D3400;
	case 2:
		goto loc_823D3408;
	case 3:
		goto loc_823D3408;
	case 4:
		goto loc_823D3408;
	default:
		__builtin_unreachable();
	}
	// lwz r17,13320(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13320);
	// lwz r17,13312(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13312);
	// lwz r17,13320(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13320);
	// lwz r17,13320(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13320);
	// lwz r17,13320(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13320);
loc_823D3400:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d2ed0
	ctx.lr = 0x823D3408;
	sub_823D2ED0(ctx, base);
loc_823D3408:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x823d14a0
	ctx.lr = 0x823D3414;
	sub_823D14A0(ctx, base);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x82442d78
	ctx.lr = 0x823D341C;
	sub_82442D78(ctx, base);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x82442628
	ctx.lr = 0x823D3424;
	sub_82442628(ctx, base);
	// addi r1,r1,992
	ctx.r1.s64 = ctx.r1.s64 + 992;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D3438"))) PPC_WEAK_FUNC(sub_823D3438);
PPC_FUNC_IMPL(__imp__sub_823D3438) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x823d1408
	ctx.lr = 0x823D3458;
	sub_823D1408(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-412
	ctx.r11.s64 = ctx.r11.s64 + -412;
	// addi r10,r10,-424
	ctx.r10.s64 = ctx.r10.s64 + -424;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// beq cr6,0x823d3484
	if (ctx.cr6.eq) goto loc_823D3484;
	// bl 0x82659610
	ctx.lr = 0x823D3484;
	sub_82659610(ctx, base);
loc_823D3484:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r3,136
	ctx.r3.s64 = 136;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// bl 0x82186158
	ctx.lr = 0x823D34B4;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d34c8
	if (ctx.cr6.eq) goto loc_823D34C8;
	// bl 0x82442ea8
	ctx.lr = 0x823D34C0;
	sub_82442EA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823d34cc
	goto loc_823D34CC;
loc_823D34C8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823D34CC:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r31,148
	ctx.r11.s64 = ctx.r31.s64 + 148;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stb r30,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r30.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// bl 0x8239ea20
	ctx.lr = 0x823D34E8;
	sub_8239EA20(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823d0e88
	ctx.lr = 0x823D34F8;
	sub_823D0E88(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D3514;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x82446978
	ctx.lr = 0x823D3520;
	sub_82446978(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d3530
	if (ctx.cr6.eq) goto loc_823D3530;
	// bl 0x82581e38
	ctx.lr = 0x823D3530;
	sub_82581E38(ctx, base);
loc_823D3530:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d3540
	if (ctx.cr6.eq) goto loc_823D3540;
	// bl 0x821601b8
	ctx.lr = 0x823D3540;
	sub_821601B8(ctx, base);
loc_823D3540:
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// stw r30,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r30.u32);
	// bl 0x82595090
	ctx.lr = 0x823D3550;
	sub_82595090(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r30,308(r31)
	PPC_STORE_U8(ctx.r31.u32 + 308, ctx.r30.u8);
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,5424(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5424);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// stfs f0,304(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// lwz r11,2596(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2596);
	// sth r10,316(r31)
	PPC_STORE_U16(ctx.r31.u32 + 316, ctx.r10.u16);
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// stw r30,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r30.u32);
	// stw r30,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r30.u32);
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_823D35A0"))) PPC_WEAK_FUNC(sub_823D35A0);
PPC_FUNC_IMPL(__imp__sub_823D35A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x823d3720
	sub_823D3720(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D35A8"))) PPC_WEAK_FUNC(sub_823D35A8);
PPC_FUNC_IMPL(__imp__sub_823D35A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-560
	ctx.r3.s64 = ctx.r11.s64 + -560;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D35B8"))) PPC_WEAK_FUNC(sub_823D35B8);
PPC_FUNC_IMPL(__imp__sub_823D35B8) {
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
	// lwz r3,328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d35e0
	if (ctx.cr6.eq) goto loc_823D35E0;
	// bl 0x821601b8
	ctx.lr = 0x823D35E0;
	sub_821601B8(ctx, base);
loc_823D35E0:
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d35f4
	if (ctx.cr6.eq) goto loc_823D35F4;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x82581e38
	ctx.lr = 0x823D35F4;
	sub_82581E38(ctx, base);
loc_823D35F4:
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// bl 0x82595180
	ctx.lr = 0x823D35FC;
	sub_82595180(ctx, base);
	// lwz r3,244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d360c
	if (ctx.cr6.eq) goto loc_823D360C;
	// bl 0x821601b8
	ctx.lr = 0x823D360C;
	sub_821601B8(ctx, base);
loc_823D360C:
	// addi r30,r31,160
	ctx.r30.s64 = ctx.r31.s64 + 160;
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// bl 0x82595180
	ctx.lr = 0x823D3618;
	sub_82595180(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d3628
	if (ctx.cr6.eq) goto loc_823D3628;
	// bl 0x82581e38
	ctx.lr = 0x823D3628;
	sub_82581E38(ctx, base);
loc_823D3628:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d3638
	if (ctx.cr6.eq) goto loc_823D3638;
	// bl 0x82581e38
	ctx.lr = 0x823D3638;
	sub_82581E38(ctx, base);
loc_823D3638:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d364c
	if (ctx.cr6.eq) goto loc_823D364C;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82581e38
	ctx.lr = 0x823D364C;
	sub_82581E38(ctx, base);
loc_823D364C:
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d365c
	if (ctx.cr6.eq) goto loc_823D365C;
	// bl 0x821601b8
	ctx.lr = 0x823D365C;
	sub_821601B8(ctx, base);
loc_823D365C:
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d366c
	if (ctx.cr6.eq) goto loc_823D366C;
	// bl 0x82581e38
	ctx.lr = 0x823D366C;
	sub_82581E38(ctx, base);
loc_823D366C:
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d367c
	if (ctx.cr6.eq) goto loc_823D367C;
	// bl 0x82581e38
	ctx.lr = 0x823D367C;
	sub_82581E38(ctx, base);
loc_823D367C:
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d368c
	if (ctx.cr6.eq) goto loc_823D368C;
	// bl 0x82581e38
	ctx.lr = 0x823D368C;
	sub_82581E38(ctx, base);
loc_823D368C:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d369c
	if (ctx.cr6.eq) goto loc_823D369C;
	// bl 0x82581e38
	ctx.lr = 0x823D369C;
	sub_82581E38(ctx, base);
loc_823D369C:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d36ac
	if (ctx.cr6.eq) goto loc_823D36AC;
	// bl 0x82581e38
	ctx.lr = 0x823D36AC;
	sub_82581E38(ctx, base);
loc_823D36AC:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d36bc
	if (ctx.cr6.eq) goto loc_823D36BC;
	// bl 0x82581e38
	ctx.lr = 0x823D36BC;
	sub_82581E38(ctx, base);
loc_823D36BC:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d36cc
	if (ctx.cr6.eq) goto loc_823D36CC;
	// bl 0x82581e38
	ctx.lr = 0x823D36CC;
	sub_82581E38(ctx, base);
loc_823D36CC:
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d36dc
	if (ctx.cr6.eq) goto loc_823D36DC;
	// bl 0x82581e38
	ctx.lr = 0x823D36DC;
	sub_82581E38(ctx, base);
loc_823D36DC:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d36ec
	if (ctx.cr6.eq) goto loc_823D36EC;
	// bl 0x82581e38
	ctx.lr = 0x823D36EC;
	sub_82581E38(ctx, base);
loc_823D36EC:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d36fc
	if (ctx.cr6.eq) goto loc_823D36FC;
	// bl 0x82581e38
	ctx.lr = 0x823D36FC;
	sub_82581E38(ctx, base);
loc_823D36FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82160560
	ctx.lr = 0x823D3704;
	sub_82160560(ctx, base);
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

__attribute__((alias("__imp__sub_823D3720"))) PPC_WEAK_FUNC(sub_823D3720);
PPC_FUNC_IMPL(__imp__sub_823D3720) {
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
	// bl 0x823d35b8
	ctx.lr = 0x823D3740;
	sub_823D35B8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d3758
	if (ctx.cr6.eq) goto loc_823D3758;
	// bl 0x82186190
	ctx.lr = 0x823D3754;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823D3758:
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

__attribute__((alias("__imp__sub_823D3770"))) PPC_WEAK_FUNC(sub_823D3770);
PPC_FUNC_IMPL(__imp__sub_823D3770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x823D3778;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,336
	ctx.r3.s64 = 336;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82186158
	ctx.lr = 0x823D3790;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d37dc
	if (ctx.cr6.eq) goto loc_823D37DC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823d3438
	ctx.lr = 0x823D37A4;
	sub_823D3438(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823d37dc
	if (ctx.cr6.eq) goto loc_823D37DC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823d24f8
	ctx.lr = 0x823D37B8;
	sub_823D24F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d37e8
	if (!ctx.cr6.eq) goto loc_823D37E8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D37DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823D37DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_823D37E8:
	// bl 0x823d1c38
	ctx.lr = 0x823D37EC;
	sub_823D1C38(ctx, base);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x82442d78
	ctx.lr = 0x823D37F4;
	sub_82442D78(ctx, base);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x82442628
	ctx.lr = 0x823D37FC;
	sub_82442628(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D3808"))) PPC_WEAK_FUNC(sub_823D3808);
PPC_FUNC_IMPL(__imp__sub_823D3808) {
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
	// bl 0x82595b78
	ctx.lr = 0x823D3820;
	sub_82595B78(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-376
	ctx.r11.s64 = ctx.r11.s64 + -376;
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

__attribute__((alias("__imp__sub_823D3848"))) PPC_WEAK_FUNC(sub_823D3848);
PPC_FUNC_IMPL(__imp__sub_823D3848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-396
	ctx.r3.s64 = ctx.r11.s64 + -396;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D3858"))) PPC_WEAK_FUNC(sub_823D3858);
PPC_FUNC_IMPL(__imp__sub_823D3858) {
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
	// bl 0x823d1110
	ctx.lr = 0x823D3878;
	sub_823D1110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d388c
	if (!ctx.cr6.eq) goto loc_823D388C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823d39d8
	goto loc_823D39D8;
loc_823D388C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r6,r30,32
	ctx.r6.s64 = ctx.r30.s64 + 32;
	// bne cr6,0x823d389c
	if (!ctx.cr6.eq) goto loc_823D389C;
	// li r6,0
	ctx.r6.s64 = 0;
loc_823D389C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x823d66f8
	ctx.lr = 0x823D38AC;
	sub_823D66F8(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823d38c0
	if (ctx.cr6.eq) goto loc_823D38C0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82659610
	ctx.lr = 0x823D38C0;
	sub_82659610(ctx, base);
loc_823D38C0:
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// stw r31,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d38d8
	if (ctx.cr6.eq) goto loc_823D38D8;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82581e38
	ctx.lr = 0x823D38D8;
	sub_82581E38(ctx, base);
loc_823D38D8:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d38ec
	if (ctx.cr6.eq) goto loc_823D38EC;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82581e38
	ctx.lr = 0x823D38EC;
	sub_82581E38(ctx, base);
loc_823D38EC:
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d39d4
	if (ctx.cr6.eq) goto loc_823D39D4;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d39d4
	if (ctx.cr6.eq) goto loc_823D39D4;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82186158
	ctx.lr = 0x823D3910;
	sub_82186158(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823d3934
	if (ctx.cr6.eq) goto loc_823D3934;
	// bl 0x82595b78
	ctx.lr = 0x823D3920;
	sub_82595B78(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-376
	ctx.r11.s64 = ctx.r11.s64 + -376;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x823d3938
	goto loc_823D3938;
loc_823D3934:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823D3938:
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d3948
	if (ctx.cr6.eq) goto loc_823D3948;
	// bl 0x82659610
	ctx.lr = 0x823D3948;
	sub_82659610(ctx, base);
loc_823D3948:
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D3960;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d3970
	if (ctx.cr6.eq) goto loc_823D3970;
	// bl 0x82581e38
	ctx.lr = 0x823D3970;
	sub_82581E38(ctx, base);
loc_823D3970:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823d0e88
	ctx.lr = 0x823D397C;
	sub_823D0E88(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D3998;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,60(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D39B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d39c4
	if (ctx.cr6.eq) goto loc_823D39C4;
	// bl 0x82581e38
	ctx.lr = 0x823D39C4;
	sub_82581E38(ctx, base);
loc_823D39C4:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d39d4
	if (ctx.cr6.eq) goto loc_823D39D4;
	// bl 0x821601b8
	ctx.lr = 0x823D39D4;
	sub_821601B8(ctx, base);
loc_823D39D4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_823D39D8:
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

__attribute__((alias("__imp__sub_823D39F0"))) PPC_WEAK_FUNC(sub_823D39F0);
PPC_FUNC_IMPL(__imp__sub_823D39F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x826c7d38
	ctx.lr = 0x823D3A10;
	sub_826C7D38(ctx, base);
	// bl 0x823d63a0
	ctx.lr = 0x823D3A14;
	sub_823D63A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f0,f1,f31
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D3A50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823D3A60:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x823d3a60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D3A60;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vspltisw v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_set1_epi32(int(0x0)));
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// vupkd3d128 v13,v13,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v13.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v13.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v13 = vTemp;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// vspltw v12,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// vspltw v11,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v13,v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x0));
	// lvx128 v10,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v9,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// vmaddfp v12,v9,v12,v10
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// lvx128 v8,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v7,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// vmaddfp v12,v11,v8,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v10,v0,v7,v12
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vor v0,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vspltw v11,v10,3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0x0));
	// vrefp v12,v11
	simde_mm_store_ps(ctx.v12.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v11.f32)));
	// vnmsubfp v0,v11,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v12,v0,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vnmsubfp v13,v11,v0,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v11,v0,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v11,v12,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vmulfp128 v0,v10,v11
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v11.f32)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D3B08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823d0d00
	ctx.lr = 0x823D3B14;
	sub_823D0D00(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
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

__attribute__((alias("__imp__sub_823D3B30"))) PPC_WEAK_FUNC(sub_823D3B30);
PPC_FUNC_IMPL(__imp__sub_823D3B30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x823D3B38;
	__savegprlr_29(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x826c7d38
	ctx.lr = 0x823D3B48;
	sub_826C7D38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821eb680
	ctx.lr = 0x823D3B54;
	sub_821EB680(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d63c0
	ctx.lr = 0x823D3B5C;
	sub_823D63C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// bl 0x822102c8
	ctx.lr = 0x823D3B70;
	sub_822102C8(ctx, base);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d6398
	ctx.lr = 0x823D3B7C;
	sub_823D6398(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,104(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D3BB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x825d2bc0
	ctx.lr = 0x823D3BC0;
	sub_825D2BC0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823D3BD0:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x823d3bd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D3BD0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vspltisw v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// vupkd3d128 v13,v13,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v13.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v13.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v13 = vTemp;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// vspltw v12,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// vspltw v11,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v13,v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x0));
	// lvx128 v10,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lvx128 v9,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// vmaddfp v12,v9,v12,v10
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// lvx128 v8,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v7,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// vmaddfp v12,v11,v8,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// vmaddfp v10,v0,v7,v12
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vor v0,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vspltw v11,v10,3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0x0));
	// vrefp v12,v11
	simde_mm_store_ps(ctx.v12.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v11.f32)));
	// vnmsubfp v0,v11,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v12,v0,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vnmsubfp v13,v11,v0,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v11,v0,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v11,v12,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vmulfp128 v0,v10,v11
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v11.f32)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825951f0
	ctx.lr = 0x823D3C70;
	sub_825951F0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D3C8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82595180
	ctx.lr = 0x823D3C94;
	sub_82595180(ctx, base);
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d3ca4
	if (ctx.cr6.eq) goto loc_823D3CA4;
	// bl 0x82581e38
	ctx.lr = 0x823D3CA4;
	sub_82581E38(ctx, base);
loc_823D3CA4:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D3CB0"))) PPC_WEAK_FUNC(sub_823D3CB0);
PPC_FUNC_IMPL(__imp__sub_823D3CB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x823D3CB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,108
	ctx.r3.s64 = 108;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x82186158
	ctx.lr = 0x823D3CD8;
	sub_82186158(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823d3d40
	if (ctx.cr6.eq) goto loc_823D3D40;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x823d3d08
	if (ctx.cr6.eq) goto loc_823D3D08;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_823D3D08:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x823d0dd0
	ctx.lr = 0x823D3D1C;
	sub_823D0DD0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-344
	ctx.r11.s64 = ctx.r11.s64 + -344;
	// addi r10,r10,-356
	ctx.r10.s64 = ctx.r10.s64 + -356;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// b 0x823d3d44
	goto loc_823D3D44;
loc_823D3D40:
	// li r31,0
	ctx.r31.s64 = 0;
loc_823D3D44:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823d3d8c
	if (ctx.cr6.eq) goto loc_823D3D8C;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d3d8c
	if (ctx.cr6.eq) goto loc_823D3D8C;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823d3d8c
	if (!ctx.cr6.eq) goto loc_823D3D8C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D3D8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823D3D8C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823d3dc4
	if (ctx.cr6.eq) goto loc_823D3DC4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d3858
	ctx.lr = 0x823D3DA0;
	sub_823D3858(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d3dc8
	if (!ctx.cr6.eq) goto loc_823D3DC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D3DC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823D3DC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823D3DC8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D3DD0"))) PPC_WEAK_FUNC(sub_823D3DD0);
PPC_FUNC_IMPL(__imp__sub_823D3DD0) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addis r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -65536;
	// addic. r11,r11,-7
	ctx.xer.ca = ctx.r11.u32 > 6;
	ctx.r11.s64 = ctx.r11.s64 + -7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823d3e24
	if (ctx.cr0.eq) goto loc_823D3E24;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x823d3e08
	if (ctx.cr6.eq) goto loc_823D3E08;
	// bl 0x823d0d60
	ctx.lr = 0x823D3DF8;
	sub_823D0D60(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823D3E08:
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// bl 0x823d3b30
	ctx.lr = 0x823D3E10;
	sub_823D3B30(ctx, base);
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
loc_823D3E24:
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// bl 0x8242aae0
	ctx.lr = 0x823D3E2C;
	sub_8242AAE0(ctx, base);
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
}

__attribute__((alias("__imp__sub_823D3E40"))) PPC_WEAK_FUNC(sub_823D3E40);
PPC_FUNC_IMPL(__imp__sub_823D3E40) {
	PPC_FUNC_PROLOGUE();
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// ori r10,r10,23
	ctx.r10.u64 = ctx.r10.u64 | 23;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x823d3e58
	if (ctx.cr6.eq) goto loc_823D3E58;
	// b 0x823d9298
	sub_823D9298(ctx, base);
	return;
loc_823D3E58:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D3E60"))) PPC_WEAK_FUNC(sub_823D3E60);
PPC_FUNC_IMPL(__imp__sub_823D3E60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x823D3E68;
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
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x823d93a8
	ctx.lr = 0x823D3E84;
	sub_823D93A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d3ea0
	if (!ctx.cr6.eq) goto loc_823D3EA0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_823D3EA0:
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823d3eb4
	if (ctx.cr6.eq) goto loc_823D3EB4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x823D3EB4;
	sub_82659610(ctx, base);
loc_823D3EB4:
	// lwz r3,352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d3ec8
	if (ctx.cr6.eq) goto loc_823D3EC8;
	// bl 0x82581e38
	ctx.lr = 0x823D3EC8;
	sub_82581E38(ctx, base);
loc_823D3EC8:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823d3edc
	if (ctx.cr6.eq) goto loc_823D3EDC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x823D3EDC;
	sub_82659610(ctx, base);
loc_823D3EDC:
	// lwz r3,356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d3ef0
	if (ctx.cr6.eq) goto loc_823D3EF0;
	// bl 0x82581e38
	ctx.lr = 0x823D3EF0;
	sub_82581E38(ctx, base);
loc_823D3EF0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,360(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 360, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,364(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 364, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D3F10"))) PPC_WEAK_FUNC(sub_823D3F10);
PPC_FUNC_IMPL(__imp__sub_823D3F10) {
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
	// lwz r3,348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d3f38
	if (ctx.cr6.eq) goto loc_823D3F38;
	// bl 0x821601b8
	ctx.lr = 0x823D3F38;
	sub_821601B8(ctx, base);
loc_823D3F38:
	// lwz r3,340(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d3f48
	if (ctx.cr6.eq) goto loc_823D3F48;
	// bl 0x82581e38
	ctx.lr = 0x823D3F48;
	sub_82581E38(ctx, base);
loc_823D3F48:
	// addi r30,r31,240
	ctx.r30.s64 = ctx.r31.s64 + 240;
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// bl 0x82595180
	ctx.lr = 0x823D3F54;
	sub_82595180(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d3f64
	if (ctx.cr6.eq) goto loc_823D3F64;
	// bl 0x82581e38
	ctx.lr = 0x823D3F64;
	sub_82581E38(ctx, base);
loc_823D3F64:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d3f74
	if (ctx.cr6.eq) goto loc_823D3F74;
	// bl 0x82581e38
	ctx.lr = 0x823D3F74;
	sub_82581E38(ctx, base);
loc_823D3F74:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d3f88
	if (ctx.cr6.eq) goto loc_823D3F88;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x82581e38
	ctx.lr = 0x823D3F88;
	sub_82581E38(ctx, base);
loc_823D3F88:
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d3f9c
	if (ctx.cr6.eq) goto loc_823D3F9C;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x82581e38
	ctx.lr = 0x823D3F9C;
	sub_82581E38(ctx, base);
loc_823D3F9C:
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d3fac
	if (ctx.cr6.eq) goto loc_823D3FAC;
	// bl 0x821601b8
	ctx.lr = 0x823D3FAC;
	sub_821601B8(ctx, base);
loc_823D3FAC:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d3fc0
	if (ctx.cr6.eq) goto loc_823D3FC0;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82581e38
	ctx.lr = 0x823D3FC0;
	sub_82581E38(ctx, base);
loc_823D3FC0:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d3fd0
	if (ctx.cr6.eq) goto loc_823D3FD0;
	// bl 0x82581e38
	ctx.lr = 0x823D3FD0;
	sub_82581E38(ctx, base);
loc_823D3FD0:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d3fe4
	if (ctx.cr6.eq) goto loc_823D3FE4;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82581e38
	ctx.lr = 0x823D3FE4;
	sub_82581E38(ctx, base);
loc_823D3FE4:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d3ff8
	if (ctx.cr6.eq) goto loc_823D3FF8;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82581e38
	ctx.lr = 0x823D3FF8;
	sub_82581E38(ctx, base);
loc_823D3FF8:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d4008
	if (ctx.cr6.eq) goto loc_823D4008;
	// bl 0x82581e38
	ctx.lr = 0x823D4008;
	sub_82581E38(ctx, base);
loc_823D4008:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d4018
	if (ctx.cr6.eq) goto loc_823D4018;
	// bl 0x82581e38
	ctx.lr = 0x823D4018;
	sub_82581E38(ctx, base);
loc_823D4018:
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d4028
	if (ctx.cr6.eq) goto loc_823D4028;
	// bl 0x82581e38
	ctx.lr = 0x823D4028;
	sub_82581E38(ctx, base);
loc_823D4028:
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d4038
	if (ctx.cr6.eq) goto loc_823D4038;
	// bl 0x82581e38
	ctx.lr = 0x823D4038;
	sub_82581E38(ctx, base);
loc_823D4038:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d4048
	if (ctx.cr6.eq) goto loc_823D4048;
	// bl 0x82581e38
	ctx.lr = 0x823D4048;
	sub_82581E38(ctx, base);
loc_823D4048:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d1048
	ctx.lr = 0x823D4050;
	sub_823D1048(ctx, base);
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

__attribute__((alias("__imp__sub_823D4068"))) PPC_WEAK_FUNC(sub_823D4068);
PPC_FUNC_IMPL(__imp__sub_823D4068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x823D4070;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,364(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x823d410c
	if (ctx.cr6.gt) goto loc_823D410C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,360(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,364(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 364, temp.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x823d8130
	ctx.lr = 0x823D40B4;
	sub_823D8130(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823d0e88
	ctx.lr = 0x823D40C4;
	sub_823D0E88(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581090
	ctx.lr = 0x823D40D0;
	sub_82581090(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r31,352
	ctx.r7.s64 = ctx.r31.s64 + 352;
	// addi r6,r31,356
	ctx.r6.s64 = ctx.r31.s64 + 356;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822951b8
	ctx.lr = 0x823D40EC;
	sub_822951B8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d40fc
	if (ctx.cr6.eq) goto loc_823D40FC;
	// bl 0x821601b8
	ctx.lr = 0x823D40FC;
	sub_821601B8(ctx, base);
loc_823D40FC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d410c
	if (ctx.cr6.eq) goto loc_823D410C;
	// bl 0x82581e38
	ctx.lr = 0x823D410C;
	sub_82581E38(ctx, base);
loc_823D410C:
	// lfs f0,364(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f0,364(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 364, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823dace8
	ctx.lr = 0x823D4124;
	sub_823DACE8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D4130"))) PPC_WEAK_FUNC(sub_823D4130);
PPC_FUNC_IMPL(__imp__sub_823D4130) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x823d4148
	sub_823D4148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D4138"))) PPC_WEAK_FUNC(sub_823D4138);
PPC_FUNC_IMPL(__imp__sub_823D4138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-328
	ctx.r3.s64 = ctx.r11.s64 + -328;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D4148"))) PPC_WEAK_FUNC(sub_823D4148);
PPC_FUNC_IMPL(__imp__sub_823D4148) {
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
	// lwz r3,356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d4174
	if (ctx.cr6.eq) goto loc_823D4174;
	// bl 0x82581e38
	ctx.lr = 0x823D4174;
	sub_82581E38(ctx, base);
loc_823D4174:
	// lwz r3,352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d4184
	if (ctx.cr6.eq) goto loc_823D4184;
	// bl 0x82581e38
	ctx.lr = 0x823D4184;
	sub_82581E38(ctx, base);
loc_823D4184:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d3f10
	ctx.lr = 0x823D418C;
	sub_823D3F10(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d41a4
	if (ctx.cr6.eq) goto loc_823D41A4;
	// bl 0x82186190
	ctx.lr = 0x823D41A0;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823D41A4:
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

__attribute__((alias("__imp__sub_823D41C0"))) PPC_WEAK_FUNC(sub_823D41C0);
PPC_FUNC_IMPL(__imp__sub_823D41C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b8
	ctx.lr = 0x823D41C8;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// li r3,368
	ctx.r3.s64 = 368;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x82186158
	ctx.lr = 0x823D41FC;
	sub_82186158(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823d4274
	if (ctx.cr6.eq) goto loc_823D4274;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x823d422c
	if (ctx.cr6.eq) goto loc_823D422C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_823D422C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x823dad90
	ctx.lr = 0x823D4240;
	sub_823DAD90(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-292
	ctx.r11.s64 = ctx.r11.s64 + -292;
	// addi r10,r10,-304
	ctx.r10.s64 = ctx.r10.s64 + -304;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r29,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r29.u32);
	// lfs f0,3544(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r29.u32);
	// stfs f0,360(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 360, temp.u32);
	// stfs f0,364(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 364, temp.u32);
	// b 0x823d4278
	goto loc_823D4278;
loc_823D4274:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_823D4278:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823d42c0
	if (ctx.cr6.eq) goto loc_823D42C0;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d42c0
	if (ctx.cr6.eq) goto loc_823D42C0;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823d42c0
	if (!ctx.cr6.eq) goto loc_823D42C0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D42C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823D42C0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823d4304
	if (ctx.cr6.eq) goto loc_823D4304;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d3e60
	ctx.lr = 0x823D42E0;
	sub_823D3E60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d4308
	if (!ctx.cr6.eq) goto loc_823D4308;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D4304;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823D4304:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823D4308:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D4318"))) PPC_WEAK_FUNC(sub_823D4318);
PPC_FUNC_IMPL(__imp__sub_823D4318) {
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
	// lwz r4,40(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823d4350
	if (ctx.cr6.eq) goto loc_823D4350;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d4350
	if (ctx.cr6.eq) goto loc_823D4350;
	// bl 0x823d7620
	ctx.lr = 0x823D434C;
	sub_823D7620(ctx, base);
	// b 0x823d4358
	goto loc_823D4358;
loc_823D4350:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_823D4358:
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

__attribute__((alias("__imp__sub_823D4370"))) PPC_WEAK_FUNC(sub_823D4370);
PPC_FUNC_IMPL(__imp__sub_823D4370) {
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
	// lis r9,-32045
	ctx.r9.s64 = -2100101120;
	// lwz r10,30404(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 30404);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// bne cr6,0x823d43dc
	if (!ctx.cr6.eq) goto loc_823D43DC;
	// addi r31,r11,30388
	ctx.r31.s64 = ctx.r11.s64 + 30388;
	// ori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,30404(r9)
	PPC_STORE_U32(ctx.r9.u32 + 30404, ctx.r11.u32);
	// bl 0x82581e70
	ctx.lr = 0x823D43AC;
	sub_82581E70(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32081
	ctx.r10.s64 = -2102460416;
	// addi r11,r11,-268
	ctx.r11.s64 = ctx.r11.s64 + -268;
	// addi r3,r10,-32056
	ctx.r3.s64 = ctx.r10.s64 + -32056;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x826ded00
	ctx.lr = 0x823D43C4;
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
loc_823D43DC:
	// addi r3,r11,30388
	ctx.r3.s64 = ctx.r11.s64 + 30388;
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

__attribute__((alias("__imp__sub_823D43F8"))) PPC_WEAK_FUNC(sub_823D43F8);
PPC_FUNC_IMPL(__imp__sub_823D43F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x823D4400;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32045
	ctx.r29.s64 = -2100101120;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,30408(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 30408);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823d4428
	if (!ctx.cr6.eq) goto loc_823D4428;
	// bl 0x823d4370
	ctx.lr = 0x823D4420;
	sub_823D4370(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,30408(r29)
	PPC_STORE_U32(ctx.r29.u32 + 30408, ctx.r4.u32);
loc_823D4428:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82582648
	ctx.lr = 0x823D4440;
	sub_82582648(ctx, base);
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r11,25316
	ctx.r6.s64 = ctx.r11.s64 + 25316;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,6088
	ctx.r5.s64 = ctx.r11.s64 + 6088;
	// bl 0x826df418
	ctx.lr = 0x823D4460;
	sub_826DF418(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// beq cr6,0x823d4470
	if (ctx.cr6.eq) goto loc_823D4470;
	// bl 0x82659610
	ctx.lr = 0x823D4470;
	sub_82659610(ctx, base);
loc_823D4470:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d4480
	if (ctx.cr6.eq) goto loc_823D4480;
	// bl 0x82581e38
	ctx.lr = 0x823D4480;
	sub_82581E38(ctx, base);
loc_823D4480:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D4490"))) PPC_WEAK_FUNC(sub_823D4490);
PPC_FUNC_IMPL(__imp__sub_823D4490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x823D4498;
	__savegprlr_28(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D44B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// addi r4,r11,448
	ctx.r4.s64 = ctx.r11.s64 + 448;
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// stb r29,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r29.u8);
	// bl 0x82161d10
	ctx.lr = 0x823D44E0;
	sub_82161D10(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823d456c
	if (!ctx.cr6.eq) goto loc_823D456C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,-168
	ctx.r4.s64 = ctx.r11.s64 + -168;
	// bl 0x821620e8
	ctx.lr = 0x823D4504;
	sub_821620E8(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823d43f8
	ctx.lr = 0x823D4510;
	sub_823D43F8(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823d4524
	if (ctx.cr6.eq) goto loc_823D4524;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x823D4524;
	sub_82659610(ctx, base);
loc_823D4524:
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r31,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d4538
	if (ctx.cr6.eq) goto loc_823D4538;
	// bl 0x82581e38
	ctx.lr = 0x823D4538;
	sub_82581E38(ctx, base);
loc_823D4538:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d4548
	if (ctx.cr6.eq) goto loc_823D4548;
	// bl 0x82581e38
	ctx.lr = 0x823D4548;
	sub_82581E38(ctx, base);
loc_823D4548:
	// lwz r11,232(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x823d455c
	if (ctx.cr6.lt) goto loc_823D455C;
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// bl 0x82186190
	ctx.lr = 0x823D455C;
	sub_82186190(ctx, base);
loc_823D455C:
	// stw r28,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r28.u32);
	// stw r29,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r29.u32);
	// stb r29,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r29.u8);
	// b 0x823d45b0
	goto loc_823D45B0;
loc_823D456C:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x823d43f8
	ctx.lr = 0x823D4578;
	sub_823D43F8(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823d458c
	if (ctx.cr6.eq) goto loc_823D458C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x823D458C;
	sub_82659610(ctx, base);
loc_823D458C:
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r31,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d45a0
	if (ctx.cr6.eq) goto loc_823D45A0;
	// bl 0x82581e38
	ctx.lr = 0x823D45A0;
	sub_82581E38(ctx, base);
loc_823D45A0:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d45b0
	if (ctx.cr6.eq) goto loc_823D45B0;
	// bl 0x82581e38
	ctx.lr = 0x823D45B0;
	sub_82581E38(ctx, base);
loc_823D45B0:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d45cc
	if (ctx.cr6.eq) goto loc_823D45CC;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d45ec
	if (!ctx.cr6.eq) goto loc_823D45EC;
loc_823D45CC:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x823d45e0
	if (ctx.cr6.lt) goto loc_823D45E0;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82186190
	ctx.lr = 0x823D45E0;
	sub_82186190(ctx, base);
loc_823D45E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_823D45EC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-200
	ctx.r4.s64 = ctx.r11.s64 + -200;
	// bl 0x821620e8
	ctx.lr = 0x823D45FC;
	sub_821620E8(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82371620
	ctx.lr = 0x823D4608;
	sub_82371620(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823d461c
	if (ctx.cr6.eq) goto loc_823D461C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x823D461C;
	sub_82659610(ctx, base);
loc_823D461C:
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r31,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d4630
	if (ctx.cr6.eq) goto loc_823D4630;
	// bl 0x82581e38
	ctx.lr = 0x823D4630;
	sub_82581E38(ctx, base);
loc_823D4630:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d4640
	if (ctx.cr6.eq) goto loc_823D4640;
	// bl 0x82581e38
	ctx.lr = 0x823D4640;
	sub_82581E38(ctx, base);
loc_823D4640:
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x823d4654
	if (ctx.cr6.lt) goto loc_823D4654;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82186190
	ctx.lr = 0x823D4654;
	sub_82186190(ctx, base);
loc_823D4654:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r28,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r28.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// addi r4,r11,-224
	ctx.r4.s64 = ctx.r11.s64 + -224;
	// stb r29,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r29.u8);
	// bl 0x821620e8
	ctx.lr = 0x823D4670;
	sub_821620E8(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82618280
	ctx.lr = 0x823D467C;
	sub_82618280(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823d4690
	if (ctx.cr6.eq) goto loc_823D4690;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x823D4690;
	sub_82659610(ctx, base);
loc_823D4690:
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r31,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d46a4
	if (ctx.cr6.eq) goto loc_823D46A4;
	// bl 0x82581e38
	ctx.lr = 0x823D46A4;
	sub_82581E38(ctx, base);
loc_823D46A4:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d46b4
	if (ctx.cr6.eq) goto loc_823D46B4;
	// bl 0x82581e38
	ctx.lr = 0x823D46B4;
	sub_82581E38(ctx, base);
loc_823D46B4:
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x823d46c8
	if (ctx.cr6.lt) goto loc_823D46C8;
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x82186190
	ctx.lr = 0x823D46C8;
	sub_82186190(ctx, base);
loc_823D46C8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r28,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r28.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// addi r4,r11,-248
	ctx.r4.s64 = ctx.r11.s64 + -248;
	// stb r29,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r29.u8);
	// bl 0x821620e8
	ctx.lr = 0x823D46E4;
	sub_821620E8(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82618280
	ctx.lr = 0x823D46F0;
	sub_82618280(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823d4704
	if (ctx.cr6.eq) goto loc_823D4704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x823D4704;
	sub_82659610(ctx, base);
loc_823D4704:
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r31,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d4718
	if (ctx.cr6.eq) goto loc_823D4718;
	// bl 0x82581e38
	ctx.lr = 0x823D4718;
	sub_82581E38(ctx, base);
loc_823D4718:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d4728
	if (ctx.cr6.eq) goto loc_823D4728;
	// bl 0x82581e38
	ctx.lr = 0x823D4728;
	sub_82581E38(ctx, base);
loc_823D4728:
	// lwz r11,264(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x823d473c
	if (ctx.cr6.lt) goto loc_823D473C;
	// lwz r3,244(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// bl 0x82186190
	ctx.lr = 0x823D473C;
	sub_82186190(ctx, base);
loc_823D473C:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r28,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r28.u32);
	// stw r29,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r29.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stb r29,244(r1)
	PPC_STORE_U8(ctx.r1.u32 + 244, ctx.r29.u8);
	// blt cr6,0x823d475c
	if (ctx.cr6.lt) goto loc_823D475C;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82186190
	ctx.lr = 0x823D475C;
	sub_82186190(ctx, base);
loc_823D475C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D4768"))) PPC_WEAK_FUNC(sub_823D4768);
PPC_FUNC_IMPL(__imp__sub_823D4768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x823d499c
	if (ctx.cr6.gt) goto loc_823D499C;
	// lis r12,-32195
	ctx.r12.s64 = -2109931520;
	// addi r12,r12,18316
	ctx.r12.s64 = ctx.r12.s64 + 18316;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_823D47A4;
	case 1:
		goto loc_823D47F8;
	case 2:
		goto loc_823D484C;
	case 3:
		goto loc_823D48A0;
	case 4:
		goto loc_823D4948;
	case 5:
		goto loc_823D48F4;
	default:
		__builtin_unreachable();
	}
	// lwz r17,18340(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18340);
	// lwz r17,18424(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18424);
	// lwz r17,18508(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18508);
	// lwz r17,18592(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18592);
	// lwz r17,18760(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18760);
	// lwz r17,18676(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18676);
loc_823D47A4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,5592(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5592);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lfs f0,3548(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3548);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lfs f0,14088(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// blr 
	return;
loc_823D47F8:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,14088(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lfs f13,3548(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3548);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lfs f13,5592(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5592);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-8(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// blr 
	return;
loc_823D484C:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,14088(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lfs f13,5524(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5524);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lfs f13,5024(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5024);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-8(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// blr 
	return;
loc_823D48A0:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,14088(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lfs f0,6100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6100);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lfs f0,8156(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// blr 
	return;
loc_823D48F4:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,14088(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lfs f0,8156(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8156);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lfs f0,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// blr 
	return;
loc_823D4948:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,14088(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lfs f13,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lfs f13,17684(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17684);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-8(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// blr 
	return;
loc_823D499C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D49A8"))) PPC_WEAK_FUNC(sub_823D49A8);
PPC_FUNC_IMPL(__imp__sub_823D49A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x823d4b5c
	if (ctx.cr6.gt) goto loc_823D4B5C;
	// lis r12,-32195
	ctx.r12.s64 = -2109931520;
	// addi r12,r12,18892
	ctx.r12.s64 = ctx.r12.s64 + 18892;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_823D49E4;
	case 1:
		goto loc_823D4A28;
	case 2:
		goto loc_823D4A6C;
	case 3:
		goto loc_823D4AB0;
	case 4:
		goto loc_823D4B30;
	case 5:
		goto loc_823D4AF4;
	default:
		__builtin_unreachable();
	}
	// lwz r17,18916(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18916);
	// lwz r17,18984(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18984);
	// lwz r17,19052(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19052);
	// lwz r17,19120(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19120);
	// lwz r17,19248(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19248);
	// lwz r17,19188(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19188);
loc_823D49E4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,5024(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5024);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lfs f0,-13184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13184);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
loc_823D4A28:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,5524(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5524);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lfs f0,28580(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28580);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lfs f0,3548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
loc_823D4A6C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,3548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lfs f0,5024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5024);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lfs f0,28580(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28580);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
loc_823D4AB0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,5024(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5024);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lfs f0,6100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6100);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lfs f0,8156(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8156);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
loc_823D4AF4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-13184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13184);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lfs f0,3548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
loc_823D4B30:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,14088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_823D4B5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D4B68"))) PPC_WEAK_FUNC(sub_823D4B68);
PPC_FUNC_IMPL(__imp__sub_823D4B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x823D4B70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x82391468
	ctx.lr = 0x823D4B98;
	sub_82391468(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r11,-44
	ctx.r10.s64 = ctx.r11.s64 + -44;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r7,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r7.u32);
	// stw r7,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r7.u32);
	// stw r7,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r7.u32);
loc_823D4BB4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x823d4bd8
	if (ctx.cr6.eq) goto loc_823D4BD8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x823d4bb4
	if (ctx.cr6.eq) goto loc_823D4BB4;
loc_823D4BD8:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x823d4d34
	if (ctx.cr6.eq) goto loc_823D4D34;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r11,-52
	ctx.r10.s64 = ctx.r11.s64 + -52;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_823D4BEC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x823d4c10
	if (ctx.cr6.eq) goto loc_823D4C10;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x823d4bec
	if (ctx.cr6.eq) goto loc_823D4BEC;
loc_823D4C10:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x823d4c24
	if (!ctx.cr6.eq) goto loc_823D4C24;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// b 0x823d4d38
	goto loc_823D4D38;
loc_823D4C24:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r11,-60
	ctx.r10.s64 = ctx.r11.s64 + -60;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_823D4C30:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x823d4c54
	if (ctx.cr6.eq) goto loc_823D4C54;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x823d4c30
	if (ctx.cr6.eq) goto loc_823D4C30;
loc_823D4C54:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x823d4c68
	if (!ctx.cr6.eq) goto loc_823D4C68;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// b 0x823d4d38
	goto loc_823D4D38;
loc_823D4C68:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r11,-64
	ctx.r10.s64 = ctx.r11.s64 + -64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_823D4C74:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x823d4c98
	if (ctx.cr6.eq) goto loc_823D4C98;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x823d4c74
	if (ctx.cr6.eq) goto loc_823D4C74;
loc_823D4C98:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x823d4cac
	if (!ctx.cr6.eq) goto loc_823D4CAC;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// b 0x823d4d38
	goto loc_823D4D38;
loc_823D4CAC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r11,-76
	ctx.r10.s64 = ctx.r11.s64 + -76;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_823D4CB8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x823d4cdc
	if (ctx.cr6.eq) goto loc_823D4CDC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x823d4cb8
	if (ctx.cr6.eq) goto loc_823D4CB8;
loc_823D4CDC:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x823d4cf0
	if (!ctx.cr6.eq) goto loc_823D4CF0;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// b 0x823d4d38
	goto loc_823D4D38;
loc_823D4CF0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r11,-92
	ctx.r10.s64 = ctx.r11.s64 + -92;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_823D4CFC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x823d4d20
	if (ctx.cr6.eq) goto loc_823D4D20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x823d4cfc
	if (ctx.cr6.eq) goto loc_823D4CFC;
loc_823D4D20:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x823d4d34
	if (!ctx.cr6.eq) goto loc_823D4D34;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// b 0x823d4d38
	goto loc_823D4D38;
loc_823D4D34:
	// stw r7,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r7.u32);
loc_823D4D38:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823900e0
	ctx.lr = 0x823D4D40;
	sub_823900E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823d4ddc
	if (ctx.cr6.eq) goto loc_823D4DDC;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x823d4d9c
	if (ctx.cr6.eq) goto loc_823D4D9C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x823d4d84
	if (ctx.cr6.eq) goto loc_823D4D84;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-1220
	ctx.r5.s64 = ctx.r11.s64 + -1220;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r11,-12720
	ctx.r30.s64 = ctx.r11.s64 + -12720;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825fe210
	ctx.lr = 0x823D4D78;
	sub_825FE210(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r10,-104
	ctx.r5.s64 = ctx.r10.s64 + -104;
	// b 0x823d4dc0
	goto loc_823D4DC0;
loc_823D4D84:
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_823D4D9C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-116
	ctx.r5.s64 = ctx.r11.s64 + -116;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r11,-3660
	ctx.r30.s64 = ctx.r11.s64 + -3660;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825fe210
	ctx.lr = 0x823D4DB8;
	sub_825FE210(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r10,-128
	ctx.r5.s64 = ctx.r10.s64 + -128;
loc_823D4DC0:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// bl 0x825fe210
	ctx.lr = 0x823D4DD4;
	sub_825FE210(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
loc_823D4DDC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D4DE8"))) PPC_WEAK_FUNC(sub_823D4DE8);
PPC_FUNC_IMPL(__imp__sub_823D4DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-148
	ctx.r3.s64 = ctx.r11.s64 + -148;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D4DF8"))) PPC_WEAK_FUNC(sub_823D4DF8);
PPC_FUNC_IMPL(__imp__sub_823D4DF8) {
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
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d4e30
	if (ctx.cr6.eq) goto loc_823D4E30;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d4e8c
	if (!ctx.cr6.eq) goto loc_823D4E8C;
loc_823D4E30:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x823d4e8c
	if (ctx.cr6.eq) goto loc_823D4E8C;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D4E50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D4E60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x825fe028
	ctx.lr = 0x823D4E70;
	sub_825FE028(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82224c78
	ctx.lr = 0x823D4E7C;
	sub_82224C78(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d4e8c
	if (ctx.cr6.eq) goto loc_823D4E8C;
	// bl 0x82631328
	ctx.lr = 0x823D4E8C;
	sub_82631328(ctx, base);
loc_823D4E8C:
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

__attribute__((alias("__imp__sub_823D4EA8"))) PPC_WEAK_FUNC(sub_823D4EA8);
PPC_FUNC_IMPL(__imp__sub_823D4EA8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82631328
	sub_82631328(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D4EC4"))) PPC_WEAK_FUNC(sub_823D4EC4);
PPC_FUNC_IMPL(__imp__sub_823D4EC4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D4EC8"))) PPC_WEAK_FUNC(sub_823D4EC8);
PPC_FUNC_IMPL(__imp__sub_823D4EC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823D4EF4"))) PPC_WEAK_FUNC(sub_823D4EF4);
PPC_FUNC_IMPL(__imp__sub_823D4EF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D4EF8"))) PPC_WEAK_FUNC(sub_823D4EF8);
PPC_FUNC_IMPL(__imp__sub_823D4EF8) {
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
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d4f30
	if (ctx.cr6.eq) goto loc_823D4F30;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d4f8c
	if (!ctx.cr6.eq) goto loc_823D4F8C;
loc_823D4F30:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x823d4f8c
	if (ctx.cr6.eq) goto loc_823D4F8C;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D4F50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D4F60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x825fe028
	ctx.lr = 0x823D4F70;
	sub_825FE028(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82224c78
	ctx.lr = 0x823D4F7C;
	sub_82224C78(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d4f8c
	if (ctx.cr6.eq) goto loc_823D4F8C;
	// bl 0x82631328
	ctx.lr = 0x823D4F8C;
	sub_82631328(ctx, base);
loc_823D4F8C:
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

__attribute__((alias("__imp__sub_823D4FA8"))) PPC_WEAK_FUNC(sub_823D4FA8);
PPC_FUNC_IMPL(__imp__sub_823D4FA8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82631328
	sub_82631328(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D4FC4"))) PPC_WEAK_FUNC(sub_823D4FC4);
PPC_FUNC_IMPL(__imp__sub_823D4FC4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D4FC8"))) PPC_WEAK_FUNC(sub_823D4FC8);
PPC_FUNC_IMPL(__imp__sub_823D4FC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823D4FF4"))) PPC_WEAK_FUNC(sub_823D4FF4);
PPC_FUNC_IMPL(__imp__sub_823D4FF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D4FF8"))) PPC_WEAK_FUNC(sub_823D4FF8);
PPC_FUNC_IMPL(__imp__sub_823D4FF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
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
	// b 0x8251d058
	sub_8251D058(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D5018"))) PPC_WEAK_FUNC(sub_823D5018);
PPC_FUNC_IMPL(__imp__sub_823D5018) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D5020"))) PPC_WEAK_FUNC(sub_823D5020);
PPC_FUNC_IMPL(__imp__sub_823D5020) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
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
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82581e38
	sub_82581E38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D5058"))) PPC_WEAK_FUNC(sub_823D5058);
PPC_FUNC_IMPL(__imp__sub_823D5058) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D5060"))) PPC_WEAK_FUNC(sub_823D5060);
PPC_FUNC_IMPL(__imp__sub_823D5060) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d5090
	if (ctx.cr6.eq) goto loc_823D5090;
	// bl 0x82581e38
	ctx.lr = 0x823D5090;
	sub_82581E38(ctx, base);
loc_823D5090:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d50a0
	if (ctx.cr6.eq) goto loc_823D50A0;
	// bl 0x82631328
	ctx.lr = 0x823D50A0;
	sub_82631328(ctx, base);
loc_823D50A0:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d50b0
	if (ctx.cr6.eq) goto loc_823D50B0;
	// bl 0x82631328
	ctx.lr = 0x823D50B0;
	sub_82631328(ctx, base);
loc_823D50B0:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d50c0
	if (ctx.cr6.eq) goto loc_823D50C0;
	// bl 0x821601b8
	ctx.lr = 0x823D50C0;
	sub_821601B8(ctx, base);
loc_823D50C0:
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

__attribute__((alias("__imp__sub_823D50D8"))) PPC_WEAK_FUNC(sub_823D50D8);
PPC_FUNC_IMPL(__imp__sub_823D50D8) {
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
	// bl 0x823d5060
	ctx.lr = 0x823D50F8;
	sub_823D5060(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d5110
	if (ctx.cr6.eq) goto loc_823D5110;
	// bl 0x82186190
	ctx.lr = 0x823D510C;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823D5110:
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

__attribute__((alias("__imp__sub_823D5128"))) PPC_WEAK_FUNC(sub_823D5128);
PPC_FUNC_IMPL(__imp__sub_823D5128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x823D5130;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D5150;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D5168;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r29,36
	ctx.r31.s64 = ctx.r29.s64 + 36;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d5188
	if (ctx.cr6.eq) goto loc_823D5188;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d5278
	if (!ctx.cr6.eq) goto loc_823D5278;
loc_823D5188:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d5278
	if (ctx.cr6.eq) goto loc_823D5278;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d5278
	if (ctx.cr6.eq) goto loc_823D5278;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x823d521c
	if (ctx.cr6.eq) goto loc_823D521C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x823d520c
	if (ctx.cr6.eq) goto loc_823D520C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,28
	ctx.r4.s64 = 28;
	// addi r5,r11,-8
	ctx.r5.s64 = ctx.r11.s64 + -8;
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D51D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D51F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823032b8
	ctx.lr = 0x823D5204;
	sub_823032B8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x823d526c
	goto loc_823D526C;
loc_823D520C:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x823d526c
	goto loc_823D526C;
loc_823D521C:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,29
	ctx.r4.s64 = 29;
	// addi r5,r11,-24
	ctx.r5.s64 = ctx.r11.s64 + -24;
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D5238;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D525C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823032b8
	ctx.lr = 0x823D5268;
	sub_823032B8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_823D526C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d5278
	if (ctx.cr6.eq) goto loc_823D5278;
	// bl 0x82581e38
	ctx.lr = 0x823D5278;
	sub_82581E38(ctx, base);
loc_823D5278:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d5288
	if (ctx.cr6.eq) goto loc_823D5288;
	// bl 0x821601b8
	ctx.lr = 0x823D5288;
	sub_821601B8(ctx, base);
loc_823D5288:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D5290"))) PPC_WEAK_FUNC(sub_823D5290);
PPC_FUNC_IMPL(__imp__sub_823D5290) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823d6478
	ctx.lr = 0x823D52BC;
	sub_823D6478(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// ble cr6,0x823d52c8
	if (!ctx.cr6.gt) goto loc_823D52C8;
	// li r30,1
	ctx.r30.s64 = 1;
loc_823D52C8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d52d8
	if (ctx.cr6.eq) goto loc_823D52D8;
	// bl 0x82581e38
	ctx.lr = 0x823D52D8;
	sub_82581E38(ctx, base);
loc_823D52D8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_823D52F8"))) PPC_WEAK_FUNC(sub_823D52F8);
PPC_FUNC_IMPL(__imp__sub_823D52F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,296(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d5354
	if (ctx.cr6.eq) goto loc_823D5354;
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// lvx128 v13,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-4608
	ctx.r11.s64 = ctx.r11.s64 + -4608;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x823d6980
	ctx.lr = 0x823D5344;
	sub_823D6980(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d5354
	if (ctx.cr6.eq) goto loc_823D5354;
	// bl 0x82581e38
	ctx.lr = 0x823D5354;
	sub_82581E38(ctx, base);
loc_823D5354:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D5368"))) PPC_WEAK_FUNC(sub_823D5368);
PPC_FUNC_IMPL(__imp__sub_823D5368) {
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
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,25568
	ctx.r4.s64 = ctx.r11.s64 + 25568;
	// bl 0x826de850
	ctx.lr = 0x823D538C;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d53a0
	if (!ctx.cr6.eq) goto loc_823D53A0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823D53A0:
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

__attribute__((alias("__imp__sub_823D53B8"))) PPC_WEAK_FUNC(sub_823D53B8);
PPC_FUNC_IMPL(__imp__sub_823D53B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x823D53C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d54e4
	if (ctx.cr6.eq) goto loc_823D54E4;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d54e4
	if (ctx.cr6.eq) goto loc_823D54E4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82390118
	ctx.lr = 0x823D53FC;
	sub_82390118(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822210f8
	ctx.lr = 0x823D5408;
	sub_822210F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823d69d0
	ctx.lr = 0x823D5418;
	sub_823D69D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ori r6,r30,23712
	ctx.r6.u64 = ctx.r30.u64 | 23712;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825956a8
	ctx.lr = 0x823D542C;
	sub_825956A8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595688
	ctx.lr = 0x823D5434;
	sub_82595688(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823d5444
	if (ctx.cr6.eq) goto loc_823D5444;
	// bl 0x82659610
	ctx.lr = 0x823D5444;
	sub_82659610(ctx, base);
loc_823D5444:
	// lwz r3,264(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 264);
	// stw r31,264(r27)
	PPC_STORE_U32(ctx.r27.u32 + 264, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d5458
	if (ctx.cr6.eq) goto loc_823D5458;
	// bl 0x82581e38
	ctx.lr = 0x823D5458;
	sub_82581E38(ctx, base);
loc_823D5458:
	// lwz r11,264(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d54cc
	if (ctx.cr6.eq) goto loc_823D54CC;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d54cc
	if (ctx.cr6.eq) goto loc_823D54CC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823914a0
	ctx.lr = 0x823D5480;
	sub_823914A0(ctx, base);
	// lwz r11,264(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 264);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D549C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82186158
	ctx.lr = 0x823D54A4;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d54c0
	if (ctx.cr6.eq) goto loc_823D54C0;
	// addi r5,r27,288
	ctx.r5.s64 = ctx.r27.s64 + 288;
	// addi r4,r27,272
	ctx.r4.s64 = ctx.r27.s64 + 272;
	// bl 0x8242ef30
	ctx.lr = 0x823D54B8;
	sub_8242EF30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823d54c4
	goto loc_823D54C4;
loc_823D54C0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823D54C4:
	// addi r3,r27,268
	ctx.r3.s64 = ctx.r27.s64 + 268;
	// bl 0x82303258
	ctx.lr = 0x823D54CC;
	sub_82303258(ctx, base);
loc_823D54CC:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d54e0
	if (ctx.cr6.eq) goto loc_823D54E0;
	// bl 0x82581e38
	ctx.lr = 0x823D54E0;
	sub_82581E38(ctx, base);
loc_823D54E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823D54E4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D54F0"))) PPC_WEAK_FUNC(sub_823D54F0);
PPC_FUNC_IMPL(__imp__sub_823D54F0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d5564
	if (ctx.cr6.eq) goto loc_823D5564;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d5564
	if (ctx.cr6.eq) goto loc_823D5564;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r5,268(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D5550;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d5564
	if (ctx.cr6.eq) goto loc_823D5564;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,292(r31)
	PPC_STORE_U8(ctx.r31.u32 + 292, ctx.r11.u8);
loc_823D5564:
	// lbz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 292);
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

__attribute__((alias("__imp__sub_823D5580"))) PPC_WEAK_FUNC(sub_823D5580);
PPC_FUNC_IMPL(__imp__sub_823D5580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x823D5588;
	__savegprlr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d568c
	if (ctx.cr6.eq) goto loc_823D568C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d568c
	if (ctx.cr6.eq) goto loc_823D568C;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r31,272
	ctx.r30.s64 = ctx.r31.s64 + 272;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// bl 0x82595500
	ctx.lr = 0x823D55CC;
	sub_82595500(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d568c
	if (ctx.cr6.eq) goto loc_823D568C;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821eb680
	ctx.lr = 0x823D55E0;
	sub_821EB680(ctx, base);
	// lwz r3,296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// bl 0x823d63c0
	ctx.lr = 0x823D55E8;
	sub_823D63C0(ctx, base);
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lwz r3,296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// bl 0x822102c8
	ctx.lr = 0x823D55F4;
	sub_822102C8(ctx, base);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// lwz r3,296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// bl 0x823d6398
	ctx.lr = 0x823D5604;
	sub_823D6398(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x825d2aa8
	ctx.lr = 0x823D5634;
	sub_825D2AA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lvx128 v0,r0,r27
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825951f0
	ctx.lr = 0x823D565C;
	sub_825951F0(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D5674;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82595180
	ctx.lr = 0x823D567C;
	sub_82595180(ctx, base);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d568c
	if (ctx.cr6.eq) goto loc_823D568C;
	// bl 0x82581e38
	ctx.lr = 0x823D568C;
	sub_82581E38(ctx, base);
loc_823D568C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D5698"))) PPC_WEAK_FUNC(sub_823D5698);
PPC_FUNC_IMPL(__imp__sub_823D5698) {
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
	ctx.lr = 0x823D56C8;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d56f4
	if (ctx.cr6.eq) goto loc_823D56F4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,36
	ctx.r10.s64 = ctx.r11.s64 + 36;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x823d56f8
	goto loc_823D56F8;
loc_823D56F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823D56F8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x823d5744
	if (!ctx.cr6.eq) goto loc_823D5744;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823d5724
	if (ctx.cr6.eq) goto loc_823D5724;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D5724;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823D5724:
	// lis r10,-32076
	ctx.r10.s64 = -2102132736;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,2788
	ctx.r11.s64 = ctx.r11.s64 + 2788;
	// lwz r10,25412(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25412);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x821e0968
	ctx.lr = 0x823D5744;
	sub_821E0968(ctx, base);
loc_823D5744:
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

__attribute__((alias("__imp__sub_823D5760"))) PPC_WEAK_FUNC(sub_823D5760);
PPC_FUNC_IMPL(__imp__sub_823D5760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stfs f1,268(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d57cc
	if (ctx.cr6.eq) goto loc_823D57CC;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d57cc
	if (ctx.cr6.eq) goto loc_823D57CC;
	// bl 0x82598918
	ctx.lr = 0x823D57A4;
	sub_82598918(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x823d63a0
	ctx.lr = 0x823D57B0;
	sub_823D63A0(ctx, base);
	// lfs f0,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x823d57c8
	if (ctx.cr6.lt) goto loc_823D57C8;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_823D57C8:
	// stfs f0,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
loc_823D57CC:
	// addi r30,r31,176
	ctx.r30.s64 = ctx.r31.s64 + 176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8218c228
	ctx.lr = 0x823D57DC;
	sub_8218C228(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f0,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,14088(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823D580C:
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x823d580c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D580C;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// vspltisw v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_set1_epi32(int(0x0)));
	// lwz r31,260(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// li r3,0
	ctx.r3.s64 = 0;
	// vupkd3d128 v13,v13,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v13.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v13.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v13 = vTemp;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// vspltw v12,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// vspltw v11,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v13,v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x0));
	// lvx128 v10,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lvx128 v9,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// vmaddfp v12,v9,v12,v10
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// lvx128 v8,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v7,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// vmaddfp v12,v11,v8,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v10,v0,v7,v12
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vor v0,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vspltw v11,v10,3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0x0));
	// vrefp v12,v11
	simde_mm_store_ps(ctx.v12.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v11.f32)));
	// vnmsubfp v0,v11,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v12,v0,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vnmsubfp v13,v11,v0,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v11,v0,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v11,v12,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vmulfp128 v0,v10,v11
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v11.f32)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d58ec
	if (ctx.cr6.eq) goto loc_823D58EC;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d58ec
	if (ctx.cr6.eq) goto loc_823D58EC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x823cfb48
	ctx.lr = 0x823D58C8;
	sub_823CFB48(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// addi r10,r11,144
	ctx.r10.s64 = ctx.r11.s64 + 144;
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_823D58EC:
	// clrlwi r30,r3,24
	ctx.r30.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823d593c
	if (ctx.cr6.eq) goto loc_823D593C;
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// bl 0x823d5020
	ctx.lr = 0x823D5900;
	sub_823D5020(ctx, base);
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// bl 0x823d4fa8
	ctx.lr = 0x823D5908;
	sub_823D4FA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823d0e88
	ctx.lr = 0x823D5914;
	sub_823D0E88(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r4,240(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x823d52f8
	ctx.lr = 0x823D5928;
	sub_823D52F8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d59a0
	if (ctx.cr6.eq) goto loc_823D59A0;
	// bl 0x821601b8
	ctx.lr = 0x823D5938;
	sub_821601B8(ctx, base);
	// b 0x823d59a0
	goto loc_823D59A0;
loc_823D593C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825d2cb0
	ctx.lr = 0x823D5948;
	sub_825D2CB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// bl 0x823d4fc8
	ctx.lr = 0x823D5954;
	sub_823D4FC8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// bl 0x823d4ff8
	ctx.lr = 0x823D5960;
	sub_823D4FF8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x823d54f0
	ctx.lr = 0x823D5970;
	sub_823D54F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d5998
	if (ctx.cr6.eq) goto loc_823D5998;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// addi r4,r31,176
	ctx.r4.s64 = ctx.r31.s64 + 176;
	// bl 0x823d5580
	ctx.lr = 0x823D598C;
	sub_823D5580(ctx, base);
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// bl 0x823d4ef8
	ctx.lr = 0x823D5994;
	sub_823D4EF8(ctx, base);
	// b 0x823d59a0
	goto loc_823D59A0;
loc_823D5998:
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// bl 0x823d4fa8
	ctx.lr = 0x823D59A0;
	sub_823D4FA8(ctx, base);
loc_823D59A0:
	// lfs f0,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lfs f31,268(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	ctx.f31.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// bne cr6,0x823d59e8
	if (!ctx.cr6.eq) goto loc_823D59E8;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// beq cr6,0x823d59cc
	if (ctx.cr6.eq) goto loc_823D59CC;
	// bl 0x82659610
	ctx.lr = 0x823D59CC;
	sub_82659610(ctx, base);
loc_823D59CC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823d5290
	ctx.lr = 0x823D59DC;
	sub_823D5290(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d59f0
	if (ctx.cr6.eq) goto loc_823D59F0;
loc_823D59E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825813a0
	ctx.lr = 0x823D59F0;
	sub_825813A0(ctx, base);
loc_823D59F0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
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

__attribute__((alias("__imp__sub_823D5A10"))) PPC_WEAK_FUNC(sub_823D5A10);
PPC_FUNC_IMPL(__imp__sub_823D5A10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x823D5A18;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823ce5b0
	ctx.lr = 0x823D5A54;
	sub_823CE5B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
	// addi r10,r10,56
	ctx.r10.s64 = ctx.r10.s64 + 56;
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// lfs f31,3544(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,256(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// stb r30,260(r31)
	PPC_STORE_U8(ctx.r31.u32 + 260, ctx.r30.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r30,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r30.u32);
	// stw r30,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r30.u32);
	// bl 0x82595090
	ctx.lr = 0x823D5A90;
	sub_82595090(ctx, base);
	// stfs f31,288(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// stb r30,292(r31)
	PPC_STORE_U8(ctx.r31.u32 + 292, ctx.r30.u8);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r3.u32);
	// beq cr6,0x823d5aac
	if (ctx.cr6.eq) goto loc_823D5AAC;
	// bl 0x82659610
	ctx.lr = 0x823D5AAC;
	sub_82659610(ctx, base);
loc_823D5AAC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d53b8
	ctx.lr = 0x823D5ABC;
	sub_823D53B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D5AD0"))) PPC_WEAK_FUNC(sub_823D5AD0);
PPC_FUNC_IMPL(__imp__sub_823D5AD0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823d5ae8
	sub_823D5AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D5AD8"))) PPC_WEAK_FUNC(sub_823D5AD8);
PPC_FUNC_IMPL(__imp__sub_823D5AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D5AE8"))) PPC_WEAK_FUNC(sub_823D5AE8);
PPC_FUNC_IMPL(__imp__sub_823D5AE8) {
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
	// lwz r3,296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d5b14
	if (ctx.cr6.eq) goto loc_823D5B14;
	// bl 0x82581e38
	ctx.lr = 0x823D5B14;
	sub_82581E38(ctx, base);
loc_823D5B14:
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// bl 0x82595180
	ctx.lr = 0x823D5B1C;
	sub_82595180(ctx, base);
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d5b2c
	if (ctx.cr6.eq) goto loc_823D5B2C;
	// bl 0x82581e38
	ctx.lr = 0x823D5B2C;
	sub_82581E38(ctx, base);
loc_823D5B2C:
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d5b3c
	if (ctx.cr6.eq) goto loc_823D5B3C;
	// bl 0x82581e38
	ctx.lr = 0x823D5B3C;
	sub_82581E38(ctx, base);
loc_823D5B3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cec60
	ctx.lr = 0x823D5B44;
	sub_823CEC60(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d5b5c
	if (ctx.cr6.eq) goto loc_823D5B5C;
	// bl 0x82186190
	ctx.lr = 0x823D5B58;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823D5B5C:
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

__attribute__((alias("__imp__sub_823D5B78"))) PPC_WEAK_FUNC(sub_823D5B78);
PPC_FUNC_IMPL(__imp__sub_823D5B78) {
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
	// bl 0x823d0dd0
	ctx.lr = 0x823D5B98;
	sub_823D0DD0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r31,116
	ctx.r10.s64 = ctx.r31.s64 + 116;
	// li r7,15
	ctx.r7.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r9,r11,152
	ctx.r9.s64 = ctx.r11.s64 + 152;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r11,140
	ctx.r8.s64 = ctx.r11.s64 + 140;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r7,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r7.u32);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// stb r11,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_823D5C08"))) PPC_WEAK_FUNC(sub_823D5C08);
PPC_FUNC_IMPL(__imp__sub_823D5C08) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x823d5cb8
	sub_823D5CB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D5C10"))) PPC_WEAK_FUNC(sub_823D5C10);
PPC_FUNC_IMPL(__imp__sub_823D5C10) {
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
	// lwz r3,160(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d5c38
	if (ctx.cr6.eq) goto loc_823D5C38;
	// bl 0x821601b8
	ctx.lr = 0x823D5C38;
	sub_821601B8(ctx, base);
loc_823D5C38:
	// lwz r3,144(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d5c48
	if (ctx.cr6.eq) goto loc_823D5C48;
	// bl 0x82581e38
	ctx.lr = 0x823D5C48;
	sub_82581E38(ctx, base);
loc_823D5C48:
	// addi r31,r30,116
	ctx.r31.s64 = ctx.r30.s64 + 116;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x823d5c60
	if (ctx.cr6.lt) goto loc_823D5C60;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x823D5C60;
	sub_82186190(ctx, base);
loc_823D5C60:
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
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d5c84
	if (ctx.cr6.eq) goto loc_823D5C84;
	// bl 0x82581e38
	ctx.lr = 0x823D5C84;
	sub_82581E38(ctx, base);
loc_823D5C84:
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d5c94
	if (ctx.cr6.eq) goto loc_823D5C94;
	// bl 0x82581e38
	ctx.lr = 0x823D5C94;
	sub_82581E38(ctx, base);
loc_823D5C94:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d1048
	ctx.lr = 0x823D5C9C;
	sub_823D1048(ctx, base);
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

__attribute__((alias("__imp__sub_823D5CB8"))) PPC_WEAK_FUNC(sub_823D5CB8);
PPC_FUNC_IMPL(__imp__sub_823D5CB8) {
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
	// bl 0x823d5c10
	ctx.lr = 0x823D5CD8;
	sub_823D5C10(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d5cf0
	if (ctx.cr6.eq) goto loc_823D5CF0;
	// bl 0x82186190
	ctx.lr = 0x823D5CEC;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823D5CF0:
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

__attribute__((alias("__imp__sub_823D5D08"))) PPC_WEAK_FUNC(sub_823D5D08);
PPC_FUNC_IMPL(__imp__sub_823D5D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b0
	ctx.lr = 0x823D5D10;
	__savegprlr_22(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// addi r30,r28,108
	ctx.r30.s64 = ctx.r28.s64 + 108;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823d5d48
	if (ctx.cr6.eq) goto loc_823D5D48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x823D5D48;
	sub_82659610(ctx, base);
loc_823D5D48:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d5d5c
	if (ctx.cr6.eq) goto loc_823D5D5C;
	// bl 0x82581e38
	ctx.lr = 0x823D5D5C;
	sub_82581E38(ctx, base);
loc_823D5D5C:
	// lwz r4,460(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_823D5D68:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823d5d68
	if (!ctx.cr6.eq) goto loc_823D5D68;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r31,r28,116
	ctx.r31.s64 = ctx.r28.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x823D5D90;
	sub_82161E08(ctx, base);
	// stw r29,148(r28)
	PPC_STORE_U32(ctx.r28.u32 + 148, ctx.r29.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x823d5da8
	if (ctx.cr6.lt) goto loc_823D5DA8;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x823d5dac
	goto loc_823D5DAC;
loc_823D5DA8:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_823D5DAC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821677d0
	ctx.lr = 0x823D5DB4;
	sub_821677D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82399ec0
	ctx.lr = 0x823D5DBC;
	sub_82399EC0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x823d5dcc
	if (ctx.cr6.eq) goto loc_823D5DCC;
	// bl 0x82659610
	ctx.lr = 0x823D5DCC;
	sub_82659610(ctx, base);
loc_823D5DCC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823900d8
	ctx.lr = 0x823D5DD4;
	sub_823900D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x82186158
	ctx.lr = 0x823D5DE0;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d5e20
	if (ctx.cr6.eq) goto loc_823D5E20;
	// lwz r11,428(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 428);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r11,420(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x823d5a10
	ctx.lr = 0x823D5E18;
	sub_823D5A10(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x823d5e24
	goto loc_823D5E24;
loc_823D5E20:
	// li r27,0
	ctx.r27.s64 = 0;
loc_823D5E24:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823d5e34
	if (ctx.cr6.eq) goto loc_823D5E34;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82659610
	ctx.lr = 0x823D5E34;
	sub_82659610(ctx, base);
loc_823D5E34:
	// lwz r3,144(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 144);
	// stw r27,144(r28)
	PPC_STORE_U32(ctx.r28.u32 + 144, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d5e48
	if (ctx.cr6.eq) goto loc_823D5E48;
	// bl 0x82581e38
	ctx.lr = 0x823D5E48;
	sub_82581E38(ctx, base);
loc_823D5E48:
	// lwz r3,144(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d5ec0
	if (ctx.cr6.eq) goto loc_823D5EC0;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d5ec0
	if (ctx.cr6.eq) goto loc_823D5EC0;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// bl 0x82659610
	ctx.lr = 0x823D5E6C;
	sub_82659610(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D5E88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D5EA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d5eb0
	if (ctx.cr6.eq) goto loc_823D5EB0;
	// bl 0x821601b8
	ctx.lr = 0x823D5EB0;
	sub_821601B8(ctx, base);
loc_823D5EB0:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d5ec0
	if (ctx.cr6.eq) goto loc_823D5EC0;
	// bl 0x82581e38
	ctx.lr = 0x823D5EC0;
	sub_82581E38(ctx, base);
loc_823D5EC0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,40
	ctx.r3.s64 = 40;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 112, temp.u32);
	// bl 0x82186158
	ctx.lr = 0x823D5ED4;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d5ef0
	if (ctx.cr6.eq) goto loc_823D5EF0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,452(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// bl 0x823d4b68
	ctx.lr = 0x823D5EE8;
	sub_823D4B68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823d5ef4
	goto loc_823D5EF4;
loc_823D5EF0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823D5EF4:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// bl 0x823d5698
	ctx.lr = 0x823D5F10;
	sub_823D5698(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r31,r28,156
	ctx.r31.s64 = ctx.r28.s64 + 156;
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x823d5f30
	if (ctx.cr6.eq) goto loc_823D5F30;
	// bl 0x82160140
	ctx.lr = 0x823D5F30;
	sub_82160140(ctx, base);
loc_823D5F30:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d5f40
	if (ctx.cr6.eq) goto loc_823D5F40;
	// bl 0x821601b8
	ctx.lr = 0x823D5F40;
	sub_821601B8(ctx, base);
loc_823D5F40:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823d49a8
	ctx.lr = 0x823D5F50;
	sub_823D49A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d5f6c
	if (ctx.cr6.eq) goto loc_823D5F6C;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r11,r27,208
	ctx.r11.s64 = ctx.r27.s64 + 208;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_823D5F6C:
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823d4768
	ctx.lr = 0x823D5F78;
	sub_823D4768(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d5fac
	if (ctx.cr6.eq) goto loc_823D5FAC;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// addi r10,r27,224
	ctx.r10.s64 = ctx.r27.s64 + 224;
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
loc_823D5FAC:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82594160
	ctx.lr = 0x823D5FB8;
	sub_82594160(ctx, base);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r11,r28,176
	ctx.r11.s64 = ctx.r28.s64 + 176;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lvx128 v12,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// stvx v12,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stvx v13,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v11,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8218c228
	ctx.lr = 0x823D6004;
	sub_8218C228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823d5128
	ctx.lr = 0x823D6010;
	sub_823D5128(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d6020
	if (ctx.cr6.eq) goto loc_823D6020;
	// bl 0x821601b8
	ctx.lr = 0x823D6020;
	sub_821601B8(ctx, base);
loc_823D6020:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x823d6030
	if (ctx.cr6.eq) goto loc_823D6030;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82581e38
	ctx.lr = 0x823D6030;
	sub_82581E38(ctx, base);
loc_823D6030:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826de900
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D6040"))) PPC_WEAK_FUNC(sub_823D6040);
PPC_FUNC_IMPL(__imp__sub_823D6040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b4
	ctx.lr = 0x823D6048;
	__savegprlr_23(ctx, base);
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// li r3,256
	ctx.r3.s64 = 256;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// bl 0x82186158
	ctx.lr = 0x823D608C;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d60d0
	if (ctx.cr6.eq) goto loc_823D60D0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// beq cr6,0x823d60b8
	if (ctx.cr6.eq) goto loc_823D60B8;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_823D60B8:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x823d5b78
	ctx.lr = 0x823D60C8;
	sub_823D5B78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x823d60d4
	goto loc_823D60D4;
loc_823D60D0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_823D60D4:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823d611c
	if (ctx.cr6.eq) goto loc_823D611C;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d611c
	if (ctx.cr6.eq) goto loc_823D611C;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823d611c
	if (!ctx.cr6.eq) goto loc_823D611C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D611C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823D611C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823d6194
	if (ctx.cr6.eq) goto loc_823D6194;
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lwz r10,324(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,364(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,332(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x823d5d08
	ctx.lr = 0x823D6170;
	sub_823D5D08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d6198
	if (!ctx.cr6.eq) goto loc_823D6198;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D6194;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823D6194:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823D6198:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x826de904
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D61A8"))) PPC_WEAK_FUNC(sub_823D61A8);
PPC_FUNC_IMPL(__imp__sub_823D61A8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823d11c0
	ctx.lr = 0x823D61CC;
	sub_823D11C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823d61f4
	if (!ctx.cr6.eq) goto loc_823D61F4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D61F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823d61f8
	goto loc_823D61F8;
loc_823D61F4:
	// bl 0x823d8070
	ctx.lr = 0x823D61F8;
	sub_823D8070(ctx, base);
loc_823D61F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823d87c0
	ctx.lr = 0x823D6204;
	sub_823D87C0(ctx, base);
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

__attribute__((alias("__imp__sub_823D6220"))) PPC_WEAK_FUNC(sub_823D6220);
PPC_FUNC_IMPL(__imp__sub_823D6220) {
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
	// bl 0x823d8660
	ctx.lr = 0x823D6238;
	sub_823D8660(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,200
	ctx.r11.s64 = ctx.r11.s64 + 200;
	// addi r10,r10,188
	ctx.r10.s64 = ctx.r10.s64 + 188;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_823D6268"))) PPC_WEAK_FUNC(sub_823D6268);
PPC_FUNC_IMPL(__imp__sub_823D6268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,168
	ctx.r3.s64 = ctx.r11.s64 + 168;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D6278"))) PPC_WEAK_FUNC(sub_823D6278);
PPC_FUNC_IMPL(__imp__sub_823D6278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x823D6280;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,352
	ctx.r3.s64 = 352;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x82186158
	ctx.lr = 0x823D62A0;
	sub_82186158(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823d6300
	if (ctx.cr6.eq) goto loc_823D6300;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x823d62d0
	if (ctx.cr6.eq) goto loc_823D62D0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_823D62D0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x823d8660
	ctx.lr = 0x823D62E4;
	sub_823D8660(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,200
	ctx.r11.s64 = ctx.r11.s64 + 200;
	// addi r10,r10,188
	ctx.r10.s64 = ctx.r10.s64 + 188;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// b 0x823d6304
	goto loc_823D6304;
loc_823D6300:
	// li r31,0
	ctx.r31.s64 = 0;
loc_823D6304:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823d634c
	if (ctx.cr6.eq) goto loc_823D634C;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d634c
	if (ctx.cr6.eq) goto loc_823D634C;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823d634c
	if (!ctx.cr6.eq) goto loc_823D634C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D634C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823D634C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823d6384
	if (ctx.cr6.eq) goto loc_823D6384;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d93a8
	ctx.lr = 0x823D6360;
	sub_823D93A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d6388
	if (!ctx.cr6.eq) goto loc_823D6388;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D6384;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823D6384:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823D6388:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D6390"))) PPC_WEAK_FUNC(sub_823D6390);
PPC_FUNC_IMPL(__imp__sub_823D6390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,96(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D6398"))) PPC_WEAK_FUNC(sub_823D6398);
PPC_FUNC_IMPL(__imp__sub_823D6398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,108(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D63A0"))) PPC_WEAK_FUNC(sub_823D63A0);
PPC_FUNC_IMPL(__imp__sub_823D63A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,112(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D63A8"))) PPC_WEAK_FUNC(sub_823D63A8);
PPC_FUNC_IMPL(__imp__sub_823D63A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,116(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D63B0"))) PPC_WEAK_FUNC(sub_823D63B0);
PPC_FUNC_IMPL(__imp__sub_823D63B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,120(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D63B8"))) PPC_WEAK_FUNC(sub_823D63B8);
PPC_FUNC_IMPL(__imp__sub_823D63B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,124(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D63C0"))) PPC_WEAK_FUNC(sub_823D63C0);
PPC_FUNC_IMPL(__imp__sub_823D63C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823d63d8
	if (ctx.cr6.eq) goto loc_823D63D8;
	// li r3,1
	ctx.r3.s64 = 1;
loc_823D63D8:
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823d63e8
	if (ctx.cr6.eq) goto loc_823D63E8;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
loc_823D63E8:
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823d63f8
	if (ctx.cr6.eq) goto loc_823D63F8;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
loc_823D63F8:
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823d6408
	if (ctx.cr6.eq) goto loc_823D6408;
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
loc_823D6408:
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823d6418
	if (ctx.cr6.eq) goto loc_823D6418;
	// ori r3,r3,64
	ctx.r3.u64 = ctx.r3.u64 | 64;
loc_823D6418:
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823d6428
	if (ctx.cr6.eq) goto loc_823D6428;
	// ori r3,r3,32
	ctx.r3.u64 = ctx.r3.u64 | 32;
loc_823D6428:
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823d6438
	if (ctx.cr6.eq) goto loc_823D6438;
	// ori r3,r3,512
	ctx.r3.u64 = ctx.r3.u64 | 512;
loc_823D6438:
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823d6448
	if (ctx.cr6.eq) goto loc_823D6448;
	// ori r3,r3,128
	ctx.r3.u64 = ctx.r3.u64 | 128;
loc_823D6448:
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823d6458
	if (ctx.cr6.eq) goto loc_823D6458;
	// ori r3,r3,256
	ctx.r3.u64 = ctx.r3.u64 | 256;
loc_823D6458:
	// rlwinm r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ori r3,r3,2048
	ctx.r3.u64 = ctx.r3.u64 | 2048;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D6470"))) PPC_WEAK_FUNC(sub_823D6470);
PPC_FUNC_IMPL(__imp__sub_823D6470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,132(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D6478"))) PPC_WEAK_FUNC(sub_823D6478);
PPC_FUNC_IMPL(__imp__sub_823D6478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,136(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D6480"))) PPC_WEAK_FUNC(sub_823D6480);
PPC_FUNC_IMPL(__imp__sub_823D6480) {
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
	// lwz r4,420(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 420);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823d64c0
	if (ctx.cr6.eq) goto loc_823D64C0;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d64c0
	if (ctx.cr6.eq) goto loc_823D64C0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x82598548
	ctx.lr = 0x823D64BC;
	sub_82598548(ctx, base);
	// b 0x823d64c8
	goto loc_823D64C8;
loc_823D64C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_823D64C8:
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

__attribute__((alias("__imp__sub_823D64E0"))) PPC_WEAK_FUNC(sub_823D64E0);
PPC_FUNC_IMPL(__imp__sub_823D64E0) {
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
	// lwz r3,420(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// beq cr6,0x823d6514
	if (ctx.cr6.eq) goto loc_823D6514;
	// bl 0x82659610
	ctx.lr = 0x823D6510;
	sub_82659610(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_823D6514:
	// lwz r31,428(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823d652c
	if (ctx.cr6.eq) goto loc_823D652C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x823D6528;
	sub_82659610(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_823D652C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d6570
	if (ctx.cr6.eq) goto loc_823D6570;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d6570
	if (ctx.cr6.eq) goto loc_823D6570;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823d6570
	if (ctx.cr6.eq) goto loc_823D6570;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d6570
	if (ctx.cr6.eq) goto loc_823D6570;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825964f8
	ctx.lr = 0x823D656C;
	sub_825964F8(ctx, base);
	// b 0x823d6580
	goto loc_823D6580;
loc_823D6570:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// beq cr6,0x823d658c
	if (ctx.cr6.eq) goto loc_823D658C;
loc_823D6580:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581e38
	ctx.lr = 0x823D6588;
	sub_82581E38(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_823D658C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d6598
	if (ctx.cr6.eq) goto loc_823D6598;
	// bl 0x82581e38
	ctx.lr = 0x823D6598;
	sub_82581E38(ctx, base);
loc_823D6598:
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

__attribute__((alias("__imp__sub_823D65B8"))) PPC_WEAK_FUNC(sub_823D65B8);
PPC_FUNC_IMPL(__imp__sub_823D65B8) {
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
	// lwz r31,432(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 432);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823d6614
	if (ctx.cr6.eq) goto loc_823D6614;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x823D65E4;
	sub_82659610(ctx, base);
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d6614
	if (ctx.cr6.eq) goto loc_823D6614;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D6610;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823d6624
	goto loc_823D6624;
loc_823D6614:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// beq cr6,0x823d662c
	if (ctx.cr6.eq) goto loc_823D662C;
loc_823D6624:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581e38
	ctx.lr = 0x823D662C;
	sub_82581E38(ctx, base);
loc_823D662C:
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

__attribute__((alias("__imp__sub_823D6648"))) PPC_WEAK_FUNC(sub_823D6648);
PPC_FUNC_IMPL(__imp__sub_823D6648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x823D6650;
	__savegprlr_28(ctx, base);
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
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lwz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d66e0
	if (ctx.cr6.eq) goto loc_823D66E0;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d66e0
	if (ctx.cr6.eq) goto loc_823D66E0;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// beq cr6,0x823d6698
	if (ctx.cr6.eq) goto loc_823D6698;
	// bl 0x82659610
	ctx.lr = 0x823D6698;
	sub_82659610(ctx, base);
loc_823D6698:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D66AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r4,436(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8261f168
	ctx.lr = 0x823D66C4;
	sub_8261F168(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d66e8
	if (ctx.cr6.eq) goto loc_823D66E8;
	// bl 0x82581e38
	ctx.lr = 0x823D66D4;
	sub_82581E38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_823D66E0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_823D66E8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D66F8"))) PPC_WEAK_FUNC(sub_823D66F8);
PPC_FUNC_IMPL(__imp__sub_823D66F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x823D6700;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,424(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 424);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d678c
	if (ctx.cr6.eq) goto loc_823D678C;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d678c
	if (ctx.cr6.eq) goto loc_823D678C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82659610
	ctx.lr = 0x823D6738;
	sub_82659610(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,24201
	ctx.r6.s64 = 24201;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82584630
	ctx.lr = 0x823D6758;
	sub_82584630(ctx, base);
	// bl 0x82584610
	ctx.lr = 0x823D675C;
	sub_82584610(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x823d6770
	if (ctx.cr6.eq) goto loc_823D6770;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x82659610
	ctx.lr = 0x823D6770;
	sub_82659610(ctx, base);
loc_823D6770:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d6794
	if (ctx.cr6.eq) goto loc_823D6794;
	// bl 0x82581e38
	ctx.lr = 0x823D6780;
	sub_82581E38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_823D678C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_823D6794:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D67A0"))) PPC_WEAK_FUNC(sub_823D67A0);
PPC_FUNC_IMPL(__imp__sub_823D67A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x823D67A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d6878
	if (!ctx.cr6.eq) goto loc_823D6878;
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d6878
	if (!ctx.cr6.eq) goto loc_823D6878;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D67F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823d6878
	if (ctx.cr6.eq) goto loc_823D6878;
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x823d6850
	if (!ctx.cr6.eq) goto loc_823D6850;
	// addi r11,r31,308
	ctx.r11.s64 = ctx.r31.s64 + 308;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x823d6824
	if (ctx.cr6.lt) goto loc_823D6824;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x823d6828
	goto loc_823D6828;
loc_823D6824:
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
loc_823D6828:
	// addi r11,r31,280
	ctx.r11.s64 = ctx.r31.s64 + 280;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x823d6840
	if (ctx.cr6.lt) goto loc_823D6840;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x823d6844
	goto loc_823D6844;
loc_823D6840:
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_823D6844:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825fe210
	ctx.lr = 0x823D684C;
	sub_825FE210(ctx, base);
	// stw r3,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r3.u32);
loc_823D6850:
	// lwz r5,448(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x823d6878
	if (ctx.cr6.eq) goto loc_823D6878;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825fe5b0
	ctx.lr = 0x823D686C;
	sub_825FE5B0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_823D6878:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D6890"))) PPC_WEAK_FUNC(sub_823D6890);
PPC_FUNC_IMPL(__imp__sub_823D6890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x823D6898;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d6968
	if (!ctx.cr6.eq) goto loc_823D6968;
	// lwz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d6968
	if (!ctx.cr6.eq) goto loc_823D6968;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D68E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823d6968
	if (ctx.cr6.eq) goto loc_823D6968;
	// lwz r11,452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x823d6940
	if (!ctx.cr6.eq) goto loc_823D6940;
	// addi r11,r31,364
	ctx.r11.s64 = ctx.r31.s64 + 364;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x823d6914
	if (ctx.cr6.lt) goto loc_823D6914;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x823d6918
	goto loc_823D6918;
loc_823D6914:
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
loc_823D6918:
	// addi r11,r31,336
	ctx.r11.s64 = ctx.r31.s64 + 336;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x823d6930
	if (ctx.cr6.lt) goto loc_823D6930;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x823d6934
	goto loc_823D6934;
loc_823D6930:
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_823D6934:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825fe210
	ctx.lr = 0x823D693C;
	sub_825FE210(ctx, base);
	// stw r3,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r3.u32);
loc_823D6940:
	// lwz r5,452(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x823d6968
	if (ctx.cr6.eq) goto loc_823D6968;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825fe5b0
	ctx.lr = 0x823D695C;
	sub_825FE5B0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_823D6968:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D6980"))) PPC_WEAK_FUNC(sub_823D6980);
PPC_FUNC_IMPL(__imp__sub_823D6980) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r11,r11,140
	ctx.r11.s64 = ctx.r11.s64 + 140;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x823d69bc
	if (ctx.cr6.lt) goto loc_823D69BC;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x823d69c0
	goto loc_823D69C0;
loc_823D69BC:
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
loc_823D69C0:
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82295510
	sub_82295510(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D69C8"))) PPC_WEAK_FUNC(sub_823D69C8);
PPC_FUNC_IMPL(__imp__sub_823D69C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D69D0"))) PPC_WEAK_FUNC(sub_823D69D0);
PPC_FUNC_IMPL(__imp__sub_823D69D0) {
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
	// lwz r11,92(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823d6a64
	if (ctx.cr6.eq) goto loc_823D6A64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x823d6a38
	if (ctx.cr6.eq) goto loc_823D6A38;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x823d6a0c
	if (ctx.cr6.eq) goto loc_823D6A0C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x823d6a94
	goto loc_823D6A94;
loc_823D6A0C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f2,100(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,96(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82584380
	ctx.lr = 0x823D6A1C;
	sub_82584380(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x823d6a30
	if (ctx.cr6.eq) goto loc_823D6A30;
	// bl 0x82659610
	ctx.lr = 0x823D6A30;
	sub_82659610(ctx, base);
loc_823D6A30:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x823d6a88
	goto loc_823D6A88;
loc_823D6A38:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lfs f2,100(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,96(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82584328
	ctx.lr = 0x823D6A48;
	sub_82584328(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x823d6a5c
	if (ctx.cr6.eq) goto loc_823D6A5C;
	// bl 0x82659610
	ctx.lr = 0x823D6A5C;
	sub_82659610(ctx, base);
loc_823D6A5C:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x823d6a88
	goto loc_823D6A88;
loc_823D6A64:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lfs f1,96(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82584238
	ctx.lr = 0x823D6A70;
	sub_82584238(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x823d6a84
	if (ctx.cr6.eq) goto loc_823D6A84;
	// bl 0x82659610
	ctx.lr = 0x823D6A84;
	sub_82659610(ctx, base);
loc_823D6A84:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_823D6A88:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d6a94
	if (ctx.cr6.eq) goto loc_823D6A94;
	// bl 0x82581e38
	ctx.lr = 0x823D6A94;
	sub_82581E38(ctx, base);
loc_823D6A94:
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

__attribute__((alias("__imp__sub_823D6AB0"))) PPC_WEAK_FUNC(sub_823D6AB0);
PPC_FUNC_IMPL(__imp__sub_823D6AB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x823D6AB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d6b2c
	if (!ctx.cr6.eq) goto loc_823D6B2C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8227f438
	ctx.lr = 0x823D6AEC;
	sub_8227F438(ctx, base);
	// addi r31,r31,392
	ctx.r31.s64 = ctx.r31.s64 + 392;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x823d6b04
	if (ctx.cr6.lt) goto loc_823D6B04;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x823d6b08
	goto loc_823D6B08;
loc_823D6B04:
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
loc_823D6B08:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8227f1f0
	ctx.lr = 0x823D6B10;
	sub_8227F1F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d6b38
	if (!ctx.cr6.eq) goto loc_823D6B38;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d6b2c
	if (ctx.cr6.eq) goto loc_823D6B2C;
	// bl 0x82581e38
	ctx.lr = 0x823D6B2C;
	sub_82581E38(ctx, base);
loc_823D6B2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_823D6B38:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x823d6b4c
	if (ctx.cr6.lt) goto loc_823D6B4C;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x823d6b50
	goto loc_823D6B50;
loc_823D6B4C:
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
loc_823D6B50:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8227f198
	ctx.lr = 0x823D6B5C;
	sub_8227F198(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8227d210
	ctx.lr = 0x823D6B7C;
	sub_8227D210(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8227e628
	ctx.lr = 0x823D6B8C;
	sub_8227E628(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d6ba0
	if (ctx.cr6.eq) goto loc_823D6BA0;
	// bl 0x82581e38
	ctx.lr = 0x823D6BA0;
	sub_82581E38(ctx, base);
loc_823D6BA0:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d6bb0
	if (ctx.cr6.eq) goto loc_823D6BB0;
	// bl 0x82581e38
	ctx.lr = 0x823D6BB0;
	sub_82581E38(ctx, base);
loc_823D6BB0:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d6bc0
	if (ctx.cr6.eq) goto loc_823D6BC0;
	// bl 0x82581e38
	ctx.lr = 0x823D6BC0;
	sub_82581E38(ctx, base);
loc_823D6BC0:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d6bd0
	if (ctx.cr6.eq) goto loc_823D6BD0;
	// bl 0x82581e38
	ctx.lr = 0x823D6BD0;
	sub_82581E38(ctx, base);
loc_823D6BD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

